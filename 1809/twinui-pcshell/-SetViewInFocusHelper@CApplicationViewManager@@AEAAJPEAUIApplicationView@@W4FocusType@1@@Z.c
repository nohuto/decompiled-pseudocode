/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x18012D9C4
 * Callers:
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18012DAC0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180060C98 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rbx
  bool v7; // zf
  void (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // r14
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdx

  v3 = (RTL_SRWLOCK *)(a1 + 648);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 648));
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = a2 == *(_QWORD *)(a1 + 688);
      goto LABEL_6;
    }
  }
  else if ( a2 == *(_QWORD *)(a1 + 688) )
  {
    v7 = (*(_BYTE *)(a1 + 696) & 1) == 0;
LABEL_6:
    if ( v7 )
      goto LABEL_15;
  }
  v8 = (void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 688);
  v9 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 688);
  if ( v9 && v9 != (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v9, 9u, a2);
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=((__int64 *)(a1 + 688), a2);
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 696) |= 1u;
  else
    *(_DWORD *)(a1 + 696) &= ~1u;
  if ( *v8 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, *v8, 8 - (a3 != 1), 0LL);
LABEL_15:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
