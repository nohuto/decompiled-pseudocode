/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0128218
 * Callers:
 *     UserJobCallout @ 0x1C00B1A90 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C011C358 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01282B0 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( *(_QWORD *)a2 && (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
  {
    *((_DWORD *)a2 + 205) |= 0x4000000u;
    *((_QWORD *)a2 + 96) = a1;
    v4 = *((_DWORD *)a1 + 7);
    v5 = *((unsigned int *)a1 + 8);
    if ( v4 != (_DWORD)v5 )
    {
LABEL_8:
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * v4) = a2;
      ++*((_DWORD *)a1 + 7);
      SetProcessFlags(a1, a2);
      return 1LL;
    }
    if ( (_DWORD)v5 )
      v6 = UserReAllocPool(*((_QWORD *)a1 + 5), 8 * v5, 8LL * (unsigned int)(v5 + 4), 2020242261LL);
    else
      v6 = Win32AllocPool(32LL, 2020242261LL);
    if ( v6 )
    {
      *((_DWORD *)a1 + 8) += 4;
      *((_QWORD *)a1 + 5) = v6;
      v4 = *((_DWORD *)a1 + 7);
      goto LABEL_8;
    }
  }
  return 0LL;
}
