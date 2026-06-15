/*
 * XREFs of ?GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0PEAPEAUICPAudioHistoryReader@@@Z @ 0x140053F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI444@Z @ 0x140053C68 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAPEAUVolatileCo.c)
 */

__int64 __fastcall CCPAudioHistoryControl::GetAudioHistoryReader(
        CCPAudioHistoryControl *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct ICPAudioHistoryReader **a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,VolatileControlData * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
         a4,
         &v8,
         &v9,
         (struct VolatileControlData **)this + 3,
         (struct SharedMessageQueueItem **)this + 2,
         (unsigned int *)this + 8,
         (unsigned int *)this + 9,
         (unsigned int *)this + 10,
         (unsigned int *)this + 11);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
