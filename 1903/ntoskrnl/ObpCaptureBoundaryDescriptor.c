/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x140680BEC
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140680690 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140681830 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     ObpCheckDuplicateEntries @ 0x140680E70 (ObpCheckDuplicateEntries.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140680F34 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, char **a2)
{
  __m128i *v4; // rax
  unsigned int v5; // edi
  char *v6; // rcx
  char *PoolWithTag; // rsi
  char v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  char *v13; // r15
  NTSTATUS v14; // edi
  int v15; // edx
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  char *v18; // rcx
  int v19; // eax
  PVOID P; // [rsp+20h] [rbp-78h] BYREF
  size_t Size; // [rsp+28h] [rbp-70h]
  __m128i v22; // [rsp+30h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+B8h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = (__m128i *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v4 = Src;
    v22 = *v4;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v22.m128i_i32[2] = v5;
    if ( v5 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = &Src->m128i_i8[v5];
      if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < (char *)Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v22 = *Src;
    v5 = v22.m128i_u32[2];
  }
  PoolWithTag = 0LL;
  LODWORD(TokenInformation) = 0;
  v9 = 0;
  Size = v5;
  v10 = v5;
  P = 0LL;
  LODWORD(v11) = 0;
  if ( (v22.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v14 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v14 < 0 )
        goto LABEL_20;
      v11 = RtlLengthSid(*(PSID *)P);
      v10 += ((v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v5 = v22.m128i_u32[2];
  }
  v12 = v10 + 48;
  if ( v12 > 0xFFFFFFFF )
  {
    v14 = -1073741675;
    goto LABEL_20;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x534E624Fu);
  TokenInformation = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_20;
  }
  *((_QWORD *)PoolWithTag + 3) = (unsigned int)v12 - 48LL;
  v13 = PoolWithTag + 48;
  memmove(PoolWithTag + 48, Src, Size);
  if ( P )
  {
    v18 = &v13[Size];
    if ( &v13[Size] != (char *)((unsigned __int64)&v13[Size + 7] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_38:
      v14 = -1073741811;
      goto LABEL_20;
    }
    *(_DWORD *)v18 = 2;
    v19 = ((v11 + 7) & 0xFFFFFFF8) + 8;
    *((_DWORD *)v18 + 1) = v19;
    v5 += v19;
    ++v22.m128i_i32[1];
    memmove(v18 + 8, *(const void **)P, (unsigned int)v11);
  }
  *((_DWORD *)PoolWithTag + 14) = v5;
  *((_DWORD *)PoolWithTag + 13) = v22.m128i_i32[1];
  v14 = RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, 0LL, 0LL);
  if ( v14 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(PoolWithTag) )
    goto LABEL_38;
  PoolWithTag[40] = 0;
  RtlEnumerateBoundaryDescriptorEntries(PoolWithTag + 48, ObpHashBoundaryFunction, PoolWithTag);
  v15 = (3134165325u * (unsigned __int64)(unsigned __int8)PoolWithTag[40]) >> 32;
  PoolWithTag[40] -= 37 * ((v15 + (((unsigned int)(unsigned __int8)PoolWithTag[40] - v15) >> 1)) >> 5);
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v14 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x534E624Fu);
  }
  else
  {
    *a2 = PoolWithTag;
  }
  return (unsigned int)v14;
}
