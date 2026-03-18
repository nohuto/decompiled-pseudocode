/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x14093F09C
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1405C36C8 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_14050EE20 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_14050EE18;
  }
  else
  {
    v1 = ZwOpenKeyTransactedEx;
    byte_14050EE20 = 1;
    qword_14050EE18 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v1 )
    return ((__int64 (__fastcall *)(__int64))v1)(a1);
  else
    return 3221225594LL;
}
