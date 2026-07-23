/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x14089F93C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406BE010 (SeAuditHandleCreation.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140762FD0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFCB4 (SepCheckAndCopySelfRelativeSD.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepSDContainsAttributeACE @ 0x1408A4EAC (SepSDContainsAttributeACE.c)
 *     SepSecurityDescriptorStrictLength @ 0x1408A4F04 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        unsigned __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        _QWORD *a18,
        __int64 a19)
{
  __int16 *v19; // r12
  __int64 v20; // rbx
  PVOID v22; // rdi
  _QWORD *v24; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // esi
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int8 v29; // r9
  int v30; // eax
  const int *v31; // rcx
  __int64 v32; // r10
  int v33; // eax
  int v34; // eax
  int v35; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  PVOID v43; // r15
  int v44; // ecx
  size_t v45; // r13
  char *PoolWithTag; // rax
  char *v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rax
  int v52; // eax
  unsigned int v53; // r8d
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned __int16 v56; // r13
  _WORD *v57; // r9
  char *v58; // rax
  _OWORD *v59; // r9
  __int64 v60; // rdx
  unsigned int v61; // r8d
  _DWORD *v62; // r10
  __int64 v63; // rcx
  unsigned __int16 *v64; // rdx
  int v65; // ecx
  unsigned int v66; // ebx
  int v67; // ecx
  int v68; // eax
  __int16 *v69; // rcx
  int v70; // eax
  __int16 v71; // [rsp+28h] [rbp-E0h] BYREF
  char v72; // [rsp+2Ah] [rbp-DEh] BYREF
  unsigned __int16 v73; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  PVOID Src; // [rsp+38h] [rbp-D0h] BYREF
  size_t v76; // [rsp+40h] [rbp-C8h] BYREF
  PVOID v77; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v78; // [rsp+50h] [rbp-B8h]
  __int16 *v79; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v80; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v82; // [rsp+70h] [rbp-98h]
  const int *v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h]
  unsigned __int64 *v85; // [rsp+88h] [rbp-80h]
  _QWORD *v86; // [rsp+90h] [rbp-78h]
  __int16 *v87; // [rsp+98h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT v88; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v89[132]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v90[2]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v19 = a6;
  v20 = 0LL;
  v85 = a3;
  v83 = a2;
  v73 = a1;
  v87 = a6;
  v79 = a6;
  v78 = a8;
  v82 = a19;
  v80 = 0LL;
  P = 0LL;
  memset(&v88, 0, sizeof(v88));
  LODWORD(Size) = 0;
  v90[0] = 0LL;
  v90[1] = 0LL;
  v22 = 0LL;
  LODWORD(v76) = 0;
  Src = 0LL;
  v77 = 0LL;
  v72 = 0;
  v71 = 0;
  v88.ClientToken = a7;
  v88.PrimaryToken = a8;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v88) )
    return 1;
  v24 = v90;
  if ( a18 )
    v24 = a18;
  v86 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a7 )
    {
      v20 = a7[3];
      v27 = (__int64 *)a7[19];
    }
    else
    {
      v27 = (__int64 *)v78[19];
    }
    v28 = v78[3];
    v84 = *v27;
    memset(v89, 0, 0x418uLL);
    v29 = a12;
    v30 = 8;
    HIDWORD(v89[0]) = 4656;
    LOWORD(v89[2]) = v73;
    WORD1(v89[2]) = 8;
    if ( a14 == 2 )
      v30 = 3;
    LODWORD(v89[0]) = v30;
    if ( !a12 )
      WORD1(v89[2]) = 16;
    v31 = &SeSubsystemName;
    v32 = 4LL;
    v89[6] = v84;
    if ( v83 )
      v31 = v83;
    LODWORD(v89[3]) = 4;
    LODWORD(v89[7]) = 1;
    v33 = *(unsigned __int8 *)(v84 + 1);
    v89[10] = v31;
    v89[11] = 0x800000005LL;
    v89[12] = v20;
    HIDWORD(v89[3]) = 4 * v33 + 8;
    v34 = *(unsigned __int16 *)v31 + 16;
    HIDWORD(v89[7]) = v34;
    if ( !a7 )
      v89[12] = v28;
    LODWORD(v89[15]) = 1;
    HIDWORD(v89[15]) = v34;
    v89[18] = v31;
    LODWORD(v89[1]) = 4;
    if ( !a4 )
    {
      AllocatedFullProcessImageName = -1073741811;
LABEL_19:
      v22 = Src;
      goto LABEL_43;
    }
    HIDWORD(v89[19]) = *a4 + 16;
    LODWORD(v89[19]) = 1;
    v89[22] = a4;
    if ( a5 )
    {
      if ( v73 == 117 || (LODWORD(v89[23]) = 1, v73 == 129) )
        LODWORD(v89[23]) = 2;
      v35 = *a5;
      v89[26] = a5;
      HIDWORD(v89[23]) = v35 + 16;
    }
    v89[27] = 0x80000000BLL;
    if ( v85 )
    {
      IsKernelHandle = ObpIsKernelHandle(*v85, 0);
      v39 = v38 ^ 0xFFFFFFFF80000000uLL;
      if ( !IsKernelHandle )
        v39 = v37;
      v89[28] = v39 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v89[28] = 0LL;
    }
    v89[34] = v86;
    v40 = a10;
    v89[31] = 0x100000000DLL;
    LODWORD(v89[35]) = 7;
    HIDWORD(v89[35]) = v32;
    v89[37] = v32;
    if ( !v29 )
      v40 = a9;
    v41 = v82;
    v89[36] = v40;
    LODWORD(v89[1]) = 9;
    if ( v82 && (v42 = *(_QWORD *)(v82 + 72)) != 0 )
    {
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v42 + 56),
                                        &Src,
                                        (ULONG *)&Size,
                                        (_BYTE *)&v71 + 1);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_19;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(*(_QWORD *)(v41 + 72) + 64LL),
                                        &v77,
                                        (ULONG *)&v76,
                                        &v72);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_19;
      v43 = Src;
      if ( Src || v77 )
      {
        v44 = 8;
        goto LABEL_41;
      }
    }
    else
    {
      v43 = Src;
    }
    v44 = 0;
