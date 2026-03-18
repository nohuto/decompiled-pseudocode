/*
 * XREFs of CmpTraceHiveMountStop @ 0x14068D020
 * Callers:
 *     HvHiveStartFileBacked @ 0x14068CE18 (HvHiveStartFileBacked.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveMountStop(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = a1;
  v1 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v5;
    UserData.Size = 4;
    return EtwWrite(v1, &EventDescriptor, 0LL, 1u, &UserData);
  }
  return result;
}
