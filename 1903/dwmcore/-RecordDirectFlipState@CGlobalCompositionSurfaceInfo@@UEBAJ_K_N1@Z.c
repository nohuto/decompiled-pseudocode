/*
 * XREFs of ?RecordDirectFlipState@CGlobalCompositionSurfaceInfo@@UEBAJ_K_N1@Z @ 0x18025DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::RecordDirectFlipState(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = 0;
  v5 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), &v8, a3, a4);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5 | 0x10000000, 0xC2u, 0LL);
  }
  return v4;
}
