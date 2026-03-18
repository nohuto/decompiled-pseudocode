/*
 * XREFs of WPP_IFR_SF_qZd @ 0x1C005FAF0
 * Callers:
 *     imp_WdfRegistryQueryMemory @ 0x1C00606D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C00609A0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0060DA0 (imp_WdfRegistryQueryString.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qZd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *globals_0,
        const void *level,
        const _UNICODE_STRING *flags)
{
  const _UNICODE_STRING *v7; // rbx
  __int64 v10; // rdi
  __int64 Length; // rdx
  wchar_t *Buffer; // rax
  const _UNICODE_STRING *v13; // rcx
  const wchar_t *v14; // rax
  int _a3[4]; // [rsp+70h] [rbp-18h] BYREF

  v7 = flags;
  _a3[0] = -1073741687;
  v10 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 2) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
  {
    if ( flags && flags->Buffer )
      Length = flags->Length;
    else
      Length = 10LL;
    if ( !flags || (Buffer = flags->Buffer) == 0LL )
      Buffer = L"NULL";
    if ( !flags || (v13 = flags, !flags->Length) )
      v13 = (const _UNICODE_STRING *)&unk_1C009CC34;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRegistryAPI_cpp_Traceguids,
      _a2,
      &level,
      8LL,
      v13,
      2LL,
      Buffer,
      Length,
      _a3,
      4LL,
      0LL);
  }
  if ( !v7 )
    goto LABEL_18;
  if ( v7->Buffer )
    v10 = v7->Length;
  v14 = v7->Buffer;
  if ( !v14 )
LABEL_18:
    v14 = L"NULL";
  if ( !v7 || !v7->Length )
    v7 = (const _UNICODE_STRING *)&unk_1C009CC34;
  FxIFR(globals, 4u, 2u, WPP_FxRegistryAPI_cpp_Traceguids, _a2, &level, 8LL, v7, 2LL, v14, v10, _a3, 4LL, 0LL);
}
