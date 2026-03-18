/*
 * XREFs of ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C012D1F0
 * Callers:
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C012D160 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 */

bool __fastcall BeginGetWidnowTrackInfoAsync(struct tagTHREADINFO **a1)
{
  return (unsigned int)PostEventMessageEx(a1[2], *((_QWORD *)a1[2] + 53), 9u, (__int64)a1, 0x342u, 1LL, 0LL, 0LL) != 0;
}
