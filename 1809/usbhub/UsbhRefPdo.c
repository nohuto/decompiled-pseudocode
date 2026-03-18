/*
 * XREFs of UsbhRefPdo @ 0x1C001C4B0
 * Callers:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C00047D0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshResumePort @ 0x1C0006C70 (UsbhSshResumePort.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhBusPause_Action @ 0x1C0008F50 (UsbhBusPause_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusResume_Action @ 0x1C0014460 (UsbhBusResume_Action.c)
 *     UsbhSetPortData @ 0x1C00255E0 (UsbhSetPortData.c)
 * Callees:
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v7; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v10 = v7 + 318;
    *(_DWORD *)v9 = 1668571500;
    v9[4] = a2;
    v11 = v9 + 1;
    *((_DWORD *)v9 + 6) = a4;
    v9[5] = a3;
    v12 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( (_DWORD *)*v12 != v10 )
      __fastfail(3u);
    *v11 = v10;
    v9[2] = v12;
    *v12 = v11;
    *((_QWORD *)v10 + 1) = v11;
  }
  else
  {
    ++v7[322];
  }
  return a2;
}
