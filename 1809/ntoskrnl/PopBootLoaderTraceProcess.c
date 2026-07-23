/*
 * XREFs of PopBootLoaderTraceProcess @ 0x1406DE208
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
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
    EtwUnregister(stru_140401410.RegHandle);
    stru_140401410.RegHandle = 0LL;
    stru_140401410.LevelPlus1 = 0;
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
