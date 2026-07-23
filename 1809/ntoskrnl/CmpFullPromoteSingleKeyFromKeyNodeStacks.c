/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080
 * Callers:
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140805FC4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140806C2C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140806D3C (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14026CD60 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CD7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpConcatenateValueLists @ 0x1407FD93C (CmpConcatenateValueLists.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x1407FE86C (CmpFreeKeyValueList.c)
 *     CmpValueEnumStackAdvance @ 0x140801DBC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140801F18 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140801F78 (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  unsigned int v3; // r13d
  unsigned int v4; // r12d
  unsigned int v5; // esi
  __int16 v7; // dx
  __int64 EntryAtLayerHeight; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  ULONG_PTR v11; // r14
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // r8d
  __int64 *v15; // r13
  __int64 v16; // rcx
  int v17; // ebx
  int v18; // eax
  __int64 CurrentValueHive; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  char v22; // cl
  unsigned __int16 v23; // r8
  unsigned int v24; // eax
  unsigned __int16 v25; // dx
  unsigned int v26; // ecx
  void (__fastcall *v27)(ULONG_PTR, __int64 *); // rax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  unsigned __int16 v31; // bx
  ULONG_PTR v32; // rdx
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rcx
  ULONG_PTR v37; // rdx
  __int64 v38; // rax
  unsigned __int16 v40; // [rsp+30h] [rbp-89h]
  unsigned int v41; // [rsp+38h] [rbp-81h] BYREF
  unsigned int BugCheckParameter3; // [rsp+3Ch] [rbp-7Dh]
  __int16 BugCheckParameter3_4; // [rsp+40h] [rbp-79h]
  unsigned int v44; // [rsp+44h] [rbp-75h]
  int v45; // [rsp+48h] [rbp-71h]
  unsigned __int64 v46; // [rsp+50h] [rbp-69h] BYREF
  __int64 v47; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-59h]
  unsigned int v49; // [rsp+64h] [rbp-55h]
  unsigned int v50; // [rsp+70h] [rbp-49h] BYREF
  __int16 v51; // [rsp+76h] [rbp-43h]

  v3 = 0;
  BugCheckParameter3 = -1;
  v4 = -1;
  v5 = -1;
  v47 = 0xFFFFFFFFLL;
  v40 = 0;
  v41 = 0;
  v46 = 0xFFFFFFFF00000000uLL;
  CmpValueEnumStackInitialize((char *)&v50);
  BugCheckParameter3_4 = *a2;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, BugCheckParameter3_4);
  if ( a1 )
    v9 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v7);
  else
    v9 = 0LL;
  v10 = *(_QWORD *)(EntryAtLayerHeight + 16);
  v11 = *(_QWORD *)EntryAtLayerHeight;
  v45 = *(_DWORD *)(EntryAtLayerHeight + 8) >> 31;
  if ( *(char *)(v10 + 13) < 0 )
  {
    v12 = v7 - 1;
    if ( v12 >= 0 )
    {
      while ( 1 )
      {
        v15 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v12);
        v16 = v15[2];
        if ( v16 )
        {
          if ( *(char *)(v16 + 13) >= 0 )
            break;
        }
        v12 = v13 - 1;
        if ( v12 < 0 )
          goto LABEL_14;
      }
      if ( *(_WORD *)(v16 + 74) )
      {
        v4 = CmpCopyCell(*v15, *(unsigned int *)(v16 + 48), v11, v14);
        if ( v4 == -1 )
        {
LABEL_12:
          v17 = -1073741670;
          goto LABEL_58;
        }
        v40 = *(_WORD *)(v15[2] + 74);
      }
LABEL_14:
      v3 = 0;
    }
  }
  v17 = CmpValueEnumStackStartFromKeyNodeStack((__int64)&v50, a2);
  if ( v17 >= 0 )
  {
    v44 = 0;
    while ( 1 )
    {
      v18 = CmpValueEnumStackAdvance((__int64)&v50);
      v17 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 < 0 )
        goto LABEL_58;
      if ( v51 != BugCheckParameter3_4 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)&v50);
        v20 = CmpCopyValue(CurrentValueHive, v50, v11, v45);
        if ( v20 == -1 )
          goto LABEL_12;
        v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v11 + 8))(v11, v20, &v47);
        v22 = *(_BYTE *)(v21 + 16);
        v23 = *(_WORD *)(v21 + 2);
        v24 = *(_DWORD *)(v21 + 4);
        v25 = 2 * v23;
        if ( (v22 & 1) == 0 )
          v25 = v23;
        v49 = v25;
        v26 = v24 + 0x80000000;
        if ( v24 < 0x80000000 )
          v26 = v24;
        v27 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v11 + 16);
        v48 = v26;
        v27(v11, &v47);
        v17 = CmpAddValueToListEx(v11, v20, v41, 1, &v41, 1);
        if ( v17 < 0 )
          goto LABEL_58;
        v28 = v48;
        v29 = v49;
        if ( v48 <= v44 )
          v28 = v44;
        v44 = v28;
        if ( v49 <= v3 )
          v29 = v3;
        v3 = v29;
      }
    }
    if ( !v41
      || (v30 = CmpConcatenateValueLists(
                  v11,
                  (unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL),
                  &v41,
                  v45,
                  (unsigned int *)&v46),
          v5 = HIDWORD(v46),
          v17 = v30,
          v30 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
        goto LABEL_40;
      if ( !HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0) )
      {
LABEL_35:
        v17 = -1073741443;
        goto LABEL_58;
      }
      if ( v9 )
      {
        v31 = v40;
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 56LL) < (unsigned int)v40
          && !HvpMarkCellDirty(*(_QWORD *)v9, *(unsigned int *)(v9 + 8), 0) )
        {
          goto LABEL_35;
        }
      }
      else
      {
LABEL_40:
        v31 = v40;
      }
      if ( v5 != -1 )
      {
        if ( !HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0) )
          goto LABEL_35;
        v32 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL);
        if ( (_DWORD)v32 != -1 && !HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v32, 0) )
          goto LABEL_35;
      }
      v33 = *(_QWORD *)(EntryAtLayerHeight + 16);
      v34 = *(_BYTE *)(v33 + 13);
      if ( v34 < 0 )
      {
        *(_BYTE *)(v33 + 13) = v34 & 0x7F;
        *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 48LL) = v4;
        v4 = -1;
        *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v31;
        if ( v9 )
        {
          v35 = *(_QWORD *)(v9 + 16);
          if ( *(_DWORD *)(v35 + 56) < (unsigned int)v31 )
            *(_DWORD *)(v35 + 56) = v31;
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
        if ( *(_DWORD *)(v38 + 60) < v3 )
          *(_DWORD *)(v38 + 60) = v3;
        HvFreeCell(v11, BugCheckParameter3);
        BugCheckParameter3 = -1;
        v41 = 0;
      }
      v17 = 0;
    }
  }
LABEL_58:
  CmpValueEnumStackCleanup((__int64)&v50);
  if ( BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v11, &v41);
  if ( v5 != -1 )
    HvFreeCell(v11, v5);
  if ( v4 != -1 )
    HvFreeCell(v11, v4);
  return (unsigned int)v17;
}
