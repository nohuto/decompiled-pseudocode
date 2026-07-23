/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x140324070
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1408E9C20 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1408E9FE8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1408EB4D4 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(wchar_t *a1, size_t a2, const wchar_t *a3, __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  const wchar_t *v12; // r8
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(pszSrc, L"AppPatch64");
  if ( a2 < 0xB )
    return 3221225507LL;
  v14 = -1;
  pszDest[0] = 0;
  v13[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
    {
      ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = &word_1403620BC;
      if ( a3 )
        v12 = a3;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDest, 0x104uLL, v12);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 992;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
