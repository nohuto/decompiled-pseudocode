/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1C00DFB10
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1C00DE220 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(int a1)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1);
  else
    return 3221225506LL;
}
