/*
 * XREFs of ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EBAC
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EA2C (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004ED10 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x180071B38 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800FACF0 (WPP_SF_.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18010768C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1801078A0 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010AAB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
        CAppViewManager *this,
        __int64 a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  HRESULT v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  void *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  struct IImmersiveApplicationInternal *v15; // rbx
  CAppViewManager *v16; // rcx
  PVOID Ptr; // rbx
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  struct IImmersiveApplicationInternal *v21; // [rsp+40h] [rbp-51h] BYREF
  __int64 v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h] BYREF
  __int64 v24; // [rsp+58h] [rbp-39h] BYREF
  __int64 v25; // [rsp+60h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h] BYREF
  void *ppvOut; // [rsp+70h] [rbp-21h] BYREF
  __int64 v28; // [rsp+78h] [rbp-19h] BYREF
  int v29; // [rsp+80h] [rbp-11h] BYREF
  struct IImmersiveApplicationInternal *v30[2]; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v31[8]; // [rsp+98h] [rbp+7h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A8h] [rbp+17h] BYREF
  _BYTE v34[8]; // [rsp+B0h] [rbp+1Fh] BYREF
  struct IImmersiveApplicationInternal *v35; // [rsp+B8h] [rbp+27h]
  __int64 v36; // [rsp+C0h] [rbp+2Fh]
  int v37; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v38; // [rsp+108h] [rbp+77h] BYREF
  int v39; // [rsp+10Ch] [rbp+7Bh]
  __int64 (__fastcall ***v40)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+110h] [rbp+7Fh] BYREF

  v39 = HIDWORD(a3);
  v36 = -2LL;
  *a4 = 0LL;
  v40 = 0LL;
  v20 = 0LL;
  v38 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_6ab2f0e6_cf78_4445_80dd_201879cf4c70,
         &v28);
  if ( v7 >= 0 )
  {
    v8 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, a2, &v20);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v38);
      if ( v7 >= 0 )
      {
        v9 = v38;
        if ( v38 == 1 )
        {
          v10 = v20;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v10 + 32LL))(
                 v10,
                 0LL,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 &v40);
          v9 = v38;
        }
        if ( v7 >= 0 )
        {
          if ( v9 <= 1 )
          {
LABEL_8:
            if ( v7 >= 0 )
              v7 = (**v40)(v40, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
            goto LABEL_10;
          }
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          v7 = IUnknown_QueryService(
                 *((IUnknown **)this + 15),
                 (const GUID *const)&SID_VirtualDesktopManager,
                 &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                 &ppvOut);
          if ( v7 < 0 )
          {
LABEL_34:
            if ( !v40 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
              v19 = v20;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
              v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v19 + 32LL))(
                     v19,
                     0LL,
                     &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                     &v40);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
            goto LABEL_8;
          }
          v26 = 0LL;
          v12 = ppvOut;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v7 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v26);
          if ( v7 < 0 )
          {
LABEL_33:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            goto LABEL_34;
          }
          v13 = 0LL;
          v25 = 0LL;
          v14 = 0LL;
          v24 = 0LL;
          details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
            v31,
            v20);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            &v29,
            v31,
            0LL);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            &v33,
            v31,
            v32);
          while ( v29 != v33 || v30[1] != v35 )
          {
            v15 = v30[0];
            v21 = v30[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            LOBYTE(v15) = CAppViewManager::_IsMultiViewOperationAllowed(v16, v15);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( (_BYTE)v15 )
            {
              if ( !v13 )
              {
                Microsoft::WRL::ComPtr<IUnknown>::operator=(&v25, (__int64 *)&v21);
                v13 = v25;
              }
              v23 = 0LL;
              v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v21, &v23);
              if ( v7 >= 0 )
              {
                v22 = 0LL;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
                v7 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, v23, &v22);
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v26 + 24LL))(v26, v22, &v37);
                  if ( v7 >= 0 )
                  {
                    if ( v37 )
                    {
                      Microsoft::WRL::ComPtr<IUnknown>::operator=(&v24, (__int64 *)&v21);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
                      v14 = v24;
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
            ++v29;
            details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::GetCurrentObject(&v29);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v34);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
          if ( v14 )
          {
            v18 = &v24;
          }
          else
          {
            if ( !v13 )
            {
LABEL_32:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
              goto LABEL_33;
            }
            v18 = &v25;
          }
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(v18, &v40);
          goto LABEL_32;
        }
      }
    }
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
  return (unsigned int)v7;
}
