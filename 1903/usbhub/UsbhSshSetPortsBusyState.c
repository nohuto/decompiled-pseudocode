/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C0011840
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001140 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002974 (UsbhSet_Pdo_Dx.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0051440 (UsbhDriverNotFoundWorker.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  LONG result; // eax
  __int64 v9; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // esi
  int v14; // r10d
  int v15; // edi
  __int64 v16; // rsi
  signed __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  int v21; // r10d
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10

  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
    v11 = a2 >> 5;
    v12 = a2 & 0x1F;
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(v9 + 4LL * v11 + 3320) |= 1 << v12;
        Log(a1, 0x10000, 1400066114, v10, a2);
        if ( !v14 )
        {
          v15 = FdoExt(a1);
          v16 = FdoExt(a1);
          v17 = UsbhIncHubBusy(a1, v15 + 1912, a1, 1649439603, a4);
          Log(
            a1,
            0x10000,
            1213419563,
            _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 3312), v17, 0LL),
            v17);
          if ( v18 )
          {
            Log(a1, 0x10000, 1213419570, v18, v19);
            UsbhDecHubBusy(a1, v25, v26);
          }
          UsbhDisableTimerObject(a1, v9 + 3200);
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 4LL * v11 + 3320) &= ~(1 << v12);
      Log(a1, 0x10000, 1400066121, v10, a2);
      if ( v21 && !v20 )
      {
        FdoExt(a1);
        v22 = _InterlockedExchange64((volatile __int64 *)(FdoExt(a1) + 3312), 0LL);
        Log(a1, 0x10000, 1213419565, 0, v22);
        UsbhDecHubBusy(a1, v23, v22);
        v24 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v9 + 3200, *(_DWORD *)(v9 + 5256), 0, v24 + 1912, 0x77485353u);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
