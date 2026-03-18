/*
 * XREFs of ValidateHandleSecure @ 0x1C002D9C0
 * Callers:
 *     HMValidateHandle @ 0x1C002D7E0 (HMValidateHandle.c)
 * Callees:
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C002D6B8 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DA88 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall ValidateHandleSecure(void *a1, char a2)
{
  char *v4; // rbx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v4 = (char *)qword_1C01CBA58 + (unsigned int)(unsigned __int16)a1 * dword_1C01CBA60;
  if ( WORD1(a1) != *((_WORD *)v4 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v4[24] || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v4) || (a2 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v4);
  return 1LL;
}
