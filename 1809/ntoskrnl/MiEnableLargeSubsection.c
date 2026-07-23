/*
 * XREFs of MiEnableLargeSubsection @ 0x1402B5EB4
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiChargeLargeProtoSubsection @ 0x140853B34 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // rbp
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rax
  char v12; // al
  unsigned __int8 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = MiChargeLargeProtoSubsection(a1, 1LL);
  if ( (_DWORD)result )
  {
    v5 = v1 + 8 * v2;
    ValidPte = MiMakeValidPte(v1, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F);
    v7 = 0LL;
    v8 = 17;
    v13 = 17;
    v9 = ValidPte;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || v8 == 17 )
        {
          if ( v8 != 17 )
            MiUnlockProtoPoolPage(v7, v8);
          while ( 1 )
          {
            v7 = MiLockProtoPoolPage(v1, &v13);
            if ( v7 )
              break;
            MmAccessFault(2uLL, v1, 0LL, 0LL);
          }
        }
        v10 = MiLockLeafPage((__int64 *)v1, 0);
        v11 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_14043B180 && (v11 & 0x10) == 0 )
            v11 &= ~qword_14043B180;
          v9 ^= (v9 ^ v11) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v1 = v9;
          *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v10, 0);
          v12 = *(_BYTE *)(v10 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v10 + 32);
          *(_BYTE *)(v10 + 34) = v12;
        }
        *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          v8 = v13;
        }
        else
        {
          MiUnlockProtoPoolPage(v7, v13);
          v8 = 17;
          v13 = 17;
        }
      }
      while ( v1 < v5 );
      if ( v8 != 17 )
        MiUnlockProtoPoolPage(v7, v8);
    }
    return 1LL;
  }
  return result;
}
