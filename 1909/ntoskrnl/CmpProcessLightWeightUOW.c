/*
 * XREFs of CmpProcessLightWeightUOW @ 0x1406E3990
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E37B8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E38B4 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140636EB0 (CmpReportNotify.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406E3DB4 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14083C50C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14083C868 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083C98C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14083CB88 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14083CCC4 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14083D834 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14083D8B4 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // r8d
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 > 7 )
  {
    if ( v8 == 8 )
      goto LABEL_12;
    if ( v8 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW(a1, a2);
        v12 = 10;
        goto LABEL_15;
      }
      v9 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
    }
    else
    {
      if ( v8 <= 11 )
        goto LABEL_12;
      if ( v8 != 12 )
      {
        if ( v8 == 13 )
          goto LABEL_12;
        return (unsigned int)-1073741811;
      }
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2, a4);
        goto LABEL_12;
      }
      v9 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
    }
  }
  else
  {
    if ( v8 == 7 )
      goto LABEL_21;
    if ( v8 )
    {
      if ( v8 == 1 )
        goto LABEL_12;
      if ( v8 != 2 )
      {
        if ( v8 != 3 )
        {
          if ( v8 > 3 )
          {
            if ( v8 <= 5 )
            {
              if ( !a3 )
              {
                v9 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
                goto LABEL_11;
              }
              CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
              v12 = 4;
LABEL_15:
              CmpReportNotify(*(_QWORD *)(a1 + 48), 0, v12, (__int64)v13);
              goto LABEL_12;
            }
            if ( !a3 )
            {
              v10 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
              if ( (v10 & 0x80000000) != 0 )
                return v10;
LABEL_19:
              v9 = CmpLightWeightPrepareSetKeyUserFlags(a1);
              goto LABEL_11;
            }
            CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
            CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 4, (__int64)v13);
LABEL_21:
            if ( a3 )
            {
              if ( a3 == 1 )
                CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
              goto LABEL_12;
            }
            goto LABEL_19;
          }
          return (unsigned int)-1073741811;
        }
LABEL_12:
        v10 = 0;
        CmpSignalDeferredPosts(v13);
        return v10;
      }
      if ( a3 )
      {
        CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 1, (__int64)v13);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        goto LABEL_12;
      }
      v9 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
    }
    else
    {
      if ( a3 )
      {
        CmpLightWeightCommitAddKeyUoW(a1, a2);
        v12 = 1;
        goto LABEL_15;
      }
      v9 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
    }
  }
LABEL_11:
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_12;
  return v10;
}
