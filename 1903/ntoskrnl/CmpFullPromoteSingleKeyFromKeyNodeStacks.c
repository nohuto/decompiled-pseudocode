/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083E630
 * Callers:
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083E544 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14083E614 (CmpFullPromoteHiveRootFromKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083F090 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14083F224 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14083F344 (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140280600 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14028061C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpCopyCell @ 0x1406E29EC (CmpCopyCell.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140833358 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpConcatenateValueLists @ 0x140835BC0 (CmpConcatenateValueLists.c)
 *     CmpCopyValue @ 0x1408367E8 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140836ABC (CmpFreeKeyValueList.c)
 *     CmpAddValueToList @ 0x140839838 (CmpAddValueToList.c)
 *     CmpValueEnumStackAdvance @ 0x14083A0E8 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14083A244 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14083A2A4 (CmpValueEnumStackInitialize.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  __int16 v6; // bx
  __int16 v7; // dx
  __int64 EntryAtLayerHeight; // r14
  __int64 v9; // rax
  ULONG_PTR v10; // r13
  unsigned int v11; // edi
  __int16 v12; // dx
  __int64 *v13; // rax
  __int16 v14; // dx
  __int16 v15; // r8
  __int64 v16; // rcx
  int v17; // esi
  __int64 CurrentValueHive; // rax
  unsigned int v19; // esi
  __int64 v20; // rax
  unsigned __int16 v21; // r8
  char v22; // cl
  unsigned int v23; // eax
  unsigned __int16 v24; // dx
  unsigned int v25; // ebx
  unsigned int v26; // edi
  int v27; // eax
  int v28; // eax
  unsigned __int16 v29; // bx
  ULONG_PTR v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  ULONG_PTR v37; // rdx
  __int64 v38; // rax
  unsigned __int16 v40; // [rsp+30h] [rbp-89h]
  __int16 v41; // [rsp+32h] [rbp-87h]
  unsigned int v42; // [rsp+38h] [rbp-81h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+3Ch] [rbp-7Dh]
  unsigned int v44; // [rsp+44h] [rbp-75h]
  __int64 *v45; // [rsp+48h] [rbp-71h]
  unsigned __int64 v46; // [rsp+50h] [rbp-69h] BYREF
  __int64 v47; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-59h]
  _DWORD v49[24]; // [rsp+70h] [rbp-49h] BYREF

  memset(v49, 0, 0x58uLL);
  v4 = 0LL;
  v5 = -1;
  BugCheckParameter3 = -1LL;
  v47 = 0xFFFFFFFFLL;
  v40 = 0;
  v42 = 0;
  v46 = 0xFFFFFFFF00000000uLL;
  CmpValueEnumStackInitialize(v49);
  v6 = *a2;
  v41 = *a2;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, *a2);
  if ( a1 )
    v4 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v7);
  v9 = *(_QWORD *)(EntryAtLayerHeight + 16);
  v10 = *(_QWORD *)EntryAtLayerHeight;
  v11 = *(_DWORD *)(EntryAtLayerHeight + 8) >> 31;
  v48 = v11;
  if ( *(char *)(v9 + 13) < 0 )
  {
    v12 = v6 - 1;
    if ( (__int16)(v6 - 1) >= 0 )
    {
      while ( 1 )
      {
        v13 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v12);
        v45 = v13;
        v16 = v13[2];
        if ( v16 )
        {
          if ( *(char *)(v16 + 13) >= (char)v15 )
            break;
        }
        v12 = v14 - 1;
        if ( v12 < 0 )
          goto LABEL_13;
      }
      if ( *(_WORD *)(v16 + 74) != v15 )
      {
        HIDWORD(BugCheckParameter3) = CmpCopyCell(*v13, *(unsigned int *)(v16 + 48), v10, v11);
        if ( HIDWORD(BugCheckParameter3) == -1 )
        {
LABEL_11:
          v17 = -1073741670;
          goto LABEL_56;
        }
        v6 = v41;
        v40 = *(_WORD *)(v45[2] + 74);
      }
    }
  }
