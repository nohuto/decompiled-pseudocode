/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1800C4F34
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801248F0 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CD40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180066814 (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x1800C50B4 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall DWMInputRouter::RequestUIAHitTest(
        DWMInputRouter *this,
        struct _GUID *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4)
{
  __int64 *i; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  struct _GUID v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h]
  _BYTE v16[8]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-30h]

  v15 = -2LL;
  *retstr = GUID_NULL;
  *(_QWORD *)&v14.Data1 = __PAIR64__(a4, a3);
  memset_0(&v19, 0, 0x90uLL);
  v20 = *(_QWORD *)&v14.Data1;
  *((_QWORD *)&v19 + 1) = 0LL;
  LODWORD(v19) = 0;
  HitTestHelper::HitTestRequestWithRetry(
    (__int64)v16,
    &v19,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 29));
  for ( i = (__int64 *)v17[0]; i != (__int64 *)v17[1]; ++i )
  {
    v9 = *i;
    v10 = 0LL;
    *(_QWORD *)&v14.Data1 = 0LL;
    v11 = *(_QWORD *)(v9 + 392);
    v12 = *(_QWORD *)(v9 + 400);
    if ( v11 != v12 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 8),
                    (__int64 *)&v14) >= 0 )
          break;
        v11 += 16LL;
      }
      while ( v11 != v12 );
      v10 = *(_QWORD *)&v14.Data1;
    }
    if ( v10 )
    {
      *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v14);
      break;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v14);
  }
  v14 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, &v14);
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v18);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v17);
  return retstr;
}
