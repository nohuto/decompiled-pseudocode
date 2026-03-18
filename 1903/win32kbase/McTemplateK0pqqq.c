/*
 * XREFs of McTemplateK0pqqq @ 0x1C0110924
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021DF8 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 *     HMFreeObject @ 0x1C00283C0 (HMFreeObject.c)
 *     EtwTraceUserCreateHandle @ 0x1C006F790 (EtwTraceUserCreateHandle.c)
 *     EtwTraceUserDestroyHandle @ 0x1C006FA60 (EtwTraceUserDestroyHandle.c)
 *     EtwTraceGdiCreateHandle @ 0x1C007CB5C (EtwTraceGdiCreateHandle.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C008B030 (EtwTraceUserUpdateHandleOwner.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0pqqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const void *Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2,
        const unsigned int Arg3)
{
  unsigned int v8; // [rsp+30h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-21h] BYREF
  const void **v10; // [rsp+50h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-9h]
  const unsigned int *p_Arg1; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  unsigned int *v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  const unsigned int *p_Arg3; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]
  const void *v18; // [rsp+C8h] [rbp+67h] BYREF

  v18 = Arg0;
  v8 = gSessionId;
  v11 = 8LL;
  v10 = &v18;
  p_Arg1 = &Arg1;
  v14 = &v8;
  p_Arg3 = &Arg3;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite(Context, Descriptor, (LPCGUID)&::Context.Flags, 5u, &EventData);
}
