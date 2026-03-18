/*
 * XREFs of _DelegateCapturePointers @ 0x1C01DB518
 * Callers:
 *     EditionDelegateCapturePointers @ 0x1C01DB120 (EditionDelegateCapturePointers.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01DAEE8 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1C01DBFA0 (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // r15d

  v2 = 0LL;
  if ( a1 )
  {
    v5 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v5 + 180) )
      {
        v6 = *(_QWORD *)(v5 + 76);
        v7 = *(_QWORD *)(v6 + 16);
        v8 = DeferNotifyDelegateCapture(
               (struct tagTHREADINPUTPOINTERLIST *)(v7 + 1080),
               *(_WORD *)(v5 - 4),
               *(_DWORD *)v5,
               (struct tagWND *)v6);
        if ( v8 )
          SetWakeBit(v7, 0x1000u);
        else
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
            gpTouchProcessor,
            *(_DWORD *)v5,
            *(_WORD *)(v5 - 4),
            0x200000u);
        DelegateDiscardMessages(*(struct tagQ **)(v7 + 432), v8, (struct tagDELEGATEPOINTERMAP *)(a2 + 192 * v2));
      }
      v2 = (unsigned int)(v2 + 1);
      v5 += 192LL;
    }
    while ( (unsigned int)v2 < a1 );
  }
  return 1LL;
}
