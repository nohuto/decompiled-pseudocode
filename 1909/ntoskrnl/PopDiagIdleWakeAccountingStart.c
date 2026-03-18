/*
 * XREFs of PopDiagIdleWakeAccountingStart @ 0x1408AC080
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void PopDiagIdleWakeAccountingStart()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  int v2; // eax

  if ( !PopDiagGlobalIdleWakeAccounting )
  {
    memset(&unk_140439601, 0, 0x87DFuLL);
    v0 = 0;
    v1 = &unk_14043975C;
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
