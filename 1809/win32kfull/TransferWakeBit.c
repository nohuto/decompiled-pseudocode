/*
 * XREFs of TransferWakeBit @ 0x1C010C064
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcWakeMask @ 0x1C0033E50 (CalcWakeMask.c)
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // di
  __int64 v5; // rcx
  __int64 v6; // rsi

  result = CalcWakeMask(a2, a2, 0);
  v4 = result & 0x1C07;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) & result & 0x1C07) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    if ( (result & 1) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 96) = a1;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 88);
      *(_QWORD *)(v5 + 88) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    *(_WORD *)(*(_QWORD *)(v6 + 448) + 6LL) &= ~v4;
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) |= v4;
    result = *(_QWORD *)(a1 + 448);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
