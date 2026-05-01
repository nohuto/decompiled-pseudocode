/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180013670
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18001382C (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180013C38 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     WPP_SF_d @ 0x180120D8C (WPP_SF_d.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x18013CA08 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rcx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h]
  __int64 v20; // [rsp+80h] [rbp+38h] BYREF
  __int64 v21; // [rsp+88h] [rbp+40h] BYREF
  __int64 v22; // [rsp+90h] [rbp+48h] BYREF
  __int64 v23; // [rsp+98h] [rbp+50h] BYREF

  v19 = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v22 = 0LL;
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v22);
    if ( v4 >= 0 )
    {
      v21 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v21);
      if ( v4 >= 0 )
      {
        if ( IsPPIEdition() && IsPPIFullFrameUI() )
        {
          v23 = 0LL;
          v14 = v21;
          v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 144LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
          if ( v15(v14, &v23) >= 0 )
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 104LL))(v23, 1023LL, 24LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        }
        v20 = 0LL;
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
               &v20,
               &v18,
               &v17,
               &v16,
               v21,
               v22,
               (char *)this - 40,
               v19);
        if ( v4 < 0 )
          goto LABEL_28;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 17), *(struct IUnknown **)(v20 + 128)) )
        {
          v4 = 0;
          v7 = *((_QWORD *)this + 9);
          if ( v7 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (char *)this + 64,
                       v7 + 1,
                       v5,
                       v6),
                v4 >= 0) )
          {
            v8 = (_QWORD *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
            if ( v8 )
            {
              v9 = v20;
              *v8 = v20;
              if ( v9 )
              {
                v10 = *(_QWORD *)(v9 + 72);
                while ( v10 >= 0 )
                {
                  v11 = v10;
                  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v10 + 1, v10);
                  if ( v11 == v10 )
                    goto LABEL_13;
                }
                _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
              }
            }
          }
        }
        else
        {
          v4 = -2147024809;
        }
LABEL_13:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_28:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release(v12);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_d1bd8dcf75933f6f1917576b18baace1_Traceguids,
          *((unsigned int *)this + 14));
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  }
  return (unsigned int)v4;
}
