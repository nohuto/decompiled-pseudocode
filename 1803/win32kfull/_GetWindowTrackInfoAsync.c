/*
 * XREFs of _GetWindowTrackInfoAsync @ 0x1C0062BC0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall GetWindowTrackInfoAsync(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 416))
    && v5 != v2
    && (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 255LL, v5)
    && (*(_DWORD *)(v2 + 1200) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return (int)PostEventMessageEx(
                  *(struct tagTHREADINFO **)(a1 + 16),
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
                  9u,
                  a1,
                  0x342u,
                  1LL,
                  0LL,
                  0LL);
  }
  UserSetLastError(5LL, v3);
  return 0LL;
}
