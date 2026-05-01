/*
 * XREFs of _lambda_5c4dcf32e9336cd9917ef269905ba39d_::operator() @ 0x1803943E8
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___ @ 0x18039396C (ShellPositionerManager--DoWorkForEachMonitor__lambda_5c4dcf32e9336cd9917ef269905ba39d___.c)
 * Callees:
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180048578 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5c4dcf32e9336cd9917ef269905ba39d_::operator()(
        __int64 a1,
        IUnknown *a2,
        IUnknown *a3,
        __int64 a4)
{
  void *v8; // rbx
  void (__fastcall *v9)(void *, __int64, _QWORD, __int64 *); // rdi
  int PositionerForMonitor; // eax
  unsigned int v11; // ebx
  void *v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v16; // [rsp+70h] [rbp+20h] BYREF

  v14[1] = -2LL;
  v14[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( (int)ShellPositionerManager::GetPositionerForMonitor(
              *(_DWORD *)(a1 + 8),
              a2,
              &GUID_ee010e17_919a_4068_868b_675acf787303,
              &v13) >= 0 )
  {
    v8 = v13;
    v9 = *(void (__fastcall **)(void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    v9(v8, a4, *(unsigned int *)(a1 + 12), v14);
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           *(_DWORD *)(a1 + 12),
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           &v16);
  v11 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v16 + 96LL))(
      v16,
      a4,
      *(unsigned int *)(a1 + 8),
      v14[0],
      *(_QWORD *)(a1 + 16));
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x378,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
  return v11;
}
