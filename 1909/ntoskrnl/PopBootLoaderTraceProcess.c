/*
 * XREFs of PopBootLoaderTraceProcess @ 0x140726390
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x14018279C (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECB0 (BapdRecordFirmwareBootStats.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 */

void PopBootLoaderTraceProcess()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rax
  _DWORD *v2; // rax
  __int64 v3; // rdx

  v0 = qword_140443000;
  if ( qword_140443000 )
  {
    BapdRecordFirmwareBootStats();
    EtwUnregister(stru_140426750.RegHandle);
    stru_140426750.RegHandle = 0LL;
    stru_140426750.LevelPlus1 = 0;
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
