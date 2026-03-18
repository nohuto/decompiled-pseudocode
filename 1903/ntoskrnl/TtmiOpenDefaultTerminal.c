/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x1408BC600
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x1408BFC58 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v7 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), a2, TtmpTerminalObjectType, 0, &Object, 0LL);
  if ( v7 < 0
    || (v7 = ObOpenObjectByPointer(Object, a3 == 0 ? 0x200 : 0, 0LL, a2, TtmpTerminalObjectType, a3, a4),
        ObfDereferenceObject(Object),
        v7 < 0) )
  {
    TtmiLogError("TtmiOpenDefaultTerminal");
  }
  return (unsigned int)v7;
}
