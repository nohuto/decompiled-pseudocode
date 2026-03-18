/*
 * XREFs of ?CheckPresentDurationSupport@CHwFullScreenRenderTarget@@UEAAJIPEAI@Z @ 0x180167560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckPresentDurationSupport(
        CHwFullScreenRenderTarget *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 32LL))((char *)this - 144) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 4) + 232LL))(
           *((_QWORD *)this + 4),
           a2,
           a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x240u, 0LL);
  }
  return v6;
}
