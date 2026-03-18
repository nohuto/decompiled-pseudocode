/*
 * XREFs of PspCreatePartitionSystemProcess @ 0x1408CB878
 * Callers:
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePartitionSystemProcess(HANDLE *a1, _QWORD *a2)
{
  char v4; // r9
  int v5; // eax
  HANDLE v6; // rbx
  NTSTATUS v7; // edi
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  Handle = 0LL;
  v9[1] = L"PartitionSystm";
  v4 = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[4]);
  v9[0] = 1966108LL;
  v5 = PsCreateMinimalProcess(PsInitialSystemProcess, (__int64)v9, 0LL, v4, 0LL, 0, 1, 0LL, 0LL, &Handle);
  v6 = Handle;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0LL);
    if ( v7 >= 0 )
    {
      *a1 = Handle;
      result = 0LL;
      *a2 = v6;
      return result;
    }
    if ( Handle )
      ObfDereferenceObject(Handle);
  }
  if ( v6 )
    ObCloseHandle(v6, 0);
  return (unsigned int)v7;
}
