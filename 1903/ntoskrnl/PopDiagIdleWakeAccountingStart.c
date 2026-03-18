/*
 * XREFs of PopDiagIdleWakeAccountingStart @ 0x1408AC820
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void PopDiagIdleWakeAccountingStart()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  int v2; // eax

  if ( !PopDiagGlobalIdleWakeAccounting )
  {
    memset(&unk_140439681, 0, 0x87DFuLL);
    v0 = 0;
    v1 = &unk_1404397DC;
    do
    {
      *(_QWORD *)(v1 - 83) = -1LL;
      *v1 = 0;
      *(v1 - 1) = 1310721;
      memset(v1 + 1, 0, 0xA0uLL);
      v1 += 126;
      v2 = 7;
      if ( v0 <= 4 )
        v2 = v0;
      ++v0;
      *(v1 - 211) = v2;
    }
    while ( v0 < 0x45 );
    PopDiagGlobalIdleWakeAccounting = 1;
  }
}
