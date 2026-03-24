/*
 * XREFs of PopDiagIdleWakeAccountingStart @ 0x14086FC30
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void PopDiagIdleWakeAccountingStart()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  int v2; // eax

  if ( !PopDiagGlobalIdleWakeAccounting )
  {
    memset(&PopDiagGlobalIdleWakeAccounting, 0, 0x5A98uLL);
    v0 = 0;
    v1 = &unk_140410C14;
    do
    {
      *(_QWORD *)(v1 - 41) = -1LL;
      *v1 = 0;
      *(v1 - 1) = 1310721;
      memset(v1 + 1, 0, 0xA0uLL);
      v1 += 84;
      v2 = 7;
      if ( v0 <= 4 )
        v2 = v0;
      ++v0;
      *(v1 - 127) = v2;
    }
    while ( v0 < 0x45 );
    PopDiagGlobalIdleWakeAccounting = 1;
  }
}
