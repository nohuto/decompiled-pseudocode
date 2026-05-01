/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380
 * Callers:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B024 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180029AE0 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CE14 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18002CE40 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002D1F0 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18002D330 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180034C30 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180038F04 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18003A8FC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800771B8 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180078764 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180078EF8 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rdi
  __int64 v3; // r8
  __int64 *v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  void *v8; // rsi
  _QWORD *Value; // rax
  bool v10; // zf
  struct _HAM_DEPENDENCY_LINK *FirstLink; // rax
  struct _HAM_DEPENDENCY_LINK *v12; // rdx
  char *v13; // rbx
  struct _HAM_DEPENDENCY_LINK *v14; // rdx
  struct _HAM_DEPENDENCY_LINK *v15; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rax
  struct _HAM_DEPENDENCY_LINK *v17; // rdx
  struct _HAM_DEPENDENCY_LINK *v18; // rdx
  struct _HAM_DEPENDENCY_LINK *v19; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  struct _HAM_DEPENDENCY_LINK *v25; // rdx
  struct _HAM_HOST_DEPENDENCY *v26; // rbx
  struct _HAM_HOST_DEPENDENCY *v27; // r9
  struct _HAM_DEPENDENCY_LINK *v28; // r8
  struct _HAM_DEPENDENCY_LINK *k; // rcx
  int v30; // eax
  __int64 v31; // rax
  struct _HAM_DEPENDENCY_LINK *v32; // rcx
  struct _HAM_DEPENDENCY_LINK *v33; // rdx
  struct _HAM_HOST_DEPENDENCY *v34; // rbx
  struct _HAM_HOST_DEPENDENCY *v35; // r9
  struct _HAM_DEPENDENCY_LINK *v36; // r8
  struct _HAM_DEPENDENCY_LINK *m; // rcx
  int v38; // eax
  __int64 v39; // rax
  struct _HAM_DEPENDENCY_LINK *v40; // rdi
  struct _HAM_DEPENDENCY_LINK *v41; // rdx
  struct _HAM_HOST_DEPENDENCY *v42; // rbx
  struct _HAM_HOST_DEPENDENCY *v43; // rdi
  struct _HAM_DEPENDENCY_LINK *v44; // r8
  struct _HAM_DEPENDENCY_LINK *n; // rcx
  int v46; // eax
  DWORD v47; // edi
  _QWORD *v48; // rbx
  _QWORD *v49; // rax
  int v51; // r14d
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned int v58; // [rsp+30h] [rbp-D0h] BYREF
  int CanStaticallyDonateCommit; // [rsp+34h] [rbp-CCh] BYREF
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v60[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-B8h]
  struct _RTL_BALANCED_NODE *v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v69; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+C0h] [rbp-40h] BYREF
  void *v75; // [rsp+D0h] [rbp-30h]
  int v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  unsigned int *v78; // [rsp+E0h] [rbp-20h]
  __int64 v79; // [rsp+E8h] [rbp-18h]
  struct _HAM_DEPENDENCY_GROUP *v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 *v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *p_CanStaticallyDonateCommit; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  __int64 *v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  __int64 *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  __int64 *v91; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]

  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v71 = &unk_1800993B3;
    UserData.Reserved = 2;
    v72 = 30;
    v73 = 1;
    v61 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  v60[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60;
  v60[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60;
  while ( !HampDepGroupTryLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60);
    HampDepGroupDereferenceMembers(v60);
  }
  v2 = v60[0];
  v64 = *((_QWORD *)a1 + 14);
  v62 = 0LL;
  v63 = 0LL;
  if ( (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)v60[0] != v60 )
  {
    v3 = 0x1000000000LL;
    while ( 1 )
    {
      v4 = (__int64 *)*((_QWORD *)v2 - 4);
      *((_QWORD *)v2 + 29) = 0LL;
      if ( v4 )
        break;
      CanStaticallyDonateCommit = 0;
      v5 = 0LL;
LABEL_11:
      *((_QWORD *)v2 + 28) = v5;
      v6 = *((_DWORD *)v2 + 10) & 0xFFFFFFF3 | (4 * ((*((_QWORD *)v2 - 10) & 0x300000000LL) != 0));
      *((_DWORD *)v2 + 10) = v6;
      if ( (*((_QWORD *)v2 - 10) & 0x1000000000LL) != 0 )
      {
        v7 = (unsigned __int64)v62;
        v8 = (void *)((v6 >> 2) & 3);
        if ( (v63 & 1) != 0 )
        {
          if ( v62 )
            v7 = (unsigned __int64)&v62 ^ (unsigned __int64)v62;
          else
            v7 = 0LL;
        }
        LOBYTE(v3) = 0;
        v51 = v63 & 1;
        if ( v7 )
        {
          while ( 1 )
          {
            if ( (int)HampDepHostStackCompareHosts(v8, (struct _RTL_BALANCED_NODE *)v7) < 0 )
            {
              v52 = *(_QWORD *)v7;
              if ( v51 )
              {
                if ( !v52 )
                  goto LABEL_138;
                v52 ^= v7;
              }
              if ( !v52 )
              {
LABEL_138:
                LOBYTE(v3) = 0;
                break;
              }
            }
            else
            {
              v52 = *(_QWORD *)(v7 + 8);
              if ( v51 )
              {
                if ( !v52 )
                  goto LABEL_15;
                v52 ^= v7;
              }
              if ( !v52 )
              {
LABEL_15:
                LOBYTE(v3) = 1;
                break;
              }
            }
            v7 = v52;
          }
        }
        RtlRbInsertNodeEx(&v62, v7, v3, (char *)v2 + 16);
        *((_DWORD *)v2 + 10) |= 2u;
        v3 = 0x1000000000LL;
      }
      v2 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)v2;
      if ( v2 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60 )
        goto LABEL_18;
    }
    v53 = *v4;
    v54 = *(_QWORD *)(v53 + 80);
    v5 = *(_QWORD *)(v53 + 456);
    v55 = *(_QWORD *)(v54 + 1000);
    if ( v55 && *(_QWORD *)(v55 + 456) > v5 )
      v5 = *(_QWORD *)(v55 + 456);
    v56 = *(_QWORD *)(v54 + 944);
    if ( v56 && v56 > v5 )
    {
      CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(
                                    (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 728),
                                    v56);
      if ( CanStaticallyDonateCommit < 0 )
      {
        *(_QWORD *)(v54 + 944) = 0LL;
        v67 = *((_QWORD *)v2 + 48);
        if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
        {
          v86 = 4LL;
          p_CanStaticallyDonateCommit = &CanStaticallyDonateCommit;
          v65 = *(_QWORD *)(v54 - 32);
          v87 = &v65;
          v66 = *((_QWORD *)v2 - 95);
          v89 = &v66;
          v91 = &v67;
          v88 = v57;
          v90 = v57;
          v92 = v57;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098D4A, 0LL, 0LL, 6u, &pData);
        }
        v3 = 0x1000000000LL;
        goto LABEL_184;
      }
      v3 = 0x1000000000LL;
    }
    CanStaticallyDonateCommit = 0;
