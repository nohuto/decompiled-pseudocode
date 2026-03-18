/*
 * XREFs of PsLookupProcessThreadByCid @ 0x140672E10
 * Callers:
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID v7; // rdi
  void *v8; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&Object);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_QWORD *)Object + 201) == *(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v8 = (void *)*((_QWORD *)Object + 68);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741813;
    }
  }
  return result;
}
