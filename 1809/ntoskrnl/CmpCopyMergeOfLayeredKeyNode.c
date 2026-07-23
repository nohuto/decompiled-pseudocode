/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x1407FDAA8
 * Callers:
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140806468 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407F6638 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        int a5,
        unsigned int *a6)
{
  int v6; // r15d
  __int16 v11; // bx
  __int64 v12; // r14
  __int16 v13; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v15; // dx
  int v16; // r8d
  bool i; // sf
  __int64 v18; // rax
  int v19; // r9d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // r8
  unsigned int v24; // ebx
  unsigned int v25; // eax
  char *v26; // r14
  unsigned int v27; // r12d
  int SecurityDescriptorNode; // ebx
  size_t v29; // r8
  __int64 v30; // rbx
  __int16 v31; // cx
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int16 v34; // bx
  int v35; // eax
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  void *v38; // [rsp+48h] [rbp-28h] BYREF
  __int64 v39; // [rsp+50h] [rbp-20h]
  __int64 v40; // [rsp+58h] [rbp-18h]
  __int64 v41; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp+58h]

  v6 = a5;
  v37 = 0xFFFFFFFFLL;
  v38 = 0LL;
  v43 = 0xFFFFFFFFLL;
  if ( a5 == 2 )
  {
    if ( a3 == -1 )
      v6 = 0;
    else
      v6 = a3 >> 31;
  }
  v11 = *a1;
  v12 = 0LL;
  v39 = 0LL;
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
    v39 = EntryAtLayerHeight;
  }
LABEL_10:
  CmpGetSecurityCellForKeyNodeStack(a1, &v41, &v42);
  v40 = 0LL;
  v44 = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 )
  {
    for ( i = v11 < 0; !i; i = v11 < 0 )
    {
      v18 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v11);
      if ( *(_DWORD *)(v18 + 8) != v19 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v18, *(_QWORD *)(v18 + 16));
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v21 + 13) >= v23 )
        {
          v44 = *(_DWORD *)(v21 + 48);
          LOWORD(a5) = *(_WORD *)(v21 + 74);
          v40 = v22;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v11;
    }
  }
  v24 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 16) + 72LL) + 76;
  v25 = HvAllocateCell(a2, v24, v6, &v38, &v37);
  v26 = (char *)v38;
  v27 = v25;
  if ( v25 == -1 )
    goto LABEL_20;
  v29 = v24;
  v30 = v39;
  memmove(v38, *(const void **)(v39 + 16), v29);
  v26[12] = 0;
  v26[13] = v26[13] & 0x7C | 0x80;
  *((_DWORD *)v26 + 4) = a3;
  *(_QWORD *)(v26 + 20) = 0LL;
  *((_DWORD *)v26 + 7) = -1;
  *((_QWORD *)v26 + 4) = 0xFFFFFFFFLL;
  *((_DWORD *)v26 + 10) = -1;
  *((_DWORD *)v26 + 11) = -1;
  *((_DWORD *)v26 + 12) = -1;
  *((_WORD *)v26 + 26) = 0;
  *((_QWORD *)v26 + 7) = 0LL;
  *((_QWORD *)v26 + 8) = 0LL;
  *((_WORD *)v26 + 37) = 0;
  v31 = *(_WORD *)(*(_QWORD *)(v30 + 16) + 2LL) & 0xFFBF;
  *((_WORD *)v26 + 1) = v31;
  if ( a3 == -1 )
    *((_WORD *)v26 + 1) = v31 | 0xC;
  v32 = v41;
  v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v41 + 8))(v41, v42, &v43);
  ExAcquirePushLockExclusiveEx(a2 + 1776, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                             a2,
                             v27,
                             (__int64)v26,
                             v27 >> 31,
                             (void *)(v33 + 20),
                             0,
                             (unsigned int *)v26 + 11);
  ExReleasePushLockEx(a2 + 1776, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *))(v32 + 16))(v32, &v43);
  if ( SecurityDescriptorNode >= 0 )
  {
    v34 = a5;
    if ( (_WORD)a5 )
    {
      v35 = CmpCopyCell(v40, v44, a2, v6);
      if ( v35 == -1 )
      {
LABEL_20:
        SecurityDescriptorNode = -1073741670;
        goto LABEL_28;
      }
      *((_DWORD *)v26 + 12) = v35;
      *((_WORD *)v26 + 37) = v34;
    }
    SecurityDescriptorNode = 0;
    *a6 = v27;
    v27 = -1;
  }
LABEL_28:
  if ( v26 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a2 + 16))(a2, &v37);
  if ( v27 != -1 )
    CmpFreeKeyByCell(a2, v27, 0);
  return (unsigned int)SecurityDescriptorNode;
}
