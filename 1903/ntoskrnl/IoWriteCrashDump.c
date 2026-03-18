/*
 * XREFs of IoWriteCrashDump @ 0x14029580C
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14015F684 (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IoFillTriageDumpBuffer @ 0x140294A14 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x1402953B0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x14029549C (IoSetBugCheckProgressAndFlag.c)
 *     IoSetBugCheckProgressFlag @ 0x1402954E8 (IoSetBugCheckProgressFlag.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140296854 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1402969A0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x140297338 (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402976EC (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x140297A2C (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14029CA20 (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x1402C60EC (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6610 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x14030DAB0 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x140327CF8 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  _QWORD *v8; // r14
  char v9; // bl
  int v10; // edi
  __int64 v11; // r15
  unsigned int v14; // edx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  _OWORD *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r14
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  int v31; // [rsp+38h] [rbp-C8h]
  char v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  void *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  unsigned int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  int v39; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _QWORD v42[6]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v43[4]; // [rsp+E8h] [rbp-18h] BYREF

  v8 = a7;
  v9 = 0;
  v10 = 0;
  v11 = a2;
  v40 = a7;
  v37 = 0;
  v39 = 0;
  v35 = a4;
  v36 = a3;
  v41 = a2;
  v38 = 3583;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, v11, v36, v35, a5, (__int64)a6, (__int64)a7);
  v43[0] = v11;
  v43[1] = v36;
  v43[2] = v35;
  v43[3] = a5;
  MmSnapTriageDumpInformation(a6, v43);
  if ( CrashdmpDumpBlock )
  {
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      v14 = 0;
      v15 = (_DWORD *)(CrashdmpDumpBlock + 1372);
      while ( *v15 != a1 )
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
      v37 = 1;
      v38 = 3319;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_140468320)(1LL, 0LL, v37);
    VfDisableHalVerifier();
    LOBYTE(v16) = 1;
    v32 = ((__int64 (__fastcall *)(__int64))qword_140468350)(v16);
    IoSaveBugCheckProgress(32);
    v17 = 9LL;
    v18 = v36;
    v19 = a6;
    v20 = v35;
    v21 = a5;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = v18;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = v20;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v22 = (_OWORD *)(CrashdmpDumpBlock + 64);
    do
    {
      *v22 = *v19;
      v22[1] = v19[1];
      v22[2] = v19[2];
      v22[3] = v19[3];
      v22[4] = v19[4];
      v22[5] = v19[5];
      v22[6] = v19[6];
      v22 += 8;
      v23 = v19[7];
      v19 += 8;
      *(v22 - 1) = v23;
      --v17;
    }
    while ( v17 );
    *v22 = *v19;
    v22[1] = v19[1];
    v22[2] = v19[2];
    v22[3] = v19[3];
    v22[4] = v19[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
    if ( a8 )
      v24 = *(_QWORD *)(a7[23] + 40LL);
    else
      v24 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v24 & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) || v32 != 1 || !a8 )
    {
      IopUpdateMinidumpContext(a1, v11, v18, v20, a5, (__int64)a6, (__int64)a7);
      MmSnapTriageDumpInformation(a6, v43);
      v33 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
      v34 = &IopTriageDumpDataBlocks;
      if ( v32 == 1 || (v25 = *(_QWORD *)(CrashdmpDumpBlock + 1360)) == 0 )
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
      }
      else
      {
        *(_QWORD *)(CrashdmpDumpBlock + 1328) = v25 + 12316;
        *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
      }
      v10 = IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(CrashdmpDumpBlock + 1328),
              1,
              v38,
              0LL,
              (__int64)a6,
              a7,
              v31,
              65,
              1u,
              (__int64)&v33,
              (__int64)&v33,
              &v39);
      if ( v10 < 0 )
        return v9;
      v18 = v36;
      v20 = v35;
      v21 = a5;
    }
    v26 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0
      && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6
      && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v10 = IoAddPagesForPartialKernelDump(a1, v11, v18, v20, v21, (__int64)a6, (__int64)a7);
    }
    else
    {
      v27 = *(_QWORD **)(CrashdmpDumpBlock + 8);
      if ( v27 )
      {
        v42[5] = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v33 = v27[6];
        v34 = v27 + 7;
        v42[2] = &v33;
        v42[0] = IoSetDumpRange;
        v42[1] = IoFreeDumpRange;
        v42[3] = v27;
        v42[4] = 0LL;
        IopDumpCallAddPagesCallbacks(a1, v26, v18, v20);
        IoSaveBugCheckProgress(33);
        MmGetDumpRange((ULONG_PTR)v42);
        IopDumpCallRemovePagesCallbacks(a1);
        IoSaveBugCheckProgress(34);
        v28 = RtlNumberOfSetBitsEx(&v33);
        LODWORD(v11) = v41;
        v27[5] = v28;
      }
      v8 = v40;
    }
    if ( v10 >= 0 )
      v10 = ((__int64 (__fastcall *)(__int64, __int64))qword_140468328)(CrashdmpDumpBlock, a8);
    if ( v10 != -1073741267 )
      goto LABEL_46;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
    {
      IoSaveBugCheckProgress(39);
      v10 = IoAddPagesForPartialKernelDump(a1, v11, v36, v35, a5, (__int64)a6, (__int64)v8);
      if ( v10 < 0 )
        goto LABEL_46;
      v29 = ((__int64 (__fastcall *)(__int64, __int64))qword_140468328)(CrashdmpDumpBlock, a8);
      v30 = 38;
    }
    else
    {
      if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
        goto LABEL_46;
      IoSetBugCheckProgressFlag(1024);
      IopUpdateMinidumpContext(a1, v11, v36, v35, a5, (__int64)a6, (__int64)v8);
      MmSnapTriageDumpInformation(a6, v43);
      v33 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
      v34 = &IopTriageDumpDataBlocks;
      v10 = IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(CrashdmpDumpBlock + 1328),
              1,
              3583,
              0LL,
              (__int64)a6,
              v8,
              v31,
              65,
              1u,
              (__int64)&v33,
              (__int64)&v33,
              &v39);
      if ( v10 < 0 )
        goto LABEL_46;
      v29 = ((__int64 (__fastcall *)(__int64, __int64))qword_140468328)(CrashdmpDumpBlock, a8);
      v30 = 35;
    }
    v10 = v29;
    IoSaveBugCheckProgress(v30);
LABEL_46:
    if ( (DumpPolicyAttemptOffline & 1) != 0 && v10 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v32 )
    {
      IoSaveBugCheckProgress(36);
      if ( ((int (__fastcall *)(_QWORD))off_140424618[0])(0LL) >= 0 )
      {
        IoSetBugCheckProgressFlag(4096);
        while ( 1 )
        {
          KeStallExecutionProcessor(0xF4240u);
          ++AttemptOfflineStallCount;
        }
      }
    }
    else if ( v10 >= 0 )
    {
      if ( v32 != 1 && *(_QWORD *)(CrashdmpDumpBlock + 1360) )
      {
        IoSetBugCheckProgressAndFlag();
        v10 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        IoSetBugCheckProgressFlag(0x10000000);
      }
      return v10 >= 0;
    }
  }
  return v9;
}
