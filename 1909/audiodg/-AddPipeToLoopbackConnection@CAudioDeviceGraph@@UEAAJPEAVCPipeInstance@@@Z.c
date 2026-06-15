/*
 * XREFs of ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140037410
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x14000DAA0 (-ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x1400356E4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::AddPipeToLoopbackConnection(CPipeInstance **this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v6; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 31);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 31));
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(this[18]);
  v6 = CPipeInstance::ResolvePendingConnections((__int64)a2, -1LL, *((_QWORD *)LoopbackConnection + 1), 0);
  if ( v6 >= 0 )
    v6 = (*((__int64 (__fastcall **)(CPipeInstance **, struct CPipeInstance *))*this + 5))(this, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
