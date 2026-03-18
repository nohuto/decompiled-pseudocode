/*
 * XREFs of ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C028AC04
 * Callers:
 *     DxgkSetGlobalRawmodeFlag @ 0x1C023BBC0 (DxgkSetGlobalRawmodeFlag.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 */

__int64 __fastcall CCD_BTL::SetUnsupportedMonitorModesFlag(CCD_BTL *this, unsigned __int8 a2)
{
  int v3; // edi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  int Data; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  v3 = a2;
  DxgkLogCodePointPacket(0x29u, *((_BYTE *)this + 144) != 0, a2, 0, 0LL);
  *((_BYTE *)this + 144) = v3;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v6 = v4;
  if ( v4 < 0
    || (Data = v3,
        RtlInitUnicodeString(&DestinationString, L"UnsupportedMonitorModesAllowed"),
        v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u),
        ZwClose(KeyHandle),
        (int)v6 < 0) )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
