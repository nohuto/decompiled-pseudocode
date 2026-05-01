/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28
 * Callers:
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18000FA60 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000FD54 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180010020 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003C084 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800409CC (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B024 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18001269C (-HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18001270C (-HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180012790 (-HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECA4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECE8 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002FE54 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18002FFC4 (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030040 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180039BA8 (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18003BF04 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x18003CB38 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18003CEEC (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x18003E930 (-HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_ADD_DEPENDENCY_PARAMETERS *a3,
        struct _HAM_HOST_DEPENDENCY **a4,
        struct _HAM_DEPENDENCY_GROUP **a5)
{
  int v9; // eax
  struct _HAM_DEPENDENCY_GROUP *v10; // rsi
  int v11; // ebx
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 v13; // rdx
  __int64 DependencyByType; // rdi
  SIZE_T v15; // r8
  _QWORD *Heap; // rdi
  struct _HAM_DEPENDENCY_LINK *v17; // rsi
  int State; // eax
  struct _HAM_DEPENDENCY_GROUP *v19; // rbx
  _QWORD *v20; // rax
  char *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v26; // [rsp+48h] [rbp-B8h] BYREF
  struct _HAM_DEPENDENCY_LINK *v27; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_DEPENDENCY_GROUP **v28; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  struct _HAM_DEPENDENCY_GROUP *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  __int64 *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  __int64 *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  char *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]

  v26 = 0LL;
  v28 = a5;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v9 = HampDepGroupEnsureHostDisposition(a1, a2, &v26);
  v10 = v26;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v30 = *((_QWORD *)a1 - 4);
    v31 = *((_QWORD *)a2 - 4);
    DepLink = HampDepGroupFindDepLink(v26, (struct _HAM_DEPENDENCY_LINK_ID *)&v30);
    v27 = DepLink;
    if ( DepLink )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        DependencyByType = 0LL;
      }
      else
      {
        LOBYTE(v13) = *(_BYTE *)a3;
        DependencyByType = HampDepLinkGetDependencyByType(DepLink, v13);
      }
    }
    else
    {
      DependencyByType = 0LL;
      v11 = HampDepGroupCreateLink(v10, (struct _HAM_DEPENDENCY_LINK_ID *)&v30, &v27);
      if ( v11 < 0 )
        goto LABEL_32;
    }
    if ( DependencyByType )
    {
      if ( (*(_BYTE *)(DependencyByType + 36) & 1) == 0 )
      {
        v11 = -1073741270;
        goto LABEL_32;
      }
      HampDepGroupRunStateChangeWorkerIteration(v10);
    }
    if ( *(_BYTE *)a3 )
    {
      switch ( *(_BYTE *)a3 )
      {
        case 1:
          v15 = 80LL;
          break;
        case 2:
          v15 = 48LL;
          break;
        case 3:
          v15 = 88LL;
          break;
        case 4:
          v15 = 104LL;
          break;
        default:
          v11 = -1073741583;
          goto LABEL_32;
      }
    }
    else
    {
      v15 = 96LL;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    if ( Heap )
    {
      v17 = v27;
      *((_BYTE *)Heap + 40) = *(_BYTE *)a3;
      if ( *(_BYTE *)a3 )
      {
        if ( *(_BYTE *)a3 != 1 )
        {
          switch ( *(_BYTE *)a3 )
          {
            case 2:
              memset_0(Heap, 0, 0x30uLL);
              *((_BYTE *)Heap + 40) = 2;
              Heap[1] = v17;
              break;
            case 3:
              HampTerminateDepInitialize(
                (__int64)v17,
                a1,
                *((_QWORD *)a3 + 51),
                a2,
                *((_QWORD *)a3 + 52),
                *((_DWORD *)a3 + 106),
                *((_DWORD *)a3 + 107),
                Heap);
              break;
            case 4:
              HampDonationDepInitialize(v17, a1, *((_QWORD *)a3 + 51), a2, (struct _HAM_DONATION_DEPENDENCY *)Heap);
              break;
          }
LABEL_19:
          v11 = HampDepGroupCheckCreateDependencyActivity(
                  a3,
                  a2,
                  *((_BYTE *)Heap + 40) == 4,
                  (struct _HAM_HOST_DEPENDENCY *)Heap);
          if ( v11 >= 0 )
          {
            v19 = v26;
            HampDepGroupAcquireLockExclusive(v26);
            v20 = Heap + 2;
            if ( *((_BYTE *)Heap + 40) > 3u )
              v21 = (char *)v17 + 80;
            else
              v21 = (char *)v17 + 64;
            v22 = *(_QWORD *)v21;
            if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
              __fastfail(3u);
            *v20 = v22;
            Heap[3] = v21;
            *(_QWORD *)(v22 + 8) = v20;
            *(_QWORD *)v21 = v20;
            HampDepGroupReleaseLockExclusive(v19);
            if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
            {
              v23 = *Heap;
              v38 = 0;
              v41 = 0;
              v44 = 0;
              v47 = 0;
              v50 = 0;
              v36 = v23 + 40;
              v42 = &v30;
              v45 = &v31;
              v25 = *(_BYTE *)a3;
              v48 = &v25;
              v37 = 8;
              v39 = v19;
              v40 = 8;
              v43 = 8;
              v46 = 8;
              v49 = 1;
              *(_DWORD *)&EventDescriptor.Level = 4;
              UserData.Ptr = (ULONGLONG)off_1800AB2C8;
              EventDescriptor.Keyword = 8LL;
              *(_DWORD *)&EventDescriptor.Id = 184549376;
              UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
              v33 = &unk_180099243;
              v35 = 1;
              UserData.Reserved = 2;
              v34 = 89;
              LODWORD(v26) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
            }
            if ( a4 )
              *a4 = (struct _HAM_HOST_DEPENDENCY *)Heap;
            Heap = 0LL;
            v10 = 0LL;
            *v28 = v19;
            v11 = 0;
            goto LABEL_30;
          }
LABEL_55:
          v10 = v26;
LABEL_30:
          if ( Heap )
            HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)Heap);
          goto LABEL_32;
        }
        HampHostDynamicDepInitialize(v17, a1, a2, (struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
        State = HampHostDynamicDepAllocateState((struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
      }
      else
      {
        HampHostProcessDepInitialize(v17, a1, a2, (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap);
        State = HampHostProcessDepAllocateState(
                  (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap,
                  *((_DWORD *)a3 + 106),
                  *((_DWORD *)a3 + 107));
      }
      v11 = State;
      if ( State < 0 )
        goto LABEL_55;
      goto LABEL_19;
    }
    v10 = v26;
    v11 = -1073741801;
  }
LABEL_32:
  if ( v10 )
  {
    HampDepGroupRunStateChangeWorker(v10);
    HampDepGroupDereference(v10);
  }
  return (unsigned int)v11;
}
