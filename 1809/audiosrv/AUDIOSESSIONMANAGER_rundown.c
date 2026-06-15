/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x180003B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AUDIOSESSIONMANAGER_rundown(_QWORD **a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, a1, *a1);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*a1);
  if ( g_DuckingManager )
  {
    v2 = *(_QWORD *)g_DuckingManager;
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1[1] + 40LL))(a1[1]);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v2 + 40))(g_DuckingManager, v3, 0LL);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1[1] + 16LL))(a1[1]);
  operator delete(a1, (const struct std::nothrow_t *)0x10);
}
