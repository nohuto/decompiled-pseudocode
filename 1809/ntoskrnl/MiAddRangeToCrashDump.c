/*
 * XREFs of MiAddRangeToCrashDump @ 0x1402ADEE8
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1402ADEE8 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402AE400 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiIsPageSecured @ 0x1400EA860 (MiIsPageSecured.c)
 *     KdCheckForDebugBreak @ 0x140144778 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiAddRangeToCrashDump @ 0x1402ADEE8 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  int v10; // ebx
  __int64 v11; // rsi
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int SystemRegionType; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // r10
  int v30; // r11d
  unsigned __int64 v31; // rcx
  __int64 v33; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v6 = a2;
  v7 = a3;
  v10 = 0;
  v11 = a5;
  if ( a2 < *(_QWORD *)(a4 + 16LL * a5) )
    v6 = *(_QWORD *)(a4 + 16LL * a5);
  if ( a3 > *(_QWORD *)(a4 + 16LL * a5 + 8) )
    v7 = *(_QWORD *)(a4 + 16LL * a5 + 8);
  while ( v6 <= v7 )
  {
    if ( (_DWORD)v5 == 3 )
      KdCheckForDebugBreak();
    v33 = MI_READ_PTE_LOCK_FREE(v6);
    v12 = v33;
    v13 = v33 & 1;
    if ( (v33 & 1) != 0 )
    {
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFLL;
      if ( v14 == MiState[v11 + 1149] || v14 == MiState[v11 + 1145] )
        goto LABEL_64;
    }
    else
    {
      if ( (_DWORD)v5 )
        goto LABEL_64;
      v14 = 0LL;
    }
    if ( (_DWORD)v5 == 3 )
    {
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_64;
      v15 = v6;
      v16 = 4LL;
      do
      {
        v15 = (__int64)(v15 << 25) >> 16;
        --v16;
      }
      while ( v16 );
      SystemRegionType = MiGetSystemRegionType(v15);
      if ( *(_DWORD *)(a4 + 80) == 1 && SystemRegionType == 1 )
        goto LABEL_64;
      if ( SystemRegionType == 8 )
        goto LABEL_64;
    }
    else
    {
      v18 = 0xFFFFF68000000000uLL;
    }
    if ( !(_DWORD)v5 )
    {
      if ( !v13 )
      {
        if ( (v12 & 0x400) != 0 || (v12 & 0x800) == 0 )
          goto LABEL_64;
        v26 = v12;
        if ( qword_14043B180 && (v12 & 0x10) == 0 )
          v26 = v12 & ~qword_14043B180;
        v14 = (v26 >> 12) & 0xFFFFFFFFFLL;
      }
      v27 = (__int64)((v6 << 25) - (v18 << 25)) >> 16;
      if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
        goto LABEL_64;
      v28 = 48 * v14 - 0x58000000000LL;
      if ( MiIsPageSecured(v28) )
      {
        v11 = v5;
        goto LABEL_64;
      }
      if ( (unsigned int)MiGetSystemRegionType(v27) == 9 )
      {
        v31 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
        if ( v31 <= 0xFFFFF6BFFFFFFF78uLL
          && v31 >= 0xFFFFF68000000000uLL
          && ((*(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
           || (*(_BYTE *)(v28 + 34) & 7) != 6
           || (*(_QWORD *)(v28 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL)
          && v29 != qword_14043B8D0 )
        {
          v30 = 0;
        }
      }
      if ( v30 != 1 || (v23 = (*a1)(a1, v29, 1LL, 2LL), v23 >= 0) )
      {
        v11 = v5;
        goto LABEL_64;
      }
      v11 = v5;
LABEL_32:
      if ( v10 >= 0 )
        v10 = v23;
      goto LABEL_64;
    }
    if ( (v12 & 0x80u) == 0LL )
    {
      if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        v24 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64), unsigned __int64, __int64))*a1)(
                a1,
                v14,
                1LL);
        if ( v24 < 0 && v10 >= 0 )
          v10 = v24;
      }
      v25 = MiAddRangeToCrashDump(
              (_DWORD)a1,
              (__int64)(v6 << 25) >> 16,
              (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
              a4,
              (int)v5 - 1);
      if ( v25 < 0 && v10 >= 0 )
        v10 = v25;
    }
    else if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v19 = v18 << 25;
      v20 = (__int64)((v6 << 25) - (v18 << 25)) >> 16;
      v21 = (__int64)((v6 << 25) - (v18 << 25) + 0x10000000) >> 16;
      if ( (int)v5 > 0 )
      {
        v22 = (unsigned int)v5;
        do
        {
          v20 = (__int64)((v20 << 25) - v19) >> 16;
          v21 = (__int64)((v21 << 25) - v19) >> 16;
          --v22;
        }
        while ( v22 );
      }
      if ( v20 < *(_QWORD *)(a4 + 64) )
        v20 = *(_QWORD *)(a4 + 64);
      v23 = (*a1)(a1, v20, (v21 - v20) >> 12, 1LL);
      if ( v23 < 0 )
        goto LABEL_32;
    }
LABEL_64:
    v6 += 8LL;
  }
  return (unsigned int)v10;
}
