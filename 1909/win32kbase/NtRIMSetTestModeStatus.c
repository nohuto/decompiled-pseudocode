/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1C01347C0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0058940 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMSetTestModeStatus @ 0x1C01330E0 (RIMSetTestModeStatus.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(int a1)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1);
  else
    return 3221225506LL;
}
