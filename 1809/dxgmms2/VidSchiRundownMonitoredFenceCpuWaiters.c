/*
 * XREFs of VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C00117EC
 * Callers:
 *     VidSchDestroyDeviceSyncObject @ 0x1C00116D0 (VidSchDestroyDeviceSyncObject.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 */

void __fastcall VidSchiRundownMonitoredFenceCpuWaiters(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  unsigned int i; // ebp
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v3 = *(_QWORD *)(a3 + 32);
  v6 = a1;
  v7 = *(_QWORD **)(v3 + 760);
  if ( v7 != (_QWORD *)(v3 + 760) )
  {
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      if ( v8[3] == a3 )
      {
        for ( i = 0; i < *((_DWORD *)v8 + 26); ++i )
        {
          v10 = (_QWORD *)(v8[4] + 16LL * i);
          if ( *v10 == a2 || !a2 )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
            v11[3] = *v10;
            v11[4] = a3;
            v11[5] = **(_QWORD **)(*v10 + 64LL);
            v11[6] = v10[1];
            v11[7] = *(unsigned __int8 *)(*v10 + 28LL);
            WdLogEvent5_WdEvent(v11);
            *v10 = 0LL;
          }
        }
      }
    }
    while ( v7 != (_QWORD *)(v3 + 760) );
    v6 = a1;
  }
  VidSchiUnwaitMonitoredFences(v6, v3);
}
