/*
 * XREFs of ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C01573A4
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderEnter(NotifyShell *this, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // r8

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)this;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 432) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  if ( (unsigned __int8)anonymous_namespace_::NotifyShellSimplePayload(v4, 5LL, v7) )
    *((_DWORD *)this + 77) |= 1u;
}
