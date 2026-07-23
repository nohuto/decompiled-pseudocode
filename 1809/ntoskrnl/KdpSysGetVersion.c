/*
 * XREFs of KdpSysGetVersion @ 0x140918AD0
 * Callers:
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_140402F50;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_140402F60;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
