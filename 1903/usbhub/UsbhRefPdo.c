/*
 * XREFs of UsbhRefPdo @ 0x1C001CFB0
 * Callers:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0004B20 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusResume_Action @ 0x1C0014B40 (UsbhBusResume_Action.c)
 *     UsbhSetPortData @ 0x1C0026514 (UsbhSetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v7; // rdi
  char *PoolWithTag; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    v9 = v7 + 318;
    *(_QWORD *)(PoolWithTag + 4) = 0LL;
    *(_QWORD *)(PoolWithTag + 12) = 0LL;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 7) = 0;
    *(_DWORD *)PoolWithTag = 1668571500;
    *((_QWORD *)PoolWithTag + 4) = a2;
    *((_DWORD *)PoolWithTag + 6) = a4;
    *((_QWORD *)PoolWithTag + 5) = a3;
    v10 = PoolWithTag + 8;
    v11 = (_QWORD *)*((_QWORD *)v9 + 1);
    if ( (_DWORD *)*v11 != v9 )
      __fastfail(3u);
    *v10 = v9;
    v10[1] = v11;
    *v11 = v10;
    *((_QWORD *)v9 + 1) = v10;
  }
  else
  {
    ++v7[322];
  }
  return a2;
}
