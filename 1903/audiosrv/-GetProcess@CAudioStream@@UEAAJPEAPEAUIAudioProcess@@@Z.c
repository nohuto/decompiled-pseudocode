/*
 * XREFs of ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18003E5B0
 * Callers:
 *     ?GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z @ 0x18006BBE0 (-GetProcess@CAudioStream@@W7EAAJPEAPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetProcess(CAudioStream *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 8);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
