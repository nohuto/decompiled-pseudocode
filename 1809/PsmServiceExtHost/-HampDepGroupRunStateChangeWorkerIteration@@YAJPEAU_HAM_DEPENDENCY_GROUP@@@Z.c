/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180027780 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180029F70 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002A330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18002A530 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18002C3AC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002D5E4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180037EB0 (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B2C8 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800694A8 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006A800 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18006AC14 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006B3B4 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v2; // r8
  __int64 *v3; // rsi
  __int64 *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  void *v14; // r14
  int v15; // edi
  unsigned __int64 v16; // rax
  _QWORD *Value; // rax
  bool v18; // zf
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _HAM_DEPENDENCY_LINK *v23; // rdx
  struct _HAM_DEPENDENCY_LINK *v24; // r8
  struct _HAM_DEPENDENCY_LINK *j; // rax
  struct _HAM_DEPENDENCY_LINK *v26; // rdx
  struct _HAM_DEPENDENCY_LINK *v27; // rdx
  __int64 *k; // rdi
  _QWORD *v29; // rax
  struct _HAM_HOST_DEPENDENCY *v30; // rbx
  struct _HAM_DEPENDENCY_LINK *v31; // rdx
  struct _HAM_HOST_DEPENDENCY *v32; // r9
  struct _HAM_DEPENDENCY_LINK *v33; // r8
  struct _HAM_DEPENDENCY_LINK *m; // rcx
  int v35; // eax
  struct _HAM_HOST_DEPENDENCY *v36; // rbx
  struct _HAM_DEPENDENCY_LINK *v37; // rdx
  struct _HAM_HOST_DEPENDENCY *v38; // r9
  struct _HAM_DEPENDENCY_LINK *v39; // r8
  struct _HAM_DEPENDENCY_LINK *n; // rcx
  int v41; // eax
  struct _HAM_DEPENDENCY_LINK *v42; // rdx
  struct _HAM_HOST_DEPENDENCY *v43; // rbx
  struct _HAM_HOST_DEPENDENCY *v44; // rdi
  struct _HAM_DEPENDENCY_LINK *v45; // r8
  struct _HAM_DEPENDENCY_LINK *ii; // rcx
  int v47; // eax
  DWORD v48; // edi
  _QWORD *v49; // rbx
  _QWORD *v50; // rax
  DWORD v51; // edi
  _QWORD *v52; // rbx
  DWORD v53; // esi
  __int64 v54; // rbx
  _QWORD *v55; // rdi
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  unsigned int v64; // [rsp+30h] [rbp-D0h] BYREF
  int CanStaticallyDonateCommit; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v66[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_BALANCED_NODE *v67; // [rsp+48h] [rbp-B8h] BYREF
  __int64 i; // [rsp+50h] [rbp-B0h]
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int64 v72; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR v74; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+98h] [rbp-68h] BYREF
  void *v76; // [rsp+A8h] [rbp-58h]
  int v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B4h] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+C0h] [rbp-40h] BYREF
  void *v80; // [rsp+D0h] [rbp-30h]
  int v81; // [rsp+D8h] [rbp-28h]
  int v82; // [rsp+DCh] [rbp-24h]
  unsigned int *v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  struct _HAM_DEPENDENCY_GROUP *v85; // [rsp+F0h] [rbp-10h]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  __int64 *v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v90; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  __int64 *v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]
  __int64 *v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  __int64 *v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]

  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    v75.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B793 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    v75.Size = *(unsigned __int16 *)off_18009B0F8;
    v76 = &unk_18008B79E;
    v75.Reserved = 2;
    v77 = 30;
    v78 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &v75);
  }
  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  v66[1] = v66;
  v66[0] = v66;
  while ( !HampDepGroupTryLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v66) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v66);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v66);
  }
  v3 = (__int64 *)v66[0];
  v69 = *((_QWORD *)a1 + 14);
  v67 = 0LL;
  for ( i = 0LL; v3 != v66; v3 = (__int64 *)*v3 )
  {
    v4 = (__int64 *)*(v3 - 4);
    v3[29] = 0LL;
    if ( v4 )
    {
      v6 = *v4;
      v5 = *(_QWORD *)(v6 + 456);
      v7 = *(_QWORD *)(v6 + 80);
      v2 = v5;
      v8 = v5;
      v9 = *(_QWORD *)(v7 + 976);
      if ( v9 )
      {
        v5 = *(_QWORD *)(v9 + 456);
        if ( v5 <= v8 )
          v5 = v8;
      }
      v10 = *(_QWORD *)(v7 + 920);
      if ( v10
        && v10 > v5
        && (CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(
                                          (struct _RM_HAM_ACTIVITY_HOST *)(v3 - 88),
                                          v10),
            CanStaticallyDonateCommit < 0) )
      {
        *(_QWORD *)(v7 + 920) = 0LL;
        v72 = v3[44];
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
        {
          v91 = 4LL;
          v90 = &CanStaticallyDonateCommit;
          v70 = *(_QWORD *)(v7 - 32);
          v92 = &v70;
          v71 = *(v3 - 92);
          v94 = &v71;
          v96 = &v72;
          v93 = v11;
          v95 = v11;
          v97 = v11;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B1B0, 0LL, 0LL, 6u, &pData);
        }
      }
      else
      {
        CanStaticallyDonateCommit = 0;
      }
      if ( v5 <= *(_QWORD *)(v7 + 920) )
        v5 = *(_QWORD *)(v7 + 920);
    }
    else
    {
      CanStaticallyDonateCommit = 0;
      v5 = 0LL;
    }
    v3[28] = v5;
    v12 = (_DWORD)v3[5] & 0xFFFFFFF3 | (4 * ((*(v3 - 9) & 0x300000000LL) != 0));
    *((_DWORD *)v3 + 10) = v12;
    if ( (*(v3 - 9) & 0x1000000000LL) != 0 )
    {
      v13 = (unsigned __int64)v67;
      v14 = (void *)((v12 >> 2) & 3);
      if ( (i & 1) != 0 )
      {
        if ( v67 )
          v13 = (unsigned __int64)&v67 ^ (unsigned __int64)v67;
        else
          v13 = 0LL;
      }
      LOBYTE(v2) = 0;
      v15 = i & 1;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( (int)HampDepHostStackCompareHosts(v14, (struct _RTL_BALANCED_NODE *)v13) < 0 )
          {
            v16 = *(_QWORD *)v13;
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_39;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_39:
              LOBYTE(v2) = 0;
              break;
            }
          }
          else
          {
            v16 = *(_QWORD *)(v13 + 8);
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_33;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_33:
              LOBYTE(v2) = 1;
              break;
            }
          }
          v13 = v16;
        }
      }
      RtlRbInsertNodeEx(&v67, v13, v2, v3 + 2);
      *((_DWORD *)v3 + 10) |= 2u;
    }
  }
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 8) == 0 )
      __int2c();
    v18 = Value[4]-- == 1LL;
    if ( v18 )
      *Value &= ~8uLL;
  }
  HampDepGroupEvaluateDependencies(a1, (struct _HAM_DEP_HOST_STACK *)&v67);
  FirstDependency = HampDepGroupGetFirstDependency(a1);
  if ( FirstDependency )
  {
    while ( 1 )
    {
      do
      {
        if ( (*((_BYTE *)FirstDependency + 32) & 7) == 5 )
        {
          v20 = *((unsigned int *)FirstDependency + 20);
          v21 = *((unsigned int *)FirstDependency + 21);
          v22 = *((_QWORD *)FirstDependency + 7);
          LODWORD(UserData) = 0;
          UserDataCount = 2;
          HampHostQueueTerminateEx(v22, v21, v20);
        }
        v23 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 2);
        v24 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 1);
        FirstDependency = 0LL;
        if ( v23 != (struct _HAM_DEPENDENCY_LINK *)((char *)v24 + 64) )
          FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v23 - 16);
      }
      while ( FirstDependency );
      j = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v24 + 1);
      if ( j )
      {
        v26 = *(struct _HAM_DEPENDENCY_LINK **)j;
        if ( *(_QWORD *)j )
        {
          do
          {
            j = v26;
            v26 = *(struct _HAM_DEPENDENCY_LINK **)v26;
          }
          while ( v26 );
        }
      }
      else
      {
        for ( j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v24 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              j;
              j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)j == v24 )
            break;
          v24 = j;
        }
      }
      if ( !j )
        break;
      while ( 1 )
      {
        v27 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)j + 8);
        FirstDependency = 0LL;
        if ( v27 != (struct _HAM_DEPENDENCY_LINK *)((char *)j + 64) )
          FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v27 - 16);
        if ( FirstDependency )
          break;
        j = HampDepGroupGetNextLink(j);
        if ( !j )
          goto LABEL_65;
      }
    }
  }
