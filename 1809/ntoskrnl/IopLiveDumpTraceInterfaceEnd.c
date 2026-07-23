/*
 * XREFs of IopLiveDumpTraceInterfaceEnd @ 0x1402860EC
 * Callers:
 *     DbgkpWerCleanupContext @ 0x140813C10 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140820768 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285D68 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceInterfaceEnd(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v4; // edx
  int v5; // r8d
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v4 )
    {
      v6 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_END;
      if ( v5 != 1 )
        v6 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_END;
    }
    else
    {
      v6 = (const EVENT_DESCRIPTOR *)&LIVEDUMP_EVENT_CAPTURE_API_END;
    }
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v8;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v6, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
