/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801E7BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180165F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x180167B1C (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x180168258 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1801684C8 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801686F4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXXZ @ 0x18016A350 (-_Tidy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1801E7578 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801E7960 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1801E8278 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(PWSLayoutParser *this, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  PWSLayoutParser *v5; // r14
  int v6; // eax
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  void *v14; // r8
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r15d
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  const char *v24; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v25; // rax
  int Selected; // eax
  struct IPenWorkspaceLayoutItem **v27; // r14
  __int64 v28; // r15
  struct IPenWorkspaceLayoutItem *v29; // rbx
  void *v30; // r8
  __int64 v31; // rdx
  struct IPenWorkspaceLayoutItem **v32; // rdx
  struct IPenWorkspaceLayoutItem *v34; // [rsp+20h] [rbp-238h] BYREF
  __int64 v35; // [rsp+28h] [rbp-230h] BYREF
  __int64 v36; // [rsp+30h] [rbp-228h] BYREF
  __int64 v37; // [rsp+38h] [rbp-220h] BYREF
  __int64 v38; // [rsp+40h] [rbp-218h] BYREF
  __int64 v39; // [rsp+48h] [rbp-210h]
  __int64 v40; // [rsp+50h] [rbp-208h]
  __int64 v41; // [rsp+58h] [rbp-200h]
  __int64 v42; // [rsp+60h] [rbp-1F8h] BYREF
  char v43; // [rsp+68h] [rbp-1F0h]
  __int128 v44; // [rsp+70h] [rbp-1E8h]
  __int128 v45; // [rsp+80h] [rbp-1D8h]
  __int128 v46; // [rsp+90h] [rbp-1C8h]
  __int128 v47; // [rsp+A0h] [rbp-1B8h]
  __int64 v48; // [rsp+B0h] [rbp-1A8h]
  __int64 v49; // [rsp+B8h] [rbp-1A0h]
  char v50; // [rsp+C0h] [rbp-198h]
  _QWORD *v51; // [rsp+D0h] [rbp-188h]
  __int128 v52; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-170h]
  _OWORD v54[2]; // [rsp+F0h] [rbp-168h] BYREF
  __int64 v55; // [rsp+110h] [rbp-148h] BYREF
  char v56; // [rsp+118h] [rbp-140h]
  __int128 v57; // [rsp+120h] [rbp-138h]
  __int128 v58; // [rsp+130h] [rbp-128h]
  __int128 v59; // [rsp+140h] [rbp-118h]
  __int128 v60; // [rsp+150h] [rbp-108h]
  __int64 v61; // [rsp+160h] [rbp-F8h]
  __int64 v62; // [rsp+168h] [rbp-F0h]
  char v63; // [rsp+170h] [rbp-E8h]
  __int64 v64; // [rsp+180h] [rbp-D8h]
  _QWORD v65[8]; // [rsp+188h] [rbp-D0h] BYREF
  _BYTE v66[144]; // [rsp+1C8h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]
  struct IXMLDOMNode *v70; // [rsp+278h] [rbp+20h] BYREF

  v64 = -2LL;
  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v36 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v8)[12])(v8, &v36);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v70 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0;
      while ( 1 )
      {
        v10 = v36;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
        if ( (*(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v10 + 72LL))(v10, &v70) < 0 || !v70 )
          break;
        v35 = 0LL;
        v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        v12 = (**v11)(v11, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, &v35);
        v7 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_27;
        }
        v34 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        v13 = PWSLayoutParser::ParsePinnedAppNode(v5, v70, &v34);
        v7 = v13;
        if ( v13 < 0 )
        {
          v22 = (unsigned int)v13;
          v23 = 107LL;
          goto LABEL_24;
        }
        v15 = v39;
        if ( v39 == v41 )
        {
          v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)&v38,
                 v39 + 1,
                 v14);
          if ( v7 < 0 )
          {
            v22 = (unsigned int)v7;
            v23 = 108LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
              (const char *)v22);
LABEL_25:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
LABEL_27:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_28:
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v42);
            CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v38);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
            goto LABEL_40;
          }
          v15 = v39;
        }
        v39 = v15 + 1;
        v16 = (__int64 *)(v38 + 8 * (v15 + 1) - 8);
        if ( v38 + 8 * (v15 + 1) != 8 )
        {
          *v16 = (__int64)v34;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
        }
        v17 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v37);
        v18 = *v17;
        v51 = (_QWORD *)*v17;
        *v17 = 0LL;
        v19 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        if ( !v18 )
        {
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_25;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v35, &v42);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
          WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v42);
          CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v38);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
          v7 = v21;
          goto LABEL_40;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      }
      try
      {
        v52 = 0LL;
        v53 = 0LL;
        std::vector<ParsedTaskbarLayout>::emplace_back<ParsedTaskbarLayout>((__int64 *)&v52, &v38);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x77,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          v24);
        v5 = this;
        v3 = a3;
      }
      memset(v54, 0, sizeof(v54));
      v55 = 0LL;
      v56 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0;
      v51 = v65;
      v65[0] = off_18043F0D8;
      v65[7] = v65;
      v25 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v66,
              (PWSLayoutParser *)((char *)v5 + 40));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
                   (__int64 *)&v52,
                   v25,
                   (__int64)v65,
                   (__int64)v54);
      v7 = Selected;
      if ( Selected < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v55);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v54);
        std::vector<ParsedPenWorkspaceLayout>::_Tidy((__int64 *)&v52);
        goto LABEL_28;
      }
      v27 = *(struct IPenWorkspaceLayoutItem ***)&v54[0];
      v28 = *(_QWORD *)&v54[0] + 8LL * *((_QWORD *)&v54[0] + 1);
      while ( v27 != (struct IPenWorkspaceLayoutItem **)v28 )
      {
        v29 = *v27;
        v34 = *v27;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
        v31 = v3[1];
        if ( v31 != v3[3]
          || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v3,
                    v31 + 1,
                    v30) >= 0 )
        {
          v32 = (struct IPenWorkspaceLayoutItem **)(*v3 + 8 * v3[1]++);
          if ( v32 )
          {
            *v32 = 0LL;
            if ( v32 != &v34 )
            {
              *v32 = v29;
              v34 = 0LL;
            }
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        ++v27;
      }
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v55);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v54);
      std::vector<ParsedPenWorkspaceLayout>::_Tidy((__int64 *)&v52);
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v42);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v38);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_40:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return (unsigned int)v7;
}
