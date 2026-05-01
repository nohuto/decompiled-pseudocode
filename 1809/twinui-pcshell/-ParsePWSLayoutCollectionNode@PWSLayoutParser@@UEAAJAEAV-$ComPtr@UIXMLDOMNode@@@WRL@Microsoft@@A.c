/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801A0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18013CAF4 (--$Make@VSelectionDataParser@StartLayout@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSelectionDat.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18013D21C (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18013D4A0 (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18013D694 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXXZ @ 0x18013EDE0 (-_Tidy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1801A062C (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1801A127C (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(PWSLayoutParser *this, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  PWSLayoutParser *v5; // rsi
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
  StartLayout::SelectionData *v25; // rax
  int Selected; // eax
  struct IPenWorkspaceLayoutItem **v27; // rsi
  __int64 v28; // r15
  struct IPenWorkspaceLayoutItem *v29; // rbx
  void *v30; // r8
  __int64 v31; // rdx
  struct IPenWorkspaceLayoutItem **v32; // rdx
  struct IPenWorkspaceLayoutItem *v34; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v36; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-1B0h]
  __int64 v40; // [rsp+50h] [rbp-1A8h]
  __int64 v41; // [rsp+58h] [rbp-1A0h]
  int v42; // [rsp+60h] [rbp-198h] BYREF
  __int16 v43; // [rsp+64h] [rbp-194h]
  __int64 v44; // [rsp+68h] [rbp-190h]
  __int128 v45; // [rsp+70h] [rbp-188h]
  __int128 v46; // [rsp+80h] [rbp-178h]
  __int64 v47; // [rsp+90h] [rbp-168h]
  int v48; // [rsp+98h] [rbp-160h]
  __int16 v49; // [rsp+9Ch] [rbp-15Ch]
  int v50; // [rsp+A0h] [rbp-158h]
  _QWORD *v51; // [rsp+B0h] [rbp-148h]
  __int128 v52; // [rsp+B8h] [rbp-140h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-130h]
  _OWORD v54[2]; // [rsp+D0h] [rbp-128h] BYREF
  int v55; // [rsp+F0h] [rbp-108h] BYREF
  __int16 v56; // [rsp+F4h] [rbp-104h]
  __int64 v57; // [rsp+F8h] [rbp-100h]
  __int128 v58; // [rsp+100h] [rbp-F8h]
  __int128 v59; // [rsp+110h] [rbp-E8h]
  __int64 v60; // [rsp+120h] [rbp-D8h]
  int v61; // [rsp+128h] [rbp-D0h]
  __int16 v62; // [rsp+12Ch] [rbp-CCh]
  int v63; // [rsp+130h] [rbp-C8h]
  __int64 v64; // [rsp+140h] [rbp-B8h]
  _QWORD v65[8]; // [rsp+148h] [rbp-B0h] BYREF
  _BYTE v66[112]; // [rsp+188h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]
  struct IXMLDOMNode *v70; // [rsp+218h] [rbp+20h] BYREF

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
      v42 = 0;
      v43 = 0;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v49 = 0;
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
            (void *)0x69,
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
          v23 = 108LL;
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
            v23 = 109LL;
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
            StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v42);
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
        v17 = Microsoft::WRL::Details::Make<StartLayout::SelectionDataParser,>(&v37);
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
            (void *)0x70,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_25;
        }
        v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v18 + 24LL))(v18, &v35, &v42);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
          StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v42);
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
          (void *)0x78,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          v24);
        v5 = this;
        v3 = a3;
      }
      memset(v54, 0, sizeof(v54));
      v55 = 0;
      v56 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v51 = v65;
      v65[0] = off_1803D8B48;
      v65[7] = v65;
      v25 = StartLayout::SelectionData::SelectionData(
              (StartLayout::SelectionData *)v66,
              (PWSLayoutParser *)((char *)v5 + 40));
      Selected = StartLayout::GetSelectedItem<ParsedPenWorkspaceLayout>(
                   (__int64 *)&v52,
                   v25,
                   (__int64)v65,
                   (__int64)v54);
      v7 = Selected;
      if ( Selected < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v55);
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
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v55);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v54);
      std::vector<ParsedPenWorkspaceLayout>::_Tidy((__int64 *)&v52);
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)&v42);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v38);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
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
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return (unsigned int)v7;
}
