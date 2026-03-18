/*
 * XREFs of ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0015A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0015BAC (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 */

void __fastcall FxThreadedEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, void *Context)
{
  FxPkgPnp *v2; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  KIRQL v5; // al
  KIRQL v6; // r8
  char v7; // dl
  char v8; // cl
  FxPostProcessInfo v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = (FxPkgPnp *)*((_QWORD *)Context + 1);
  v9.m_Event = 0LL;
  *(_WORD *)&v9.m_DeleteObject = 0;
  v9.m_FireAndForgetIrp = 0LL;
  m_Globals = v2->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00AEE88.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00AEE88.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    v2 = (FxPkgPnp *)*((_QWORD *)Context + 1);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  *((_BYTE *)Context + 96) &= ~1u;
  ++*((_BYTE *)Context + 97);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v5);
  (*((void (__fastcall **)(_QWORD, FxPostProcessInfo *, _QWORD))Context + 10))(
    *((_QWORD *)Context + 1),
    &v9,
    *((_QWORD *)Context + 2));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  v7 = *((_BYTE *)Context + 96);
  v8 = *((_BYTE *)Context + 97) - 1;
  *((_BYTE *)Context + 97) = v8;
  if ( (v7 & 1) == 0 && !v8 && *(_BYTE *)Context == *((_BYTE *)Context + 1) )
  {
    if ( (v7 & 4) != 0 )
    {
      v7 &= ~4u;
      v9.m_DeleteObject = 1;
      *((_BYTE *)Context + 96) = v7;
    }
    if ( (v7 & 2) != 0 )
    {
      v9.m_Event = (FxCREvent *)*((_QWORD *)Context + 11);
      *((_QWORD *)Context + 11) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v6);
  FxPostProcessInfo::Evaluate(&v9, v2);
}
