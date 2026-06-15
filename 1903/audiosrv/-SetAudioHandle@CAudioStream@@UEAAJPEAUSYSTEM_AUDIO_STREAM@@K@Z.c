/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180041630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2, int a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx

  v4 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 4);
  v7 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 53) = a3;
  *((_QWORD *)a2 + 6) = 0LL;
  return 0LL;
}
