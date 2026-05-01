/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049010
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x180049284 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180049370 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800498F8 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     WPP_SF_d @ 0x1800FAE0C (WPP_SF_d.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x180115358 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  signed int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF
  __int64 v21; // [rsp+90h] [rbp+48h] BYREF
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF

  v18 = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v21 = 0LL;
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v21);
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      v5 = v21;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v20);
      if ( v4 >= 0 )
      {
        if ( IsPPIEdition() && IsPPIFullFrameUI() )
        {
          v22 = 0LL;
          v6 = v20;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 144LL))(v6, &v22) >= 0 )
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 104LL))(v22, 255LL, 24LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        }
        v19 = 0LL;
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
               &v19,
               &v17,
               &v16,
               &v15,
               v20,
               v5,
               (char *)this - 40,
               v18);
        if ( v4 < 0 )
          goto LABEL_23;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v7 = SHIsSameObject(*((struct IUnknown **)this + 17), *(struct IUnknown **)(v19 + 128));
        v4 = v7 == 0 ? 0x80070057 : 0;
        if ( v7 )
        {
          v4 = 0;
          v8 = *((_QWORD *)this + 9);
          if ( v8 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (char *)this + 64,
                       v8 + 1),
                v4 >= 0) )
          {
            v9 = (_QWORD *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
            if ( v9 )
            {
              v10 = v19;
              *v9 = v19;
              if ( v10 )
              {
                v11 = *(_QWORD *)(v10 + 72);
                while ( v11 >= 0 )
                {
                  if ( (_DWORD)v11 != 0x7FFFFFFF )
                  {
                    v12 = v11;
                    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 72), v11 + 1, v11);
                    if ( v12 != v11 )
                      continue;
                  }
                  goto LABEL_21;
                }
                Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
LABEL_21:
                v5 = v21;
              }
            }
          }
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_23:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v20);
        v13 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release(v13);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_d1bd8dcf75933f6f1917576b18baace1_Traceguids,
          *((unsigned int *)this + 14));
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  }
  return (unsigned int)v4;
}
