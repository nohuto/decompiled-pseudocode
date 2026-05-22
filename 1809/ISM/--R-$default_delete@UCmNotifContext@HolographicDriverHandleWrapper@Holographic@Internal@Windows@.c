/*
 * XREFs of ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8
 * Callers:
 *     ?UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18010F260 (-UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Wind.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18010F5C8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18010F6DC (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x180110360 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 *     ??1?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x18011910C (--1-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx
  __int64 v5; // rdx
  struct _TP_WORK *v6; // rsi
  DWORD v7; // ebx
  struct _TP_WORK *v8; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 56);
    if ( v2 )
    {
      LastError = GetLastError();
      CM_Unregister_Notification(v2, v5);
      SetLastError(LastError);
    }
    *(_QWORD *)(a2 + 56) = 0LL;
    v6 = *(struct _TP_WORK **)(a2 + 48);
    if ( v6 )
    {
      v7 = GetLastError();
      CloseThreadpoolWork(v6);
      SetLastError(v7);
    }
    *(_QWORD *)(a2 + 48) = 0LL;
    v8 = 0LL;
    if ( *(_QWORD *)(a2 + 56) )
    {
      CM_Unregister_Notification(*(_QWORD *)(a2 + 56), a2);
      v8 = *(struct _TP_WORK **)(a2 + 48);
    }
    if ( v8 )
      CloseThreadpoolWork(v8);
    DeleteCriticalSection((LPCRITICAL_SECTION)a2);
    operator delete((void *)a2, (const struct std::nothrow_t *)0x40);
  }
}