LABEL_65:
  HampDepGroupProcessDonations(a1);
  for ( k = (__int64 *)v66[0]; k != v66; k = (__int64 *)*k )
  {
    if ( (k[5] & 1) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v29 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v29 & 2) == 0 )
          __int2c();
        v18 = v29[2]-- == 1LL;
        if ( v18 )
          *v29 &= ~2uLL;
      }
      *((_DWORD *)k - 174) = 0;
      RtlReleaseSRWLockExclusive(k - 88);
      *((_DWORD *)k + 10) &= ~1u;
    }
  }
  v30 = HampDepGroupGetFirstDependency(a1);
  while ( v30 )
  {
    v31 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v30 + 2);
    v32 = v30;
    v33 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v30 + 1);
    v30 = 0LL;
    if ( v31 != (struct _HAM_DEPENDENCY_LINK *)((char *)v33 + 64) )
      v30 = (struct _HAM_DEPENDENCY_LINK *)((char *)v31 - 16);
    if ( !v30 )
    {
      m = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v33 + 1);
      if ( m )
      {
        v31 = *(struct _HAM_DEPENDENCY_LINK **)m;
        if ( *(_QWORD *)m )
        {
          do
          {
            m = v31;
            v31 = *(struct _HAM_DEPENDENCY_LINK **)v31;
          }
          while ( v31 );
        }
      }
      else
      {
        for ( m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v33 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              m;
              m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)m + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)m == v33 )
            break;
          v33 = m;
        }
      }
      if ( m )
      {
        while ( 1 )
        {
          v31 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)m + 8);
          v30 = 0LL;
          if ( v31 != (struct _HAM_DEPENDENCY_LINK *)((char *)m + 64) )
            v30 = (struct _HAM_DEPENDENCY_LINK *)((char *)v31 - 16);
          if ( v30 )
            break;
          m = HampDepGroupGetNextLink(m);
          if ( !m )
            goto LABEL_90;
        }
      }
      else
      {
LABEL_90:
        v30 = 0LL;
      }
    }
    if ( (*((_BYTE *)v32 + 32) & 7) == 3 )
    {
      if ( *((_BYTE *)v32 + 40) == (*((_BYTE *)v32 + 32) & 7) )
      {
        HampHostDepDestroy(v32);
      }
      else
      {
        LOBYTE(v31) = 3;
        v35 = HampDepGroupProcessActionForActivity(*(_QWORD *)v32, v31);
        if ( v35 < 0 )
          goto LABEL_97;
      }
    }
  }
  v35 = 0;
