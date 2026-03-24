/*
 * XREFs of NtLoadEnclaveData @ 0x14085AFB0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747E0 (MiObtainReferencedVadEx.c)
 *     MmSizeOfMdl @ 0x14011A740 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x14067747C (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x14085A1AC (MiDereferenceEnclaveModule.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65C0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        ULONG_PTR a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        PVOID Base,
        SIZE_T Length,
        __int64 *a8,
        _DWORD *a9)
{
  __int16 v9; // r10
  ULONG_PTR v10; // rbx
  int v11; // r12d
  __int64 v12; // r14
  char PreviousMode; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  SIZE_T v16; // rax
  struct _MDL *PoolWithTag; // rax
  int v18; // edi
  struct _KPROCESS *Process; // rbx
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  char *v22; // rcx
  int v23; // r12d
  PACCESS_TOKEN v24; // rbx
  __int64 v25; // rbx
  volatile signed __int32 *v26; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-118h]
  int v29; // [rsp+54h] [rbp-114h] BYREF
  int v30; // [rsp+58h] [rbp-110h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-108h]
  char *v32; // [rsp+68h] [rbp-100h]
  PVOID Object; // [rsp+70h] [rbp-F8h] BYREF
  _DWORD v34[3]; // [rsp+7Ch] [rbp-ECh] BYREF
  PMDL MemoryDescriptorList; // [rsp+88h] [rbp-E0h]
  _DWORD *v36; // [rsp+90h] [rbp-D8h]
  ULONG_PTR v37; // [rsp+A0h] [rbp-C8h]
  __int64 *v38; // [rsp+A8h] [rbp-C0h]
  void *v39; // [rsp+B0h] [rbp-B8h]
  __int64 v40; // [rsp+B8h] [rbp-B0h]
  __int64 v41; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v42[3]; // [rsp+C8h] [rbp-A0h] BYREF
  void *Src; // [rsp+E0h] [rbp-88h]
  _BYTE v44[48]; // [rsp+F8h] [rbp-70h] BYREF

  v9 = a4;
  v40 = a4;
  Src = a3;
  *(_QWORD *)&v34[1] = a2;
  v10 = a1;
  BugCheckParameter1 = a1;
  v11 = Length;
  LODWORD(v32) = Length;
  v37 = a1;
  v38 = a8;
  v36 = a9;
  v42[0] = 0LL;
  v34[0] = 0;
  Object = 0LL;
  v12 = 0LL;
  v41 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( a9 )
    {
      v14 = (__int64)a9;
      if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( a8 )
    {
      v15 = (__int64)a8;
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  v39 = 0LL;
  if ( (_DWORD)Length )
  {
    if ( (unsigned int)(Length - 16) > 0xFFEF )
    {
      v18 = -1073741820;
      goto LABEL_20;
    }
    if ( PreviousMode == 1 )
    {
      if ( ((unsigned __int8)Base & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Base + (unsigned int)Length > 0x7FFFFFFF0000LL
        || (char *)Base + (unsigned int)Length < Base )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v39 = *(void **)Base;
    v16 = MmSizeOfMdl(Base, (unsigned int)Length);
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6C646D4Du);
    v12 = (__int64)PoolWithTag;
    MemoryDescriptorList = PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = -1073741670;
LABEL_20:
      v29 = v18;
LABEL_46:
      v23 = 0;
      goto LABEL_47;
    }
    PoolWithTag->Next = 0LL;
    PoolWithTag->Size = 8
                      * (((((unsigned __int16)Base & 0xFFF) + (unsigned __int64)(unsigned int)Length + 4095) >> 12) + 6);
    PoolWithTag->MdlFlags = 0;
    PoolWithTag->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
    PoolWithTag->ByteOffset = (unsigned __int16)Base & 0xFFF;
    v11 = (int)v32;
    PoolWithTag->ByteCount = (unsigned int)v32;
    MmProbeAndLockPages(PoolWithTag, AccessMode, IoReadAccess);
    PreviousMode = AccessMode;
    v9 = v40;
  }
  if ( (v34[1] & 0xFFF) != 0 )
  {
    v18 = -1073741584;
LABEL_25:
    v29 = v18;
LABEL_45:
    v10 = BugCheckParameter1;
    goto LABEL_46;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
    v18 = -1073741582;
    goto LABEL_25;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( BugCheckParameter1 == -1LL )
  {
    Object = Process;
  }
  else
  {
    v18 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            0x6D566D4Du,
            &Object,
            0LL,
            0LL);
    v29 = v18;
    if ( v18 < 0 )
      goto LABEL_45;
  }
  KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v44);
  v30 = 1;
  v20 = MiObtainReferencedVadEx(*(unsigned __int64 *)&v34[1], 0, &v29);
  v21 = v20;
  if ( v20 && (*(_DWORD *)(v20 + 48) & 0x20000) != 0 )
  {
    v32 = (char *)v20;
    if ( (*(_DWORD *)(v20 + 64) & 1) != 0 )
    {
      if ( !v12 )
      {
        v25 = v40;
        if ( !v40 )
        {
          v18 = -1073741582;
          goto LABEL_36;
        }
        if ( !v11 )
        {
          KiUnstackDetachProcess((__int64)v44, 0LL);
          v23 = 0;
          v18 = MiCopyPagesIntoEnclave(
                  (_KPROCESS *)Object,
                  v21,
                  AccessMode,
                  *(__int64 *)&v34[1],
                  Src,
                  v25,
                  a5,
                  v42,
                  v34);
          v29 = v18;
          v22 = v32;
          v10 = BugCheckParameter1;
          goto LABEL_48;
        }
      }
    }
    else if ( v12 )
    {
      v24 = PsReferencePrimaryToken(Process);
      v18 = MiLoadSectionIntoVsmEnclave(
              (__int64)Object,
              v21,
              v39,
              AccessMode,
              (__int64)v24,
              *(__int64 *)&v34[1],
              v12,
              &v41);
      v29 = v18;
      ObfDereferenceObject(v24);
      v22 = v32;
      goto LABEL_37;
    }
    v18 = -1073741820;
LABEL_36:
    v29 = v18;
    v22 = (char *)v20;
LABEL_37:
    v10 = BugCheckParameter1;
    v23 = v30;
    goto LABEL_48;
  }
  v18 = -1073741800;
  v29 = -1073741800;
  v10 = BugCheckParameter1;
  v23 = v30;
LABEL_47:
  v22 = 0LL;
LABEL_48:
  if ( v22 )
    MiUnlockAndDereferenceVad(v22);
  if ( v23 )
    KiUnstackDetachProcess((__int64)v44, 0LL);
  if ( Object && v10 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v12);
    ExFreePoolWithTag((PVOID)v12, 0);
  }
  v26 = (volatile signed __int32 *)v41;
  if ( v41 )
  {
    DbgkMapViewOfSection((_KPROCESS *)Object, 0LL, *(void **)(v41 + 16));
    MiDereferenceEnclaveModule(v26);
  }
  if ( a8 )
    *a8 = v42[0];
  if ( a9 )
    *a9 = v34[0];
  return (unsigned int)v18;
}
