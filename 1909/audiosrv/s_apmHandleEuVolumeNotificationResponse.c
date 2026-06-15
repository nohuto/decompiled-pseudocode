/*
 * XREFs of s_apmHandleEuVolumeNotificationResponse @ 0x180104E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 s_apmHandleEuVolumeNotificationResponse()
{
  int v0; // eax
  unsigned int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_PolicyManager )
    return 0LL;
  v0 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 312LL))(g_PolicyManager);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v0);
  return v1;
}
