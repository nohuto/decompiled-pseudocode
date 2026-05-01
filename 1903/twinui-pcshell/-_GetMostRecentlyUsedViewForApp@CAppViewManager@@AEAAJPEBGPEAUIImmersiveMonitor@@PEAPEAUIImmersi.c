/*
 * XREFs of ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180137430
 * Callers:
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801378E0 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180010784 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010A874 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     WPP_SF_ @ 0x180120C70 (WPP_SF_.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18012D5FC (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18012D858 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180131048 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_GetMostRecentlyUsedViewForApp(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationInternal **a4)
{
  int v7; // r14d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, const unsigned __int16 *, __int64 *); // rdi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  void *v13; // rbx
  __int64 (__fastcall *v14)(void *, __int64 *); // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  struct IImmersiveApplicationInternal *v17; // rbx
  CAppViewManager *v18; // rcx
  PVOID Ptr; // r14
  __int64 (__fastcall *v20)(PVOID, __int64, __int64 *); // rbx
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)); // rdi
  __int64 v25; // [rsp+30h] [rbp-69h] BYREF
  struct IImmersiveApplicationInternal *v26; // [rsp+38h] [rbp-61h] BYREF
  __int64 v27; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h] BYREF
  __int64 v31; // [rsp+60h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-31h] BYREF
  __int64 v33; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-21h] BYREF
  struct IImmersiveApplicationInternal *v35[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v36; // [rsp+90h] [rbp-9h] BYREF
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v39[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v40; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v41; // [rsp+110h] [rbp+77h] BYREF
  int v42; // [rsp+114h] [rbp+7Bh]
  __int64 (__fastcall ***v43)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // [rsp+118h] [rbp+7Fh] BYREF

  v42 = HIDWORD(a3);
  v39[2] = -2LL;
  *a4 = 0LL;
  v43 = 0LL;
  v25 = 0LL;
  v41 = 0;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
         &v33);
  if ( v7 >= 0 )
  {
    v8 = v33;
    v9 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v33 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v7 = v9(v8, a2, &v25);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v41);
      if ( v7 >= 0 )
      {
        v10 = v41;
        if ( v41 == 1 )
        {
          v11 = v25;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v25 + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
          v7 = v12(v11, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v43);
          v10 = v41;
        }
        if ( v7 >= 0 )
        {
          if ( v10 <= 1 )
          {
LABEL_37:
            if ( v7 >= 0 )
              v7 = (**v43)(v43, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a4);
            goto LABEL_39;
          }
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
          v7 = IUnknown_QueryService(
                 *((IUnknown **)this + 15),
                 (const GUID *const)&SID_VirtualDesktopManager,
                 &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                 &ppvOut);
          if ( v7 < 0 )
          {
LABEL_31:
            if ( !v43 )
            {
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
              v22 = v25;
              v23 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **)))(*(_QWORD *)v25 + 32LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
              v7 = v23(v22, 0LL, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v43);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
            goto LABEL_37;
          }
          v31 = 0LL;
          v13 = ppvOut;
          v14 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 48LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          v7 = v14(v13, &v31);
          if ( v7 < 0 )
          {
LABEL_30:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            goto LABEL_31;
          }
          v15 = 0LL;
          v30 = 0LL;
          v16 = 0LL;
          v29 = 0LL;
          details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
            (__int64)&v36,
            v25);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            (__int64)&v34,
            (__int64)&v36,
            0);
          details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::Iterator(
            (__int64)&v38,
            (__int64)&v36,
            v37);
          while ( v34 != v38 || v35[1] != (struct IImmersiveApplicationInternal *)v39[1] )
          {
            v17 = v35[0];
            v26 = v35[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
            AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            LOBYTE(v17) = CAppViewManager::_IsMultiViewOperationAllowed(v18, v17);
            ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
            if ( (_BYTE)v17 )
            {
              if ( !v15 )
              {
                Microsoft::WRL::ComPtr<IUnknown>::operator=(&v30, (__int64 *)&v26);
                v15 = v30;
              }
              v28 = 0LL;
              v7 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
                     (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v26,
                     &v28);
              if ( v7 >= 0 )
              {
                v27 = 0LL;
                Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                v20 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
                v7 = v20(Ptr, v28, &v27);
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v31 + 24LL))(v31, v27, &v40);
                  if ( v7 >= 0 )
                  {
                    if ( v40 )
                    {
                      Microsoft::WRL::ComPtr<IUnknown>::operator=(&v29, (__int64 *)&v26);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
                      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
                      v16 = v29;
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
            ++v34;
            details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::GetCurrentObject(&v34);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
          if ( v16 )
          {
            v21 = &v29;
          }
          else
          {
            if ( !v15 )
            {
LABEL_29:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
              goto LABEL_30;
            }
            v21 = &v30;
          }
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v21,
            (__int64 *)&v43);
          goto LABEL_29;
        }
      }
    }
  }
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
  return (unsigned int)v7;
}
