/*
 * XREFs of PipDmgInitPhaseTwo @ 0x14073C340
 * Callers:
 *     PiDmaGuardInitialize @ 0x140181E28 (PiDmaGuardInitialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PipDmgInitReadGroupPolicy @ 0x14082AB10 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x14083A6C4 (PipDmgReevaluateQueue.c)
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
  if ( stru_140400BC8.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL) )
  {
    v6 = 0;
    v2 = PipDmaGuardPolicy;
    v4 = &v2;
    v5 = 4;
    TlgWrite(&stru_140400BC8, &unk_14036E443, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
