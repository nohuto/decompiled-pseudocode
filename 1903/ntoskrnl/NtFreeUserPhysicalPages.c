/*
 * XREFs of NtFreeUserPhysicalPages @ 0x140897730
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiReturnProcessCommitment @ 0x140059044 (MiReturnProcessCommitment.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071808 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D1D0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1402D6F50 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiReferenceAweHandle @ 0x1402D7910 (MiReferenceAweHandle.c)
 *     MiCaptureUlongPtrArray @ 0x140896078 (MiCaptureUlongPtrArray.c)
 *     MiGetAweInfoPartition @ 0x140896848 (MiGetAweInfoPartition.c)
 */

NTSTATUS __stdcall NtFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  PULONG_PTR v3; // r13
  _KPROCESS *Process; // rbx
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // rdi
  PMDL Mdl; // rsi
  unsigned __int64 v12; // r10
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ebx
  NTSTATUS v17; // edi
  IRP *Irp; // r10
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  struct _MDL *v22; // rcx
  struct _KTHREAD *v23; // rdi
  __int64 ByteOffset; // rax
  __int64 AweInfoPartition; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int16 v29; // cx
  __int64 v30; // rax
  void *v31; // rcx
  KPROCESSOR_MODE v32; // [rsp+30h] [rbp-1118h]
  int v33; // [rsp+34h] [rbp-1114h]
  __int64 v34; // [rsp+40h] [rbp-1108h] BYREF
  __int64 v35; // [rsp+48h] [rbp-1100h]
  void *Src; // [rsp+50h] [rbp-10F8h]
  PULONG_PTR v37; // [rsp+58h] [rbp-10F0h]
  __int64 v38; // [rsp+60h] [rbp-10E8h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-10E0h]
  unsigned __int64 v40; // [rsp+70h] [rbp-10D8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-10D0h]
  __int64 v42; // [rsp+80h] [rbp-10C8h]
  unsigned __int64 v43; // [rsp+88h] [rbp-10C0h]
  _BYTE v44[4200]; // [rsp+98h] [rbp-10B0h] BYREF

  Src = UserPfnArray;
  v3 = NumberOfPages;
  v37 = NumberOfPages;
  memset(v44, 0, 0x30uLL);
  memset(&v44[56], 0, 0x1030uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v32 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)v3;
    if ( (unsigned __int64)v3 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v7 = *v3;
    v39 = *v3;
    *v3 = 0LL;
  }
  else
  {
    v7 = *v3;
    v39 = *v3;
  }
  if ( !v7 )
    return -1073741584;
  v10 = 0LL;
  v35 = 0LL;
  Mdl = (PMDL)&v44[56];
  result = MiReferenceAweHandle(ProcessHandle, 2u, PreviousMode, &v34, &v38);
  v12 = 0LL;
  if ( result >= 0 )
  {
    v13 = v38;
    if ( v38 )
    {
      v14 = MiSectionControlArea(v38);
      v15 = (__int64)Process;
      v34 = (__int64)Process;
      v10 = *(_QWORD *)(v14 + 8);
      v35 = v10;
    }
    else
    {
      v15 = v34;
      if ( !v34 )
      {
        v15 = (__int64)Process;
        v34 = (__int64)Process;
        v16 = 4;
LABEL_12:
        v40 = v12;
        if ( v10 || (v10 = *(_QWORD *)(*(_QWORD *)(v15 + 1296) + 392LL), (v35 = v10) != 0) )
        {
          v19 = ExGetCallBackBlockRoutine(v10);
          Mdl = (PMDL)Irp;
          v20 = 512LL;
          if ( v7 > 0x200 / v19 )
          {
            if ( v7 <= 0xC0000 / v19 )
              v20 = v7 * v19;
            else
              v20 = ~(v19 - 1) & 0xC0000;
            while ( v20 > 0x200 )
            {
              Mdl = IoAllocateMdl(0LL, (_DWORD)v20 << 12, 0, 0, Irp);
              Irp = 0LL;
              if ( Mdl )
                break;
              v20 = ~(v19 - 1) & (v19 + (v20 >> 1) - 1);
            }
          }
          if ( !Mdl )
          {
            Mdl = (PMDL)&v44[56];
            v20 = 512LL;
          }
          v21 = v20 / v19;
          while ( 1 )
          {
            if ( v7 < v21 )
              v21 = v7;
            v43 = v21;
            Mdl->Next = (struct _MDL *)Irp;
            Mdl->Size = 8 * ((((v21 << 12) + 4095) >> 12) + 6);
            Mdl->MdlFlags = (__int16)Irp;
            Mdl->StartVa = Irp;
            Mdl->ByteOffset = (unsigned int)Irp;
            Mdl->ByteCount = (_DWORD)v21 << 12;
            v16 &= ~1u;
            v33 = v16;
            v22 = Mdl + 1;
            if ( v32 == (_BYTE)Irp )
            {
              memmove(v22, Src, 8 * v21);
            }
            else
            {
              v17 = MiCaptureUlongPtrArray(v22, (char *)Src, v21);
              if ( v17 < 0 )
                goto LABEL_57;
            }
            v23 = CurrentThread;
            if ( CurrentThread->ApcState.Process != (_KPROCESS *)v15 )
            {
              KiStackAttachProcess((_KPROCESS *)v15, 0, (__int64)v44);
              v16 |= 1u;
              v33 = v16;
            }
            if ( !v13 )
            {
              LOCK_ADDRESS_SPACE((__int64)v23, v15);
              if ( (*(_DWORD *)(v15 + 780) & 0x20) != 0 )
                break;
            }
            v17 = MiFreePhysicalPages(v35, (__int64)Mdl);
            ByteOffset = Mdl->ByteOffset;
            v42 = ByteOffset;
            Irp = 0LL;
            if ( ByteOffset )
            {
              if ( !v13 )
                MiReturnProcessCommitment(v15, v19 * (unsigned int)ByteOffset);
              v40 += ByteOffset;
            }
            if ( !v13 )
            {
              UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
              Irp = 0LL;
            }
            if ( Mdl->ByteCount )
            {
              AweInfoPartition = MiGetAweInfoPartition(v35);
              v27 = -(__int64)(v19 * v26);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 8568), v27);
              v13 = v38;
              if ( !v38 )
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 1648), v27);
                v13 = v38;
              }
              Mdl->MdlFlags |= 2u;
              Mdl->ByteCount <<= 12;
              MiPreparePhysicalPagesMdlForFree((__int64)Mdl, v19);
              MiFreePagesFromMdl((ULONG_PTR)Mdl, 0x80000000);
              v16 = v33;
              v7 = v39;
              v15 = v34;
              Irp = 0LL;
            }
            v7 -= v42;
            v39 = v7;
            if ( v17 || !v7 )
              goto LABEL_57;
            if ( (v16 & 1) != 0 )
            {
              KiUnstackDetachProcess((struct _KTHREAD *)v44, 0);
              v16 &= ~1u;
              Irp = 0LL;
            }
            v28 = *(_QWORD *)(v15 + 1064);
            if ( v28 && ((v29 = *(_WORD *)(v28 + 8), v29 == 332) || v29 == 452) )
              v30 = 4LL;
            else
              v30 = 8LL;
            v21 = v43;
            Src = (char *)Src + v43 * v30;
          }
          UNLOCK_ADDRESS_SPACE((__int64)v23, v15);
          v17 = -1073741558;
LABEL_57:
          v3 = v37;
        }
        else
        {
          v17 = -1073741585;
        }
        if ( Mdl != (PMDL)&v44[56] )
        {
          Mdl->MdlFlags &= ~2u;
          IoFreeMdl(Mdl);
        }
        if ( (v16 & 1) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v44, 0);
        if ( (v16 & 4) == 0 )
        {
          v31 = (void *)v13;
          if ( !v13 )
            v31 = (void *)v15;
          ObfDereferenceObjectWithTag(v31, 0x68506D4Du);
        }
        *v3 = v40;
        return v17;
      }
    }
    v16 = 0;
    goto LABEL_12;
  }
  return result;
}
