/*
 * XREFs of MiCheckLargePageOk @ 0x1409D8394
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckLargePageOk(_QWORD *BugCheckParameter2)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r15
  __int64 v6; // rsi
  char *v7; // rax
  char *v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // r14
  BOOL v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // r10
  unsigned __int64 v22; // rax
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v24; // r10
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  ULONG_PTR *v27; // rdx
  ULONG_PTR *v28; // rcx
  ULONG_PTR v29; // rax
  ULONG_PTR v30; // r8
  ULONG_PTR v32; // [rsp+50h] [rbp+8h] BYREF

  v1 = BugCheckParameter2[2];
  v3 = BugCheckParameter2[30];
  qword_140A0B5B8 = v1;
  v4 = *(_QWORD *)v1;
  v5 = *(unsigned int *)(v3 + 3424);
  v6 = v4;
  PsNtosImageBase = *(PVOID *)(v1 + 48);
  v7 = (char *)PsNtosImageBase + *(unsigned int *)(v1 + 64);
  PsHalImageBase = *(PVOID *)(v4 + 48);
  PsNtosImageEnd = (__int64)v7;
  v8 = (char *)PsHalImageBase + *(unsigned int *)(v4 + 64);
  MxHalDataTableEntry = v4;
  v9 = *(_QWORD *)(v1 + 48) < *(_QWORD *)(v4 + 48);
  PsHalImageEnd = (__int64)v8;
  if ( !v9 )
  {
    v6 = v1;
    v1 = v4;
  }
  v10 = *(_QWORD *)(v1 + 48);
  v11 = MI_IS_PHYSICAL_ADDRESS(v10);
  v12 = *(_QWORD *)(v6 + 48);
  v13 = v11 != 0;
  v14 = MI_IS_PHYSICAL_ADDRESS(v12);
  v15 = v13 + 1;
  if ( !v14 )
    v15 = v13;
  if ( !v15 )
    return 0LL;
  if ( v15 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, (ULONG_PTR)BugCheckParameter2, v15, 0LL);
  v16 = -1LL;
  v17 = v12 + *(unsigned int *)(v6 + 64);
  v18 = ((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v19 = (((v17 + v5 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( v18 <= v19 )
  {
    v20 = MI_READ_PTE_LOCK_FREE(v18);
    v32 = v20;
    if ( (v20 & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030200uLL, (ULONG_PTR)BugCheckParameter2, v21, v20);
    v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
    if ( v16 == -1LL )
    {
      v16 = v22;
    }
    else
    {
      if ( v22 != v16 + 512 )
        KeBugCheckEx(0x1Au, 0x3030201uLL, (ULONG_PTR)BugCheckParameter2, v16, BugCheckParameter4);
      v16 += 512LL;
    }
    v18 = v24 + 8;
  }
  v25 = MiVaToPfn(v10) & 0xFFFFFFFFFFFFFE00uLL;
  v26 = MiVaToPfn(v17 + v5 - 1);
  v27 = BugCheckParameter2 + 4;
  v28 = (ULONG_PTR *)BugCheckParameter2[4];
  v29 = ((v26 + 512) & 0xFFFFFFFFFFFFFE00uLL) - v25;
  while ( v28 != v27 )
  {
    if ( v28[3] == v25 )
    {
      if ( *((_DWORD *)v28 + 4) != 9 )
      {
        v28 = BugCheckParameter2 + 4;
        break;
      }
      v30 = v28[4];
      if ( v29 <= v30 )
      {
        if ( v29 < v30 )
          v28 = BugCheckParameter2 + 4;
        break;
      }
      v29 -= v30;
      v25 += v30;
    }
    v28 = (ULONG_PTR *)*v28;
  }
  if ( v28 == v27 )
    KeBugCheckEx(0x1Au, 0x3030202uLL, (ULONG_PTR)BugCheckParameter2, v25, v29);
  return 1LL;
}
