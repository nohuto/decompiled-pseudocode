/*
 * XREFs of IoDeleteSymbolicLink @ 0x14073CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1401C2D90 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401C3150 (ZwOpenSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoDeleteSymbolicLink(PUNICODE_STRING SymbolicLinkName)
{
  int TemporaryObject; // ebx
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  *(&v3.Length + 1) = 0;
  memset(&v3.Attributes + 1, 0, 20);
  v3.RootDirectory = 0LL;
  v3.ObjectName = SymbolicLinkName;
  v3.Length = 48;
  v3.Attributes = 576;
  TemporaryObject = ZwOpenSymbolicLinkObject(&Handle, 0x10000u, &v3);
  if ( TemporaryObject >= 0 )
  {
    TemporaryObject = ZwMakeTemporaryObject(Handle);
    if ( TemporaryObject >= 0 )
      ZwClose(Handle);
  }
  return TemporaryObject;
}
