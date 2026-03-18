/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01BA378
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01B847C (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ebx

  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_3;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_3;
  }
  if ( !a2 )
    return 0LL;
LABEL_3:
  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 == 595 )
    return 0LL;
  v7 = CTouchProcessor::DelegateCoalescePointerMessage(
         gpTouchProcessor,
         *(_QWORD *)(a3 + 40),
         a2,
         -__CFSHR__(*(_DWORD *)(a3 + 100), 6),
         -__CFSHR__(*(_DWORD *)(a3 + 100), 7),
         v6);
  v8 = v7;
  if ( a2 )
  {
    if ( v7 )
      DelQEntry((_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL), (_QWORD *)a3);
  }
  return v8;
}
