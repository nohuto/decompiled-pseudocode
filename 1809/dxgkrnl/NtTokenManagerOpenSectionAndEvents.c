/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x1C0019AC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(HANDLE *a1, _QWORD *a2, HANDLE *a3, HANDLE *a4)
{
  _QWORD *v6; // rbx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // esi
  __int64 v11; // rbx
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  HANDLE v14; // [rsp+40h] [rbp-38h] BYREF
  HANDLE v15; // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF

  v6 = a2;
  v15 = (HANDLE)-1LL;
  v17 = 0LL;
  v14 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v8);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
  {
    v16 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v16);
    if ( SessionTokenManager >= 0 )
    {
      v11 = v16;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *, __int64 *, HANDLE *, HANDLE *))(*(_QWORD *)v16 + 48LL))(
                              v16,
                              &v15,
                              &v17,
                              &v14,
                              &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v6 = a2;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( a1 && v6 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v15;
    if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v6 = v17;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v14;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = Handle;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v14 != (HANDLE)-1LL )
      ObCloseHandle(v14, 1);
    if ( v15 != (HANDLE)-1LL )
      ObCloseHandle(v15, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
