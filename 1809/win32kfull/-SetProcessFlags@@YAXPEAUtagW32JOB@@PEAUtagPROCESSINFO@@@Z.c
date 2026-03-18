/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01282B0
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C011C358 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0128218 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx

  v4 = *((_DWORD *)a2 + 3) & 0xFDFFFFFF;
  if ( *((_DWORD *)a1 + 6) )
    v4 = *((_DWORD *)a2 + 3) | 0x2000000;
  *((_DWORD *)a2 + 3) = v4;
  KeAttachProcess(*(PRKPROCESS *)a2);
  v5 = *((_QWORD *)a2 + 41);
  if ( *((_DWORD *)a1 + 6) )
  {
    while ( v5 )
    {
      *(_DWORD *)(*(_QWORD *)(v5 + 480) + 28LL) |= 0x20000000u;
      *(_DWORD *)(v5 + 488) |= 0x20000000u;
      v5 = *(_QWORD *)(v5 + 664);
    }
  }
  else
  {
    while ( v5 )
    {
      *(_DWORD *)(*(_QWORD *)(v5 + 480) + 28LL) &= ~0x20000000u;
      *(_DWORD *)(v5 + 488) &= ~0x20000000u;
      v5 = *(_QWORD *)(v5 + 664);
    }
  }
  KeDetachProcess();
}
