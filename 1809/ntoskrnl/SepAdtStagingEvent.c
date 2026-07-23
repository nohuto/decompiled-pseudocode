/*
 * XREFs of SepAdtStagingEvent @ 0x1408A06C8
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406BE010 (SeAuditHandleCreation.c)
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
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

bool __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        unsigned __int64 *a3,
        const UNICODE_STRING *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rbx
  void *v13; // rsi
  void *v14; // r14
  __int64 v15; // r12
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // edi
  __int64 *v18; // rax
  __int64 v19; // rdi
  int v20; // r9d
  int v21; // r15d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int16 *v29; // rcx
  int v30; // eax
  size_t v31; // r13
  SIZE_T v32; // r15
  char *PoolWithTag; // rax
  char *v34; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int16 v40; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v41; // [rsp+2Ah] [rbp-DEh]
  size_t Size; // [rsp+2Ch] [rbp-DCh] BYREF
  void *Src; // [rsp+38h] [rbp-D0h] BYREF
  void *v44; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  const UNICODE_STRING *v47; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v48; // [rsp+60h] [rbp-A8h]
  _QWORD v49[132]; // [rsp+68h] [rbp-A0h] BYREF

  v12 = 0LL;
  v47 = a4;
  v48 = a3;
  v13 = 0LL;
  v41 = a1;
  v14 = 0LL;
  v15 = *(_QWORD *)(a12 + 72);
  P = 0LL;
  Size = 0LL;
  Src = 0LL;
  v44 = 0LL;
  v40 = 0;
  if ( !v15 || !*(_BYTE *)(v15 + 216) || a1 != 117 && a1 != 129 && RtlCompareUnicodeString(a4, &SepFileTypeName, 0) )
    return 1;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
    {
      v12 = *(_QWORD *)(a6 + 24);
      v18 = *(__int64 **)(a6 + 152);
    }
    else
    {
      v18 = *(__int64 **)(a7 + 152);
    }
    v19 = *(_QWORD *)(a7 + 24);
    v46 = *v18;
    memset(v49, 0, 0x418uLL);
    v49[0] = 0x12D200000003LL;
    LOWORD(v49[2]) = 130;
    v20 = 16;
    v21 = 8;
    if ( (a8 & 0x2000000) != 0 || (WORD1(v49[2]) = 8, !a10) )
      WORD1(v49[2]) = 16;
    v49[6] = v46;
    LODWORD(v49[3]) = 4;
    v49[7] = 0x2000000001LL;
    v22 = *(unsigned __int8 *)(v46 + 1);
    v49[10] = &SeSubsystemName;
    v49[11] = 0x800000005LL;
    v49[12] = v12;
    HIDWORD(v49[3]) = 4 * v22 + 8;
    if ( !a6 )
      v49[12] = v19;
    v49[18] = &SeSubsystemName;
    v49[15] = 0x2000000001LL;
    LODWORD(v49[1]) = 4;
    if ( v47 )
    {
      v23 = v47->Length + 16;
      v49[22] = v47;
      LODWORD(v49[19]) = 1;
      HIDWORD(v49[19]) = v23;
      if ( a5 )
      {
        if ( v41 == 117 || (LODWORD(v49[23]) = 1, v41 == 129) )
          LODWORD(v49[23]) = 2;
        v24 = *a5;
        v49[26] = a5;
        HIDWORD(v49[23]) = v24 + 16;
      }
      v49[27] = 0x80000000BLL;
      if ( v48 )
      {
        IsKernelHandle = ObpIsKernelHandle(*v48, 0);
        v28 = v27 ^ 0xFFFFFFFF80000000uLL;
        if ( !IsKernelHandle )
          v28 = v26;
        v49[28] = v28 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v49[28] = 0LL;
      }
      v49[32] = a11;
      v49[38] = P;
      v29 = *(__int16 **)(v15 + 56);
      HIDWORD(v49[35]) = v20 + *(unsigned __int16 *)P;
      v49[31] = 0x80000000BLL;
      LODWORD(v49[35]) = 2;
      LODWORD(v49[1]) = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(v29, &Src, (ULONG *)&Size + 1, &v40);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v13 = Src;
      }
      else
      {
        v30 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v15 + 64), &v44, (ULONG *)&Size, (_BYTE *)&v40 + 1);
        v14 = v44;
        AllocatedFullProcessImageName = v30;
        v13 = Src;
        if ( v30 >= 0 )
        {
          if ( !Src && !v44 )
            v21 = 0;
          v31 = HIDWORD(Size);
          v32 = (unsigned int)(Size - v21 + HIDWORD(Size) + 152);
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v32, 0x70416553u);
          v34 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)v32);
            *((_DWORD *)v34 + 34) = a10;
            if ( !a10 )
              a9 = a8;
            *((_DWORD *)v34 + 33) = 4;
            *(_DWORD *)v34 = a9 & 0xFDFFFFFF;
            *(_OWORD *)(v34 + 4) = *(_OWORD *)(v15 + 88);
            *(_OWORD *)(v34 + 20) = *(_OWORD *)(v15 + 104);
            *(_OWORD *)(v34 + 36) = *(_OWORD *)(v15 + 120);
            *(_OWORD *)(v34 + 52) = *(_OWORD *)(v15 + 136);
            *(_OWORD *)(v34 + 68) = *(_OWORD *)(v15 + 152);
            *(_OWORD *)(v34 + 84) = *(_OWORD *)(v15 + 168);
            *(_OWORD *)(v34 + 100) = *(_OWORD *)(v15 + 184);
            *(_OWORD *)(v34 + 116) = *(_OWORD *)(v15 + 200);
            if ( v13 )
              memmove(v34 + 144, v13, v31);
            if ( v14 )
              memmove(&v34[v31 + 144], v14, (unsigned int)Size);
            v36 = 10LL;
            LODWORD(v49[1]) = 10;
            v37 = 0LL;
            LODWORD(v49[39]) = 29;
            HIDWORD(v49[39]) = v32;
            v49[42] = v34;
            LODWORD(v49[43]) = 30;
            HIDWORD(v49[43]) = v32;
            v49[46] = v34;
            while ( 1 )
            {
              v38 = v37 + 4 * v36;
              ++v37;
              v49[v38 + 4] = 0LL;
              if ( v37 >= 2 )
                break;
              v36 = LODWORD(v49[1]);
            }
            ++LODWORD(v49[1]);
            SepAdtLogAuditRecord(v49);
            ExFreePoolWithTag(v34, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v40 && v13 )
    ExFreePoolWithTag(v13, 0);
  if ( HIBYTE(v40) && v14 )
    ExFreePoolWithTag(v14, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
