/*
 * XREFs of ProcLibCapChange @ 0x1C0022FA4
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001700 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C0010300 (PccCapWorker.c)
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002C7E0 (CpcGuaranteedNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0030EF0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0031C30 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C00382F0 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 728);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 736) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 728) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 908) == 0;
    *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 760), (LARGE_INTEGER)-3000000000LL, 300000, (PKDPC)(a1 + 824));
      *(_BYTE *)(a1 + 908) = 1;
    }
    if ( !*(_BYTE *)(a1 + 1060) )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 912), (LARGE_INTEGER)-711573504LL, 86400000, (PKDPC)(a1 + 976));
      *(_BYTE *)(a1 + 1060) = 1;
    }
  }
  if ( a2 != *(_DWORD *)(a1 + 448) )
  {
    ++*(_DWORD *)(a1 + 744);
    *(_DWORD *)(a1 + 448) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 496) )
  {
    ++*(_DWORD *)(a1 + 748);
    *(_DWORD *)(a1 + 496) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 724) )
  {
    ++*(_DWORD *)(a1 + 752);
    *(_DWORD *)(a1 + 724) = a4;
  }
  return result;
}
