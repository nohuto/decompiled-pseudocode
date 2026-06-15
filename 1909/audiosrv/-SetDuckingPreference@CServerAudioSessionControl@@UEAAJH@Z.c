/*
 * XREFs of ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180049040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetDuckingPreference(CServerAudioSessionControl *this, int a2)
{
  _BYTE *v2; // rbx
  int v4; // eax
  unsigned int v5; // r8d

  v2 = (_BYTE *)*((_QWORD *)this + 9);
  v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 56LL))(v2);
  v5 = 0;
  if ( v4 )
    return (unsigned int)-2004287485;
  else
    v2[484] = a2 != 0;
  return v5;
}
