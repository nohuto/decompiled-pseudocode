/*
 * XREFs of ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x1801A9AEC
 * Callers:
 *     ?SetPrimaryVsyncPresentWaitTarget@CHwndRenderTarget@@UEBAJI@Z @ 0x1801A9A80 (-SetPrimaryVsyncPresentWaitTarget@CHwndRenderTarget@@UEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(
        CHwndRenderTarget *this,
        unsigned int a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 256LL))(this)
    && (v6 = *((_QWORD *)this + 22)) != 0 )
  {
    LOBYTE(v7) = a3;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 344LL))(v6, a2, v7);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802920EC, 1u, v8, 0x64Cu, 0LL);
  }
  else
  {
    v10 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802920EC, 1u, 0x8898008D, 0x650u, 0LL);
  }
  return v10;
}
