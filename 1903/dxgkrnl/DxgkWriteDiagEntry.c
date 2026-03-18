/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C00D4870
 * Callers:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  unsigned int CurrentProcessSessionId; // eax

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  return DxgkWriteDiagEntry(a1, CurrentProcessSessionId);
}
