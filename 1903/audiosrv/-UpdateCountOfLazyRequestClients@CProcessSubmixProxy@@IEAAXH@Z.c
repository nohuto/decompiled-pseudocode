/*
 * XREFs of ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F113C
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18003C900 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18004BDA0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfLazyRequestClients(CProcessSubmixProxy *this, int a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 26) = v2 + a2;
  if ( v2 != v2 + a2 && (!v2 || !(v2 + a2)) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 328LL))(
      *((_QWORD *)this + 25),
      (char *)this + 8);
}
