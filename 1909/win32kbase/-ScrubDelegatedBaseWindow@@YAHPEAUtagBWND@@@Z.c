/*
 * XREFs of ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C0107B6C
 * Callers:
 *     CleanupInputDelegation @ 0x1C0087630 (CleanupInputDelegation.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0087654 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedBaseWindow(struct tagBWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  --*(_DWORD *)(v1 + 1272);
  --*(_DWORD *)(v3 + 1272);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( *(struct tagBWND **)(v4 + 144) == a1 && (int)IsClearDelegationCaptureSupported(v4) >= 0 )
    ClearDelegationCapture(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL));
  if ( *(_DWORD *)(v3 + 1272) )
    return 0LL;
  *(_DWORD *)(v3 + 1224) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1256) = 0LL;
  *(_QWORD *)(v3 + 1264) = 0LL;
  *(_DWORD *)(v3 + 480) &= 0xFFFFFF3F;
  return result;
}
