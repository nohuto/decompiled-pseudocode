/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0271858
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C00C55A4 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01EFBB8 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0045FA0 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C0270A6C (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyOutputDuplManager(OUTPUTDUPL_MGR **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  OUTPUTDUPL_MGR **v5; // rbx

  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 72) )
    {
      v5 = a1 - 3;
      if ( a1 != (OUTPUTDUPL_MGR **)24 )
      {
        OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(a1, a2);
        v5[2] = 0LL;
        operator delete(v5);
      }
    }
    else
    {
      OUTPUTDUPL_MGR::`scalar deleting destructor'((OUTPUTDUPL_MGR *)a1);
    }
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v3 + 24) = 0LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
