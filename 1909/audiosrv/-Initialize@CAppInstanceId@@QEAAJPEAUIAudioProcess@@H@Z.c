/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEAUIAudioProcess@@H@Z @ 0x1800DB878
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800DBC24 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, struct IAudioProcess *a2, int a3)
{
  __int64 v5; // rax

  *((_DWORD *)this + 2) = a3;
  if ( a3 )
  {
    *(_DWORD *)this = 0;
    v5 = *(_QWORD *)a2;
  }
  else
  {
    *(_DWORD *)this = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    v5 = *(_QWORD *)a2;
  }
  *((_DWORD *)this + 1) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v5 + 48))(a2);
  return 0LL;
}
