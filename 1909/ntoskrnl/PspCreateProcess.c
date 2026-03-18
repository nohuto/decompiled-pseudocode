/*
 * XREFs of PspCreateProcess @ 0x140787730
 * Callers:
 *     NtCreateProcessEx @ 0x1408C3EB0 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspCreateObjectHandle @ 0x1405E9D9C (PspCreateObjectHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SeQuerySigningPolicy @ 0x140619F40 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14061A40C (PspReferenceTokenForNewProcess.c)
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E2B64 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     PspDeleteObjectAccessState @ 0x1408C85AC (PspDeleteObjectAccessState.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  int v11; // eax
  int v12; // eax
  PVOID v13; // r12
  PVOID v14; // r14
  int ProcessProtectionRequirementsFromImage; // esi
  char v16; // bl
  int v17; // eax
  int v18; // r15d
  char v19; // al
  PVOID v20; // rbx
  NTSTATUS result; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  bool v25; // cf
  __int64 v26; // rdx
  int v27; // [rsp+80h] [rbp-248h] BYREF
  char v28; // [rsp+84h] [rbp-244h]
  int v29; // [rsp+88h] [rbp-240h]
  char v30; // [rsp+8Ch] [rbp-23Ch]
  __int64 v31; // [rsp+90h] [rbp-238h]
  PVOID v32; // [rsp+98h] [rbp-230h] BYREF
  int v33; // [rsp+A0h] [rbp-228h]
  PVOID v34; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-210h]
  PVOID v37; // [rsp+C0h] [rbp-208h]
  PVOID Object; // [rsp+C8h] [rbp-200h] BYREF
  PVOID v39; // [rsp+D0h] [rbp-1F8h] BYREF
  HANDLE v40; // [rsp+D8h] [rbp-1F0h]
  _BYTE AccessState[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v33 = a2;
  v36 = a1;
  v40 = a8;
  v31 = a9;
  v35 = 0LL;
  v28 = 0;
  LOBYTE(v27) = 0;
  if ( (a6 & 0xFFF94040) != 0 )
    return -1073741811;
  v30 = BYTE2(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4]);
  if ( (v30 & 7) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 )
  {
    v11 = a6 & 0x2000;
    if ( (a6 & 0x2000) == 0 )
      return -1073741811;
  }
  else
  {
    v11 = a6 & 0x2000;
  }
  if ( v11 )
  {
    v12 = a6 & 0x800;
    v29 = v12;
    if ( (a6 & 0x800) == 0 )
      return -1073741811;
  }
  else
  {
    v12 = a6 & 0x800;
    v29 = v12;
  }
  if ( v12 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v22 = *(_QWORD *)(a3 + 16);
      if ( !v22
        || !*(_QWORD *)(v22 + 8)
        || !*(_WORD *)v22
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
      v12 = v29;
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || !v12) )
    return -1073741811;
  memset(AccessState, 0, sizeof(AccessState));
  AccessState[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&AccessState[384] = v23;
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v24 = v23 & 0x1DF2;
    else
      v24 = v23 & 0x11FF2;
    *(_DWORD *)&AccessState[384] = v24;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v39, 0LL);
    v13 = v39;
    v37 = v39;
    if ( result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v37 = 0LL;
  }
  if ( !a4 )
  {
    v14 = 0LL;
    v34 = 0LL;
    goto LABEL_14;
  }
  ProcessProtectionRequirementsFromImage = ObReferenceObjectByHandleWithTag(
                                             a4,
                                             0x80u,
                                             (POBJECT_TYPE)PsProcessType,
                                             AccessMode,
                                             0x72437350u,
                                             &v34,
                                             0LL);
  if ( ProcessProtectionRequirementsFromImage >= 0 )
  {
    v14 = v34;
LABEL_14:
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(
                                               (struct _KPROCESS *)v14,
                                               (void *)v31,
                                               AccessMode,
                                               &v32);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_30;
    if ( v14 )
    {
      if ( v13 )
      {
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(
                                                   v32,
                                                   0LL,
                                                   0,
                                                   v27,
                                                   (_BYTE *)&v27 + 1,
                                                   (_BYTE *)&v27 + 2,
                                                   &v27);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_29;
        HIBYTE(v27) = BYTE1(v27);
        if ( BYTE1(v27) > 1u || (v16 = v27) != 0 )
        {
LABEL_76:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_29;
        }
      }
      else
      {
        v16 = *((_BYTE *)v14 + 1786);
        LOBYTE(v27) = v16;
        BYTE2(v27) = *((_BYTE *)v14 + 1785);
        HIBYTE(v27) = *((_BYTE *)v14 + 1784);
        BYTE1(v27) = HIBYTE(v27);
      }
    }
    else
    {
      v16 = 114;
      v27 = 505159282;
    }
    if ( !v13 )
      goto LABEL_18;
    ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage((__int64)v13);
    if ( ProcessProtectionRequirementsFromImage >= 0 )
    {
      if ( v16 == v28 )
      {
LABEL_18:
        if ( v29 )
        {
          v25 = v31 != 0;
          v31 = -v31;
          if ( a3 )
            v26 = *(_QWORD *)(a3 + 16);
          else
            v26 = 0LL;
          ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                     (PEPROCESS)v14,
                                                     v26,
                                                     0LL,
                                                     v16,
                                                     (void *)((unsigned __int64)v32 & -(__int64)v25),
                                                     a6,
                                                     0,
                                                     0LL,
                                                     0LL,
                                                     (_QWORD *)v36);
        }
        else
        {
          v17 = PspAllocateProcess(
                  (__int64)v14,
                  AccessMode,
                  a3,
                  v16,
                  SHIBYTE(v27),
                  SBYTE2(v27),
                  v13,
                  v32,
                  a6,
                  0,
                  0LL,
                  v31 != 0,
                  0LL,
                  (__int64)&v35,
                  &Object);
          ProcessProtectionRequirementsFromImage = v17;
          if ( v17 >= 0 )
          {
            v18 = v17;
            v29 = v17;
            v19 = 1;
            if ( (_DWORD)v35 )
              v19 = 3;
            v20 = Object;
            ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                       (char *)Object,
                                                       (struct _KPROCESS *)v14,
                                                       v33,
                                                       a6,
                                                       v40,
                                                       v19,
                                                       0LL,
                                                       (PACCESS_STATE)AccessState);
            if ( ProcessProtectionRequirementsFromImage >= 0 )
            {
              ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                         v20,
                                                         (__int64)AccessState,
                                                         (struct _OBJECT_TYPE *)PsProcessType);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                *(_QWORD *)v36 = *(_QWORD *)&AccessState[392];
                ProcessProtectionRequirementsFromImage = v18;
              }
              PspDeleteObjectAccessState(AccessState);
            }
            if ( ProcessProtectionRequirementsFromImage < 0 )
              PspRundownSingleProcess((ULONG_PTR)v20, 0);
            ObfDereferenceObjectWithTag(v20, 0x72437350u);
          }
        }
        goto LABEL_29;
      }
      goto LABEL_76;
    }
LABEL_29:
    ObfDereferenceObject(v32);
LABEL_30:
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
  }
  if ( v13 )
    ObfDereferenceObject(v13);
  return ProcessProtectionRequirementsFromImage;
}
