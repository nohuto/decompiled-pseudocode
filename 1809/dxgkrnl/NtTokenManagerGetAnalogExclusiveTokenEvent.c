/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00532E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // edi
  __int64 v5; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v2);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))() )
  {
    v8 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v8);
    if ( SessionTokenManager >= 0 )
    {
      v5 = v8;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v8 + 104LL))(v8, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_13;
  if ( Handle == (HANDLE)-1LL )
  {
    SessionTokenManager = -1073741811;
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = Handle;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_13:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
