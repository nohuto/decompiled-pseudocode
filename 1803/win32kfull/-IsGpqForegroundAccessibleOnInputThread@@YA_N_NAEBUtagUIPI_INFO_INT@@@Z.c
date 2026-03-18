/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01A5FC0
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C00D73E0 (EditionLLMouseButtonHook.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0108830 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01A6E90 (EditionLLMouseWheelHook.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, const struct tagUIPI_INFO_INT *a2)
{
  char v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = 0;
  if ( !a1 || !gpqForeground || *((_DWORD *)a2 + 2) )
    return 1;
  v4 = *(_QWORD *)(gpqForeground + 428LL);
  v5 = *(_QWORD *)a2;
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)v5 > (unsigned int)v4 )
    return 1;
  if ( (_DWORD)v5 == (_DWORD)v4 )
  {
    v6 = HIDWORD(v4);
    v7 = HIDWORD(v5);
    if ( (_DWORD)v7 == (_DWORD)v6 || (_DWORD)v7 == -1 || (_DWORD)v6 == -1 )
      return 1;
  }
  return v2;
}
