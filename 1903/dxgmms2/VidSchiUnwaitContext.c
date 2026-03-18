/*
 * XREFs of VidSchiUnwaitContext @ 0x1C000E794
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000C010 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E8D0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010B50 (VidSchSuspendResumeDevice.c)
 *     VidSchiDelayReadyRoutine @ 0x1C00110A0 (VidSchiDelayReadyRoutine.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0015CE8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C002BDBC (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A930 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x100) != 0 )
    return v3;
  if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
      return v3;
    v6 = 10LL;
    v7 = 22272LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 656) == a1 + 656 )
  {
    v6 = 0LL;
    v7 = 22289LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, (_QWORD *)v6, v7);
    return v3;
  }
  if ( !*(_DWORD *)(a1 + 772) )
  {
    v6 = 1LL;
    v7 = 22355LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    v7 = a2;
    v6 = 4LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
  {
    v7 = a2;
    v6 = 8LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x10) != 0 )
  {
    v7 = a2;
    v6 = 3LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v7 = a2;
    v6 = 7LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 8) != 0 )
  {
    v7 = a2;
    v6 = 2LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 && (*(_DWORD *)(a1 + 184) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, a2) != 0;
  }
  return v3;
}
