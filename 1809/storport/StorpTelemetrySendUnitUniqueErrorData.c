/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x1C002B440
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C00088F8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzssszuqquuuuuuqqi @ 0x1C002902C (McTemplateK0quuujjqzssszuqquuuuuuqqi.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const struct _MCGEN_TRACE_CONTEXT *p_Logger; // r9
  int v5; // [rsp+78h] [rbp-70h]

  if ( (byte_1C00617E5 & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    p_Logger = (const struct _MCGEN_TRACE_CONTEXT *)&stru_1C0055A88.Logger;
    if ( *(_QWORD *)(v2 + 5272) )
      p_Logger = *(const struct _MCGEN_TRACE_CONTEXT **)(v2 + 5272);
    McTemplateK0quuujjqzssszuqquuuuuuqqi(
      a1 + 160,
      a1 + 169,
      a1 + 186,
      *(_DWORD *)(v2 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      v2 + 5256,
      *(_DWORD *)(a1 + 3272),
      *(const struct _MCGEN_TRACE_CONTEXT **)(v2 + 4864),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
      p_Logger,
      v5,
      *(_DWORD *)(a2 + 12),
      *(_DWORD *)(a2 + 16),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)a2,
      *(_BYTE *)(a2 + 1),
      *(_BYTE *)(a2 + 2),
      *(_BYTE *)(a2 + 3),
      *(_BYTE *)(a2 + 4),
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD *)(a2 + 24));
  }
  return 0LL;
}
