/*
 * XREFs of ScrubDelegatedWindow @ 0x1C006B1B0
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00127DC (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C006B160 (CleanupInputDelegation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  --*(_DWORD *)(v1 + 1240);
  --*(_DWORD *)(v3 + 1240);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 136LL) == a1
    && (int)IsClearDelegationCaptureSupported() >= 0 )
  {
    ClearDelegationCapture(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL));
  }
  if ( *(_DWORD *)(v3 + 1240) )
    return 0LL;
  *(_DWORD *)(v3 + 1200) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1224) = 0LL;
  *(_QWORD *)(v3 + 1232) = 0LL;
  *(_DWORD *)(v3 + 480) &= 0xFFFFFF3F;
  return result;
}
