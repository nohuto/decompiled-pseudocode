/*
 * XREFs of AslRegistryGetKey @ 0x140775C00
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140775B84 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslpProcessMatchRegNode @ 0x1409284C8 (AslpProcessMatchRegNode.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x140775CE8 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140775D9C (AslRegistryBuildUserPath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  int v8; // ebx
  NTSTATUS v9; // eax
  HANDLE v11; // rax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !a4 )
  {
    v8 = AslRegistryBuildUserPath(&Destination, a2);
    if ( v8 >= 0 )
      goto LABEL_3;
LABEL_9:
    AslLogCallPrintf(1LL);
    goto LABEL_5;
  }
  v8 = AslRegistryBuildMachinePath(&Destination, a2);
  if ( v8 < 0 )
    goto LABEL_9;
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741772 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v11 = KeyHandle;
  v8 = 0;
  KeyHandle = 0LL;
  *a1 = v11;
LABEL_5:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x74705041u);
  return (unsigned int)v8;
}
