/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1406C4990
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v7; // r8
  NTSTATUS inserted; // ecx
  _BYTE *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-20h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WaitCompletionPacketHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)WaitCompletionPacketHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               v3,
               PreviousMode,
               v11,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v9 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v9[104] = 0;
    *((_QWORD *)v9 + 11) = 0LL;
    inserted = ObInsertObjectEx(v9, 0LL, DesiredAccess, 0, 0, 0LL, &v12);
    if ( inserted >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v12;
  }
  return inserted;
}
