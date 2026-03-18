/*
 * XREFs of ObDuplicateObject @ 0x1405E69A0
 * Callers:
 *     NtDuplicateObject @ 0x1405E67E0 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x140619C94 (PspPropagateHandle.c)
 *     PspCopyAndFixupParameters @ 0x1406809B8 (PspCopyAndFixupParameters.c)
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14082F198 (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x140847B28 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140855770 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObpFilterOperation @ 0x140013CE0 (ObpFilterOperation.c)
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6FF0 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1405E71E0 (ExCreateHandleEx.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     RtlMapGenericMask @ 0x140603930 (RtlMapGenericMask.c)
 *     SeDeleteAccessState @ 0x14061B630 (SeDeleteAccessState.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpGrantAccess @ 0x1406BE77C (ObpGrantAccess.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CC7E0 (ObDereferenceProcessHandleTable.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1406D129C (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x1406DF928 (SeAuditHandleCreation.c)
 *     ObpIncrementHandleCount @ 0x14089DB5C (ObpIncrementHandleCount.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14089E908 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1408DB088 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1408F3554 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        PRKPROCESS PROCESS,
        void *a2,
        PEPROCESS a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v11; // edi
  char v12; // r13
  int v13; // r14d
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // ebx
  __int64 v18; // rax
  int v19; // r15d
  ACCESS_MASK v20; // edx
  int v21; // edi
  int v22; // r14d
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  _QWORD *v26; // rdi
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r15
  char v30; // bl
  int v31; // r14d
  PRKPROCESS v32; // r13
  int v33; // ebx
  __int64 v34; // r15
  int v35; // ebx
  __int64 v37; // rax
  bool v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  char *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  _QWORD *v47; // [rsp+80h] [rbp-80h] BYREF
  _QWORD **v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h] BYREF
  PRKPROCESS PROCESSa; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v53[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v54[28]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  PROCESSa = PROCESS;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v54, 0, sizeof(v54));
  v49 = 0LL;
  memset(v53, 0, sizeof(v53));
  v44 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v11 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = PROCESS->SecureState.SecureHandle & 1;
  if ( a3 )
  {
    if ( (PROCESS->SecureState.SecureHandle & 1) != 0 )
      LOBYTE(v14) = 1;
    if ( ((_BYTE)v14 || (a3->SecureState.SecureHandle & 1) != 0)
      && (PROCESS != KeGetCurrentThread()->ApcState.Process || a3 != KeGetCurrentThread()->ApcState.Process) )
    {
      return 3221225506LL;
    }
  }
  else
  {
    if ( (PROCESS->SecureState.SecureHandle & 1) != 0 )
      LOBYTE(v14) = 1;
    if ( (_BYTE)v14 )
      return 3221225506LL;
  }
  v15 = ObReferenceProcessHandleTable(PROCESS);
  if ( !v15 )
    return 3221225738LL;
  v41 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          (_DWORD)PROCESS,
          v15,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v49,
          (__int64)&v44);
  v16 = v41;
  if ( v41 < 0 )
  {
    ObDereferenceProcessHandleTable(PROCESS);
    return v16;
  }
  v17 = v49;
  if ( (v49 & 4) == 0 )
    LODWORD(v44) = 0;
  if ( !a3 )
  {
    if ( (v12 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KeUnstackDetachProcess(&ApcState);
      v16 = v41;
    }
    else
    {
      v16 = -1073741811;
    }
    ObDereferenceProcessHandleTable(PROCESS);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v16;
  }
  v18 = ObReferenceProcessHandleTable(a3);
  v51 = v18;
  if ( v18 )
  {
    v38 = v18 == ObpKernelHandleTable;
    v19 = HIDWORD(v49);
    if ( v13 )
    {
      v20 = HIDWORD(v49);
      AccessMask = HIDWORD(v49);
    }
    else
    {
      v20 = AccessMask;
    }
    if ( (v12 & 4) != 0 )
      v21 = v17;
    else
      v21 = v17 & 0xC | v11;
    v22 = v21 | 8;
    if ( (v12 & 8) == 0 )
      v22 = v21;
    v43 = v22;
    v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v45 = (char *)Object - 48;
    v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
    v46 = v24;
    if ( (v20 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
      v20 = AccessMask;
    }
    v25 = *(_DWORD *)(v24 + 92) | 0x1000000;
    v26 = 0LL;
    v27 = v20 & v25;
    v28 = (~v19 & v27) == 0;
    v39 = v27;
    v29 = v46;
    if ( v28 )
    {
      v30 = 0;
    }
    else
    {
      if ( (v17 & 8) != 0
        || *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v46 + 152) != SeDefaultObjectMethod )
      {
        v31 = -1073741790;
        goto LABEL_29;
      }
      if ( KeGetCurrentThread()->ApcState.Process == a3 )
      {
        v30 = 0;
      }
      else
      {
        KeStackAttachProcess(a3, &ApcState);
        v30 = 1;
      }
      SeCreateAccessState(v53, v54, v39, (GENERIC_MAPPING *)(v29 + 76));
      v26 = v53;
      v31 = ObpGrantAccess(2LL, Object, v53, a8, v22, &v39);
      if ( v31 < 0 )
      {
LABEL_27:
        if ( v30 )
          KeUnstackDetachProcess(&ApcState);
LABEL_29:
        v28 = (v12 & 1) == 0;
        v32 = PROCESSa;
        if ( !v28 )
        {
          KeStackAttachProcess(PROCESSa, &ApcState);
          NtClose(Handle);
          KeUnstackDetachProcess(&ApcState);
        }
        if ( v31 < 0 )
        {
          if ( v26 )
LABEL_66:
            SeDeleteAccessState(v26);
        }
        else
        {
          v33 = v43;
          if ( v26 && *((_BYTE *)v26 + 10) )
          {
            v33 = v43 | 4;
            LODWORD(v44) = *(_DWORD *)(v26[9] + 28LL);
          }
          v48 = &v47;
          v47 = &v47;
          if ( !ObpFilterOperation(v29) )
            goto LABEL_34;
          v41 = v39;
          v31 = ObpPreInterceptHandleDuplicate(
                  (_DWORD)Object,
                  v38,
                  (unsigned int)&v41,
                  (_DWORD)v32,
                  (__int64)a3,
                  (__int64)&v47);
          if ( v31 >= 0 )
          {
            if ( !v38 )
              v39 = v41;
LABEL_34:
            v34 = ExCreateHandleEx(v51, (_DWORD)v45, v39, v33, (__int64)&v44);
            if ( v34 )
            {
              if ( v26 )
                SeAuditHandleCreation((__int64)v26);
              if ( (v33 & 4) != 0 )
              {
                if ( v26 )
                {
                  v37 = v26[4];
                  if ( !v37 )
                    v37 = v26[6];
                }
                else
                {
                  v37 = 0LL;
                }
                if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, v37) )
                  SeAuditHandleDuplication(Handle, v34, v32, a3);
              }
            }
            else
            {
              ObpDecrementHandleCount((ULONG_PTR)a3);
              ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
              v31 = -1073741670;
            }
            if ( v38 )
              v34 |= 0xFFFFFFFF80000000uLL;
            if ( a4 )
              *a4 = v34;
            if ( v26 )
              SeDeleteAccessState(v26);
            ObDereferenceProcessHandleTable(v32);
            ObDereferenceProcessHandleTable(a3);
            v35 = (int)Object;
            if ( v47 != &v47 )
              ObpPostInterceptHandleDuplicate((_DWORD)Object, v38, v31, v39, (__int64)&v47);
            if ( (xmmword_140572410 & 0x40) != 0 && v31 >= 0 )
              EtwTraceDuplicateHandle(
                (_DWORD)Handle,
                v34,
                v35,
                v32[1].Header.WaitListHead.Flink,
                a3[1].Header.WaitListHead.Flink,
                v46);
            return (unsigned int)v31;
          }
          ObpDecrementHandleCount((ULONG_PTR)a3);
          if ( v26 )
            goto LABEL_66;
        }
        ObDereferenceProcessHandleTable(v32);
        ObDereferenceProcessHandleTable(a3);
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return (unsigned int)v31;
      }
      v22 = v43;
    }
    v31 = ObpIncrementHandleCount(2, (unsigned int)&v39, (_DWORD)a3, (_DWORD)Object, a8, v22);
    goto LABEL_27;
  }
  if ( (v12 & 1) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    NtClose(Handle);
    KeUnstackDetachProcess(&ApcState);
  }
  ObDereferenceProcessHandleTable(PROCESS);
  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  return 3221225738LL;
}
