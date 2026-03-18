/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092ECC
 * Callers:
 *     RIMUnInitialize @ 0x1C0092E20 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C010B84C (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  char *v5; // [rsp+28h] [rbp-10h]

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  v5 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_s(gRimLog, (_DWORD)a2, 21, 11, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, (__int64)v5);
  do
  {
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0xCu, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, &Flink[-1]);
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  return 1LL;
}
