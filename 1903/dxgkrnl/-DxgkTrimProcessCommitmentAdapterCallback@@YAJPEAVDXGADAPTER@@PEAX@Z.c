/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C025DB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  char v23[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v24; // [rsp+70h] [rbp-90h]
  char v25; // [rsp+78h] [rbp-88h]
  char v26[8]; // [rsp+80h] [rbp-80h] BYREF
  char v27[64]; // [rsp+88h] [rbp-78h] BYREF
  char v28[72]; // [rsp+C8h] [rbp-38h] BYREF

  if ( a2[3] < a2[2] )
  {
    v24 = a1;
    v25 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      v4 = *a2;
      v19 = 0LL;
      v4 += 336LL;
      v22 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 352LL;
      v6 = *(__int64 ***)(*a2 + 360LL);
      if ( *v6 != (__int64 *)v5 )
        goto LABEL_16;
      v21 = *(__int64 **)(*a2 + 360LL);
      v20 = v5;
      *v6 = &v20;
      *(_QWORD *)(v5 + 8) = &v20;
      v7 = *a2 + 336LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 320) + 544LL)
                                                                                         + 8LL)
                                                                             + 1128LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 320) + 552LL),
             *a2,
             &v19,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((__int64)v26, 0xFFFFFFFFLL, v8) >= 0 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 320) + 544LL) + 8LL)
                                                                                       + 1120LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 320) + 552LL),
            *a2,
            &v19,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v18);
          a2[3] += v18;
        }
        else
        {
          v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
          *(_QWORD *)(v12 + 24) = a1;
          WdLogEvent5_WdWarning(v12);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        COREACCESS::~COREACCESS((COREACCESS *)v27);
      }
      v13 = *a2 + 336LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      v14 = v20;
      v15 = v21;
      if ( *(__int64 **)(v20 + 8) != &v20 || (__int64 *)*v21 != &v20 )
LABEL_16:
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *a2 + 336LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v25 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  }
  return 0LL;
}
