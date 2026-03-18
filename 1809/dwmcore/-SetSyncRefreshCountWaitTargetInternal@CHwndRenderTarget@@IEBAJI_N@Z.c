/*
 * XREFs of ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x18015B8DC
 * Callers:
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152BD8 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(CDisplay **this, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( CHwndRenderTarget::IsPrimaryMonitor(this) && (v6 = (__int64)this[22]) != 0 )
  {
    LOBYTE(v7) = a3;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 344LL))(v6, a2, v7);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18024C878, 1u, v8, 0x637u);
  }
  else
  {
    v10 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_18024C878, 1u, -2003304307, 0x63Bu);
  }
  return v10;
}