LABEL_184:
    if ( v5 <= *(_QWORD *)(v54 + 944) )
      v5 = *(_QWORD *)(v54 + 944);
    goto LABEL_11;
  }
LABEL_18:
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 8) == 0 )
      __int2c();
    v10 = Value[4]-- == 1LL;
    if ( v10 )
      *Value &= ~8uLL;
  }
  HampDepGroupEvaluateDependencies(a1, (struct _HAM_DEP_HOST_STACK *)&v62);
  FirstLink = HampDepGroupGetFirstLink(a1);
  if ( FirstLink )
  {
    while ( 1 )
    {
      v12 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstLink + 8);
      v13 = 0LL;
      if ( v12 != (struct _HAM_DEPENDENCY_LINK *)((char *)FirstLink + 64) )
        v13 = (char *)v12 - 16;
      if ( v13 )
        break;
      FirstLink = HampDepGroupGetNextLink(FirstLink);
      if ( !FirstLink )
        goto LABEL_40;
    }
    while ( 1 )
    {
      do
      {
        if ( (v13[32] & 7) == 5 )
          HampHostQueueTerminateEx(*((_QWORD *)v13 + 7), *((_DWORD *)v13 + 21), *((_DWORD *)v13 + 20), 0LL, 2, 0);
        v14 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v13 + 2);
        v15 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v13 + 1);
        v13 = 0LL;
        if ( v14 != (struct _HAM_DEPENDENCY_LINK *)((char *)v15 + 64) )
          v13 = (char *)v14 - 16;
      }
      while ( v13 );
      i = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v15 + 1);
      if ( i )
      {
        v17 = *(struct _HAM_DEPENDENCY_LINK **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = v17;
            v17 = *(struct _HAM_DEPENDENCY_LINK **)v17;
          }
          while ( v17 );
        }
      }
      else
      {
        for ( i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v15 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              i;
              i = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)i == v15 )
            break;
          v15 = i;
        }
      }
      if ( !i )
        break;
      while ( 1 )
      {
        v18 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)i + 8);
        v13 = 0LL;
        if ( v18 != (struct _HAM_DEPENDENCY_LINK *)((char *)i + 64) )
          v13 = (char *)v18 - 16;
        if ( v13 )
          break;
        i = HampDepGroupGetNextLink(i);
        if ( !i )
          goto LABEL_40;
      }
    }
  }
