/*
 * XREFs of EtwpFlushBuffer @ 0x1405C2D14
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405C3178 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpFlushBufferToLogfile @ 0x1405C1784 (EtwpFlushBufferToLogfile.c)
 *     EtwpFlushBufferToRealtime @ 0x1405C2C70 (EtwpFlushBufferToRealtime.c)
 *     EtwpPrepareHeader @ 0x1405C2DD0 (EtwpPrepareHeader.c)
 *     EtwpSendSessionNotification @ 0x140659F28 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v3; // esi
  int v5; // edi
  char v8; // cl
  int v9; // eax
  int v11; // eax

  v3 = -1073741823;
  v5 = -1073741823;
  if ( (unsigned int)EtwpPrepareHeader() == -2147483614 )
  {
    v8 = 1;
    if ( (a3 & 1) == 0 )
      return 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( (*(_DWORD *)(a1 + 832) & 8) != 0 )
  {
    v9 = EtwpFlushBufferToRealtime(a1, (__int64)a2, v8);
    v3 = v9;
    if ( v9 < 0 )
      EtwpSendSessionNotification(a1, 4LL, (unsigned int)v9);
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    v11 = EtwpFlushBufferToLogfile(a1, a2);
    v5 = v11;
    if ( v11 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v11);
  }
  if ( v3 >= 0 || v5 >= 0 )
    return 0LL;
  return (unsigned int)v5;
}