LABEL_97:
  v64 = v35;
  v36 = HampDepGroupGetFirstDependency(a1);
  while ( v36 )
  {
    v37 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v36 + 2);
    v38 = v36;
    v39 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v36 + 1);
    v36 = 0LL;
    if ( v37 != (struct _HAM_DEPENDENCY_LINK *)((char *)v39 + 64) )
      v36 = (struct _HAM_DEPENDENCY_LINK *)((char *)v37 - 16);
    if ( !v36 )
    {
      n = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v39 + 1);
      if ( n )
      {
        v37 = *(struct _HAM_DEPENDENCY_LINK **)n;
        if ( *(_QWORD *)n )
        {
          do
          {
            n = v37;
            v37 = *(struct _HAM_DEPENDENCY_LINK **)v37;
          }
          while ( v37 );
        }
      }
      else
      {
        for ( n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v39 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              n;
              n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)n + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)n == v39 )
            break;
          v39 = n;
        }
      }
      if ( n )
      {
        while ( 1 )
        {
          v37 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)n + 8);
          v36 = 0LL;
          if ( v37 != (struct _HAM_DEPENDENCY_LINK *)((char *)n + 64) )
            v36 = (struct _HAM_DEPENDENCY_LINK *)((char *)v37 - 16);
          if ( v36 )
            break;
          n = HampDepGroupGetNextLink(n);
          if ( !n )
            goto LABEL_113;
        }
      }
      else
      {
LABEL_113:
        v36 = 0LL;
      }
    }
    if ( (*((_DWORD *)v38 + 8) & 7) == 2 )
    {
      if ( *((_BYTE *)v38 + 40) == 3 )
      {
        HampHostDepDestroy(v38);
      }
      else
      {
        LOBYTE(v37) = 2;
        v41 = HampDepGroupProcessActionForActivity(*(_QWORD *)v38, v37);
        if ( v41 < 0 )
          goto LABEL_120;
      }
    }
  }
  v41 = 0;
