/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C0178570
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0178E10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017C56C (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this)
{
  CInertiaManager *v2; // rcx

  if ( *((_BYTE *)this + 584) )
  {
    CHidInput::HandlePTPInertiaTimer(this, 1, 0, *((void **)this + 74));
    *((_BYTE *)this + 584) = 0;
  }
  if ( (*((_DWORD *)this + 105) & 1) != 0 )
  {
    CInertiaManager::GetInstance();
    CInertiaManager::PostInertiaMessage(
      v2,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 208),
      *(struct tagPOINT *)((char *)this + 400),
      *(struct tagPOINT *)((char *)this + 408));
    *((_DWORD *)this + 105) &= ~1u;
  }
}
