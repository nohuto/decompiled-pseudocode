/*
 * XREFs of ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C000BFF4
 * Callers:
 *     UserJobCallout @ 0x1C000FA90 (UserJobCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall JobCalloutTerminate(struct tagW32JOB *a1)
{
  __int64 v2; // rcx
  struct tagW32JOB *v3; // rdx
  struct tagW32JOB *v4; // rcx

  v2 = *((_QWORD *)a1 + 7);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 13) = 0;
  }
  v3 = (struct tagW32JOB *)gpJobsList;
  v4 = (struct tagW32JOB *)gpJobsList;
  if ( gpJobsList )
  {
    while ( v4 != a1 )
    {
      v3 = v4;
      v4 = *(struct tagW32JOB **)v4;
      if ( !v4 )
        goto LABEL_6;
    }
    *(_QWORD *)v3 = *(_QWORD *)a1;
  }
LABEL_6:
  RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)a1 + 2));
  Win32FreePool(a1);
  return 1LL;
}
