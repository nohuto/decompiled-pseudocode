/*
 * XREFs of ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0123420
 * Callers:
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

bool __fastcall BeginGetWidnowTrackInfoAsync(struct tagTHREADINFO **a1)
{
  return (unsigned int)PostEventMessageEx(
                         a1[2],
                         *((_QWORD *)a1[2] + 54),
                         9u,
                         (InputTransform *)a1,
                         0x342u,
                         1LL,
                         0LL,
                         0LL) != 0;
}
