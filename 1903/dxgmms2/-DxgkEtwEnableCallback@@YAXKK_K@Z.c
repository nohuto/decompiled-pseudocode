/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00814A4
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0014CD0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C004E010 & 0x61C8ED7) != 0 && (qword_1C004E018 & 0xFFFFFFFFF9E37128uLL) == 0;
  bTracingEnabled = v0;
}
