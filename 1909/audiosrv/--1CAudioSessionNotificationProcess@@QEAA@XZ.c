/*
 * XREFs of ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800D5ABC
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D5D98 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::dtor$0 @ 0x1800D5ECB (_CLockedList_CAudioSessionNotificationProcess_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800D5F74 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D70E0 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     _CAudioSessionManagerNotification::Invoke_::_1_::dtor$0 @ 0x1800D7273 (_CAudioSessionManagerNotification--Invoke_--_1_--dtor$0.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D7988 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800D7A65 (_CLockedList_CAudioSessionNotificationProcess_1_0_--RemoveInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(
        CAudioSessionNotificationProcess *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
