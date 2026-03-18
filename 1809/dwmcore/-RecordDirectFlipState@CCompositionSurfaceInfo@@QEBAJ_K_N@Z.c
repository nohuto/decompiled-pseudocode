/*
 * XREFs of ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x1801BD080
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180178EB0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordDirectFlipState(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  v4 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), &v7, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0xF2u);
  }
  return v3;
}
