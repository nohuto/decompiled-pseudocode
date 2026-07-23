/*
 * XREFs of IoWriteCrashDump @ 0x14028079C
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140144778 (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoFillTriageDumpBuffer @ 0x14027FA84 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x140280410 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x140280454 (IoSetBugCheckProgressAndFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402806AC (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1402813CC (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140281524 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14028246C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1402827AC (IopWriteTriageDumpToFirmware.c)
 *     MmGetDumpRange @ 0x1402AE4F8 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE9C0 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x1402EF360 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x14030A278 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6,
        _QWORD *a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  unsigned int v10; // edi
  unsigned int v12; // r14d
  unsigned int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  char v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r10
  __int128 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 *v23; // rcx
  __int128 v24; // xmm0
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  int v28; // eax
  int v29; // edi
  void *v30; // rdi
  int v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  void *v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  unsigned int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  _QWORD *v41; // [rsp+A8h] [rbp-58h]
  _QWORD v42[6]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v43[4]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = 0;
  v41 = a7;
  v12 = a1;
  v37 = 0;
  v34 = 0;
  v38 = a4;
  v39 = a3;
  v40 = a2;
  v36 = a1;
  v35 = 3583;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v12, a2, v39, v38, a5, (__int64)a6, (__int64)a7);
  v43[0] = a2;
  v43[1] = v39;
  v43[2] = v38;
  v43[3] = a5;
  MmSnapTriageDumpInformation(a6, v43);
  if ( CrashdmpDumpBlock )
  {
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      v14 = 0;
      v15 = (_DWORD *)(CrashdmpDumpBlock + 1372);
      while ( *v15 != v12 )
      {
        ++v14;
        ++v15;
        if ( v14 >= 8 )
          goto LABEL_11;
      }
      *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    }
LABEL_11:
    if ( !a8 )
    {
      v10 = 1;
      v35 = 3319;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_14043D8B0)(1LL, 0LL, v10);
    VfDisableHalVerifier();
    LOBYTE(v16) = 1;
    v17 = ((__int64 (__fastcall *)(__int64))qword_14043D8E0)(v16);
    IoSaveBugCheckProgress(0x20u);
    v18 = 9LL;
    v19 = v40;
    v20 = a6;
    v21 = v39;
    v22 = v38;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = v12;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = v19;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = v21;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = v22;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v23 = (__int128 *)(CrashdmpDumpBlock + 64);
    do
    {
      v24 = *v20;
      v20 += 8;
      *v23 = v24;
      v23 += 8;
      *(v23 - 7) = *(v20 - 7);
      *(v23 - 6) = *(v20 - 6);
      *(v23 - 5) = *(v20 - 5);
      *(v23 - 4) = *(v20 - 4);
      *(v23 - 3) = *(v20 - 3);
      *(v23 - 2) = *(v20 - 2);
      *(v23 - 1) = *(v20 - 1);
      --v18;
    }
    while ( v18 );
    *v23 = *v20;
    v23[1] = v20[1];
    v23[2] = v20[2];
    v23[3] = v20[3];
    v23[4] = v20[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
    if ( a8 )
      v25 = *(_QWORD *)(a7[23] + 40LL);
    else
      v25 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v25 & 0xFFFFFFFFFFFFF000uLL;
    if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && v17 == 1 && a8 )
      goto LABEL_28;
    IopUpdateMinidumpContext(v12, v19, v21, v22, a5, (__int64)a6, (__int64)a7);
    MmSnapTriageDumpInformation(a6, v43);
    v32 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
    v33 = &IopTriageDumpDataBlocks;
    if ( v17 == 1 || (v26 = *(_QWORD *)(CrashdmpDumpBlock + 1360)) == 0 )
    {
      if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
        *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
    }
    else
    {
      *(_QWORD *)(CrashdmpDumpBlock + 1328) = v26 + 12316;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    if ( (int)IoFillTriageDumpBuffer(
                0x3E000u,
                *(__int64 **)(CrashdmpDumpBlock + 1328),
                1,
                v35,
                0LL,
                (__int64)a6,
                a7,
                v31,
                65,
                1u,
                (__int64)&v32,
                (__int64)&v32,
                &v37) >= 0 )
    {
LABEL_28:
      v27 = *(_QWORD **)(CrashdmpDumpBlock + 8);
      if ( v27 )
      {
        memset(v42, 0, sizeof(v42));
        v32 = v27[6];
        v33 = v27 + 7;
        v42[2] = &v32;
        v42[0] = IoSetDumpRange;
        v42[1] = IoFreeDumpRange;
        v42[3] = v27;
        v42[4] = 0LL;
        v28 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
        if ( v28 == 6 )
        {
          v34 = a9 != 0;
        }
        else if ( v28 == 5 && (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 )
        {
          v34 = 2;
        }
        IopDumpCallAddPagesCallbacks(v36);
        IoSaveBugCheckProgress(0x21u);
        MmGetDumpRange((ULONG_PTR)v42);
        v12 = v36;
        IopDumpCallRemovePagesCallbacks(v36);
        IoSaveBugCheckProgress(0x22u);
        v27[5] = RtlNumberOfSetBitsEx(&v32);
      }
      v29 = ((__int64 (__fastcall *)(__int64, __int64))qword_14043D8B8)(CrashdmpDumpBlock, a8);
      if ( v29 == -1073741267 )
      {
        if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
          IoUpdateBugCheckProgressEnvVariable();
          v30 = v41;
          v32 = 0LL;
          IopUpdateMinidumpContext(v12, v40, v39, v38, a5, (__int64)a6, (__int64)v41);
          MmSnapTriageDumpInformation(a6, v43);
          v32 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
          v33 = &IopTriageDumpDataBlocks;
          v29 = IoFillTriageDumpBuffer(
                  0x3E000u,
                  *(__int64 **)(CrashdmpDumpBlock + 1328),
                  1,
                  3583,
                  0LL,
                  (__int64)a6,
                  v30,
                  v31,
                  65,
                  1u,
                  (__int64)&v32,
                  (__int64)&v32,
                  &v37);
          if ( v29 >= 0 )
          {
            v29 = ((__int64 (__fastcall *)(__int64, __int64))qword_14043D8B8)(CrashdmpDumpBlock, a8);
            IoSaveBugCheckProgress(0x23u);
          }
        }
      }
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v29 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v17 )
      {
        IoSaveBugCheckProgress(0x24u);
        if ( ((int (__fastcall *)(_QWORD))off_1403FF618[0])(0LL) >= 0 )
        {
          if ( CrashdmpDumpBlock )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x1000u;
            IoUpdateBugCheckProgressEnvVariable();
          }
          while ( 1 )
          {
            KeStallExecutionProcessor(0xF4240u);
            ++AttemptOfflineStallCount;
          }
        }
      }
      else if ( v29 >= 0 )
      {
        if ( v17 != 1 )
        {
          if ( *(_QWORD *)(CrashdmpDumpBlock + 1360) )
          {
            IoSetBugCheckProgressAndFlag();
            v29 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
            if ( CrashdmpDumpBlock )
            {
              *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
              IoUpdateBugCheckProgressEnvVariable();
            }
          }
        }
        return v29 >= 0;
      }
    }
  }
  return v9;
}
