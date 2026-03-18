/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140755BE4
 * Callers:
 *     PiDmaGuardInitialize @ 0x140189734 (PiDmaGuardInitialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PipDmgInitReadGroupPolicy @ 0x140864060 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1408740E0 (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  if ( stru_140425D20.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425D20, 0x400000000000uLL) )
  {
    v6 = 0;
    v2 = PipDmaGuardPolicy;
    v4 = &v2;
    v5 = 4;
    TlgWrite(&stru_140425D20, &unk_14038CEEF, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
