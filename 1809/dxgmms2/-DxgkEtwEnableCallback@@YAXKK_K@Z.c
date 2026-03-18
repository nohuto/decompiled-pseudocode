/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C007ED24
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00159A0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C004D010 & 0x61C8ED7) != 0 && (qword_1C004D018 & 0xFFFFFFFFF9E37128uLL) == 0;
  bTracingEnabled = v0;
}
