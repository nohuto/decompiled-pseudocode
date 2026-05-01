/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003AFA0
 * Callers:
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180004860 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EBDC (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006B8C4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006CFE4 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A4E8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003B1B0 (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  struct _RM_HAM_ACTIVITY_HOST **Next; // rax
  __int64 *v12; // r14
  struct _RM_HAM_ACTIVITY_HOST **v13; // rdi
  unsigned __int64 v14; // rbp
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  bool v16; // zf
  struct _RM_HAM_ACTIVITY_HOST *v17; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r12
  BOOL v22; // edi
  unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  int v26; // [rsp+90h] [rbp+28h]

  Next = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    Next = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  for ( ; Next; Next = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1) )
  {
    v17 = *Next;
    HampHostQueueTerminateEx(*Next, a2, a3, a4, 0, 0);
    if ( (a6 & 1) != 0 )
    {
      HampHostAcquireLockExclusiveEx(v17, 0);
      HampHostCheckQueueStateWorker(v17, 0);
      HampHostReleaseLockExclusiveEx(v17);
    }
  }
  RtlQueryUnbiasedInterruptTime(&v23);
  v12 = &v24;
  v13 = 0LL;
  v14 = v23 / 0x2710;
  result = (struct _HAM_TERMINATION_HOST_BLOCK *)(a5 + (unsigned int)(v23 / 0x2710));
  v16 = a5 == -1;
  v26 = a5 + v23 / 0x2710;
  if ( v16 )
    v12 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v13 = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v13 )
  {
    do
    {
      v18 = *v13;
      HampHostAcquireLockSharedEx(*v13, 0LL);
      v21 = v13 + 1;
      do
      {
        CempLockTrackerMarkReleased(v20, v19, 1u);
        RtlReleaseSRWLockShared(v18);
        if ( v12 )
          v24 = -10000LL * (unsigned int)(v26 - v14);
        RtlWaitOnAddress((char *)v18 + 776, v21, 8LL);
        if ( a5 == -1 )
        {
          v22 = 0;
        }
        else
        {
          RtlQueryUnbiasedInterruptTime(&v23);
          LODWORD(v14) = v23 / 0x2710;
          v22 = v26 - (int)v14 > a5;
        }
        HampHostAcquireLockSharedEx(v18, 0LL);
      }
      while ( *v21 == *((_QWORD *)v18 + 97) && !v22 );
      CempLockTrackerMarkReleased(v20, v19, 1u);
      RtlReleaseSRWLockShared(v18);
      result = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
      v13 = (struct _RM_HAM_ACTIVITY_HOST **)result;
    }
    while ( result );
  }
  return result;
}
