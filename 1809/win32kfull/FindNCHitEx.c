/*
 * XREFs of FindNCHitEx @ 0x1C010E214
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     MNItemHitTest @ 0x1C020B230 (MNItemHitTest.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02286D4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 */

int __fastcall FindNCHitEx(__int64 a1, int a2, struct tagPOINT a3)
{
  unsigned __int16 v3; // bx
  __int64 v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // rcx

  v3 = a2;
  if ( a2 == 5 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( !v5 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 1) == 0 )
      return a2;
    v6 = MNItemHitTest(*(_QWORD *)(a1 + 144), a1);
    if ( v6 < 0 )
      return v3 | ((unsigned __int16)v6 << 16);
    v7 = *(_QWORD *)(*(_QWORD *)(96LL * v6 + *(_QWORD *)(v5 + 88)) + 96LL);
    if ( v7 == 1 )
    {
      v3 = 65;
      return v3 | ((unsigned __int16)v6 << 16);
    }
    if ( v7 == 2 )
    {
      v3 = 66;
      return v3 | ((unsigned __int16)v6 << 16);
    }
    if ( v7 != 3 )
    {
      if ( v7 <= 4 )
        goto LABEL_17;
      if ( v7 <= 6 )
      {
        v3 = 68;
        return v3 | ((unsigned __int16)v6 << 16);
      }
      if ( v7 != 7 )
      {
        if ( v7 == -1LL )
        {
          v3 = -2;
          return v3 | ((unsigned __int16)v6 << 16);
        }
LABEL_17:
        v3 = 69;
        return v3 | ((unsigned __int16)v6 << 16);
      }
    }
    v3 = 67;
    return v3 | ((unsigned __int16)v6 << 16);
  }
  if ( a2 == 7 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 2) != 0 )
      return (unsigned __int16)HitTestScrollBar((struct tagWND *)a1, 1, a3) | 0x10000;
    return a2;
  }
  if ( a2 != 6 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) == 0 )
    return a2;
  return (unsigned __int16)HitTestScrollBar((struct tagWND *)a1, 0, a3);
}
