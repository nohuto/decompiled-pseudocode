/*
 * XREFs of CmpProcessLightWeightUOW @ 0x140695BDC
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x140694830 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069491C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140582804 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1405828C4 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpReportNotify @ 0x1406965F8 (CmpReportNotify.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140696678 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1408047F0 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140804978 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140804B64 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140804E5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x140804FAC (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140805204 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140805468 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140805BD0 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[1] = v11;
  v11[0] = v11;
  v6 = *(_DWORD *)(a1 + 68);
  if ( v6 > 7 )
  {
    if ( v6 == 8 )
      goto LABEL_47;
    if ( v6 == 9 )
    {
      if ( !a3 )
      {
        v8 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
        goto LABEL_43;
      }
      CmpLightWeightCommitSetSecDescUoW(a1, a2);
      v9 = 10LL;
LABEL_46:
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, v9, v11);
      goto LABEL_47;
    }
    if ( v6 <= 11 )
      goto LABEL_47;
    if ( v6 == 12 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2);
        goto LABEL_47;
      }
      v8 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
      goto LABEL_43;
    }
    if ( v6 == 13 )
      goto LABEL_47;
    if ( v6 != 14 )
      return (unsigned int)-1073741811;
    if ( !a3 )
    {
      v8 = CmpLightWeightPrepareRecreateKeyUoW(a1);
      goto LABEL_43;
    }
    CmpLightWeightCommitRecreateKeyUoW(a1, a2);
LABEL_24:
    v9 = 1LL;
    goto LABEL_46;
  }
  switch ( v6 )
  {
    case 7:
      goto LABEL_13;
    case 0:
      if ( !a3 )
      {
        v8 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
        goto LABEL_43;
      }
      CmpLightWeightCommitAddKeyUoW(a1, a2);
      goto LABEL_24;
    case 1:
      goto LABEL_47;
  }
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
    {
      if ( v6 > 3 )
      {
        if ( v6 > 5 )
        {
          if ( !a3 )
          {
            v7 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
            if ( (v7 & 0x80000000) != 0 )
              return v7;
            goto LABEL_14;
          }
          CmpLightWeightCommitDeleteValueKeyUoW(a1, a2);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 4LL, v11);
LABEL_13:
          if ( a3 )
          {
            if ( a3 == 1 )
              CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
            goto LABEL_47;
          }
LABEL_14:
          v8 = CmpLightWeightPrepareSetKeyUserFlags(a1);
          goto LABEL_43;
        }
        if ( !a3 )
        {
          v8 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
          goto LABEL_43;
        }
        CmpLightWeightCommitSetValueKeyUoW(a1, a2);
        v9 = 4LL;
        goto LABEL_46;
      }
      return (unsigned int)-1073741811;
    }
LABEL_47:
    v7 = 0;
    CmpSignalDeferredPosts(v11);
    return v7;
  }
  if ( a3 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v11);
    CmpLightWeightCommitDeleteKeyUoW(a1, a2);
    goto LABEL_47;
  }
  v8 = CmpLightWeightPrepareDeleteKeyUoW(a1, a2);
LABEL_43:
  v7 = v8;
  if ( v8 >= 0 )
    goto LABEL_47;
  return v7;
}
