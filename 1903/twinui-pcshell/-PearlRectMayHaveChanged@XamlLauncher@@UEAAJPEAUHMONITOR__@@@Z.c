/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1802F4230
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18003DB2C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180041800 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1802F2800 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  bool *v6; // rdx
  CortanaUndockingHelpers *v7; // rcx
  int CortanaVisibleMonitor; // ebx
  __int64 v9; // rdx
  HRESULT Service; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HMONITOR v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 30);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4) )
  {
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this + 32), &v13);
    if ( CortanaVisibleMonitor < 0 )
    {
      v9 = 287LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)CortanaVisibleMonitor);
      return (unsigned int)CortanaVisibleMonitor;
    }
    if ( a2 == v13 )
    {
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 136LL))(*((_QWORD *)this + 12));
      if ( CortanaVisibleMonitor < 0 )
      {
        v9 = 290LL;
        goto LABEL_6;
      }
    }
  }
  if ( CortanaUndockingHelpers::IsSystemCortanaAppReplaced(v7, v6) )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Service = XamlLauncher::QueryService(
                (XamlLauncher *)((char *)this + 16),
                &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                (void **)&v13);
    CortanaVisibleMonitor = Service;
    if ( Service < 0 )
    {
      v11 = 297LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)Service);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      return (unsigned int)CortanaVisibleMonitor;
    }
    Service = (*(__int64 (__fastcall **)(HMONITOR, HMONITOR))(*(_QWORD *)v13 + 40LL))(v13, a2);
    CortanaVisibleMonitor = Service;
    if ( Service < 0 )
    {
      v11 = 298LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  return 0LL;
}
