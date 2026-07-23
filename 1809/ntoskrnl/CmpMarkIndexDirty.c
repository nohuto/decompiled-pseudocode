/*
 * XREFs of CmpMarkIndexDirty @ 0x1405AE40C
 * Callers:
 *     CmpMarkKeyDirty @ 0x1405AF028 (CmpMarkKeyDirty.c)
 *     CmpMarkKeyParentDirty @ 0x1407FEA64 (CmpMarkKeyParentDirty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyInRoot @ 0x1405D5F64 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned int v9; // r14d
  char v10; // r15
  PVOID PoolWithTag; // rax
  void *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned int v15; // r12d
  _WORD *v16; // rdi
  unsigned int v18; // edi
  _DWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  PVOID v22; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+A8h] [rbp+58h] BYREF

  v19[1] = 0;
  v19[0] = -1;
  v20[0] = -1;
  v20[1] = 0;
  v23 = -1;
  v21 = 0LL;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v19);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(_WORD *)(v5 + 72);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v8 = 2 * v7;
    v9 = v8;
    LOWORD(v21) = v8;
    v10 = 1;
    WORD1(v21) = v8;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x20204D43u);
    v22 = PoolWithTag;
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpCopyCompressedName(PoolWithTag, v9, v6 + 76, *(unsigned __int16 *)(v6 + 72));
      goto LABEL_5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
    return 0;
  }
  v12 = (void *)(v6 + 76);
  LOWORD(v21) = v7;
  v22 = (PVOID)(v6 + 76);
  v10 = 0;
  WORD1(v21) = v7;
LABEL_5:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, v19);
  if ( !v13 )
    goto LABEL_26;
  v14 = 0LL;
  if ( !*(_DWORD *)(BugCheckParameter2 + 208) )
  {
LABEL_25:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
LABEL_26:
    if ( v10 )
      ExFreePoolWithTag(v12, 0);
    return 0;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v13 + 4 * v14 + 20) )
      goto LABEL_15;
    v15 = *(_DWORD *)(v13 + 4 * v14 + 28);
    v16 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     v15,
                     v20);
    if ( !v16 )
      goto LABEL_25;
    if ( *v16 != 26994 )
      break;
    if ( (int)CmpFindSubKeyInRoot(BugCheckParameter2, (_DWORD)v16, (unsigned int)&v21, 0, (__int64)&v23) < 0 )
    {
LABEL_24:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
    v18 = v23;
    if ( v23 != -1 )
    {
      if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, v15) )
        goto LABEL_25;
      v15 = v18;
      v16 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v18,
                       v20);
      if ( !v16 )
        goto LABEL_25;
      break;
    }
LABEL_15:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *(_DWORD *)(BugCheckParameter2 + 208) )
      goto LABEL_25;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v16, (unsigned int)&v21, 0, (__int64)&v23, (__int64)&v24);
  if ( v24 < 0 )
    goto LABEL_24;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
  if ( v23 == -1 )
    goto LABEL_15;
  if ( v10 )
    ExFreePoolWithTag(v12, 0);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  return HvpMarkCellDirty(BugCheckParameter2, v15);
}
