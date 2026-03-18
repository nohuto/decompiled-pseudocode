/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x1800BE4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 256LL))((char *)this - 64)
    && (v4 = *((_QWORD *)this + 14)) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 352LL))(v4, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180280CA0, 1u, v5, 0x67Fu, 0LL);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180280CA0, 1u, 0x8898008D, 0x683u, 0LL);
  }
  return v7;
}
