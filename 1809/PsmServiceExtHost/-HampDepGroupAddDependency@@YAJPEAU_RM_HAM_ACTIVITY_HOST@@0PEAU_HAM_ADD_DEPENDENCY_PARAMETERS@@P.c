/*
 * XREFs of ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180001CA4 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180008A20 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180008D40 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800090C0 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003F8D0 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 * Callees:
 *     ?HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_DONATION_DEPENDENCY@@@Z @ 0x180006E54 (-HampDonationDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_.c)
 *     ?HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x18000C230 (-HampHostProcessDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18000C2A4 (-HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM.c)
 *     ?HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_TERMINATE_REASON@@W4_HAM_TERMINATE_TYPE@@PEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18000C318 (-HampTerminateDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@_K12W4_HAM_.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18000C92C (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18000E760 (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E7DC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000F7F0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18003A40C (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B2C8 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18003B830 (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x18003BE70 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
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
  int v11; // edi
  __int64 v12; // rax
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 v14; // rdx
  __int64 DependencyByType; // rbx
  SIZE_T v16; // r8
  _QWORD *Heap; // rbx
  struct _HAM_DEPENDENCY_LINK *v18; // rsi
  int State; // eax
  struct _HAM_DEPENDENCY_GROUP *v20; // rdi
  _QWORD *v21; // rax
  char *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _HAM_DEPENDENCY_LINK *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_DEPENDENCY_GROUP **v29; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  struct _HAM_DEPENDENCY_GROUP *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  __int64 *v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CCh] [rbp-34h]
  __int64 *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  char *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]

  v27 = 0LL;
  v29 = a5;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v9 = HampDepGroupEnsureHostDisposition(a1, a2, &v27);
  v10 = v27;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)a1 - 4);
    v32 = *((_QWORD *)a2 - 4);
    v31 = v12;
    DepLink = HampDepGroupFindDepLink(v27, (struct _HAM_DEPENDENCY_LINK_ID *)&v31);
    v28 = DepLink;
    if ( DepLink )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        DependencyByType = 0LL;
      }
      else
      {
        LOBYTE(v14) = *(_BYTE *)a3;
        DependencyByType = HampDepLinkGetDependencyByType(DepLink, v14);
      }
    }
    else
    {
      DependencyByType = 0LL;
      v11 = HampDepGroupCreateLink(v10, (struct _HAM_DEPENDENCY_LINK_ID *)&v31, &v28);
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
          v16 = 80LL;
          break;
        case 2:
          v16 = 48LL;
          break;
        case 3:
          v16 = 88LL;
          break;
        case 4:
          v16 = 104LL;
          break;
        default:
          v11 = -1073741583;
          goto LABEL_32;
      }
    }
    else
    {
      v16 = 96LL;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    if ( Heap )
    {
      v18 = v28;
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
              Heap[1] = v18;
              break;
            case 3:
              HampTerminateDepInitialize(
                (__int64)v18,
                a1,
                *((_QWORD *)a3 + 51),
                a2,
                *((_QWORD *)a3 + 52),
                *((_DWORD *)a3 + 106),
                *((_DWORD *)a3 + 107),
                Heap);
              break;
            case 4:
              HampDonationDepInitialize(v18, a1, *((_QWORD *)a3 + 51), a2, (struct _HAM_DONATION_DEPENDENCY *)Heap);
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
            v20 = v27;
            HampDepGroupAcquireLockExclusive(v27);
            v21 = Heap + 2;
            if ( *((_BYTE *)Heap + 40) > 3u )
              v22 = (char *)v18 + 80;
            else
              v22 = (char *)v18 + 64;
            v23 = *(_QWORD *)v22;
            if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
              __fastfail(3u);
            *v21 = v23;
            Heap[3] = v22;
            *(_QWORD *)(v23 + 8) = v21;
            *(_QWORD *)v22 = v21;
            HampDepGroupReleaseLockExclusive(v20);
            if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
            {
              v24 = *Heap;
              v39 = 0;
              v42 = 0;
              v45 = 0;
              v48 = 0;
              v51 = 0;
              v37 = v24 + 40;
              v43 = &v31;
              v46 = &v32;
              v26 = *(_BYTE *)a3;
              v49 = &v26;
              v38 = 8;
              v40 = v20;
              v41 = 8;
              v44 = 8;
              v47 = 8;
              v50 = 1;
              *(_DWORD *)&EventDescriptor.Level = 4;
              UserData.Ptr = (ULONGLONG)off_18009B0F8;
              *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B623 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              EventDescriptor.Keyword = 8LL;
              UserData.Size = *(unsigned __int16 *)off_18009B0F8;
              v34 = &unk_18008B62E;
              v36 = 1;
              UserData.Reserved = 2;
              v35 = 89;
              EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
              v20 = v27;
            }
            if ( a4 )
              *a4 = (struct _HAM_HOST_DEPENDENCY *)Heap;
            Heap = 0LL;
            v10 = 0LL;
            *v29 = v20;
            v11 = 0;
            goto LABEL_30;
          }
LABEL_55:
          v10 = v27;
LABEL_30:
          if ( Heap )
            HampHostDepDestroy((struct _HAM_HOST_DEPENDENCY *)Heap);
          goto LABEL_32;
        }
        HampHostDynamicDepInitialize(v18, a1, a2, (struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
        State = HampHostDynamicDepAllocateState((struct _HAM_HOST_DYNAMIC_DEPENDENCY *)Heap);
      }
      else
      {
        HampHostProcessDepInitialize(v18, a1, a2, (struct _HAM_HOST_PROCESS_DEPENDENCY *)Heap);
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
    v10 = v27;
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
