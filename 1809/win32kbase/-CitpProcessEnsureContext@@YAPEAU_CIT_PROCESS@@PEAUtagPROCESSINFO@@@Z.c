/*
 * XREFs of ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003370C
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0033474 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C0034310 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0037F14 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00839E4 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0087FB0 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01848BC (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01852B4 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033808 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C0078754 (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0078C74 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C007E3AC (-CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01847F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct _CIT_PROCESS **a1)
{
  __int64 v2; // rcx
  struct _CIT_PROCESS *v4; // rax
  const char *v5; // rdx
  struct _CIT_PROCESS *v6; // rdi
  LONGLONG TimeQuadPart; // rax
  unsigned int v8; // eax

  if ( CitpProcessInfoIsValid(a1[116]) )
    return (struct _CIT_PROCESS *)v2;
  if ( v2 != 52976 )
    return 0LL;
  v4 = (struct _CIT_PROCESS *)Win32AllocPool(96LL, 0x49637355u);
  a1[116] = v4;
  v6 = v4;
  if ( !v4 )
  {
    a1[116] = (struct _CIT_PROCESS *)52976;
    CitpLogFailureWorker(-1073741670, v5, 0xF38u);
    return 0LL;
  }
  memset(v4, 0, 0x60uLL);
  memset((char *)v6 + 32, 0, 0x28uLL);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*a1);
  v8 = CitpUTCToMS(TimeQuadPart, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *((_QWORD *)v6 + 1) = a1;
  *((_DWORD *)v6 + 18) = v8;
  *((_DWORD *)v6 + 20) = v8;
  if ( (int)CitpProcessGetProgramId((struct tagPROCESSINFO *)a1, (struct _CIT_PROCESS *)((char *)v6 + 32)) >= 0 )
    *((_BYTE *)v6 + 91) ^= (*((_BYTE *)v6 + 91) ^ (2 * CitpDPGetAppIndex(v6))) & 0x1E;
  return v6;
}
