/*
 * XREFs of ScrubDelegatedWindow @ 0x1C008BAC0
 * Callers:
 *     CleanupInputDelegation @ 0x1C008BA10 (CleanupInputDelegation.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C008BA34 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  --*(_DWORD *)(v1 + 1272);
  --*(_DWORD *)(v3 + 1272);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  if ( *(_QWORD *)(v4 + 144) == a1 && (int)IsClearDelegationCaptureSupported(v4) >= 0 )
    ClearDelegationCapture(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL));
  if ( *(_DWORD *)(v3 + 1272) )
    return 0LL;
  *(_DWORD *)(v3 + 1224) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1256) = 0LL;
  *(_QWORD *)(v3 + 1264) = 0LL;
  *(_DWORD *)(v3 + 480) &= 0xFFFFFF3F;
  return result;
}
