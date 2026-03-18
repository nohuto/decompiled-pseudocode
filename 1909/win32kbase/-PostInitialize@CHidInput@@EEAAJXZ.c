/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A85D0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0031CC8 (isInputVirtualizationEnabled.c)
 *     ?ivRegisterChildNotification@CBaseInput@@IEAAJK@Z @ 0x1C018CB5C (-ivRegisterChildNotification@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C018D3B0 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CHidInput::PostInitialize(struct RawInputManagerObject **this)
{
  unsigned int v2; // ebp
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi

  v2 = 0;
  if ( isInputVirtualizationEnabled() )
  {
    v4 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v6 = *((_DWORD *)v4 + 10);
    v7 = CurrentThreadId;
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v7 == v6 )
    {
      if ( isRootPartition() )
        return (unsigned int)CBaseInput::ivRegisterChildNotification((CBaseInput *)this, 2u);
      else
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 2u, this[2]);
    }
  }
  return v2;
}
