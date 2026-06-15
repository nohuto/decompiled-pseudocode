/*
 * XREFs of WPP_SF_ld @ 0x1801122C4
 * Callers:
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18010FF20 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ld(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids, 49LL, &v5);
}
