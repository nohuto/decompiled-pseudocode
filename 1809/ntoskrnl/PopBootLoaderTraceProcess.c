/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1406DCF68
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140178708 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     EtwUnregister @ 0x140707370 (EtwUnregister.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v0 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    BapdRecordFirmwareBootStats();
    EtwUnregister(stru_140400410.RegHandle);
    stru_140400410.RegHandle = 0LL;
    stru_140400410.LevelPlus1 = 0;
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      v2 = *(_DWORD **)(v1 + 32);
      if ( *v2 == 1281517896 )
      {
        v3 = (unsigned int)v2[3];
        if ( (_DWORD)v3 )
          BapdWriteEtwEvents((unsigned __int64)v2 + (unsigned int)v2[2], v3);
      }
    }
  }
}
