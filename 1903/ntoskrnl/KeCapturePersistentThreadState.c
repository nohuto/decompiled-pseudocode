/*
 * XREFs of KeCapturePersistentThreadState @ 0x140297B10
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14084C2E8 (DbgkpWerCaptureLiveTriageDump.c)
 *     WheapCreateLiveTriageDump @ 0x14091A810 (WheapCreateLiveTriageDump.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     RtlGetNtProductType @ 0x14012E090 (RtlGetNtProductType.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140193224 (SecureDump_GetSecureDumpSettings.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1402950AC (IoGetLoadedDriverInfo.c)
 *     IopGetMaxValidSectionSize @ 0x140296D7C (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140296DC4 (IopGetMaxValidSectionSizeDown.c)
 *     IopValidateSectionSize @ 0x1402976BC (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x1402978C8 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x1402A1B44 (KdCopyDataBlock.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  void *v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // eax
  ULONG ActiveProcessorCount; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _OWORD *v20; // rcx
  int v21; // eax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rcx
  size_t v27; // r8
  int v28; // esi
  __int64 v29; // rcx
  size_t v30; // r8
  int v31; // esi
  const void *StackLimit; // rcx
  void *StackBase; // rax
  const void *v34; // r14
  unsigned int v35; // eax
  int v36; // edi
  size_t v37; // r8
  struct _KTHREAD *v38; // rax
  unsigned int v39; // edi
  int v40; // r14d
  unsigned int v41; // r15d
  int v42; // eax
  __int64 v43; // r14
  unsigned int v44; // edi
  unsigned int MaxValidSectionSizeDown; // eax
  const void *v46; // rsi
  unsigned int MaxValidSectionSize; // eax
  __int64 v48; // rcx
  __int64 result; // rax
  int v50; // [rsp+20h] [rbp-20h] BYREF
  int v51; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v52; // [rsp+28h] [rbp-18h] BYREF
  int v53; // [rsp+30h] [rbp-10h]

  v8 = Size;
  v52 = 0LL;
  v53 = 0;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || (int)SecureDump_GetSecureDumpSettings((__int64)&v52) < 0 || (_BYTE)v52 )
    return 0LL;
  memset((void *)(v8 + 8), 0, 0x3FFF8uLL);
  v13 = (void *)v8;
  v14 = 2048LL;
  if ( (v8 & 4) != 0 )
  {
    v14 = 2047LL;
    v13 = (void *)(v8 + 4);
  }
  memset64(v13, 0x4547415045474150uLL, v14 >> 1);
  if ( (v14 & 1) != 0 )
    *((_DWORD *)v13 + v14 - 1) = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *(_DWORD *)(v8 + 4) = 875976004;
  v15 = KernelVersionBump - 1;
  *(_DWORD *)(v8 + 8) = 15;
  *(_DWORD *)(v8 + 12) = 18363 - (v15 != 0);
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  v17 = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 4176) |= 0x10u;
  *(_DWORD *)(v8 + 4148) = v17;
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
  v18 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v19 = 8320;
  v20 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v21 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v21;
  v22 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v22 = *v20;
    v22[1] = v20[1];
    v22[2] = v20[2];
    v22[3] = v20[3];
    v22[4] = v20[4];
    v22[5] = v20[5];
    v22[6] = v20[6];
    v22 += 8;
    v23 = v20[7];
    v20 += 8;
    *(v22 - 1) = v23;
    --v18;
  }
  while ( v18 );
  v24 = *v20;
  LODWORD(Size) = 896;
  *v22 = v24;
  v22[1] = v20[1];
  v22[2] = v20[2];
  v22[3] = v20[3];
  v22[4] = v20[4];
  if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 896;
    KdCopyDataBlock(v8 + 8320, v25);
    v19 = 9216;
  }
  LODWORD(Size) = 36608;
  if ( IopValidateSectionSize(v19, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    *(_DWORD *)(v8 + 8220) = v19;
    memmove((void *)(v8 + v19), KeGetCurrentPrcb(), (unsigned int)Size);
    v19 += Size;
  }
  LODWORD(Size) = 2176;
  if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v27 = (unsigned int)Size;
    v28 = v26;
    *(_DWORD *)(v8 + 8224) = v26;
    memmove((void *)(v8 + v26), CurrentThread->ApcState.Process, v27);
    v19 = Size + v28;
  }
  LODWORD(Size) = 2080;
  if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v30 = (unsigned int)Size;
    v31 = v29;
    *(_DWORD *)(v8 + 8228) = v29;
    memmove((void *)(v8 + v29), CurrentThread, v30);
    v19 = Size + v31;
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v34 = *(const void **)(a1 + 152);
    if ( (StackLimit > v34 || v34 >= StackBase) && (v34 = StackLimit, StackBase <= StackLimit) )
      v35 = 0;
    else
      v35 = (_DWORD)StackBase - (_DWORD)v34;
    if ( v35 >= 0x7FFF )
      v35 = 0x7FFF;
    LODWORD(Size) = IopGetMaxValidSectionSize((__int64)v34, v35);
    if ( (_DWORD)Size )
    {
      if ( !IopValidateSectionSize(v19, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v36 = Size;
      v37 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v19;
      *(_DWORD *)(v8 + 8236) = v36;
      *(_QWORD *)(v8 + 8264) = v34;
      memmove((void *)(v8 + v19), v34, v37);
      v19 += v36;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v38 = KeGetCurrentThread();
    v39 = (v19 + 7) & 0xFFFFFFF8;
    --v38->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(0, &v50, &v51) >= 0 )
    {
      v40 = v50;
      LODWORD(Size) = 144 * v50;
      if ( 144 * v50 && IopValidateSectionSize(v39, (unsigned int *)&Size) )
      {
        v41 = v39 + Size;
        LODWORD(Size) = (v51 + 7 + 6 * v40) & 0xFFFFFFF8;
        if ( (_DWORD)Size && IopValidateSectionSize(v41, (unsigned int *)&Size) )
        {
          if ( (int)IopWriteDriverList(v8, 0, v39, v41) >= 0 )
          {
            *(_DWORD *)(v8 + 4152) |= 0x40u;
            v42 = Size;
            *(_DWORD *)(v8 + 8240) = v39;
            *(_DWORD *)(v8 + 8244) = v40;
            *(_DWORD *)(v8 + 8248) = v41;
            v19 = v41 + v42;
            *(_DWORD *)(v8 + 8252) = v42;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 8260) |= 0x100u;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  LODWORD(Size) = 4112;
  v43 = (v19 + 7) & 0xFFFFFFF8;
  IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
  if ( (unsigned int)Size > 0x10 )
  {
    v44 = Size - 16;
    MaxValidSectionSizeDown = IopGetMaxValidSectionSizeDown(*(_QWORD *)(a1 + 248), (unsigned int)(Size - 16) >> 1);
    if ( MaxValidSectionSizeDown )
    {
      v46 = (const void *)(*(_QWORD *)(a1 + 248) - MaxValidSectionSizeDown + 1LL);
      MaxValidSectionSize = IopGetMaxValidSectionSize((__int64)v46, v44);
      if ( MaxValidSectionSize )
      {
        *(_DWORD *)(v8 + 4152) |= 0x800u;
        *(_DWORD *)(v8 + 8312) = v43;
        v48 = ((_DWORD)v43 + 23) & 0xFFFFFFF8;
        *(_DWORD *)(v8 + 8316) = 1;
        *(_DWORD *)(v43 + v8 + 8) = v48;
        *(_QWORD *)(v43 + v8) = v46;
        *(_DWORD *)(v43 + v8 + 12) = MaxValidSectionSize;
        memmove((void *)(v8 + v48), v46, MaxValidSectionSize);
      }
    }
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
