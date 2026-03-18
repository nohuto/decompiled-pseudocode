/*
 * XREFs of MiPerformImageHotPatch @ 0x14088FDF8
 * Callers:
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402CF3EC (MiBeginHoldingDirtyFaults.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlApplyHotPatch @ 0x1405AE018 (RtlApplyHotPatch.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     MiInitializeImageHotPatchContext @ 0x14088E4D0 (MiInitializeImageHotPatchContext.c)
 *     MiOpenHotPatchFile @ 0x14088FA30 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x1408904FC (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x140891348 (MiReleaseHotPatchResources.c)
 *     MiSetProcessPebHotPatchState @ 0x14089155C (MiSetProcessPebHotPatchState.c)
 *     RtlFindHotPatchBase @ 0x1408D80E0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1408D810C (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x1408D8394 (RtlValidateHotPatchBase.c)
 */

__int64 MiPerformImageHotPatch(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rsi
  _DWORD *v3; // r14
  PVOID *v4; // r15
  __int64 v5; // r8
  unsigned int *v6; // rcx
  ULONG_PTR Process; // r13
  int v8; // esi
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  __int64 HotPatchInformation; // rax
  const void *v12; // rbx
  SIZE_T v13; // rax
  size_t v14; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *HotPatchBase; // rbx
  int v17; // ecx
  char *v18; // rbx
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-268h]
  int v22; // [rsp+28h] [rbp-260h]
  __int64 v23; // [rsp+30h] [rbp-258h]
  HANDLE SecureHandle; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+98h] [rbp-1F0h] BYREF
  PVOID v26[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-1D8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-1C8h] BYREF
  int v29; // [rsp+C8h] [rbp-1C0h]
  int v30[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-1B0h]
  __int64 v32[18]; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v33[18]; // [rsp+170h] [rbp-118h] BYREF
  PVOID BaseAddress[17]; // [rsp+200h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+2A0h] [rbp+18h] BYREF
  va_list va; // [rsp+2A0h] [rbp+18h]
  __int64 v39; // [rsp+2A8h] [rbp+20h]
  __int64 v40; // [rsp+2B0h] [rbp+28h]
  UNICODE_STRING *v41; // [rsp+2B8h] [rbp+30h]
  __int64 v42; // [rsp+2C0h] [rbp+38h]
  __int64 v43; // [rsp+2C8h] [rbp+40h]
  __int64 v44; // [rsp+2D0h] [rbp+48h]
  unsigned int *v45; // [rsp+2D8h] [rbp+50h]
  va_list va1; // [rsp+2E0h] [rbp+58h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  CurrentThread = va_arg(va1, struct _KTHREAD *);
  v39 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, UNICODE_STRING *);
  v42 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, unsigned int *);
  v2 = a2;
  memset(BaseAddress, 0, 0x50uLL);
  memset(v33, 0, sizeof(v33));
  memset(v32, 0, sizeof(v32));
  Handle = 0LL;
  Object = 0LL;
  v26[0] = 0LL;
  SecureHandle = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  MiInitializeImageHotPatchContext(v33, 0LL);
  MiInitializeImageHotPatchContext(v32, 0LL);
  v6 = v45;
  *(_QWORD *)v45 = 0LL;
  Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  v25 = Process;
  if ( !*(_QWORD *)(Process + 1016) && (*(_DWORD *)(Process + 780) & 0x4000000) != 0 )
  {
    v8 = -1073741637;
    goto LABEL_33;
  }
  if ( !v41->Length )
  {
    v9 = 0LL;
LABEL_23:
    CurrentThread = KeGetCurrentThread();
    v19 = v40;
    MiLockVad((__int64)CurrentThread, v40);
    if ( (unsigned int)MiVadDeleted(v19) )
    {
      MiUnlockVad((__int64)CurrentThread, v19);
      v8 = -1073741800;
    }
    else
    {
      MiInitializeImageHotPatchContext(v33, v19);
      MiBeginHoldingDirtyFaults(a1, &v33[11]);
      LODWORD(v33[17]) |= 2u;
      v8 = MiPrepareToHotPatchImage(v33, v3, v2);
      MiUnlockVad((__int64)CurrentThread, v19);
      if ( v8 >= 0 )
      {
        MiSetProcessPebHotPatchState(Process);
        if ( !v41->Length
          || (LODWORD(v25) = 0,
              v8 = RtlApplyHotPatch(
                     v33[9],
                     v33[1],
                     0LL,
                     0,
                     0LL,
                     v22,
                     v23,
                     v32[9],
                     v32[1],
                     v32[10],
                     HIDWORD(v32[4]),
                     &v25,
                     v3,
                     v9,
                     2,
                     0LL,
                     0LL),
              v8 >= 0) )
        {
          v8 = MiApplyImageHotPatch((__int64)v33, (__int64)v32, a2, v3, v9);
          if ( v8 >= 0 )
          {
            if ( v4 )
            {
              v4[1] = v26[0];
              v26[0] = 0LL;
              v4[2] = SecureHandle;
              SecureHandle = 0LL;
              *v4 = *(PVOID *)(a2 + 56);
              *(_QWORD *)(a2 + 56) = v4;
              v4 = 0LL;
            }
            v8 = 0;
          }
        }
      }
    }
    goto LABEL_33;
  }
  LOBYTE(v5) = v44;
  v8 = MiOpenHotPatchFile(v41, 0, v5, &Handle, &Object, BaseAddress, 0LL, v6);
  if ( v8 < 0 )
    goto LABEL_33;
  v10 = (unsigned __int64)LODWORD(BaseAddress[2]) << 12;
  if ( v10 > 0xFFFFFFFF )
  {
LABEL_8:
    v8 = -1073741701;
    goto LABEL_33;
  }
  HotPatchInformation = RtlFindHotPatchInformation(BaseAddress[0]);
  v12 = (const void *)HotPatchInformation;
  v31 = HotPatchInformation;
  if ( !HotPatchInformation )
  {
    v8 = -1073741701;
    LODWORD(CurrentThread) = -1073741701;
    goto LABEL_33;
  }
  v13 = *(unsigned int *)(HotPatchInformation + 4);
  v29 = v13;
  v14 = v13;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x4E495048u);
  v3 = PoolWithTag;
  v26[1] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    v8 = -1073741670;
    goto LABEL_33;
  }
  memmove(PoolWithTag, v12, v14);
  HotPatchBase = (_DWORD *)RtlFindHotPatchBase(v3);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v17, (_DWORD)HotPatchBase, v39, v10, v21) )
    goto LABEL_8;
  v9 = (__int64)v3 + (unsigned int)HotPatchBase[6];
  if ( HotPatchBase[3] != (_DWORD)v42 || HotPatchBase[2] != (_DWORD)v43 )
  {
    v8 = -1073741735;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a2 + 88) && *(_QWORD *)v45 == *(_QWORD *)(a2 + 80) )
  {
    v8 = 255;
    goto LABEL_33;
  }
  *(_QWORD *)v30 = 0LL;
  v8 = MiMapViewOfSectionExCommon(
         Object,
         (void *)Process,
         1,
         v26,
         0LL,
         v30,
         0,
         16,
         0LL,
         0,
         1,
         (__int64)&SecureHandle,
         0,
         0x2000000);
  if ( v8 >= 0 )
  {
    v4 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x45505048u);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v18 = (char *)MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ Process ^ qword_140465728, (int *)va);
      MiInitializeImageHotPatchContext(v32, (__int64)v18);
      MiBeginHoldingDirtyFaults(a1, &v32[11]);
      LODWORD(v32[17]) |= 2u;
      v8 = MiPrepareToHotPatchImage(v32, v3, 0LL);
      MiUnlockAndDereferenceVad(v18);
      if ( v8 < 0 )
        goto LABEL_33;
      v2 = a2;
      goto LABEL_23;
    }
    goto LABEL_12;
  }
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( BaseAddress[0] )
    MiUnmapImageInSystemSpace((__int64)BaseAddress);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v26[0] )
    MiUnmapViewOfSection(Process, (unsigned __int64)v26[0], 0, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  MiReleaseHotPatchResources(v33);
  MiReleaseHotPatchResources(v32);
  return (unsigned int)v8;
}
