/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18013C9A4 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18013D21C (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18013D4A0 (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18013D694 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18013D8F8 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18013E61C (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     ?_Tidy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXXZ @ 0x18013EDE0 (-_Tidy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@A.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        __int64 *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  const char *v11; // r9
  StartLayout::SelectionData *v12; // rax
  int Selected; // eax
  __int64 *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  void *v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 result; // rax
  struct IXMLDOMNode *v21; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-1A8h]
  __int64 v25[4]; // [rsp+50h] [rbp-198h] BYREF
  int v26; // [rsp+70h] [rbp-178h] BYREF
  __int16 v27; // [rsp+74h] [rbp-174h]
  __int64 v28; // [rsp+78h] [rbp-170h]
  __int128 v29; // [rsp+80h] [rbp-168h]
  __int128 v30; // [rsp+90h] [rbp-158h]
  __int64 v31; // [rsp+A0h] [rbp-148h]
  int v32; // [rsp+A8h] [rbp-140h]
  __int16 v33; // [rsp+ACh] [rbp-13Ch]
  int v34; // [rsp+B0h] [rbp-138h]
  _OWORD v35[2]; // [rsp+C0h] [rbp-128h] BYREF
  int v36; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v37; // [rsp+E4h] [rbp-104h]
  __int64 v38; // [rsp+E8h] [rbp-100h]
  __int128 v39; // [rsp+F0h] [rbp-F8h]
  __int128 v40; // [rsp+100h] [rbp-E8h]
  __int64 v41; // [rsp+110h] [rbp-D8h]
  int v42; // [rsp+118h] [rbp-D0h]
  __int16 v43; // [rsp+11Ch] [rbp-CCh]
  int v44; // [rsp+120h] [rbp-C8h]
  __int64 v45; // [rsp+130h] [rbp-B8h]
  _QWORD v46[8]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v47[80]; // [rsp+180h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]
  _QWORD *v49; // [rsp+208h] [rbp+20h] BYREF

  v45 = -2LL;
  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_22;
  }
  v22 = 0LL;
  v8 = *a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, &v22);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_21;
  }
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    v10 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v10 + 72LL))(v10, &v21) < 0 || !v21 )
      break;
    memset(v25, 0, sizeof(v25));
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v21, (struct ParsedTaskbarLayout *)v25) >= 0 )
    {
      try
      {
        std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>((__int64 *)&v23, v25);
      }
      catch ( ... )
      {
        LODWORD(v49) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6A,
                         (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                         v11);
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v26);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v25);
        std::vector<ParsedPenWorkspaceLayout>::_Tidy(&v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        v7 = (unsigned int)v49;
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_22:
        result = v7;
      }
    }
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v26);
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v25);
  }
  memset(v35, 0, sizeof(v35));
  v36 = 0;
  v37 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v49 = v46;
  v46[0] = off_1803D24B0;
  v46[7] = v46;
  v12 = StartLayout::SelectionData::SelectionData(
          (StartLayout::SelectionData *)v47,
          (TaskbarLayoutParser *)((char *)this + 40));
  Selected = StartLayout::GetSelectedItem<ParsedTaskbarLayout>((__int64 *)&v23, v12, (__int64)v46, (__int64)v35);
  v7 = Selected;
  if ( Selected < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v36);
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v35);
    std::vector<ParsedPenWorkspaceLayout>::_Tidy(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    goto LABEL_21;
  }
  v14 = *(__int64 **)&v35[0];
  v15 = *(_QWORD *)&v35[0] + 8LL * *((_QWORD *)&v35[0] + 1);
  while ( v14 != (__int64 *)v15 )
  {
    v16 = *v14;
    v49 = (_QWORD *)*v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v49);
    v18 = a3[1];
    if ( v18 != a3[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a3,
                v18 + 1,
                v17) >= 0 )
    {
      v19 = (__int64 *)(*a3 + 8 * a3[1]++);
      if ( v19 )
      {
        *v19 = 0LL;
        if ( v19 != (__int64 *)&v49 )
        {
          *v19 = v16;
          v49 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
    ++v14;
  }
  StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v36);
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v35);
  std::vector<ParsedPenWorkspaceLayout>::_Tidy(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v7 = 0;
  goto LABEL_21;
}