LABEL_40:
  HampDepGroupProcessDonations(a1);
  for ( j = v60[0]; j != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v60; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
  {
    if ( (*((_BYTE *)j + 40) & 1) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v21 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v21 & 2) == 0 )
          __int2c();
        v10 = v21[2]-- == 1LL;
        if ( v10 )
          *v21 &= ~2uLL;
      }
      *((_DWORD *)j - 180) = 0;
      RtlReleaseSRWLockExclusive((char *)j - 728);
      *((_DWORD *)j + 10) &= ~1u;
    }
  }
  v22 = *((_QWORD *)a1 + 10);
  v23 = (unsigned __int64)a1 + 72;
  if ( (v22 & 1) != 0 )
  {
    if ( v22 == 1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)(v22 ^ (v23 | 1));
  }
  else
  {
    NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  for ( ; NextLink; NextLink = HampDepGroupGetNextLink(NextLink) )
  {
    v25 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
    v26 = 0LL;
    if ( v25 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
      v26 = (struct _HAM_DEPENDENCY_LINK *)((char *)v25 - 16);
    if ( v26 )
    {
      while ( 1 )
      {
        v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v26 + 2);
        v27 = v26;
        v28 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v26 + 1);
        v26 = 0LL;
        if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)v28 + 64) )
          v26 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
        if ( !v26 )
        {
          k = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v28 + 1);
          if ( k )
          {
            v19 = *(struct _HAM_DEPENDENCY_LINK **)k;
            if ( *(_QWORD *)k )
            {
              do
              {
                k = v19;
                v19 = *(struct _HAM_DEPENDENCY_LINK **)v19;
              }
              while ( v19 );
            }
          }
          else
          {
            for ( k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v28 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                  k;
                  k = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( *(struct _HAM_DEPENDENCY_LINK **)k == v28 )
                break;
              v28 = k;
            }
          }
          if ( k )
          {
            while ( 1 )
            {
              v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)k + 8);
              v26 = 0LL;
              if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)k + 64) )
                v26 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
              if ( v26 )
                break;
              k = HampDepGroupGetNextLink(k);
              if ( !k )
                goto LABEL_144;
            }
          }
          else
          {
LABEL_144:
            v26 = 0LL;
          }
        }
        if ( (*((_BYTE *)v27 + 32) & 7) == 3 )
        {
          if ( *((_BYTE *)v27 + 40) == 3 )
          {
            HampHostDepDestroy(v27);
          }
          else
          {
            LOBYTE(v19) = 3;
            v30 = HampDepGroupProcessActionForActivity(*(_QWORD *)v27, v19);
            if ( v30 < 0 )
              goto LABEL_68;
          }
        }
        if ( !v26 )
          goto LABEL_67;
      }
    }
  }
LABEL_67:
  v30 = 0;
LABEL_68:
  v58 = v30;
  v31 = *((_QWORD *)a1 + 10);
  if ( (v31 & 1) != 0 )
  {
    if ( v31 == 1 )
      v32 = 0LL;
    else
      v32 = (struct _HAM_DEPENDENCY_LINK *)(v31 ^ (v23 | 1));
  }
  else
  {
    v32 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  for ( ; v32; v32 = HampDepGroupGetNextLink(v32) )
  {
    v33 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v32 + 8);
    v34 = 0LL;
    if ( v33 != (struct _HAM_DEPENDENCY_LINK *)((char *)v32 + 64) )
      v34 = (struct _HAM_DEPENDENCY_LINK *)((char *)v33 - 16);
    if ( v34 )
    {
      while ( 1 )
      {
        v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v34 + 2);
        v35 = v34;
        v36 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v34 + 1);
        v34 = 0LL;
        if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)v36 + 64) )
          v34 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
        if ( !v34 )
        {
          m = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v36 + 1);
          if ( m )
          {
            v19 = *(struct _HAM_DEPENDENCY_LINK **)m;
            if ( *(_QWORD *)m )
            {
              do
              {
                m = v19;
                v19 = *(struct _HAM_DEPENDENCY_LINK **)v19;
              }
              while ( v19 );
            }
          }
          else
          {
            for ( m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v36 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                  m;
                  m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)m + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( *(struct _HAM_DEPENDENCY_LINK **)m == v36 )
                break;
              v36 = m;
            }
          }
          if ( m )
          {
            while ( 1 )
            {
              v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)m + 8);
              v34 = 0LL;
              if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)m + 64) )
                v34 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
              if ( v34 )
                break;
              m = HampDepGroupGetNextLink(m);
              if ( !m )
                goto LABEL_187;
            }
          }
          else
          {
LABEL_187:
            v34 = 0LL;
          }
        }
        if ( (*((_DWORD *)v35 + 8) & 7) == 2 )
        {
          if ( *((_BYTE *)v35 + 40) == 3 )
          {
            HampHostDepDestroy(v35);
          }
          else
          {
            LOBYTE(v19) = 2;
            v38 = HampDepGroupProcessActionForActivity(*(_QWORD *)v35, v19);
            if ( v38 < 0 )
              goto LABEL_87;
          }
        }
        if ( !v34 )
          goto LABEL_86;
      }
    }
  }
