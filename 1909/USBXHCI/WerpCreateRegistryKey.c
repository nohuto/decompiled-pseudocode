/*
 * XREFs of WerpCreateRegistryKey @ 0x1C0049CC4
 * Callers:
 *     WerKernelCreateReport @ 0x1C00490E4 (WerKernelCreateReport.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 */

__int64 __fastcall WerpCreateRegistryKey(
        void *a1,
        const WCHAR *a2,
        ACCESS_MASK a3,
        char a4,
        PHANDLE KeyHandle,
        bool *a6)
{
  void **v10; // rbx
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+A8h] [rbp+28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Disposition = 0;
  if ( a2 && (v10 = KeyHandle) != 0LL )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwCreateKey(v10, a3, &ObjectAttributes, 0, 0LL, a4 != 0, &Disposition);
    v12 = v11;
    if ( v11 >= 0 )
    {
      if ( a6 )
        *a6 = Disposition == 1;
      return 0;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x\n", 107, v11);
    }
    return v12;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 84);
    return 3221225485LL;
  }
}
