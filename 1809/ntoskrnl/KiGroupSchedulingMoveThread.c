/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x140116D14
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x140116D14 (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x140116D14 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140116EA8 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  __int64 v11; // rdi
  int v12; // r8d
  _QWORD *v13; // r9
  unsigned int v14; // r11d
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 result; // rax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  if ( (v3 & 1) == 0 )
  {
    i = *(_QWORD *)(a3 + 8);
    while ( 1 )
    {
LABEL_5:
      if ( !i )
        return 0LL;
      v7 = *(unsigned __int16 *)(i + 26);
LABEL_11:
      if ( v7 )
      {
        _BitScanReverse(&v8, v7);
        v9 = (_QWORD *)(16LL * v8 + i + 48);
        v10 = (_QWORD *)*v9;
        while ( 1 )
        {
          v11 = (__int64)(v10 - 27);
          if ( KiPrcbInGroupAffinity(a1, (__int64)(v10 + 45)) )
            break;
          v10 = (_QWORD *)*v13;
          if ( v10 == v9 )
          {
            v7 = v12 ^ (1 << v14);
            goto LABEL_11;
          }
        }
        KiRemoveThreadFromScbQueue(a2, i - 88, v11, v14);
        result = v11;
        *(_DWORD *)(v11 + 536) = *(_DWORD *)(a1 + 36);
        return result;
      }
      v15 = i + 304;
      v16 = *(_QWORD *)(i + 304);
      if ( (*(_BYTE *)(i + 312) & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_17;
        v16 ^= v15;
      }
      if ( v16 )
      {
        result = KiGroupSchedulingMoveThread(a1, a2, v15);
        if ( result )
          return result;
      }
LABEL_17:
      v18 = *(_QWORD ***)(i + 8);
      v19 = i;
      if ( v18 )
      {
        v20 = *v18;
        for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
          i = (unsigned __int64)v20;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v19 )
            break;
          v19 = i;
        }
      }
    }
  }
  if ( v3 != 1 )
  {
    i = v3 ^ (a3 | 1);
    goto LABEL_5;
  }
  return 0LL;
}
