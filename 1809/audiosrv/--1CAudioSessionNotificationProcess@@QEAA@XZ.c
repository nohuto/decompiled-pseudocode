/*
 * XREFs of ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800C752C
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800C7888 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::AddInterface_::_1_::dtor$0 @ 0x1800C79BB (_CLockedList_CAudioSessionNotificationProcess_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800C7A64 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800C8A70 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     _CAudioSessionManagerNotification::Invoke_::_1_::dtor$0 @ 0x1800C8C03 (_CAudioSessionManagerNotification--Invoke_--_1_--dtor$0.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800C9330 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800C940D (_CLockedList_CAudioSessionNotificationProcess_1_0_--RemoveInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
