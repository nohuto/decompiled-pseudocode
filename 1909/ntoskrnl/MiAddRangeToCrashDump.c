/*
 * XREFs of MiAddRangeToCrashDump @ 0x1402C5658
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1402C5658 (MiAddRangeToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402C5CB4 (MmAddRangeToCrashDump.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageSecured @ 0x1400C7BE4 (MiIsPageSecured.c)
 *     KdCheckForDebugBreak @ 0x14015FD24 (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MiAddRangeToCrashDump @ 0x1402C5658 (MiAddRangeToCrashDump.c)
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
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // r10
  int v34; // r11d
  unsigned __int64 v35; // rcx
  __int64 v37; // [rsp+68h] [rbp+10h] BYREF

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
    v37 = MI_READ_PTE_LOCK_FREE(v6);
    v12 = v37;
    v13 = v37 & 1;
    if ( (v37 & 1) != 0 )
    {
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v37) >> 12) & 0xFFFFFFFFFLL;
      if ( v14 == MiState[v11 + 1149] || v14 == MiState[v11 + 1145] )
        goto LABEL_66;
    }
    else
    {
      if ( (_DWORD)v5 )
        goto LABEL_66;
      v14 = 0LL;
    }
    if ( (_DWORD)v5 == 3 )
    {
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_66;
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
        goto LABEL_66;
      if ( SystemRegionType == 8 )
        goto LABEL_66;
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
          goto LABEL_66;
        v30 = v12;
        if ( qword_140465800 && (v12 & 0x10) == 0 )
          v30 = v12 & ~qword_140465800;
        v14 = (v30 >> 12) & 0xFFFFFFFFFLL;
      }
      v31 = (__int64)((v6 << 25) - (v18 << 25)) >> 16;
      if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
        goto LABEL_66;
      v32 = 48 * v14 - 0x58000000000LL;
      if ( MiIsPageSecured(v32) )
      {
        v11 = v5;
        goto LABEL_66;
      }
      if ( (unsigned int)MiGetSystemRegionType(v31) == 9 )
      {
        v35 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
        if ( v35 <= 0xFFFFF6BFFFFFFF78uLL
          && v35 >= 0xFFFFF68000000000uLL
          && ((*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
           || (*(_BYTE *)(v32 + 34) & 7) != 6
           || (*(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL)
          && v33 != qword_140465FB0 )
        {
          v34 = 0;
        }
      }
      if ( v34 != 1 || (v27 = (*a1)(a1, v33, 1LL, 2LL), v27 >= 0) )
      {
        v11 = v5;
        goto LABEL_66;
      }
      v11 = v5;
LABEL_34:
      if ( v10 >= 0 )
        v10 = v27;
      goto LABEL_66;
    }
    if ( (v12 & 0x80u) == 0LL )
    {
      if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
      {
        v28 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64), unsigned __int64, __int64))*a1)(
                a1,
                v14,
                1LL);
        if ( v28 < 0 && v10 >= 0 )
          v10 = v28;
      }
      v29 = MiAddRangeToCrashDump(
              (_DWORD)a1,
              (__int64)(v6 << 25) >> 16,
              (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
              a4,
              (int)v5 - 1);
      if ( v29 < 0 && v10 >= 0 )
        v10 = v29;
    }
    else if ( ((*(_QWORD *)(48 * v14 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v19 = v18 << 25;
      v20 = (v6 << 25) - (v18 << 25);
      v21 = (v20 + 0x10000000) >> 16;
      v22 = v20 >> 16;
      if ( (int)v5 > 0 )
      {
        v23 = (unsigned int)v5;
        do
        {
          v22 = (__int64)((v22 << 25) - v19) >> 16;
          v21 = (__int64)((v21 << 25) - v19) >> 16;
          --v23;
        }
        while ( v23 );
      }
      v24 = *(_QWORD *)(a4 + 64) & 0xFFFFFFFFFFFFF000uLL;
      v25 = v21 - 1;
      if ( v22 >= v24 )
        v24 = v22;
      v26 = *(_QWORD *)(a4 + 72) | 0xFFFLL;
      if ( v25 <= v26 )
        v26 = v25;
      v27 = (*a1)(a1, v24, (v26 - v24 + 1) >> 12, 1LL);
      if ( v27 < 0 )
        goto LABEL_34;
    }
LABEL_66:
    v6 += 8LL;
  }
  return (unsigned int)v10;
}
