/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00EED94
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00EEC10 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00EECD8 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00EEE34 (WPP_RECORDER_SF_qqD.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2, int a3, int a4)
{
  __int64 v6; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)a2, a3, a4);
  if ( *((_DWORD *)a1 + 6) )
    *((_DWORD *)a2 + 3) |= 0x2000000u;
  else
    *((_DWORD *)a2 + 3) &= ~0x2000000u;
  KeAttachProcess(*(PRKPROCESS *)a2);
  v6 = *((_QWORD *)a2 + 40);
  if ( *((_DWORD *)a1 + 6) )
  {
    while ( v6 )
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 472) + 28LL) |= 0x20000000u;
      *(_DWORD *)(v6 + 480) |= 0x20000000u;
      v6 = *(_QWORD *)(v6 + 656);
    }
  }
  else
  {
    while ( v6 )
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 472) + 28LL) &= ~0x20000000u;
      *(_DWORD *)(v6 + 480) &= ~0x20000000u;
      v6 = *(_QWORD *)(v6 + 656);
    }
  }
  KeDetachProcess();
}
