/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FE08
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FDC0 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C012FEC4 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h]
  struct tagW32JOB *v8; // [rsp+28h] [rbp-20h]
  struct tagPROCESSINFO *v9; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    v8 = a1;
    WPP_RECORDER_SF_qq((__int64)a1, (__int64)a2, 0xDu, 0x16u, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids);
  }
  *((_DWORD *)a2 + 203) |= 0x8000000u;
  *((_QWORD *)a2 + 95) = a1;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 7);
  if ( v5 != v4 )
    goto LABEL_8;
  if ( v4 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 5),
               8LL * *((unsigned int *)a1 + 8),
               8LL * (unsigned int)(v4 + 4),
               2020242261LL,
               v7,
               v8,
               v9);
  else
    result = Win32AllocPool(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 8) += 4;
    *((_QWORD *)a1 + 5) = result;
    v5 = *((_DWORD *)a1 + 7);
LABEL_8:
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL * v5) = a2;
    ++*((_DWORD *)a1 + 7);
    SetProcessFlags(a1, a2);
    return 1LL;
  }
  return result;
}
