/*
 * XREFs of ClearWakeBit @ 0x1C00372BC
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetRawInputBuffer @ 0x1C02165D0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearWakeBit(__int64 a1, __int16 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  if ( !a3 )
    goto LABEL_2;
  v4 = *(_QWORD *)(a1 + 432);
  if ( !*(_DWORD *)(v4 + 40) )
  {
    result = *(_QWORD *)(gptiCurrent + 464LL);
    if ( !*(_QWORD *)(result + 56) )
    {
      if ( (*(_DWORD *)(v4 + 388) & 0x20) != 0 )
        a2 &= ~2u;
LABEL_2:
      result = *(_QWORD *)(a1 + 448);
      *(_WORD *)(result + 6) &= ~a2;
    }
  }
  return result;
}
