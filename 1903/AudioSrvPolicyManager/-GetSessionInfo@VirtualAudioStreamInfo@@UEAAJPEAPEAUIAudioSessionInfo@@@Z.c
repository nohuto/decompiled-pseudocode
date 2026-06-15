/*
 * XREFs of ?GetSessionInfo@VirtualAudioStreamInfo@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180008020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualAudioStreamInfo::GetSessionInfo(VirtualAudioStreamInfo *this, struct IAudioSessionInfo **a2)
{
  return (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioSessionInfo **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d31c391d_5718_48c7_b013_24e874adf5dd,
           a2);
}
