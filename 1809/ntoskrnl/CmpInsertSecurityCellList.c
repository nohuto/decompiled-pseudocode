/*
 * XREFs of CmpInsertSecurityCellList @ 0x1406CB394
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpAddSecurityCellToCache @ 0x1405AC584 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

char __fastcall CmpInsertSecurityCellList(ULONG_PTR BugCheckParameter2, unsigned int a2, signed int a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-10h] BYREF
  char v20; // [rsp+90h] [rbp+40h]

  v15[1] = 0;
  v15[0] = -1;
  v16[0] = -1;
  v16[1] = 0;
  v19[0] = -1;
  v6 = 0LL;
  v19[1] = 0;
  v7 = 0LL;
  v18[0] = -1;
  v8 = 0LL;
  v18[1] = 0;
  v9 = 0LL;
  v17[0] = -1;
  v17[1] = 0;
  v20 = 0;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)a3,
          v19);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( a3 < 0 )
  {
    *(_DWORD *)(v10 + 8) = a3;
    *(_DWORD *)(v10 + 4) = a3;
    goto LABEL_4;
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v18);
  v8 = v13;
  if ( !v13 )
  {
LABEL_38:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    return 0;
  }
  if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
  {
    if ( !a4 )
    {
      *(_DWORD *)(v11 + 8) = a3;
      *(_DWORD *)(v11 + 4) = a3;
      goto LABEL_4;
    }
  }
  else if ( !a4 )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v13 + 16),
           v17);
    if ( !v9 )
    {
LABEL_36:
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
      goto LABEL_38;
    }
    goto LABEL_17;
  }
  v9 = v13;
LABEL_17:
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v9 + 44),
          v16);
  v7 = v14;
  if ( !v14 )
  {
LABEL_33:
    if ( v9 && v9 != v8 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
    goto LABEL_36;
  }
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v14 + 4),
         v15);
  if ( !v6 )
  {
LABEL_31:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    goto LABEL_33;
  }
  if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 44), 0)
    || !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v7 + 4), 0) )
  {
LABEL_29:
    if ( v6 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
    goto LABEL_31;
  }
  *(_DWORD *)(v11 + 4) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v7 + 4) = a3;
  *(_DWORD *)(v6 + 8) = a3;
  v20 = 1;
LABEL_4:
  if ( (int)CmpAddSecurityCellToCache(BugCheckParameter2, a3, 0) < 0 )
  {
    if ( v20 )
    {
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v11 + 8);
    }
    goto LABEL_29;
  }
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v15);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
  if ( v9 && v9 != v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v17);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  return 1;
}
