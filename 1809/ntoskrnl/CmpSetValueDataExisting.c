/*
 * XREFs of CmpSetValueDataExisting @ 0x1406CF6DC
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 (__fastcall *v6)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int16 v12; // ax
  unsigned int v13; // ebx
  unsigned __int16 v14; // r15
  char *v15; // r12
  void *v16; // rax
  size_t v17; // r8
  unsigned int v18; // ebx
  ULONG_PTR v20; // rdx
  int v21; // eax
  unsigned __int16 v22; // r15
  int Cell; // eax
  unsigned __int16 v24; // r15
  ULONG_PTR v25; // rdx
  int v26; // eax
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v29[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+40h] BYREF
  void *Src; // [rsp+98h] [rbp+48h]

  Src = a2;
  v28[1] = 0;
  v29[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
  v28[0] = -1;
  v29[0] = -1;
  v27 = 0xFFFFFFFFLL;
  v9 = v6(BugCheckParameter2, a5, v29);
  v10 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v9 + 4),
            &v27);
    if ( !v11 )
    {
      v18 = -1073741670;
LABEL_14:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      return v18;
    }
    v12 = *(_WORD *)(v10 + 2);
    v13 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v13 > v12 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      v20 = *(unsigned int *)(v10 + 4);
      v30 = 0LL;
      v21 = HvReallocateCell(BugCheckParameter2, v20, 4 * (unsigned int)(unsigned __int16)v13, 1, &v30, &v27);
      v11 = v30;
      if ( v21 == -1 )
        goto LABEL_19;
      v22 = *(_WORD *)(v10 + 2);
      *(_DWORD *)(v10 + 4) = v21;
      while ( v22 < (unsigned __int16)v13 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0LL, 0LL);
        *(_DWORD *)(v11 + 4LL * v22) = Cell;
        if ( Cell == -1 )
          goto LABEL_19;
        ++v22;
      }
    }
    else if ( (unsigned __int16)v13 < v12 )
    {
      v24 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v11 + 4LL * v24++));
      while ( v24 < *(_WORD *)(v10 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      v25 = *(unsigned int *)(v10 + 4);
      v30 = 0LL;
      v26 = HvReallocateCell(BugCheckParameter2, v25, 4 * (unsigned int)(unsigned __int16)v13, 1, &v30, &v27);
      v11 = v30;
      if ( v26 == -1 )
        goto LABEL_19;
      *(_DWORD *)(v10 + 4) = v26;
    }
    v14 = 0;
    if ( !(_WORD)v13 )
    {
LABEL_11:
      *(_WORD *)(v10 + 2) = v13;
      v18 = 0;
      goto LABEL_12;
    }
    v15 = (char *)Src;
    while ( 1 )
    {
      v16 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *(unsigned int *)(v11 + 4LL * v14),
                      v28);
      if ( !v16 )
        break;
      v17 = a3;
      if ( a3 > 0x3FD8 )
        v17 = 16344LL;
      memmove(v16, v15, v17);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
      a3 -= 16344;
      v15 += 16344;
      if ( ++v14 >= (unsigned __int16)v13 )
        goto LABEL_11;
    }
LABEL_19:
    v18 = -1073741670;
LABEL_12:
    if ( v11 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
    goto LABEL_14;
  }
  return 3221225626LL;
}
