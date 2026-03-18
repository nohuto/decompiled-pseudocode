/*
 * XREFs of ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0018F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000CCE8 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0018FC8 (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::TokenThread(
        CTokenManager *this,
        void *a2,
        struct CSM_TOKEN_ADAPTER_INFO *a3,
        unsigned int a4)
{
  __int64 v7; // rcx
  int v8; // ebx
  struct DXGGLOBAL *Global; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v12; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  Handle = 0LL;
  v8 = CTokenManager::ValidateUserEvent(a2, &v12);
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v7);
    v8 = (*(__int64 (__fastcall **)(HANDLE *))(*((_QWORD *)Global + 2541) + 136LL))(&Handle);
    if ( v8 >= 0 )
      v8 = CTokenManager::ProcessTokens(this, v12, Handle, a3, a4);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v12 )
    ObCloseHandle(v12, 0);
  return (unsigned int)v8;
}
