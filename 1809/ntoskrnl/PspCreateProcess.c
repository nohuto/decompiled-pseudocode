/*
 * XREFs of PspCreateProcess @ 0x14075F000
 * Callers:
 *     NtCreateProcessEx @ 0x1408890F0 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140609F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     SeQuerySigningPolicy @ 0x14060E5D0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14060EA9C (PspReferenceTokenForNewProcess.c)
 *     PspCreateObjectHandle @ 0x140622C88 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  PVOID v11; // r12
  __int64 v12; // r14
  int SigningPolicy; // esi
  char v14; // bl
  int v15; // eax
  int v16; // r15d
  char v17; // al
  PVOID v18; // rbx
  NTSTATUS result; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  bool v23; // cf
  __int64 v24; // rdx
  int v25; // [rsp+80h] [rbp-248h] BYREF
  char v26; // [rsp+84h] [rbp-244h]
  int v27; // [rsp+88h] [rbp-240h]
  __int64 v28; // [rsp+90h] [rbp-238h]
  PVOID v29; // [rsp+98h] [rbp-230h] BYREF
  int v30; // [rsp+A0h] [rbp-228h]
  __int64 v31; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-218h]
  PVOID v33; // [rsp+B8h] [rbp-210h]
  PVOID Object; // [rsp+C0h] [rbp-208h] BYREF
  PVOID v35; // [rsp+C8h] [rbp-200h] BYREF
  int v36; // [rsp+D0h] [rbp-1F8h] BYREF
  HANDLE v37; // [rsp+D8h] [rbp-1F0h]
  _BYTE v38[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v30 = a2;
  v32 = a1;
  v37 = a8;
  v28 = a9;
  if ( (a6 & 0xFFF94040) != 0
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v27 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 && (a6 & 0x800) == 0 )
    return -1073741811;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v20 = *(_QWORD *)(a3 + 16);
      if ( !v20
        || !*(_QWORD *)(v20 + 8)
        || !*(_WORD *)v20
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset(v38, 0, sizeof(v38));
  v38[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v38[384] = v21;
    }
    else
    {
      v21 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v22 = v21 & 0x1DF2;
    else
      v22 = v21 & 0x11FF2;
    *(_DWORD *)&v38[384] = v22;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v35, 0LL);
    v11 = v35;
    v33 = v35;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = 0LL;
    v33 = 0LL;
  }
  if ( !a4 )
  {
    v12 = 0LL;
    v31 = 0LL;
    goto LABEL_12;
  }
  SigningPolicy = ObpReferenceObjectByHandleWithTag(
                    a4,
                    128,
                    (__int64)PsProcessType,
                    AccessMode,
                    0x72437350u,
                    &v31,
                    0LL,
                    0LL);
  if ( SigningPolicy >= 0 )
  {
    v12 = v31;
LABEL_12:
    SigningPolicy = PspReferenceTokenForNewProcess((struct _KPROCESS *)v12, (void *)v28, AccessMode, &v29);
    if ( SigningPolicy < 0 )
      goto LABEL_28;
    if ( v12 )
    {
      if ( v11 )
      {
        LOBYTE(v25) = 0;
        SigningPolicy = SeQuerySigningPolicy(
                          v29,
                          0LL,
                          0,
                          0,
                          (unsigned __int8 *)&v25 + 1,
                          (unsigned __int8 *)&v25 + 2,
                          (unsigned __int8 *)&v25);
        if ( SigningPolicy < 0 )
          goto LABEL_27;
        HIBYTE(v25) = BYTE1(v25);
        if ( BYTE1(v25) > 1u || (v14 = v25) != 0 )
        {
LABEL_72:
          SigningPolicy = -1073741637;
          goto LABEL_27;
        }
      }
      else
      {
        v14 = *(_BYTE *)(v12 + 1738);
        LOBYTE(v25) = v14;
        BYTE2(v25) = *(_BYTE *)(v12 + 1737);
        HIBYTE(v25) = *(_BYTE *)(v12 + 1736);
        BYTE1(v25) = HIBYTE(v25);
      }
    }
    else
    {
      v14 = 114;
      v25 = 505159282;
    }
    if ( !v11 )
      goto LABEL_16;
    SigningPolicy = PspGetProcessProtectionRequirementsFromImage((__int64)v11);
    if ( SigningPolicy >= 0 )
    {
      if ( v14 == v26 )
      {
LABEL_16:
        if ( v27 )
        {
          v23 = v28 != 0;
          v28 = -v28;
          if ( a3 )
            v24 = *(_QWORD *)(a3 + 16);
          else
            v24 = 0LL;
          SigningPolicy = PsCreateMinimalProcess(
                            (struct _KPROCESS *)v12,
                            v24,
                            0LL,
                            v14,
                            (PVOID)((unsigned __int64)v29 & -(__int64)v23),
                            a6,
                            0,
                            0LL,
                            0LL,
                            (_QWORD *)v32);
        }
        else
        {
          v15 = PspAllocateProcess(
                  v12,
                  AccessMode,
                  (volatile signed __int32 *)a3,
                  v14,
                  SHIBYTE(v25),
                  SBYTE2(v25),
                  v11,
                  v29,
                  a6,
                  0,
                  0LL,
                  v28 != 0,
                  0LL,
                  (__int64)&v36,
                  &Object);
          SigningPolicy = v15;
          if ( v15 >= 0 )
          {
            v16 = v15;
            v27 = v15;
            v17 = 1;
            if ( v36 )
              v17 = 3;
            v18 = Object;
            SigningPolicy = PspInsertProcess(
                              (char *)Object,
                              (struct _KPROCESS *)v12,
                              v30,
                              a6,
                              v37,
                              v17,
                              0LL,
                              (PACCESS_STATE)v38);
            if ( SigningPolicy >= 0 )
            {
              SigningPolicy = PspCreateObjectHandle(v18, (__int64)v38, (struct _OBJECT_TYPE *)PsProcessType);
              if ( SigningPolicy >= 0 )
              {
                *(_QWORD *)v32 = *(_QWORD *)&v38[392];
                SigningPolicy = v16;
              }
              SepDeleteAccessState((__int64)v38);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v38[32]);
            }
            if ( SigningPolicy < 0 )
              PspRundownSingleProcess((__int64)v18, 0);
            ObfDereferenceObjectWithTag(v18, 0x72437350u);
          }
        }
        goto LABEL_27;
      }
      goto LABEL_72;
    }
LABEL_27:
    ObfDereferenceObject(v29);
LABEL_28:
    if ( v12 )
      ObfDereferenceObjectWithTag((PVOID)v12, 0x72437350u);
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  return SigningPolicy;
}
