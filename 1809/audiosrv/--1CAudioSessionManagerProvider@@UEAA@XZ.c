/*
 * XREFs of ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800CA2D0
 * Callers:
 *     ??_ECAudioSessionManagerProvider@@UEAAPEAXI@Z @ 0x1800CA510 (--_ECAudioSessionManagerProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180003514 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionManagerProvider::~CAudioSessionManagerProvider(CAudioSessionManagerProvider *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // rdi
  __int64 *v5; // rdi
  __int64 *v6; // rsi

  *(_QWORD *)this = &CAudioSessionManagerProvider::`vftable';
  v2 = (__int64 *)*((_QWORD *)this + 8);
  v3 = (__int64 *)*((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    do
      CAudioSessionManager::Disconnect(*v3++, 1u, 1);
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)this + 8);
  }
  v4 = (__int64 *)*((_QWORD *)this + 7);
  if ( v4 != v2 )
  {
    do
    {
      if ( *v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v4);
      ++v4;
    }
    while ( v4 != v2 );
    v4 = (__int64 *)*((_QWORD *)this + 7);
  }
  *((_QWORD *)this + 8) = v4;
  if ( g_PolicyEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_PolicyEventsHandler + 16LL))(g_PolicyEventsHandler);
    g_PolicyEventsHandler = 0LL;
  }
  if ( g_DuckingManager )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  if ( g_TelephonyControl )
  {
    ((void (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl->Release)(g_TelephonyControl);
    g_TelephonyControl = 0LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 8);
    if ( v5 != v6 )
    {
      do
      {
        if ( *v5 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v5);
        ++v5;
      }
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 7);
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
