/*
 * XREFs of ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005FD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A204 (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005B76C (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005BA00 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  CSpatialCrossProcessBaseEndpoint *v4; // rdi
  int v5; // esi
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // si
  unsigned int v11; // edx
  int v12; // eax

  v4 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1064);
  v5 = a2;
  v7 = a2;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((__int64)this, a2, (__int64)v4, 7, a2, *((_BYTE *)this + 72), *((_DWORD *)this + 16));
  CSpatialCrossProcessEndpointTraceLogger::LogReleaseInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 664),
    v5,
    *((_BYTE *)this + 72),
    a4);
  CSpatialCrossProcessBaseEndpoint::CheckGlitches(v4);
  v10 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, _QWORD))(*(_QWORD *)v4 + 88LL))(
      v4,
      *((unsigned int *)this + 17));
    v11 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 72) = 0;
    v12 = CSpatialCrossProcessBaseEndpoint::CommitRead(v4, v11);
    v10 = v12;
    if ( v12 < 0 )
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer", 382, v12);
  }
  *((_DWORD *)this + 19) = -2147418113;
  *((_BYTE *)this - 88) = 0;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v9, v8, (__int64)v4, 8, v7, v10, 0);
}
