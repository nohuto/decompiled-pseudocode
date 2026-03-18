/*
 * XREFs of ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00E44A8
 * Callers:
 *     CleanupInputDelegation @ 0x1C0003390 (CleanupInputDelegation.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C007C674 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedBaseWindow(struct tagBWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 8) = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  --*(_DWORD *)(v1 + 1248);
  --*(_DWORD *)(v3 + 1248);
  if ( *(struct tagBWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 136LL) == a1
    && (int)IsClearDelegationCaptureSupported() >= 0 )
  {
    ClearDelegationCapture(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL));
  }
  if ( *(_DWORD *)(v3 + 1248) )
    return 0LL;
  *(_DWORD *)(v3 + 1208) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1232) = 0LL;
  *(_QWORD *)(v3 + 1240) = 0LL;
  *(_DWORD *)(v3 + 488) &= 0xFFFFFF3F;
  return result;
}
