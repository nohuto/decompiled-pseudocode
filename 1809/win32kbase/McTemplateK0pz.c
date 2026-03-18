/*
 * XREFs of McTemplateK0pz @ 0x1C0108360
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0024770 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C005DB30 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C0068D00 (EngReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C0107D30 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
