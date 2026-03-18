/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0032E94
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C0156288 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C01ED790 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C0243E50 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool __fastcall IsCurrentConsoleSession(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v3 = *((_DWORD *)DXGGLOBAL::GetSessionMgr(Global) + 32);
  return (unsigned int)PsGetCurrentProcessSessionId(v5, v4) == v3;
}
