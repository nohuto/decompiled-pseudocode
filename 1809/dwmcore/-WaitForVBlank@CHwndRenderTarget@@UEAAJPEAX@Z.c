/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800EAC30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CDisplay **this, void *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( CHwndRenderTarget::IsPrimaryMonitor(this - 8) && (v4 = (__int64)this[14]) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v4 + 336LL))(v4, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_18024C878, 1u, v5, 0x612u);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18024C878, 1u, -2003304307, 0x616u);
  }
  return v7;
}
