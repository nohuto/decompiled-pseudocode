/*
 * XREFs of ?CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ @ 0x180006CFC
 * Callers:
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180006B8C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::CheckSetWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  int v1; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 368);
  if ( (v1 & 8) != 0 )
    return 0;
  *((_DWORD *)this + 368) = v1 | 8;
  v4 = -10000LL * *(unsigned int *)(*((_QWORD *)this + 3) + 104LL);
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)this + 8LL))(this);
  TpSetTimer(*((_QWORD *)this + 183), &v4, 0LL, *(unsigned int *)(*((_QWORD *)this + 3) + 108LL));
  return 1;
}
