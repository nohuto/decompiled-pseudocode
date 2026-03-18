/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01DD0BC
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01DB0C0 (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx

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
  if ( a2 && v8 )
  {
    v10 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v10 + 80) == a3 )
    {
      *(_QWORD *)(v10 + 80) = 0LL;
      v10 = *(_QWORD *)(a1 + 432);
    }
    DelQEntry(v10 + 24, a3, 1);
  }
  return v9;
}
