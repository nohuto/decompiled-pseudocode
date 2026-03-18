/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x140709534
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x140709B90 (EtwpProcessEnumCallback.c)
 *     EtwpIsStackWalkingEnabled @ 0x14070A398 (EtwpIsStackWalkingEnabled.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, __int64 a2, char a3, unsigned int **a4, unsigned int a5)
{
  NTSTATUS v8; // r15d
  __int64 v10; // rdx
  unsigned int v12; // edx
  _DWORD *v13; // rcx
  _QWORD v14[10]; // [rsp+20h] [rbp-50h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+20h] BYREF

  v8 = 0;
  memset(v14, 0, 0x48uLL);
  v14[0] = a1;
  v14[4] = a2;
  v10 = 1283LL;
  LOBYTE(v14[8]) = a3;
  if ( !a3 )
    v10 = 1284LL;
  BYTE2(v14[8]) = EtwpIsStackWalkingEnabled(a2, v10);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
    v14[1] = (char *)&EtwpObjectTypeFilter + 20 * *(unsigned __int8 *)(a2 + 834);
  v14[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v14[2] )
    LOWORD(v14[3]) = 0x2000;
  if ( a5 && a4 )
  {
    v12 = 0;
    v13 = (_DWORD *)a4 + 3;
    while ( *v13 != -2147483644 )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= a5 )
        goto LABEL_8;
    }
    v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
    if ( v8 >= 0 )
      EtwpProcessEnumCallback((ULONG_PTR)Process);
  }
  else
  {
LABEL_8:
    EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpProcessEnumCallback, (__int64)v14);
  }
  if ( v14[2] )
    ExFreePoolWithTag((PVOID)v14[2], 0);
  if ( v14[6] )
    ExFreePoolWithTag((PVOID)v14[6], 0);
  return (unsigned int)v8;
}
