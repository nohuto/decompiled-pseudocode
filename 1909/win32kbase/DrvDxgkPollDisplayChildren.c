/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C012B260
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0108B80 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C0212090 )
    return qword_1C0212090(a1, 0LL);
  else
    return 3221225659LL;
}
