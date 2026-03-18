/*
 * XREFs of SetMiPPromotion @ 0x1C01ABFDC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01EBC60 (NtUserAutoPromoteMouseInPointer.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 *     xxxDefPointerProc @ 0x1C01FF9A4 (xxxDefPointerProc.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01AB650 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  result = *(_QWORD *)(a1 + 1248);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 3 || (result = (unsigned int)(a2 - 581), (unsigned int)result <= 0x12) )
      {
        v5 = *(unsigned int **)(a1 + 1248);
        v6 = *v5;
        if ( (v5[9] & 0x1F0) != 0 )
          v7 = v6 & 0xFFFFFFFD;
        else
          v7 = v6 | 2;
        *v5 = v7;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1248) |= 4u;
      **(_DWORD **)(a1 + 1248) &= ~0x10u;
      result = *(_QWORD *)(a1 + 1248);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
