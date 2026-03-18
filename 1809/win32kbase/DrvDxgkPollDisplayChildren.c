/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0104900
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00E3750 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C01CD840 )
    return qword_1C01CD840(a1, 0LL);
  else
    return 3221225659LL;
}
