/*
 * XREFs of ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x1800361A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036220 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetSize(CText *this, const struct tagSIZE *a2)
{
  char v4; // cl
  LONG v5; // eax
  int v6; // eax
  unsigned int v7; // ebx

  v4 = *((_BYTE *)this + 280);
  if ( (v4 & 1) == 0
    || a2->cy != *((_DWORD *)this + 31)
    || (v5 = *((_DWORD *)this + 100), a2->cx < v5)
    || *((_DWORD *)this + 30) < v5 )
  {
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
    v4 = *((_BYTE *)this + 280);
  }
  if ( (v4 & 4) != 0 && a2->cx != *((_DWORD *)this + 30) )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  v6 = CVisual::SetSize(this, a2);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xDCu);
  return v7;
}
