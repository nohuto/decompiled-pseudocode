/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18005EEE0
 * Callers:
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180207550 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // edi

  *a3 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 848);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925D8, 2u, v9, 0x302u);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802925D8, 2u, -2003304442, 0x30Cu);
      return 0LL;
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925D8, 2u, -2003304307, 0x306u);
  }
  if ( v9 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 304LL))(this) )
    {
      *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 320LL))(this);
      *a3 = 1;
    }
    else
    {
      v11 = **((_DWORD **)this + 42);
      if ( v11
        || a2
        || (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 360LL))((char *)this + 208)
        || (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 312LL))(this) )
      {
        *a3 = 1;
        if ( !v11 && !a2 )
          *a4 |= 2u;
      }
    }
  }
  return 0LL;
}
