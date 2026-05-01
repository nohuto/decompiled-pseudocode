/*
 * XREFs of ?GetAppBarPositionForMonitor@CBaseTrayFlyoutExperienceManager@@MEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180090020
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180042910 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180081550 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseTrayFlyoutExperienceManager::GetAppBarPositionForMonitor(
        CBaseTrayFlyoutExperienceManager *this,
        HMONITOR a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64); // rbx
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HMONITOR, SID *, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v18; // [rsp+20h] [rbp-38h]
  __int64 v19[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v19[1] = -2LL;
  *(_DWORD *)a4 = -1;
  if ( SetRectEmpty(a3) )
  {
    v19[0] = 0LL;
    v9 = *((_QWORD *)this + 45);
    v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64))(*(_QWORD *)v9 + 24LL);
    v11 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)v19);
    v12 = v10(v9, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v11);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x285,
        (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
        (const char *)(unsigned int)v12);
LABEL_14:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
      return v8;
    }
    v21 = 0LL;
    v13 = v19[0];
    v14 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v19[0] + 72LL);
    v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(&v21);
    v15 = v14(v13, a2, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v18);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v21 + 80LL))(v21, a4);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v21 + 168LL))(v21, a3);
        v8 = v15;
        if ( v15 >= 0 )
        {
          v8 = 0;
          goto LABEL_13;
        }
        v16 = 651LL;
      }
      else
      {
        v16 = 650LL;
      }
    }
    else
    {
      v16 = 648LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v15);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    goto LABEL_14;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x282,
    (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
    (const char *)0x80070057LL);
  return v8;
}
