/*
 * XREFs of MiPerformImageHotPatch @ 0x140857EE0
 * Callers:
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiObtainReferencedSecureVad @ 0x1400861C0 (MiObtainReferencedSecureVad.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402B93B0 (MiBeginHoldingDirtyFaults.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlApplyHotPatch @ 0x14057F148 (RtlApplyHotPatch.c)
 *     MiSetProcessPebHotPatchState @ 0x14058335C (MiSetProcessPebHotPatchState.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiInitializeImageHotPatchContext @ 0x140856A3C (MiInitializeImageHotPatchContext.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 *     RtlFindHotPatchBase @ 0x14089AEF0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14089AF1C (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x14089B1A4 (RtlValidateHotPatchBase.c)
 */

__int64 MiPerformImageHotPatch(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rsi
  struct _SINGLE_LIST_ENTRY *v3; // r14
  _QWORD *v4; // r15
  __int64 v5; // r8
  unsigned int *v6; // rcx
  ULONG_PTR Process; // r13
  int v8; // esi
  struct _SINGLE_LIST_ENTRY *v9; // r12
  unsigned __int64 v10; // rsi
  __int64 HotPatchInformation; // rax
  const void *v12; // rbx
  SIZE_T v13; // rax
  size_t v14; // r12
  struct _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  _DWORD *HotPatchBase; // rbx
  int v17; // ecx
  char *v18; // rbx
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-268h]
  int v22; // [rsp+28h] [rbp-260h]
  __int64 v23; // [rsp+30h] [rbp-258h]
  HANDLE SecureHandle; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+98h] [rbp-1F0h] BYREF
  int v26[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  struct _SINGLE_LIST_ENTRY *v27; // [rsp+A8h] [rbp-1E0h]
  PVOID Object; // [rsp+B0h] [rbp-1D8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-1C8h] BYREF
  int v30; // [rsp+C8h] [rbp-1C0h]
  __int64 v31[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int64 v32[4]; // [rsp+E0h] [rbp-1A8h] BYREF
  int v33; // [rsp+104h] [rbp-184h]
  __int64 v34; // [rsp+128h] [rbp-160h]
  __int64 v35; // [rsp+130h] [rbp-158h]
  _QWORD v36[6]; // [rsp+138h] [rbp-150h] BYREF
  int v37; // [rsp+168h] [rbp-120h]
  __int128 BaseAddress; // [rsp+170h] [rbp-118h] BYREF
  unsigned int v39; // [rsp+180h] [rbp-108h]
  __int64 v40; // [rsp+1C0h] [rbp-C8h] BYREF
  int v41[2]; // [rsp+1C8h] [rbp-C0h]
  int v42[2]; // [rsp+208h] [rbp-80h]
  _QWORD v43[6]; // [rsp+218h] [rbp-70h] BYREF
  int v44; // [rsp+248h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+2A0h] [rbp+18h] BYREF
  va_list va; // [rsp+2A0h] [rbp+18h]
  __int64 v49; // [rsp+2A8h] [rbp+20h]
  __int64 v50; // [rsp+2B0h] [rbp+28h]
  UNICODE_STRING *v51; // [rsp+2B8h] [rbp+30h]
  __int64 v52; // [rsp+2C0h] [rbp+38h]
  __int64 v53; // [rsp+2C8h] [rbp+40h]
  __int64 v54; // [rsp+2D0h] [rbp+48h]
  unsigned int *v55; // [rsp+2D8h] [rbp+50h]
  va_list va1; // [rsp+2E0h] [rbp+58h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  CurrentThread = va_arg(va1, struct _KTHREAD *);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, UNICODE_STRING *);
  v52 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD);
  v54 = va_arg(va1, _QWORD);
  v55 = va_arg(va1, unsigned int *);
  v2 = a2;
  Handle = 0LL;
  Object = 0LL;
  *(_QWORD *)&BaseAddress = 0LL;
  *(_QWORD *)v26 = 0LL;
  SecureHandle = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  MiInitializeImageHotPatchContext(&v40, 0LL);
  MiInitializeImageHotPatchContext(v32, 0LL);
  v6 = v55;
  *(_QWORD *)v55 = 0LL;
  Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  v25 = Process;
  if ( !*(_QWORD *)(Process + 1016) && (*(_DWORD *)(Process + 772) & 0x4000000) != 0 )
  {
    v8 = -1073741637;
    goto LABEL_33;
  }
  if ( !v51->Length )
  {
    v9 = 0LL;
LABEL_23:
    CurrentThread = KeGetCurrentThread();
    v19 = v50;
    MiLockVad((__int64)CurrentThread, v50);
    if ( (unsigned int)MiVadDeleted(v19) )
    {
      MiUnlockVad((__int64)CurrentThread, v19);
      v8 = -1073741800;
    }
    else
    {
      MiInitializeImageHotPatchContext(&v40, v19);
      MiBeginHoldingDirtyFaults(a1, v43);
      v44 |= 2u;
      v8 = MiPrepareToHotPatchImage(&v40, v3, v2);
      MiUnlockVad((__int64)CurrentThread, v19);
      if ( v8 >= 0 )
      {
        MiSetProcessPebHotPatchState(Process);
        if ( !v51->Length
          || (LODWORD(v25) = 0,
              v8 = RtlApplyHotPatch(
                     *(__int64 *)v42,
                     *(__int64 *)v41,
                     0LL,
                     0,
                     0LL,
                     v22,
                     v23,
                     v34,
                     v32[1],
                     v35,
                     v33,
                     &v25,
                     v3,
                     (__int64)v9,
                     2,
                     0LL,
                     0LL),
              v8 >= 0) )
        {
          v8 = MiApplyImageHotPatch((__int64)&v40, (__int64)v32, a2, v3, v9);
          if ( v8 >= 0 )
          {
            if ( v4 )
            {
              v4[1] = *(_QWORD *)v26;
              *(_QWORD *)v26 = 0LL;
              v4[2] = SecureHandle;
              SecureHandle = 0LL;
              *v4 = *(_QWORD *)(a2 + 56);
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
  LOBYTE(v5) = v54;
  v8 = MiOpenHotPatchFile(v51, 0, v5, &Handle, &Object, &BaseAddress, 0LL, v6);
  if ( v8 < 0 )
    goto LABEL_33;
  v10 = (unsigned __int64)v39 << 12;
  if ( v10 > 0xFFFFFFFF )
  {
LABEL_8:
    v8 = -1073741701;
    goto LABEL_33;
  }
  HotPatchInformation = RtlFindHotPatchInformation((PVOID)BaseAddress);
  v12 = (const void *)HotPatchInformation;
  v31[1] = HotPatchInformation;
  if ( !HotPatchInformation )
  {
    v8 = -1073741701;
    LODWORD(CurrentThread) = -1073741701;
    goto LABEL_33;
  }
  v13 = *(unsigned int *)(HotPatchInformation + 4);
  v30 = v13;
  v14 = v13;
  PoolWithTag = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x4E495048u);
  v3 = PoolWithTag;
  v27 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_12:
    v8 = -1073741670;
    goto LABEL_33;
  }
  memmove(PoolWithTag, v12, v14);
  HotPatchBase = (_DWORD *)RtlFindHotPatchBase(v3);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v17, (_DWORD)HotPatchBase, v49, v10, v21) )
    goto LABEL_8;
  v9 = (struct _SINGLE_LIST_ENTRY *)((char *)v3 + (unsigned int)HotPatchBase[6]);
  if ( HotPatchBase[3] != (_DWORD)v52 || HotPatchBase[2] != (_DWORD)v53 )
  {
    v8 = -1073741735;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a2 + 88) && *(_QWORD *)v55 == *(_QWORD *)(a2 + 80) )
  {
    v8 = 255;
    goto LABEL_33;
  }
  v31[0] = 0LL;
  v8 = MiMapViewOfSectionExCommon(
         (__int64)Object,
         Process,
         1,
         (__int64 *)v26,
         0LL,
         v31,
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
    v4 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x45505048u);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v18 = (char *)MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ Process ^ qword_14043B0D0, (int *)va);
      MiInitializeImageHotPatchContext(v32, (__int64)v18);
      MiBeginHoldingDirtyFaults(a1, v36);
      v37 |= 2u;
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
  if ( (_QWORD)BaseAddress )
    MiUnmapImageInSystemSpace((unsigned __int64 *)&BaseAddress);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( *(_QWORD *)v26 )
    MiUnmapViewOfSection(Process, *(unsigned __int64 *)v26, 0, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  MiReleaseHotPatchResources(&v40);
  MiReleaseHotPatchResources(v32);
  return (unsigned int)v8;
}
