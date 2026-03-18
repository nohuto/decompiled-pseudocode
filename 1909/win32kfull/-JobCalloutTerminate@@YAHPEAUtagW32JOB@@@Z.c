/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00EEEE0
 * Callers:
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1, int a2)
{
  __int64 v3; // rcx
  struct tagW32JOB *v4; // rdx
  struct tagW32JOB *v5; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, a2, 13, 24, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, a1);
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v4 = (struct tagW32JOB *)gpJobsList;
  v5 = (struct tagW32JOB *)gpJobsList;
  if ( gpJobsList )
  {
    while ( v5 != a1 )
    {
      v4 = v5;
      v5 = *(struct tagW32JOB **)v5;
      if ( !v5 )
        goto LABEL_8;
    }
    *(_QWORD *)v4 = *(_QWORD *)a1;
  }
LABEL_8:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
