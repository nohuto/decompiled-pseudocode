/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0229040
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v17[4]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-29h] BYREF
  struct DXGADAPTER *v19; // [rsp+68h] [rbp-21h]
  char v20; // [rsp+70h] [rbp-19h]
  _BYTE v21[8]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v23[40]; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+F8h] [rbp+6Fh] BYREF

  if ( a2[3] < a2[2] )
  {
    v19 = a1;
    v20 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      memset(v17, 0, sizeof(v17));
      v4 = *a2 + 360LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 376LL;
      v6 = *(_QWORD **)(*a2 + 384LL);
      if ( *v6 != v5 )
        goto LABEL_16;
      v17[2] = *(_QWORD *)(*a2 + 384LL);
      v17[1] = v5;
      *v6 = &v17[1];
      *(_QWORD *)(v5 + 8) = &v17[1];
      v7 = *a2 + 360LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 316) + 544LL)
                                                                                        + 8LL)
                                                                            + 1128LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 316) + 552LL),
             *a2,
             v17,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21) >= 0 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 316) + 544LL)
                                                                                                  + 8LL)
                                                                                      + 1120LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 316) + 552LL),
            *a2,
            v17,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v24);
          a2[3] += v24;
        }
        else
        {
          v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
          *(_QWORD *)(v11 + 24) = a1;
          WdLogEvent5_WdWarning(v11);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v23);
        COREACCESS::~COREACCESS((COREACCESS *)v22);
      }
      v12 = *a2 + 360LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12, 0LL);
      *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
      v13 = v17[1];
      v14 = v17[2];
      if ( *(_QWORD **)(v17[1] + 8LL) != &v17[1] || *(_QWORD **)v17[2] != &v17[1] )
LABEL_16:
        __fastfail(3u);
      *(_QWORD *)v17[2] = v17[1];
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *a2 + 360LL;
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v20 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  }
  return 0LL;
}
