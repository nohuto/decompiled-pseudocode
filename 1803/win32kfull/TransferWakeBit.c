/*
 * XREFs of TransferWakeBit @ 0x1C00F2D20
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x1C00488C0 (CalcWakeMask.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // di
  __int64 v5; // rcx
  __int64 v6; // rsi

  result = CalcWakeMask(a2, a2, 0);
  v4 = result & 0x1C07;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) & result & 0x1C07) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 424);
    if ( (result & 1) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 96) = a1;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 88);
      *(_QWORD *)(v5 + 88) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 424));
    }
    *(_WORD *)(*(_QWORD *)(v6 + 440) + 6LL) &= ~v4;
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) |= v4;
    result = *(_QWORD *)(a1 + 440);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
