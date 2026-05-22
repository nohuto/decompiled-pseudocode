/*
 * XREFs of ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208
 * Callers:
 *     ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1801101B0 (-DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x18010A044 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18010F6DC (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18010FBC0 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180110360 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback(
        __int64 a1,
        int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  _DWORD *v6; // rcx
  HolographicDriverClientTrace *v7; // rcx
  const wchar_t *v8; // r8
  int v9; // edx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  HolographicDriverClientTrace *v12; // rcx
  int v13; // esi
  int v14; // eax
  _DWORD *v15; // rcx
  HolographicDriverClientTrace *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 - 2;
  if ( !v3 )
  {
    v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v15 && *v15 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Information_(v16, 0, L"Device Query Remove");
    }
    v9 = 4319;
    goto LABEL_25;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      v6 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( !v6 || !*v6 )
        goto LABEL_9;
      HolographicDriverClientTrace::Instance();
      v8 = L"Device Remove Complete";
    }
    else
    {
      v10 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( !v10 || !*v10 )
        goto LABEL_9;
      HolographicDriverClientTrace::Instance();
      v8 = L"Device Remove Pending";
    }
    HolographicDriverClientTrace::Log_Information_(v7, 0, v8);
LABEL_9:
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
      (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1,
      1);
    v9 = 1617;
LABEL_25:
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
      (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1,
      v9);
    return;
  }
  v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v11 && *v11 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::Log_Information_(v12, 0, L"Device Query Remove Failed");
  }
  AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  v13 = *(_DWORD *)(a1 + 128);
  if ( a1 != -120 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 120));
  if ( v13 == -2147020577 )
  {
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
      (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1,
      1);
    v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a1);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x30F,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)(unsigned int)v14);
      goto LABEL_9;
    }
  }
}
