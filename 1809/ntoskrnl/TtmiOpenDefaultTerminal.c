/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x14087FD3C
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x140883150 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v7 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 24), a2, TtmpTerminalObjectType, 0, &Object, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = v7;
    v10 = v7;
    v11 = 787;
LABEL_5:
    TtmiLogError("TtmiOpenDefaultTerminal", v11, v10, v9);
    return (unsigned int)v8;
  }
  v8 = ObOpenObjectByPointer(Object, a3 == 0 ? 0x200 : 0, 0LL, a2, TtmpTerminalObjectType, a3, a4);
  ObfDereferenceObject(Object);
  if ( v8 < 0 )
  {
    v9 = v8;
    v10 = v8;
    v11 = 812;
    goto LABEL_5;
  }
  return (unsigned int)v8;
}
