/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C000BED4
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C000BE48 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C000BFA8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx

  v4 = *((_DWORD *)a2 + 3);
  if ( *((_DWORD *)a1 + 6) )
    v5 = v4 | 0x2000000;
  else
    v5 = v4 & 0xFDFFFFFF;
  *((_DWORD *)a2 + 3) = v5;
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
