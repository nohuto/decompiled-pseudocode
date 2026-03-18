/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0052AD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  int SessionTokenManager; // eax
  __int64 v1; // rcx
  __int64 v2; // rbx
  unsigned int v3; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v6);
  v2 = v6;
  v3 = SessionTokenManager;
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(v1), (*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 256LL))()) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
  }
  else
  {
    v3 = -1073741790;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  KeLeaveCriticalRegion();
  return v3;
}
