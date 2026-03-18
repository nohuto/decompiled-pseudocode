/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x1408F2040
 * Callers:
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x1406AA1FC (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1408F2170 (EtwpUpdateProcessTracingCallback.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int16 *FlagExtension; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h]

  v4 = a4;
  HIBYTE(v14) = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  FlagExtension = EtwpGetFlagExtension(a1, 2);
  if ( FlagExtension )
  {
    v9 = (unsigned int *)(FlagExtension + 2);
    v10 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v9, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  LOBYTE(v14) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v14;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1104LL) + 2 * v4 + 550) = v14;
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
