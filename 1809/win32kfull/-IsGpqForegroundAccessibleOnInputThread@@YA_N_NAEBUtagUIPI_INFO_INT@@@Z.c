/*
 * XREFs of ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01C7F24
 * Callers:
 *     EditionLLMouseButtonHook @ 0x1C00B47C0 (EditionLLMouseButtonHook.c)
 *     EditionReportMouseBreakToAccessibility @ 0x1C0128650 (EditionReportMouseBreakToAccessibility.c)
 *     EditionLLMouseWheelHook @ 0x1C01C8ED0 (EditionLLMouseWheelHook.c)
 * Callees:
 *     <none>
 */

char __fastcall IsGpqForegroundAccessibleOnInputThread(char a1, const struct tagUIPI_INFO_INT *a2)
{
  char v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = 0;
  if ( !a1 || !gpqForeground || *((_DWORD *)a2 + 2) )
    return 1;
  v3 = *(_QWORD *)(gpqForeground + 428LL);
  v4 = *(_QWORD *)a2;
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)v4 > (unsigned int)v3 )
    return 1;
  if ( (_DWORD)v4 == (_DWORD)v3 )
  {
    v5 = HIDWORD(v3);
    v6 = HIDWORD(v4);
    if ( (_DWORD)v6 == (_DWORD)v5 || (_DWORD)v6 == -1 || (_DWORD)v5 == -1 )
      return 1;
  }
  return v2;
}