LABEL_120:
  v64 = v41;
  v43 = HampDepGroupGetFirstDependency(a1);
  while ( v43 )
  {
    v42 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v43 + 2);
    v44 = v43;
    v45 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v43 + 1);
    v43 = 0LL;
    if ( v42 != (struct _HAM_DEPENDENCY_LINK *)((char *)v45 + 64) )
      v43 = (struct _HAM_DEPENDENCY_LINK *)((char *)v42 - 16);
    if ( !v43 )
    {
      ii = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v45 + 1);
      if ( ii )
      {
        v42 = *(struct _HAM_DEPENDENCY_LINK **)ii;
        if ( *(_QWORD *)ii )
        {
          do
          {
            ii = v42;
            v42 = *(struct _HAM_DEPENDENCY_LINK **)v42;
          }
          while ( v42 );
        }
      }
      else
      {
        for ( ii = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v45 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              ii;
              ii = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)ii + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)ii == v45 )
            break;
          v45 = ii;
        }
      }
      if ( ii )
      {
        while ( 1 )
        {
          v42 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)ii + 8);
          v43 = 0LL;
          if ( v42 != (struct _HAM_DEPENDENCY_LINK *)((char *)ii + 64) )
            v43 = (struct _HAM_DEPENDENCY_LINK *)((char *)v42 - 16);
          if ( v43 )
            break;
          ii = HampDepGroupGetNextLink(ii);
          if ( !ii )
            goto LABEL_136;
        }
      }
      else
      {
LABEL_136:
        v43 = 0LL;
      }
    }
    if ( (*((_DWORD *)v44 + 8) & 7) == 1 )
    {
      if ( *((_BYTE *)v44 + 40) == 3 )
      {
        HampHostDepDestroy(v44);
      }
      else
      {
        LOBYTE(v42) = 1;
        v47 = HampDepGroupProcessActionForActivity(*(_QWORD *)v44, v42);
        if ( v47 < 0 )
          goto LABEL_144;
        *((_DWORD *)v44 + 8) &= 0xFFFFFFFC;
        *((_DWORD *)v44 + 8) |= 4u;
      }
    }
  }
  v47 = 0;
LABEL_144:
  v64 = v47;
  if ( v47 >= 0 )
  {
    v64 = 0;
  }
  else
  {
    LOBYTE(v42) = 4;
    HampDepGroupProcessActivityActionForGroup(a1, v42);
  }
  v48 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v49 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v48) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v49 |= 8uLL;
    ++v49[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  GetCurrentThreadId();
  *((_QWORD *)a1 + 13) = v69;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v50 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v50 & 8) == 0 )
      __int2c();
    v18 = v50[4]-- == 1LL;
    if ( v18 )
      *v50 &= ~8uLL;
  }
  v51 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v52 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v51) )
      __int2c();
    *v52 |= 1uLL;
    ++v52[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_18009BF18 = GetCurrentThreadId();
  while ( (_QWORD *)v66[0] != v66 )
  {
    v53 = HampLockTrackerId;
    v54 = v66[0] - 704LL;
    if ( HampLockTrackerId != -1 )
    {
      v55 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v53) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v55 |= 2uLL;
      ++v55[2];
    }
    RtlAcquireSRWLockExclusive(v54);
    *(_DWORD *)(v54 + 8) = GetCurrentThreadId();
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v54, 0);
    if ( HampLockTrackerId != -1 )
    {
      v56 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v56 & 2) == 0 )
        __int2c();
      v18 = v56[2]-- == 1LL;
      if ( v18 )
        *v56 &= ~2uLL;
    }
    *(_DWORD *)(v54 + 8) = 0;
    RtlReleaseSRWLockExclusive(v54);
    v57 = (_QWORD *)(v54 + 704);
    v58 = *(_QWORD *)(v54 + 704);
    if ( *(_QWORD *)(v58 + 8) != v54 + 704 || (v59 = *(_QWORD **)(v54 + 712), (_QWORD *)*v59 != v57) )
      __fastfail(3u);
    *v59 = v58;
    *(_QWORD *)(v58 + 8) = v59;
    *v57 = 0LL;
    *(_QWORD *)(v54 + 712) = 0LL;
    v18 = (*(_QWORD *)(v54 + 576))-- == 1LL;
    *(_DWORD *)(v54 + 744) = 0;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v54 - 64));
  }
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v60 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v60 & 1) == 0 )
      __int2c();
    v18 = v60[1]-- == 1LL;
    if ( v18 )
      *v60 &= ~1uLL;
  }
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v84 = 4LL;
    v83 = &v64;
    v87 = &v69;
    v85 = a1;
    v86 = 8LL;
    v88 = 8LL;
    *(_DWORD *)&v74.Level = 516;
    v79.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&v74.Id = ((unsigned int)&unk_18008B724 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v74.Keyword = 8LL;
    v79.Size = *(unsigned __int16 *)off_18009B0F8;
    v80 = &unk_18008B72F;
    v79.Reserved = 2;
    v81 = 56;
    v82 = 1;
    EventWriteTransfer(RegHandle, &v74, 0LL, 0LL, 5u, &v79);
  }
  return v64;
}
