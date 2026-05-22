/*
 * XREFs of ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180110360
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18010F5C8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8 (--R-$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotif(
        RTL_SRWLOCK *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rsi
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v6; // rcx
  PVOID v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  PVOID v9; // rbp
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _RTL_CRITICAL_SECTION *v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // rsi
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 18;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 18);
  v6 = this + 19;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( &v15 != (char *)v6 )
  {
    Ptr = v6->Ptr;
    v6->Ptr = 0LL;
    v7 = Ptr;
    v9 = Ptr;
    v8 = (struct _RTL_CRITICAL_SECTION *)Ptr;
    v10 = (struct _RTL_CRITICAL_SECTION *)Ptr;
  }
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    v7 = v9;
    v8 = v10;
  }
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)Ptr);
    *((_QWORD *)Ptr + 5) = 0LL;
    v13 = v8;
    v14 = v8;
    if ( a2 )
    {
      SubmitThreadpoolWork(*((PTP_WORK *)Ptr + 6));
      v13 = 0LL;
      Ptr = 0LL;
      v14 = 0LL;
    }
    if ( v8 )
    {
      LeaveCriticalSection(v8);
      v13 = v14;
    }
    if ( v13 )
      std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
        v11,
        Ptr,
        v12);
  }
}
