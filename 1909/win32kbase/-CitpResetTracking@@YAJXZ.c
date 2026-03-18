/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C01C7D54
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C65A4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080D28 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00810B8 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0081804 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0082D78 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C00B7C50 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C01C739C (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 */

__int64 CitpResetTracking(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rbx
  int v1; // ebx
  char IsStateSeparationEnabled; // al
  const WCHAR *v4; // rdx
  const char *v5; // rdx

  v0 = qword_1C0215810;
  if ( !qword_1C0215810 )
    goto LABEL_2;
  CitpContextFlush(qword_1C0215810, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpInvalidateAllWeakReferences();
  CitpContextTrackingDataCleanup(v0);
  WORD2(qword_1C0215804) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v4 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v4 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)&dword_1C02157E4, v4);
  if ( BYTE4(qword_1C0215804) )
  {
    v1 = CitpContextTrackingDataStart(v0, v5);
    if ( v1 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v1 = -1073741637;
  }
  CitpCleanup();
  return (unsigned int)v1;
}
