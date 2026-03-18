/*
 * XREFs of WPP_IFR_SF_Zd @ 0x1C0044F44
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C00631C0 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Zd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const _UNICODE_STRING *_a2,
        int globals_0)
{
  const _UNICODE_STRING *v7; // rbx
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // r11
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v16; // rcx
  wchar_t *v17; // rax

  v7 = _a2;
  v11 = 10LL;
  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (id - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= 2u )
    {
      if ( _a2 && _a2->Buffer )
        Length = _a2->Length;
      else
        Length = 10LL;
      if ( !_a2 || (Buffer = _a2->Buffer) == 0LL )
        Buffer = L"NULL";
      if ( !_a2 || (v16 = _a2, !_a2->Length) )
        v16 = (const _UNICODE_STRING *)&unk_1C009CC34;
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        _a1,
        traceGuid,
        v16,
        2LL,
        Buffer,
        Length,
        &globals_0,
        4LL,
        0LL);
    }
  }
  if ( !_a2 )
    goto LABEL_18;
  if ( _a2->Buffer )
    v11 = _a2->Length;
  v17 = _a2->Buffer;
  if ( !v17 )
LABEL_18:
    v17 = L"NULL";
  if ( !_a2 || !_a2->Length )
    v7 = (const _UNICODE_STRING *)&unk_1C009CC34;
  FxIFR(globals, 2u, id, _a1, traceGuid, v7, 2LL, v17, v11, &globals_0, 4LL, 0LL);
}
