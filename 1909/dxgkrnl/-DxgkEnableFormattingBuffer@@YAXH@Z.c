/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C024268C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C002253C (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C0243648 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DxgkEnableFormattingBuffer(__int64 a1, __int64 a2)
{
  int v2; // ebx
  DXGGLOBAL *Global; // rax

  v2 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::EnableFormattingBuffer(Global, v2);
}
