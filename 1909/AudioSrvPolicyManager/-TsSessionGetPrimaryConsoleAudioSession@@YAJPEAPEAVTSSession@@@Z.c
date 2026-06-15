/*
 * XREFs of ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180025154
 * Callers:
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180026CC0 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x180026DB8 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionGetPrimaryConsoleAudioSession(struct TSSession **a1)
{
  _QWORD *v2; // rax
  struct TSSession *v3; // rdx
  unsigned int v4; // ebx

  EnterCriticalSection(&CriticalSection);
  v2 = qword_18004DC78;
  *a1 = 0LL;
  while ( v2 )
  {
    v3 = (struct TSSession *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( *(_DWORD *)v3 && *((_DWORD *)v3 + 86) )
    {
      *a1 = v3;
      break;
    }
  }
  v4 = *a1 == 0LL ? 0x490 : 0;
  LeaveCriticalSection(&CriticalSection);
  return v4;
}
