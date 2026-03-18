/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C012DA10
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C010B4F0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C0215090 )
    return qword_1C0215090(a1, 0LL);
  else
    return 3221225659LL;
}
