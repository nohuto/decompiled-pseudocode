/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0080B08
 * Callers:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C0080C78 (-CitpStart@@YAJXZ.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0081528 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0081804 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0081A94 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01C73F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C0246188 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  memset(&dword_1C02157E4, 0, 0x2CuLL);
  LODWORD(qword_1C0215804) = 1074266146;
  dword_1C02157E8 = 60000;
  dword_1C02157E4 = 64;
  dword_1C02157EC = 3600000;
  dword_1C02157F0 = 21600000;
  qword_1C02157F4 = 0xEA6000000001LL;
  dword_1C02157FC = 1000;
  HIBYTE(qword_1C0215804) = 1;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&dword_1C02157E4);
  memset(&qword_1C0215810, 0, 0x30uLL);
  qword_1C0215820 = MEMORY[0xFFFFF78000000008];
  qword_1C0215828 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C0215830 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  dword_1C0215838 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C0215818 = dword_1C0215838;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C020C5A8, 0LL, 0LL);
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x83u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&dword_1C02157E4, SourceString);
  if ( !BYTE4(qword_1C0215804) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
