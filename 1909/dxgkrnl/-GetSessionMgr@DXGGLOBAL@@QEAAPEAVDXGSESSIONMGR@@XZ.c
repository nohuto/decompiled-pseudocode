/*
 * XREFs of ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C02444D0
 * Callers:
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C00171B0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0017600 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0017C40 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C0018CA0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0032FF4 (-IsCurrentConsoleSession@@YAEXZ.c)
 * Callees:
 *     <none>
 */

struct DXGSESSIONMGR *__fastcall DXGGLOBAL::GetSessionMgr(DXGGLOBAL *this)
{
  return (struct DXGSESSIONMGR *)*((_QWORD *)this + 74);
}
