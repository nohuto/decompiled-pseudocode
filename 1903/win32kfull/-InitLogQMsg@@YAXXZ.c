/*
 * XREFs of ?InitLogQMsg@@YAXXZ @ 0x1C00E0B2C
 * Callers:
 *     InitModuleAllocations @ 0x1C00E0C00 (InitModuleAllocations.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01D67A8 (-EnsureQMsgLog@@YAHXZ.c)
 *     MsgQRegGetDWORD @ 0x1C01D6CCC (MsgQRegGetDWORD.c)
 */

void InitLogQMsg(void)
{
  int v0; // eax
  ULONG v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v4; // [rsp+70h] [rbp+10h]
  void *KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  gMsgQLog = 0LL;
  qword_1C0327DC0 = 0LL;
  qword_1C0327DD4 = 0LL;
  dword_1C0327DDC = 0;
  dword_1C0327DC8 = 256;
  Count = 16;
  dword_1C0327DD0 = 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\USERPostMessageLog");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      LODWORD(gMsgQLog) = v4 != 0;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
    {
      v0 = 0x2000;
      if ( v4 < 0x2000 )
        v0 = v4;
      dword_1C0327DC8 = v0;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 3 )
      dword_1C0327DD0 = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
    {
      v1 = 64;
      if ( v4 < 0x40 )
        v1 = v4;
      Count = v1;
    }
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      HIDWORD(gMsgQLog) = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 )
      LODWORD(qword_1C0327DC0) = v4;
    if ( (int)MsgQRegGetDWORD(KeyHandle) >= 0 && v4 < 2 )
      LODWORD(qword_1C0327DD4) = v4;
    EnsureQMsgLog();
    ZwClose(KeyHandle);
  }
}
