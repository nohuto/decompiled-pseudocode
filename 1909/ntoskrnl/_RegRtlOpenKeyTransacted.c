/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1405C3B98
 * Callers:
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     _SysCtxOpenMachine @ 0x140755E58 (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x140756088 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407869D4 (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14078B5D0 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14093E878 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x1401C2FB0 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407869D4 (_RegRtlOpenPredefinedKey.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x14093EB0C (NtOpenKeyTransactedEx_Stub.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  char *v10; // rdi
  NTSTATUS inited; // ebx
  __int64 v12; // rdi
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  char *v17; // [rsp+A0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v17 = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_7;
    v10 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v10 )
    a1 = v10;
  v12 = a6;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = (a3 & 8) != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( a6 )
  {
    inited = NtOpenKeyTransactedEx_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, a3, a6);
    if ( inited == -1073741702 )
    {
      if ( byte_14050EB68 )
      {
        v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_14050EB58;
      }
      else
      {
        v14 = ZwOpenKeyTransacted;
        byte_14050EB68 = 1;
        qword_14050EB58 = (__int64)ZwOpenKeyTransacted;
      }
      if ( !v14
        || (inited = ((__int64 (__fastcall *)(PHANDLE, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
                       KeyHandle,
                       a4,
                       &ObjectAttributes,
                       v12),
            inited == -1073741702) )
      {
        inited = -1072103420;
      }
    }
  }
  else
  {
    inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
  }
LABEL_7:
  v10 = v17;
LABEL_8:
  if ( v10 )
    ZwClose(v10);
  return (unsigned int)inited;
}
