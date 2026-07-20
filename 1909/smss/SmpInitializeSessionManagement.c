/*
 * XREFs of SmpInitializeSessionManagement @ 0x14000856C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpInitCoreProcessArray @ 0x1400085C4 (SmpInitCoreProcessArray.c)
 */

NTSTATUS SmpInitializeSessionManagement()
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v1; // [rsp+30h] [rbp-38h] BYREF

  v1.RootDirectory = 0LL;
  v1.ObjectName = 0LL;
  v1.Length = 48;
  v1.Attributes = 2;
  *(_OWORD *)&v1.SecurityDescriptor = 0LL;
  result = NtCreateEvent(&SmpSessionCreateBlockEvent, 0x100002u, &v1, NotificationEvent, 1u);
  if ( result >= 0 )
    return SmpInitCoreProcessArray();
  return result;
}
