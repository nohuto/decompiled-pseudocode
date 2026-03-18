/*
 * XREFs of ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A164
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderEnter(NotifyShell *this, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // r8
  int v8; // edx
  int v9; // ecx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)this;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 424) + 240LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  if ( anonymous_namespace_::NotifyShellSimplePayload(v4, 5, v7, (int)a2) )
  {
    *((_DWORD *)this + 81) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v9, v8, 1, 13, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, this);
  }
}
