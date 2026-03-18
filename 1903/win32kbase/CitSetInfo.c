/*
 * XREFs of CitSetInfo @ 0x1C0037DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0037490 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0098450 (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0099F98 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C9DB4 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01C9E38 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 */

__int64 __fastcall CitSetInfo(__int64 a1, union _CIT_SI_INFO *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  union _CIT_SI_INFO *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  if ( !qword_1C0218810 )
    return -1073741641LL;
  if ( (unsigned __int16)a1 == 2LL )
  {
    LODWORD(result) = CitpSetCompositionInfo((union _CIT_SI_INFOFLAGS *)&v3, (union _CIT_SI_INFO *)&v4);
    return (int)result;
  }
  if ( (unsigned __int64)(unsigned __int16)a1 - 3 <= 1 )
  {
    LODWORD(result) = CitpSetAudioInfo((union _CIT_SI_INFOFLAGS *)&v3, a2);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 5LL )
  {
    LODWORD(result) = CitpSetViewEngagementInfo((union _CIT_SI_INFOFLAGS *)5, (union _CIT_SI_INFO *)&v4);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 1LL )
  {
    if ( (_WORD)a2 == 64 )
      LODWORD(result) = CitpSetSpeechRecognitionInfo((union _CIT_SI_INFOFLAGS *)&v3, (union _CIT_SI_INFO *)&v4);
    else
      LODWORD(result) = CitpSetOtherInputInfo((union _CIT_SI_INFOFLAGS *)1, (union _CIT_SI_INFO *)&v4);
    return (int)result;
  }
  return -1073741821LL;
}