LABEL_13:
  v17 = CmpValueEnumStackStartFromKeyNodeStack((__int64)v49, a2);
  if ( v17 >= 0 )
  {
    v44 = 0;
    LODWORD(v45) = 0;
    v17 = CmpValueEnumStackAdvance((__int64)v49);
    if ( v17 != -2147483622 )
    {
      while ( v17 >= 0 )
      {
        if ( HIWORD(v49[1]) != v6 )
        {
          CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)v49);
          v19 = CmpCopyValue(CurrentValueHive, v49[0], v10, v11);
          if ( v19 == -1 )
            goto LABEL_11;
          v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v10 + 8))(v10, v19, &v47);
          v21 = *(_WORD *)(v20 + 2);
          v22 = *(_BYTE *)(v20 + 16);
          v23 = *(_DWORD *)(v20 + 4);
          v24 = 2 * v21;
          if ( (v22 & 1) == 0 )
            v24 = v21;
          v25 = v23 + 0x80000000;
          v26 = v24;
          if ( v23 < 0x80000000 )
            v25 = v23;
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16))(v10, &v47);
          v27 = CmpAddValueToList(v10, v19, v42, 1u, &v42);
          v17 = v27;
          if ( v25 <= v44 )
            v25 = v44;
          v44 = v25;
          if ( v26 <= (unsigned int)v45 )
            v26 = (unsigned int)v45;
          LODWORD(v45) = v26;
          if ( v27 < 0 )
            goto LABEL_56;
          v11 = v48;
          v6 = v41;
        }
        v17 = CmpValueEnumStackAdvance((__int64)v49);
        if ( v17 == -2147483622 )
        {
          if ( v42 )
          {
            v28 = CmpConcatenateValueLists(
                    v10,
                    (unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL),
                    &v42,
                    v11,
                    (unsigned int *)&v46);
            v5 = HIDWORD(v46);
            v17 = v28;
            if ( v28 < 0 )
              goto LABEL_56;
          }
          goto LABEL_31;
        }
      }
      goto LABEL_56;
    }
LABEL_31:
    if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
      goto LABEL_38;
    if ( !HvMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0) )
      goto LABEL_33;
    if ( v4 )
    {
      v29 = v40;
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 56LL) < (unsigned int)v40
        && !HvMarkCellDirty(*(_QWORD *)v4, *(unsigned int *)(v4 + 8), 0) )
      {
        goto LABEL_33;
      }
    }
    else
    {
LABEL_38:
      v29 = v40;
    }
    if ( v5 == -1
      || HvMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0)
      && ((v30 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL), (_DWORD)v30 == -1)
       || HvMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v30, 0)) )
    {
      v31 = *(_QWORD *)(EntryAtLayerHeight + 16);
      v32 = *(_BYTE *)(v31 + 13);
      if ( v32 < 0 )
      {
        *(_BYTE *)(v31 + 13) = v32 & 0x7F;
        v33 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v34 = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_DWORD *)(v33 + 48) = v34;
        *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v29;
        if ( v4 )
        {
          v35 = *(_QWORD *)(v4 + 16);
          if ( *(_DWORD *)(v35 + 56) < (unsigned int)v29 )
            *(_DWORD *)(v35 + 56) = v29;
        }
      }
      if ( v5 != -1 )
      {
        v36 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v37 = *(unsigned int *)(v36 + 40);
        if ( (_DWORD)v37 != -1 )
        {
          HvFreeCell(*(_QWORD *)EntryAtLayerHeight, v37);
          v36 = *(_QWORD *)(EntryAtLayerHeight + 16);
        }
        v5 = -1;
        *(_QWORD *)(v36 + 36) = v46;
        v38 = *(_QWORD *)(EntryAtLayerHeight + 16);
        if ( *(_DWORD *)(v38 + 64) < v44 )
        {
          *(_DWORD *)(v38 + 64) = v44;
          v38 = *(_QWORD *)(EntryAtLayerHeight + 16);
        }
        if ( *(_DWORD *)(v38 + 60) < (unsigned int)v45 )
          *(_DWORD *)(v38 + 60) = (_DWORD)v45;
        HvFreeCell(v10, (unsigned int)BugCheckParameter3);
        LODWORD(BugCheckParameter3) = -1;
        v42 = 0;
      }
      v17 = 0;
      goto LABEL_56;
    }
LABEL_33:
    v17 = -1073741443;
  }
LABEL_56:
  CmpValueEnumStackCleanup((__int64)v49);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v10, &v42);
  if ( v5 != -1 )
    HvFreeCell(v10, v5);
  if ( HIDWORD(BugCheckParameter3) != -1 )
    HvFreeCell(v10, HIDWORD(BugCheckParameter3));
  return (unsigned int)v17;
}
