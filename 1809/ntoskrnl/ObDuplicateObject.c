/*
 * XREFs of ObDuplicateObject @ 0x1405D1B70
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     NtDuplicateObject @ 0x1405D19B0 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x14060E310 (PspPropagateHandle.c)
 *     PspCopyAndFixupParameters @ 0x140679DE4 (PspCopyAndFixupParameters.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F77D8 (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x14080FD70 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObpFilterOperation @ 0x14001679C (ObpFilterOperation.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpGrantAccess @ 0x14059678C (ObpGrantAccess.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D21B0 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406AF8CC (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1406BE010 (SeAuditHandleCreation.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408638B4 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14089DFCC (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1408B8500 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        ULONG_PTR a1,
        void *a2,
        PEPROCESS a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v11; // edi
  char v12; // r15
  ACCESS_MASK v13; // r13d
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ebx
  __int64 v18; // rax
  ACCESS_MASK v19; // r15d
  char v20; // r14
  int v21; // edi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  PACCESS_TOKEN ClientToken; // r13
  struct _ACCESS_STATE *v27; // rdi
  int v28; // ebx
  int v29; // r15d
  bool v30; // zf
  ULONG_PTR v31; // r14
  __int64 v32; // rdx
  int v33; // r13d
  __int64 v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // r14
  unsigned int v37; // ebx
  struct _EX_RUNDOWN_REF *v38; // r14
  char v39; // al
  bool v40; // [rsp+40h] [rbp-C0h]
  char v41; // [rsp+41h] [rbp-BFh]
  ACCESS_MASK v42; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  NTSTATUS v45; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[2]; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  ACCESS_MASK v53; // [rsp+9Ch] [rbp-64h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  _BYTE v55[56]; // [rsp+A8h] [rbp-58h] BYREF
  struct _ACCESS_STATE v56; // [rsp+E0h] [rbp-20h] BYREF
  char v57[224]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  BugCheckParameter1 = a1;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v11 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = AccessMask;
  v14 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v15 = *(_QWORD *)(a1 + 720);
  if ( !a3 )
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_8;
    return 3221225506LL;
  }
  if ( (v15 & 1) != 0 || (a3->SecureState.SecureHandle & 1) != 0 )
  {
    if ( (_KPROCESS *)a1 == KeGetCurrentThread()->ApcState.Process && a3 == KeGetCurrentThread()->ApcState.Process )
    {
      v13 = AccessMask;
      goto LABEL_8;
    }
    return 3221225506LL;
  }
LABEL_8:
  v16 = ObReferenceProcessHandleTable(a1);
  if ( !v16 )
    return 3221225738LL;
  LODWORD(v43) = ObpReferenceProcessObjectByHandle(
                   (_DWORD)Handle,
                   a1,
                   v16,
                   a8,
                   1850237519,
                   (__int64)&Object,
                   (__int64)&v52,
                   (__int64)&v49);
  if ( (int)v43 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 760));
    return (unsigned int)v43;
  }
  else
  {
    v17 = v52;
    if ( (v52 & 4) == 0 )
      v49 = 0;
    if ( a3 )
    {
      v18 = ObReferenceProcessHandleTable(a3);
      v54 = v18;
      if ( v18 )
      {
        v40 = v18 == ObpKernelHandleTable;
        v19 = v53;
        if ( v14 )
        {
          v13 = v53;
          AccessMask = v53;
        }
        v20 = a7;
        if ( (a7 & 4) != 0 )
          v21 = v17;
        else
          v21 = v17 & 0xC | v11;
        v22 = v21 | 8;
        if ( (a7 & 8) == 0 )
          v22 = v21;
        v45 = v22;
        v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v48 = (__int64)Object - 48;
        v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
        v50 = v24;
        if ( (v13 & 0xF0000000) != 0 )
        {
          RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
          v13 = AccessMask;
        }
        v25 = v13 & (*(_DWORD *)(v24 + 92) | 0x1000000);
        ClientToken = 0LL;
        v42 = v25;
        v27 = 0LL;
        v41 = 0;
        if ( (~v19 & v25) != 0 )
        {
          if ( (v17 & 8) != 0
            || (v35 = v50,
                *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v50 + 152) != SeDefaultObjectMethod) )
          {
            v28 = v45;
            v29 = -1073741790;
            goto LABEL_27;
          }
          if ( KeGetCurrentThread()->ApcState.Process != a3 )
          {
            KiStackAttachProcess(a3, 0LL, (__int64)v55);
            v41 = 1;
          }
          SeCreateAccessState(&v56, v57, v42, v35 + 76);
          v28 = v45;
          v27 = &v56;
          v29 = ObpGrantAccess(2, Object, &v56, a8, v45, &v42);
          if ( v29 < 0 )
          {
LABEL_25:
            if ( v41 )
              KiUnstackDetachProcess((__int64)v55, 0LL);
LABEL_27:
            v30 = (v20 & 1) == 0;
            v31 = BugCheckParameter1;
            if ( !v30 )
            {
              KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v55);
              NtClose(Handle);
              KiUnstackDetachProcess((__int64)v55, 0LL);
            }
            if ( v29 < 0 )
            {
              if ( v27 )
              {
LABEL_64:
                SepDeleteAccessState((__int64)v27);
                SeReleaseSubjectContext(&v27->SubjectSecurityContext);
              }
            }
            else
            {
              if ( v27 )
              {
                v28 = v45;
                if ( v27->GenerateOnClose )
                {
                  v28 = v45 | 4;
                  v49 = *((_DWORD *)v27->AuxData + 7);
                }
              }
              v51[1] = v51;
              v51[0] = v51;
              if ( !ObpFilterOperation(v50) )
                goto LABEL_32;
              LODWORD(v43) = v42;
              v29 = ObpPreInterceptHandleDuplicate(
                      (_DWORD)Object,
                      v40,
                      (unsigned int)&v43,
                      v31,
                      (__int64)a3,
                      (__int64)v51);
              if ( v29 >= 0 )
              {
                if ( !v40 )
                  v42 = v43;
LABEL_32:
                v43 = ExCreateHandleEx(v54, v48, v42, v28, (__int64)&v49);
                v32 = v43;
                if ( v43 )
                {
                  if ( v27 )
                  {
                    SeAuditHandleCreation((__int64)v27);
                    v32 = v43;
                  }
                  if ( (v28 & 4) != 0 )
                  {
                    if ( v27 )
                    {
                      ClientToken = v27->SubjectSecurityContext.ClientToken;
                      if ( !ClientToken )
                        ClientToken = v27->SubjectSecurityContext.PrimaryToken;
                    }
                    v39 = SeAuditingWithTokenForSubcategory(124LL, ClientToken);
                    v32 = v43;
                    if ( v39 )
                    {
                      SeAuditHandleDuplication(Handle, v43, v31, a3);
                      v32 = v43;
                    }
                  }
                  v33 = (int)Object;
                }
                else
                {
                  ObpDecrementHandleCount(a3, v48);
                  v33 = (int)Object;
                  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                  v32 = v43;
                  v29 = -1073741670;
                }
                if ( v40 )
                {
                  v32 |= 0xFFFFFFFF80000000uLL;
                  v43 = v32;
                }
                if ( a4 )
                  *a4 = v32;
                if ( v27 )
                {
                  SepDeleteAccessState((__int64)v27);
                  SeReleaseSubjectContext(&v27->SubjectSecurityContext);
                }
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v31 + 760));
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
                if ( (_QWORD *)v51[0] != v51 )
                  ObpPostInterceptHandleDuplicate(v33, v40, v29, v42, (__int64)v51);
                if ( (xmmword_140542350 & 0x40) != 0 && v29 >= 0 )
                  EtwTraceDuplicateHandle(
                    (_DWORD)Handle,
                    v43,
                    v33,
                    *(_DWORD *)(v31 + 736),
                    a3[1].Header.WaitListHead.Flink,
                    v50);
                return (unsigned int)v29;
              }
              ObpDecrementHandleCount(a3, v48);
              if ( v27 )
                goto LABEL_64;
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v31 + 760));
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
            ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
            return (unsigned int)v29;
          }
        }
        else
        {
          v28 = v45;
        }
        v29 = ObpIncrementHandleCountEx(2, (unsigned int)&v42, (_DWORD)a3, (_DWORD)Object, a8, v28, 0LL);
        goto LABEL_25;
      }
      v38 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      if ( (v12 & 1) != 0 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v55);
        NtClose(Handle);
        KiUnstackDetachProcess((__int64)v55, 0LL);
      }
      ExReleaseRundownProtection_0(v38 + 95);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    v36 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v55);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)v55, 0LL);
      v37 = v43;
    }
    else
    {
      v37 = -1073741811;
    }
    ExReleaseRundownProtection_0(v36 + 95);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v37;
  }
}
