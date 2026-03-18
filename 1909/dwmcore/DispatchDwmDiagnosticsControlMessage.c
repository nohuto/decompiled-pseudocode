/*
 * XREFs of DispatchDwmDiagnosticsControlMessage @ 0x180158C50
 * Callers:
 *     McGenControlCallbackV2 @ 0x1800D0880 (McGenControlCallbackV2.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z @ 0x180158E00 (-HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180158EB0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingK.c)
 */

void __fastcall DispatchDwmDiagnosticsControlMessage(struct DwmDiagnosticsControlMessage_0 *a1)
{
  DWORD CurrentProcessId; // eax
  signed int LastError; // eax
  DWORD pSessionId[6]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a1 + 6) == -1 )
    goto LABEL_21;
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  if ( pSessionId[0] == *((_DWORD *)a1 + 6) )
  {
LABEL_21:
    if ( !*((_BYTE *)a1 + 2) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( *(_WORD *)a1 == 1 )
        {
          if ( *((_DWORD *)a1 + 4) == 40 )
          {
            g_HeatMaps_TargetProcessId = *((_DWORD *)a1 + 7);
            g_HeatMaps_Type = *((_DWORD *)a1 + 8);
            g_HeatMaps_OverdrawContentKinds = *((_DWORD *)a1 + 9);
          }
        }
        else if ( *(_WORD *)a1 == 2 && *((_DWORD *)a1 + 4) >= 0x22u )
        {
          wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::ReportUsageToService();
        }
      }
      else if ( *((_DWORD *)a1 + 4) >= 0x24u )
      {
        DwmDiagnosticsControlMessage_0::HandleMessage(a1);
      }
    }
  }
}
