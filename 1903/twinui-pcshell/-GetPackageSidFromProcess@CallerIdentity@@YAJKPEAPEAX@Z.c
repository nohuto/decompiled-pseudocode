/*
 * XREFs of ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180408184
 * Callers:
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180121AD8 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 * Callees:
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@@23@PEAX@Z @ 0x18000F7C4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstal.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18000F83C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1804081F4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcess(DWORD dwProcessId, _QWORD *a2, void **a3)
{
  HANDLE v4; // rax
  void **v5; // r8
  signed int PackageSidFromProcessHandle; // edi
  CallerIdentity *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
    &v8,
    (__int64)v4);
  if ( v8 || (PackageSidFromProcessHandle = ResultFromKnownLastError(), PackageSidFromProcessHandle >= 0) )
    PackageSidFromProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(v8, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>((void **)&v8);
  return (unsigned int)PackageSidFromProcessHandle;
}
