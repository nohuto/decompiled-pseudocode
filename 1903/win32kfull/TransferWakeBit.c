/*
 * XREFs of TransferWakeBit @ 0x1C009A67C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x1C009DB40 (CalcWakeMask.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int16 v5; // di
  __int64 v6; // rcx
  __int64 v7; // rsi

  result = CalcWakeMask((unsigned int)a2, a2, 0LL);
  v4 = *(_QWORD *)(a1 + 440);
  v5 = result & 0x1C07;
  if ( (*(_WORD *)(v4 + 6) & result & 0x1C07) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 424);
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 104);
      *(_QWORD *)(v6 + 104) = a1;
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 96);
      *(_QWORD *)(v6 + 96) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 424), v4);
    }
    *(_WORD *)(*(_QWORD *)(v7 + 440) + 6LL) &= ~v5;
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) |= v5;
    result = *(_QWORD *)(a1 + 440);
    *(_WORD *)(result + 4) |= v5;
  }
  return result;
}