LABEL_41:
    v45 = (unsigned int)(v76 - v44 + Size + 152);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v45, 0x70416553u);
    v47 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v22 = Src;
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_43;
    }
    memset(PoolWithTag, 0, v45);
    v48 = a10;
    *((_DWORD *)v47 + 34) = a12;
    if ( !a12 )
      v48 = a9;
    *((_DWORD *)v47 + 33) = 4;
    *(_DWORD *)v47 = v48 & 0xFDFFFFFF;
    if ( v82 )
    {
      v49 = *(_QWORD *)(v82 + 72);
      if ( v49 )
      {
        *(_OWORD *)(v47 + 4) = *(_OWORD *)(v49 + 88);
        *(_OWORD *)(v47 + 20) = *(_OWORD *)(v49 + 104);
        *(_OWORD *)(v47 + 36) = *(_OWORD *)(v49 + 120);
        *(_OWORD *)(v47 + 52) = *(_OWORD *)(v49 + 136);
        *(_OWORD *)(v47 + 68) = *(_OWORD *)(v49 + 152);
        *(_OWORD *)(v47 + 84) = *(_OWORD *)(v49 + 168);
        *(_OWORD *)(v47 + 100) = *(_OWORD *)(v49 + 184);
        *(_OWORD *)(v47 + 116) = *(_OWORD *)(v49 + 200);
      }
    }
    v50 = Size;
    if ( v43 )
      memmove(v47 + 144, v43, (unsigned int)Size);
    if ( v77 )
      memmove(&v47[v50 + 144], v77, (unsigned int)v76);
    v51 = a10;
    LODWORD(v89[39]) = 29;
    HIDWORD(v89[39]) = v45;
    v89[42] = v47;
    v89[43] = 0x40000000ALL;
    if ( !a12 )
      v51 = a9;
    v89[44] = v51;
    if ( a11 )
    {
      v52 = *a11;
      if ( *a11 )
      {
        LODWORD(v89[47]) = 8;
        v89[50] = a11;
        HIDWORD(v89[47]) = 12 * v52 + 8;
      }
    }
    v53 = 12;
    LODWORD(v89[1]) = 12;
    if ( a16 )
    {
      v54 = 0;
      v55 = 0;
      v56 = 2 - (a12 != 0);
      v57 = (_WORD *)(a15 + 2);
      do
      {
        if ( !v55 || (v56 & *v57) != 0 )
          ++v54;
        ++v55;
        v57 += 24;
      }
      while ( v55 < a16 );
      if ( v54 )
      {
        v58 = (char *)ExAllocatePoolWithTag(PagedPool, 24LL * v54, 0x70416553u);
        v80 = v58;
        if ( !v58 )
        {
          AllocatedFullProcessImageName = -1073741670;
LABEL_101:
          ExFreePoolWithTag(v47, 0);
          goto LABEL_19;
        }
        v59 = (_OWORD *)(a15 + 4);
        v60 = 0LL;
        v61 = 0;
        v62 = a17;
        do
        {
          if ( !v61 || (v56 & *((_WORD *)v59 - 1)) != 0 )
          {
            v63 = 3 * v60;
            *(_OWORD *)&v58[8 * v63] = *v59;
            *(_WORD *)&v58[8 * v63 + 18] = *((_WORD *)v59 - 2);
            if ( v61 )
            {
              *(_WORD *)&v58[24 * v60 + 16] = 0;
              if ( a17 && a12 )
                *(_DWORD *)&v58[24 * v60 + 20] = *v62;
            }
            else
            {
              *(_WORD *)&v58[24 * v60 + 16] = 1;
              *(_DWORD *)&v58[24 * v60 + 20] = 0;
            }
            v60 = (unsigned int)(v60 + 1);
          }
          ++v61;
          v59 += 3;
          ++v62;
        }
        while ( v61 < a16 );
        v89[54] = v58;
        v19 = v87;
        v53 = 13;
        HIDWORD(v89[51]) = 24 * v60;
        LODWORD(v89[51]) = 9;
        v89[53] = 4LL;
        LODWORD(v89[1]) = 13;
        HIDWORD(v89[0]) = 4661;
      }
    }
    v64 = (unsigned __int16 *)P;
    LODWORD(v89[4 * v53 + 3]) = 27;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = 4;
    v89[4 * LODWORD(v89[1]) + 4] = *((unsigned int *)v78 + 32);
    ++LODWORD(v89[1]);
    LODWORD(v89[4 * LODWORD(v89[1]) + 3]) = 11;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = 8;
    v89[4 * LODWORD(v89[1]) + 4] = a13;
    ++LODWORD(v89[1]);
    LODWORD(v89[4 * LODWORD(v89[1]) + 3]) = 2;
    HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = *v64 + 16;
    v65 = v73;
    v89[4 * LODWORD(v89[1]) + 6] = v64;
    v66 = ++LODWORD(v89[1]);
    v67 = v65 - 117;
    if ( (!v67 || v67 == 12) && v19 && HIDWORD(v89[0]) == 4656 && (unsigned __int8)SepSDContainsAttributeACE(v19) )
    {
      v68 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v79, (ULONG *)&Size, &v71);
      v19 = v79;
      AllocatedFullProcessImageName = v68;
      if ( v68 < 0 )
        goto LABEL_99;
      v69 = v79;
      LODWORD(v89[4 * v66 + 3]) = 31;
      v70 = SepSecurityDescriptorStrictLength(v69);
      HIDWORD(v89[4 * LODWORD(v89[1]) + 3]) = v70;
      v89[4 * LODWORD(v89[1]) + 6] = v19;
      v89[4 * LODWORD(v89[1]) + 4] = 32LL;
      v89[4 * LODWORD(v89[1]) + 5] = 0LL;
      v66 = v89[1];
    }
    LODWORD(v89[1]) = v66 + 1;
    SepAdtLogAuditRecord(v89);
LABEL_99:
    if ( v80 )
      ExFreePoolWithTag(v80, 0);
    goto LABEL_101;
  }
LABEL_43:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v71 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v71) && v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v72 && v77 )
    ExFreePoolWithTag(v77, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
