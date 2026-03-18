/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C023D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( a2 || a3 == (unsigned int)RtlGetActiveConsoleId() )
    return 1;
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     *((DXGSESSIONMGR **)Global + 74),
                                     a3);
  if ( !SessionDataForSpecifiedSession )
    return 0;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *((_QWORD *)SessionDataForSpecifiedSession + 2312);
  if ( v9 )
    return v10 == *(_QWORD *)(v9 + 276);
  return v10 != 0;
}
