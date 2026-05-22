/*
 * XREFs of ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x18016001C
 * Callers:
 *     ?Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015381C (-Close@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180154B58 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015228C (--4-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B58 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rdi
  LPCRITICAL_SECTION v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  LPCRITICAL_SECTION v7; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  lpCriticalSection = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 144);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator=(
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext **)&lpCriticalSection,
    (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext **)this + 19);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v5 = lpCriticalSection;
  if ( lpCriticalSection )
  {
    v6 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    v5[1].DebugInfo = 0LL;
    v7 = v5;
    if ( a2 )
    {
      SubmitThreadpoolWork(*(PTP_WORK *)&v5[1].LockCount);
      v5 = 0LL;
      v7 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( v7 )
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'(v5);
  }
}
