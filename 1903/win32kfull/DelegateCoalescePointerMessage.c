/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01F2D58
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E27B4 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01F086C (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx

  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_6;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_6;
  }
  if ( !a2 )
    return 0LL;
LABEL_6:
  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 == 595 )
    return 0LL;
  v8 = CTouchProcessor::DelegateCoalescePointerMessage(
         gpTouchProcessor,
         *(_QWORD *)(a3 + 40),
         a2,
         -__CFSHR__(*(_DWORD *)(a3 + 100), 6),
         -__CFSHR__(*(_DWORD *)(a3 + 100), 7),
         v6);
  v9 = v8;
  if ( a2 )
  {
    if ( v8 )
      DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, a3, 1);
  }
  return v9;
}
