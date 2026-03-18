/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x140787598
 * Callers:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1406D42AC (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(HANDLE *a1)
{
  char PreviousMode; // dl
  ULONG v3; // eax
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( PreviousMode != 1 )
    v3 = 576;
  ObjectAttributes.Attributes = v3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140373800;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *a1 = KeyHandle;
    return 0;
  }
  return result;
}
