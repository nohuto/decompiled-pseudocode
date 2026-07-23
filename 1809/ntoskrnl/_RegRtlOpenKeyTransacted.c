/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1405C8B4C
 * Callers:
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _SysCtxOpenMachine @ 0x14073CC58 (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x14073CE88 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x14075E3EC (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     _RegRtlOpenPredefinedKey @ 0x14075E3EC (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        char a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  void *v6; // rbx
  void *v10; // rsi
  NTSTATUS inited; // edi
  int v12; // r14d
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *v17; // [rsp+A0h] [rbp+30h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v10 = a1;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_7;
    v6 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_8;
  v12 = a3 & 8;
  ObjectAttributes.Length = 48;
  if ( v6 )
    v10 = v6;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = v12 != 0 ? 832 : 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( !a6 )
  {
    inited = ZwOpenKey(KeyHandle, a4, &ObjectAttributes);
LABEL_7:
    v6 = v17;
    goto LABEL_8;
  }
  if ( byte_1404E26C8 )
  {
    v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_1404E26B8;
  }
  else
  {
    v14 = ZwOpenKeyTransacted;
    byte_1404E26C8 = 1;
    qword_1404E26B8 = (__int64)ZwOpenKeyTransacted;
  }
  if ( v14 )
  {
    inited = ((__int64 (__fastcall *)(PHANDLE, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
               KeyHandle,
               a4,
               &ObjectAttributes,
               a6);
    if ( inited != -1073741702 )
      goto LABEL_7;
    v6 = v17;
  }
  inited = -1072103420;
LABEL_8:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}
