/*
 * XREFs of NtRIMGetSourceProcessId @ 0x1C00DF6E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetSourceProcessId @ 0x1C00E29F0 (RIMGetSourceProcessId.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetSourceProcessId(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetSourceProcessId(a1, a2, a3);
  else
    return 3221225506LL;
}
