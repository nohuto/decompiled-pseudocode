/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180176298
 * Callers:
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180176390 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180031190 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800677F8 (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx

  v3 = (RTL_SRWLOCK *)(a1 + 672);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 672));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 712) )
      goto LABEL_15;
  }
  else if ( a2 == *(_QWORD *)(a1 + 712) && (*(_BYTE *)(a1 + 720) & 1) == 0 )
  {
    goto LABEL_15;
  }
  v7 = (__int64 *)(a1 + 712);
  v8 = *(_QWORD *)(a1 + 712);
  if ( v8 && v8 != a2 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 9u, a2);
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)(a1 + 712),
    a2);
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 720) |= 1u;
  else
    *(_DWORD *)(a1 + 720) &= ~1u;
  if ( *v7 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, *v7, 8 - (a3 != 1), 0LL);
LABEL_15:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
