/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x1403241F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1408E9C20 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1408E9FE8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1408EB4D4 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(wchar_t *a1, size_t a2, __int64 a3, __int64 a4)
{
  wchar_t *v7; // rdi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int16 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[8]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v16; // [rsp+70h] [rbp-90h]

  wcscpy(pszSrc, L"Custom");
  v15[0] = *(_OWORD *)L"Custom\\Custom64";
  v15[1] = *(_OWORD *)L"ustom64";
  if ( a2 < 7 )
    return 3221225507LL;
  v13 = -1;
  *a1 = 0;
  v7 = pszSrc;
  v16 = 0;
  v12[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v12[0] == 9 || v12[0] == 12 )
      v7 = (wchar_t *)v15;
    ProcessHostGuestArchitectures = AslPathCombine(v7);
    v9 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(a1, a2);
    v10 = "AslPathCombine failed [%x]";
    v11 = 1161;
  }
  else
  {
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1147;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