LABEL_86:
  v38 = 0;
LABEL_87:
  v58 = v38;
  v39 = *((_QWORD *)a1 + 10);
  if ( (v39 & 1) != 0 )
  {
    if ( v39 == 1 )
      v40 = 0LL;
    else
      v40 = (struct _HAM_DEPENDENCY_LINK *)(v39 ^ (v23 | 1));
  }
  else
  {
    v40 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  for ( ; v40; v40 = HampDepGroupGetNextLink(v40) )
  {
    v41 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v40 + 8);
    v42 = 0LL;
    if ( v41 != (struct _HAM_DEPENDENCY_LINK *)((char *)v40 + 64) )
      v42 = (struct _HAM_DEPENDENCY_LINK *)((char *)v41 - 16);
    if ( v42 )
    {
      while ( 1 )
      {
        v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v42 + 2);
        v43 = v42;
        v44 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v42 + 1);
        v42 = 0LL;
        if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)v44 + 64) )
          v42 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
        if ( !v42 )
        {
          n = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v44 + 1);
          if ( n )
          {
            v19 = *(struct _HAM_DEPENDENCY_LINK **)n;
            if ( *(_QWORD *)n )
            {
              do
              {
                n = v19;
                v19 = *(struct _HAM_DEPENDENCY_LINK **)v19;
              }
              while ( v19 );
            }
          }
          else
          {
            for ( n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v44 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
                  n;
                  n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)n + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( *(struct _HAM_DEPENDENCY_LINK **)n == v44 )
                break;
              v44 = n;
            }
          }
          if ( n )
          {
            while ( 1 )
            {
              v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)n + 8);
              v42 = 0LL;
              if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)n + 64) )
                v42 = (struct _HAM_DEPENDENCY_LINK *)((char *)v19 - 16);
              if ( v42 )
                break;
              n = HampDepGroupGetNextLink(n);
              if ( !n )
                goto LABEL_189;
            }
          }
          else
          {
LABEL_189:
            v42 = 0LL;
          }
        }
        if ( (*((_DWORD *)v43 + 8) & 7) == 1 )
        {
          if ( *((_BYTE *)v43 + 40) == 3 )
          {
            HampHostDepDestroy(v43);
          }
          else
          {
            LOBYTE(v19) = 1;
            v46 = HampDepGroupProcessActionForActivity(*(_QWORD *)v43, v19);
            if ( v46 < 0 )
              goto LABEL_106;
            *((_DWORD *)v43 + 8) &= 0xFFFFFFFC;
            *((_DWORD *)v43 + 8) |= 4u;
          }
        }
        if ( !v42 )
          goto LABEL_105;
      }
    }
  }
LABEL_105:
  v46 = 0;
LABEL_106:
  v58 = v46;
  if ( v46 < 0 )
  {
    LOBYTE(v19) = 4;
    HampDepGroupProcessActivityActionForGroup(a1, v19);
  }
  else
  {
    v58 = 0;
  }
  v47 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v48 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v47) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v48 |= 8uLL;
    ++v48[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  GetCurrentThreadId();
  *((_QWORD *)a1 + 13) = v64;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v49 & 8) == 0 )
      __int2c();
    v10 = v49[4]-- == 1LL;
    if ( v10 )
      *v49 &= ~8uLL;
  }
  HampDepGroupDereferenceMembers(v60);
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v79 = 4LL;
    v78 = &v58;
    v82 = &v64;
    v80 = a1;
    v81 = 8LL;
    v83 = 8LL;
    *(_DWORD *)&v69.Level = 516;
    v74.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&v69.Id = 184549376;
    v69.Keyword = 8LL;
    v74.Size = *(unsigned __int16 *)off_1800AB2C8;
    v75 = &unk_180099344;
    v74.Reserved = 2;
    v76 = 56;
    v77 = 1;
    v61 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v69, 0LL, 0LL, 5u, &v74);
  }
  return v58;
}
