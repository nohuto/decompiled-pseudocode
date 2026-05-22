/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1800F8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800F8C00 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // r14
  __int64 *v13; // rsi
  __int64 *v14; // rbx
  __int64 v16[2]; // [rsp+38h] [rbp-91h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-81h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h]
  char v21[8]; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v23; // [rsp+88h] [rbp-41h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+57h]

  v20 = -2LL;
  v16[0] = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
  v8 = **v7;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v16);
  v9 = v8(v7, &GUID_b694737b_3300_4bb1_8b67_44715c8db610, v16);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      25LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\testcommands.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *(_QWORD *)v16[0];
  v16[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(__int64, char *, unsigned __int64, _QWORD))(v10 + 24))(v16[0], v21, __PAIR64__(a4, a3), 0LL);
  if ( v21[0] )
  {
    v11 = (__int64 *)v22[0];
    v12 = (__int64 *)v22[1];
    while ( v11 != v12 )
    {
      InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(*v11, (__int64)&v17);
      v13 = v18;
      v14 = v17;
      if ( v17 != v18 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v14 + 24LL))(
            *v14,
            a3,
            a4,
            a5);
          ++v14;
        }
        while ( v14 != v13 );
        v13 = v18;
        v14 = v17;
      }
      if ( v14 )
      {
        if ( v14 != v13 )
        {
          do
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v14++);
          while ( v14 != v13 );
          v14 = v17;
        }
        std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v19 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      ++v11;
    }
  }
  if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v23);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v22);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v16);
  return 0LL;
}
