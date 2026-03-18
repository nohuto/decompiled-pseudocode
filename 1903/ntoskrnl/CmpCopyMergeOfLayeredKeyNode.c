/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x140835D24
 * Callers:
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083EA38 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     CmUnlockHiveSecurity @ 0x140631104 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140631124 (CmLockHiveSecurityExclusive.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpCopyCell @ 0x1406E29EC (CmpCopyCell.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D780 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14082E210 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14083319C (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        unsigned __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v6; // r14d
  __int16 v11; // bx
  __int64 v12; // rsi
  __int16 v13; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v15; // dx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r9d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r8
  unsigned int v23; // ebx
  unsigned int Cell; // eax
  char *v25; // rsi
  unsigned int v26; // r15d
  int v27; // ebx
  size_t v28; // r8
  __int64 v29; // rbx
  __int16 v30; // cx
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int16 v33; // bx
  int v34; // eax
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  void *v37; // [rsp+38h] [rbp-28h] BYREF
  __int64 v38; // [rsp+40h] [rbp-20h]
  __int64 v39; // [rsp+48h] [rbp-18h]
  __int64 v40; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+58h]

  v6 = a5;
  v36 = 0xFFFFFFFFLL;
  v42 = 0xFFFFFFFFLL;
  v37 = 0LL;
  if ( a5 == 2 )
  {
    if ( a3 == -1 )
      v6 = 0;
    else
      v6 = a3 >> 31;
  }
  v11 = *a1;
  v12 = 0LL;
  v38 = 0LL;
  v13 = v11;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v13);
      if ( *(_DWORD *)(EntryAtLayerHeight + 8) != v16 )
        break;
      v13 = v15 - 1;
      if ( v13 < 0 )
        goto LABEL_10;
    }
    v12 = EntryAtLayerHeight;
    v38 = EntryAtLayerHeight;
  }
LABEL_10:
  CmpGetSecurityCellForKeyNodeStack(a1, &v40, &v41);
  v39 = 0LL;
  v43 = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 && v11 >= 0 )
  {
    do
    {
      v17 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v11);
      if ( *(_DWORD *)(v17 + 8) != v18 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v17, *(_QWORD *)(v17 + 16));
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v20 + 13) >= v22 )
        {
          v43 = *(_DWORD *)(v20 + 48);
          LOWORD(a5) = *(_WORD *)(v20 + 74);
          v39 = v21;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v11;
    }
    while ( v11 >= 0 );
  }
  v23 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 16) + 72LL) + 76;
  Cell = HvAllocateCell(a2, v23, v6, (__int64)&v37, (__int64)&v36);
  v25 = (char *)v37;
  v26 = Cell;
  if ( Cell == -1 )
    goto LABEL_20;
  v28 = v23;
  v29 = v38;
  memmove(v37, *(const void **)(v38 + 16), v28);
  v25[12] = 0;
  v25[13] = v25[13] & 0x7C | 0x80;
  *((_DWORD *)v25 + 4) = a3;
  *(_QWORD *)(v25 + 20) = 0LL;
  *((_DWORD *)v25 + 7) = -1;
  *((_QWORD *)v25 + 4) = 0xFFFFFFFFLL;
  *((_DWORD *)v25 + 10) = -1;
  *((_DWORD *)v25 + 11) = -1;
  *((_DWORD *)v25 + 12) = -1;
  *((_WORD *)v25 + 26) = 0;
  *((_QWORD *)v25 + 7) = 0LL;
  *((_QWORD *)v25 + 8) = 0LL;
  *((_WORD *)v25 + 37) = 0;
  v30 = *(_WORD *)(*(_QWORD *)(v29 + 16) + 2LL) & 0xFFBF;
  *((_WORD *)v25 + 1) = v30;
  if ( a3 == -1 )
    *((_WORD *)v25 + 1) = v30 | 0xC;
  v31 = v40;
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v40 + 8))(v40, v41, &v42);
  CmLockHiveSecurityExclusive(a2);
  v27 = CmpAssignSecurityDescriptor(a2, v26, (__int64)v25, (void *)(v32 + 20), 0);
  CmUnlockHiveSecurity(a2);
  (*(void (__fastcall **)(__int64, __int64 *))(v31 + 16))(v31, &v42);
  if ( v27 >= 0 )
  {
    v33 = a5;
    if ( (_WORD)a5 )
    {
      v34 = CmpCopyCell(v39, v43, a2, v6);
      if ( v34 == -1 )
      {
LABEL_20:
        v27 = -1073741670;
        goto LABEL_28;
      }
      *((_DWORD *)v25 + 12) = v34;
      *((_WORD *)v25 + 37) = v33;
    }
    v27 = 0;
    *a6 = v26;
    v26 = -1;
  }
LABEL_28:
  if ( v25 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a2 + 16))(a2, &v36);
  if ( v26 != -1 )
    CmpFreeKeyByCell(a2, v26, 0);
  return (unsigned int)v27;
}
