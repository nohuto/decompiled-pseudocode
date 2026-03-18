/*
 * XREFs of McTemplateK0pz @ 0x1C0132610
 * Callers:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0025390 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     EngAllocMem @ 0x1C0059980 (EngAllocMem.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0061100 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngFreeMem @ 0x1C0078B80 (EngFreeMem.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C007A8F0 (EngReleaseSemaphore.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C007AE90 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00BAF50 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0pz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        struct _MCGEN_TRACE_CONTEXT *a5)
{
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  struct _MCGEN_TRACE_CONTEXT *v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4;
  v5 = a5;
  v11 = &v16;
  v12 = 8LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *((_WORD *)&a5->RegistrationHandle + v7) );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v5 = (struct _MCGEN_TRACE_CONTEXT *)&Context;
  v13 = v5;
  return McGenEventWrite(v5, a2, (LPCGUID)&Context.Flags, 3u, &EventData);
}
