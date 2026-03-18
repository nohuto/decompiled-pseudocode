/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1800BCC70
 * Callers:
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180165540 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  signed int v9; // edi
  __int64 v10; // rcx
  char v11; // di

  *a3 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 880);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BE2C0, 2u, v9, 0x302u, 0LL);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BE2C0, 2u, 0x88980006, 0x30Cu, 0LL);
      return 0LL;
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BE2C0, 2u, 0x8898008D, 0x306u, 0LL);
  }
  if ( v9 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 304LL))(this) )
    {
      *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 320LL))(this);
      *a3 = 1;
      return 0LL;
    }
    if ( **((_DWORD **)this + 34) )
    {
      v11 = 0;
    }
    else
    {
      v11 = 1;
      if ( !a2
        && !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 18) + 360LL))((char *)this + 144)
        && !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 312LL))(this) )
      {
        return 0LL;
      }
    }
    *a3 = 1;
    if ( v11 && !a2 )
      *a4 |= 2u;
  }
  return 0LL;
}
