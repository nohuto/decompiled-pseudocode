/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C00367D8
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0036420 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C0037D90 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00836E0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0096C50 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0098B28 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C7E98 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00366AC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C00368E4 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0082E28 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00943FC (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C009749C (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01C74D0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int16 a3)
{
  struct _CIT_INTERACTION_SUMMARY *v3; // rbx
  struct _CIT_PROG_DATA *v7; // rdi
  struct _CIT_INTERACTION_SUMMARY **v8; // r14
  char v9; // al
  struct _CIT_PROG_DATA *v11; // rax
  struct _GUID v12; // [rsp+20h] [rbp-38h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  if ( (qword_1C02157F4 & 1) == 0 )
    return v3;
  v7 = 0LL;
  if ( (qword_1C02157F4 & 2) == 0 )
  {
    v8 = a2 + 2;
    goto LABEL_4;
  }
  v11 = CitpProcessEnsureProgData(a2[1]);
  v7 = v11;
  if ( !v11 )
    return v3;
  v8 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v11 + 88);
LABEL_4:
  v3 = *v8;
  if ( *v8 )
  {
    if ( ((*((unsigned __int16 *)v3 + 44) >> 2) & 0x1FFF) == dword_1C021580C )
      goto LABEL_6;
    CitpInteractionSummaryDelete(v8);
  }
  CitpInteractionSummaryAllocate(&v13);
  v3 = v13;
  if ( v13 )
  {
    if ( v7 )
    {
      *((_WORD *)v13 + 44) |= 1u;
      *((_QWORD *)v3 + 3) = v7;
    }
    else
    {
      *((_QWORD *)v13 + 3) = a2;
    }
    *v8 = v3;
LABEL_6:
    if ( v3 )
    {
      *((_WORD *)v3 + 51) |= a3;
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v3 == v3 )
        CitpInteractionSummaryStartTracking(a1, v3);
      *((_QWORD *)v3 + 2) |= (unsigned __int64)*a2;
      *((struct _GUID *)v3 + 4) = *CitpProcessGetAppSessionId(&v12, a2[1], (unsigned int *)v3 + 21);
      v9 = *((_BYTE *)a2 + 92);
      if ( (v9 & 1) == 0 )
      {
        *((_BYTE *)a2 + 92) = v9 | 1;
        CitpStatIncrement((unsigned __int16 *)v3 + 45, 1);
      }
    }
    return v3;
  }
  return 0LL;
}
