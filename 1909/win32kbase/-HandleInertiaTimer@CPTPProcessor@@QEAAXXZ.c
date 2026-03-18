/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01788AC
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017CA70 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(CPTPProcessor *this)
{
  CInertiaManager *v2; // rcx

  if ( *((_BYTE *)this + 584) && (*((_DWORD *)this + 105) & 1) != 0 )
  {
    CInertiaManager::GetInstance();
    CInertiaManager::PostInertiaMessage(
      v2,
      0x23Bu,
      (CPTPProcessor *)((char *)this + 208),
      *(struct tagPOINT *)((char *)this + 400),
      *(struct tagPOINT *)((char *)this + 408));
  }
  *((_BYTE *)this + 584) = 0;
}
