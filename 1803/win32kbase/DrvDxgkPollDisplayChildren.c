/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00D48B0
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00A61B0 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C01A19A0 )
    return qword_1C01A19A0(a1, 0LL);
  else
    return 3221225659LL;
}
