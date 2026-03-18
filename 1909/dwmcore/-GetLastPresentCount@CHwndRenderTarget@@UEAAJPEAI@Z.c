/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18005B500
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005B568 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwndRenderTarget *this, unsigned int *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180280CA0, 1u, v5, 0x69Eu, 0LL);
    else
      *((_DWORD *)this + 118) = *a2;
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0, &dword_180280CA0, 1u, -2003304307, 0x6A7u, 0LL);
  }
  CHwndRenderTarget::HandleWindowErrors((CHwndRenderTarget *)((char *)this - 64), v7);
  return v7;
}
