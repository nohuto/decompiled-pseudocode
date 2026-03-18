/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800BD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwndRenderTarget *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx

  v2 = (char *)this - 64;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 256LL))((char *)this - 64)
    && (v4 = *((_QWORD *)v2 + 22)) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 344LL))(v4, a2, 0LL);
    v7 = v5;
    if ( v5 >= 0 )
      return v7;
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180280CA0, 1u, v5, 0x64Cu, 0LL);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180280CA0, 1u, 0x8898008D, 0x650u, 0LL);
  }
  if ( (v7 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180280CA0, 1u, v7, 0x661u, 0LL);
  return v7;
}
