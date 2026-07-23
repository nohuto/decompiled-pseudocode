/*
 * XREFs of NtFreeUserPhysicalPages @ 0x140852170
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiReturnProcessCommitment @ 0x140065D14 (MiReturnProcessCommitment.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1402B1578 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     MiCaptureUlongPtrArray @ 0x14085095C (MiCaptureUlongPtrArray.c)
 *     MiGetAweInfoPartition @ 0x140851130 (MiGetAweInfoPartition.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  int v4; // ebx
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // r13
  PMDL Mdl; // rsi
  unsigned __int64 v12; // r10
  __int64 v13; // r12
  _KPROCESS *v14; // r14
  NTSTATUS v15; // edi
  IRP *Irp; // r10
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  struct _MDL *v20; // rcx
  struct _KTHREAD *v21; // rdi
  __int64 ByteOffset; // rax
  __int64 AweInfoPartition; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  __int64 v28; // rax
  void *v29; // rcx
  KPROCESSOR_MODE v30; // [rsp+30h] [rbp-1108h]
  PVOID Object; // [rsp+38h] [rbp-1100h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10F8h]
  void *Src; // [rsp+48h] [rbp-10F0h]
  __int64 v34; // [rsp+50h] [rbp-10E8h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-10E0h]
  unsigned __int64 v36; // [rsp+60h] [rbp-10D8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-10D0h]
  __int64 v38; // [rsp+70h] [rbp-10C8h]
  unsigned __int64 v39; // [rsp+78h] [rbp-10C0h]
  PULONG_PTR v40; // [rsp+80h] [rbp-10B8h]
  _BYTE v41[48]; // [rsp+90h] [rbp-10A8h] BYREF
  _BYTE v42[4144]; // [rsp+C0h] [rbp-1078h] BYREF

  Src = UserPfnArray;
  v40 = NumberOfPages;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v30 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)NumberOfPages;
    if ( (unsigned __int64)NumberOfPages >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v7 = *NumberOfPages;
    v35 = *NumberOfPages;
    *NumberOfPages = 0LL;
  }
  else
  {
    v7 = *NumberOfPages;
    v35 = *NumberOfPages;
  }
  if ( !v7 )
    return -1073741584;
  v10 = 0LL;
  v32 = 0LL;
  Mdl = (PMDL)v42;
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, &Object, &v34);
  v12 = 0LL;
  if ( result >= 0 )
  {
    v13 = v34;
    if ( v34 )
    {
      v10 = *(_QWORD *)(MiSectionControlArea(v34) + 8);
      v32 = v10;
    }
    else
    {
      v14 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_14;
      v4 = 4;
    }
    Object = Process;
    v14 = Process;
LABEL_14:
    v36 = v12;
    if ( v10 || (v10 = *(_QWORD *)(*(_QWORD *)&v14[1].IdealGlobalNode + 344LL), (v32 = v10) != 0) )
    {
      v17 = ExGetCallBackBlockRoutine(v10);
      Mdl = (PMDL)Irp;
      v18 = 512LL;
      if ( v7 > 0x200 / v17 )
      {
        if ( v7 <= 0xC0000 / v17 )
          v18 = v7 * v17;
        else
          v18 = ~(v17 - 1) & 0xC0000;
        while ( v18 > 0x200 )
        {
          Mdl = IoAllocateMdl(0LL, (_DWORD)v18 << 12, 0, 0, Irp);
          Irp = 0LL;
          if ( Mdl )
            break;
          v18 = ~(v17 - 1) & (v17 + (v18 >> 1) - 1);
        }
      }
      if ( !Mdl )
      {
        Mdl = (PMDL)v42;
        v18 = 512LL;
      }
      v19 = v18 / v17;
      while ( 1 )
      {
        if ( v7 < v19 )
          v19 = v7;
        v39 = v19;
        Mdl->Next = (struct _MDL *)Irp;
        Mdl->Size = 8 * ((((v19 << 12) + 4095) >> 12) + 6);
        Mdl->MdlFlags = (__int16)Irp;
        Mdl->StartVa = Irp;
        Mdl->ByteOffset = (unsigned int)Irp;
        Mdl->ByteCount = (_DWORD)v19 << 12;
        v4 &= ~1u;
        v20 = Mdl + 1;
        if ( v30 == (_BYTE)Irp )
        {
          memmove(v20, Src, 8 * v19);
        }
        else
        {
          v15 = MiCaptureUlongPtrArray(v20, (char *)Src, v19);
          if ( v15 < 0 )
            goto LABEL_57;
        }
        v21 = CurrentThread;
        if ( CurrentThread->ApcState.Process != v14 )
        {
          KiStackAttachProcess(v14, 0LL, (__int64)v41);
          v4 |= 1u;
        }
        if ( !v13 )
        {
          LOCK_ADDRESS_SPACE((__int64)v21, (__int64)v14);
          if ( (v14[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            break;
        }
        v15 = MiFreePhysicalPages(v32, (__int64)Mdl);
        ByteOffset = Mdl->ByteOffset;
        v38 = ByteOffset;
        Irp = 0LL;
        if ( ByteOffset )
        {
          if ( !v13 )
            MiReturnProcessCommitment((__int64)v14, v17 * (unsigned int)ByteOffset);
          v36 += ByteOffset;
        }
        if ( !v13 )
        {
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v14);
          Irp = 0LL;
        }
        if ( Mdl->ByteCount )
        {
          AweInfoPartition = MiGetAweInfoPartition(v32);
          v25 = -(__int64)(v17 * v24);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7800), v25);
          v13 = v34;
          if ( !v34 )
          {
            v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 200, v25);
            v13 = v34;
          }
          Mdl->MdlFlags |= 2u;
          Mdl->ByteCount <<= 12;
          MiPreparePhysicalPagesMdlForFree((__int64)Mdl, v17, v25);
          MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
          v7 = v35;
          v14 = (_KPROCESS *)Object;
          Irp = 0LL;
        }
        v7 -= v38;
        v35 = v7;
        if ( v15 || !v7 )
          goto LABEL_57;
        if ( (v4 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v41, 0LL);
          v4 &= ~1u;
          Irp = 0LL;
        }
        v26 = v14[1].ActiveProcessors.Bitmap[7];
        if ( v26 && ((v27 = *(_WORD *)(v26 + 8), v27 == 332) || v27 == 452) )
          v28 = 4LL;
        else
          v28 = 8LL;
        v19 = v39;
        Src = (char *)Src + v39 * v28;
      }
      UNLOCK_ADDRESS_SPACE((__int64)v21, (__int64)v14);
      v15 = -1073741558;
    }
    else
    {
      v15 = -1073741585;
    }
LABEL_57:
    if ( Mdl != (PMDL)v42 )
    {
      Mdl->MdlFlags &= ~2u;
      IoFreeMdl(Mdl);
    }
    if ( (v4 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v41, 0LL);
    if ( (v4 & 4) == 0 )
    {
      v29 = (void *)v13;
      if ( !v13 )
        v29 = v14;
      ObfDereferenceObjectWithTag(v29, 0x68506D4Du);
    }
    *v40 = v36;
    return v15;
  }
  return result;
}
