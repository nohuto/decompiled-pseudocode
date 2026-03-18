/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00EEF80
 * Callers:
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1, int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 13, 15, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, a1);
  v3 = Win32AllocPoolZInit(64LL, 1651143509LL);
  v4 = (_QWORD *)v3;
  if ( !v3 )
    return 0LL;
  if ( (int)CreateGlobalAtomTable(v3 + 16) < 0 )
  {
    Win32FreePool(v4);
    return 0LL;
  }
  *v4 = gpJobsList;
  gpJobsList = v4;
  v4[1] = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(gpJobsList, v5, 0xDu, 0x10u, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, v4, a1);
  return (struct tagW32JOB *)v4;
}
