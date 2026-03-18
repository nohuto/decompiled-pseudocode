/*
 * XREFs of CmpSetValueDataExisting @ 0x1406EE178
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     HvReallocateCell @ 0x14062EFDC (HvReallocateCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        unsigned int a4,
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
  unsigned __int16 v20; // r15
  ULONG_PTR v21; // rdx
  int v22; // eax
  ULONG_PTR v23; // rdx
  int v24; // eax
  unsigned __int16 v25; // r15
  int Cell; // eax
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
    if ( (unsigned __int16)v13 < v12 )
    {
      v20 = (a3 + 16343) / 0x3FD8;
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v11 + 4LL * v20++));
      while ( v20 < *(_WORD *)(v10 + 2) );
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      v21 = *(unsigned int *)(v10 + 4);
      v30 = 0LL;
      v22 = HvReallocateCell(BugCheckParameter2, v21, 4 * (unsigned int)(unsigned __int16)v13, 1, &v30, &v27);
      v11 = v30;
      if ( v22 == -1 )
        goto LABEL_23;
      *(_DWORD *)(v10 + 4) = v22;
    }
    else if ( (unsigned __int16)v13 > v12 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      v23 = *(unsigned int *)(v10 + 4);
      v30 = 0LL;
      v24 = HvReallocateCell(BugCheckParameter2, v23, 4 * (unsigned int)(unsigned __int16)v13, 1, &v30, &v27);
      v11 = v30;
      if ( v24 == -1 )
        goto LABEL_23;
      v25 = *(_WORD *)(v10 + 2);
      *(_DWORD *)(v10 + 4) = v24;
      while ( v25 < (unsigned __int16)v13 )
      {
        Cell = HvAllocateCell(BugCheckParameter2, 16344, a4, 0LL, 0LL);
        *(_DWORD *)(v11 + 4LL * v25) = Cell;
        if ( Cell == -1 )
          goto LABEL_23;
        ++v25;
      }
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
LABEL_23:
    v18 = -1073741670;
LABEL_12:
    if ( v11 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
    goto LABEL_14;
  }
  return 3221225626LL;
}
