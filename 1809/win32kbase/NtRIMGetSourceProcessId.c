/*
 * XREFs of NtRIMGetSourceProcessId @ 0x1C010C330
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00516BC (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetSourceProcessId @ 0x1C010E6C0 (RIMGetSourceProcessId.c)
 */

__int64 __fastcall NtRIMGetSourceProcessId(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetSourceProcessId(a1, a2, a3);
  else
    return 3221225506LL;
}
