/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14069B140
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x140824220 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003EC4 (ObpReleaseLookupContext.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14003B710 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14003B740 (SeClearLearningModeObjectInformation.c)
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     PsDereferenceSiloContext @ 0x14012DE80 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6A90 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1405C6B08 (ObpCheckObjectReference.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F4390 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObpAdjustAccessMask @ 0x14069B41C (ObpAdjustAccessMask.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v8; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v12; // rbx
  unsigned int Number; // eax
  int *v14; // r13
  char v15; // r14
  struct _LIST_ENTRY *CurrentSilo; // rax
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  BOOLEAN v20; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v22; // rdx
  _GENERAL_LOOKASIDE *v23; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v30; // rdx
  __m128i v31; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v32[14]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v33; // [rsp+108h] [rbp+4Fh] BYREF
  __int64 v34; // [rsp+110h] [rbp+57h] BYREF
  ACCESS_MASK v35; // [rsp+118h] [rbp+5Fh]

  v35 = a3;
  v34 = a2;
  v8 = 0LL;
  v31 = 0uLL;
  memset(v32, 0, 0x38uLL);
  if ( a1 && a4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v12 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v12 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v12 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v12 )
      {
        Size = L->Size;
        AllocateEx = L->AllocateEx;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
        if ( !v12 )
          return 3221225626LL;
      }
    }
    Number = CurrentPrcb->Number;
    v14 = (int *)&v12[10];
    v15 = a5;
    LODWORD(v12->Next) = Number;
    LODWORD(v34) = ObpCaptureObjectCreateInformation(v15, v15, a1, &v31, (__int64)&v12[10], 1u);
    if ( (int)v34 < 0 )
    {
      v30 = KeGetCurrentPrcb();
      v23 = v30->PPLookasideList[8].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v30->PPLookasideList[8].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
        {
          ++v23->FreeMisses;
          goto LABEL_26;
        }
      }
LABEL_19:
      RtlpInterlockedPushEntrySList(&v23->ListHead, v12);
      return (unsigned int)v34;
    }
    LODWORD(v34) = SeCreateAccessState(v12, &v12[14].Next, v35, (GENERIC_MAPPING *)(a4 + 76));
    if ( (int)v34 >= 0 )
    {
      v8 = (struct _SECURITY_SUBJECT_CONTEXT *)v12;
      LODWORD(v34) = ObpAdjustAccessMask(v12);
      if ( (int)v34 >= 0 )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v34) = ObpLookupObjectName(
                         *((_QWORD *)&v12[10].Next + 1),
                         &v31,
                         *v14,
                         a4,
                         v15,
                         a6,
                         0LL,
                         0LL,
                         (__int64)CurrentSilo,
                         (struct _ACCESS_STATE *)v12,
                         (__int64)&v12[28],
                         0LL,
                         (PVOID *)&v33);
        if ( (int)v34 >= 0 )
        {
          ObpReleaseLookupContext((__int64)&v12[28]);
          v17 = (void *)v33;
          v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v33 - 48) >> 8)];
          if ( (*(_DWORD *)(v18 + 72) & *v14) == 0 )
          {
            v32[2] = v18 + 16;
            v32[3] = &v31;
            v32[4] = *((_QWORD *)&v12[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)v32);
            LOBYTE(v19) = v15;
            if ( ObpCheckObjectReference((__int64)v17, (__int64)v12, v20, v19, (PNTSTATUS)&v34) )
              *a7 = v17;
            else
              PsDereferenceSiloContext(v17);
            SeClearLearningModeObjectInformation();
            goto LABEL_12;
          }
          PsDereferenceSiloContext((void *)v33);
          LODWORD(v34) = -1073741811;
        }
      }
LABEL_13:
      SepDeleteAccessState((__int64)v8);
      SeReleaseSubjectContext(v8 + 1);
LABEL_14:
      Next = v12[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v12[11].Next, 1);
        v12[12].Next = 0LL;
      }
      if ( v31.m128i_i64[1] )
        ObpFreeObjectNameBuffer((__int64)&v31);
      v22 = KeGetCurrentPrcb();
      v23 = v22->PPLookasideList[8].P;
      ++v23->TotalFrees;
      if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
      {
        ++v23->FreeMisses;
        v23 = v22->PPLookasideList[8].L;
        ++v23->TotalFrees;
        if ( LOWORD(v23->ListHead.Alignment) >= v23->Depth )
        {
          ++v23->FreeMisses;
LABEL_26:
          ((void (__fastcall *)(PSLIST_ENTRY))v23->FreeEx)(v12);
          return (unsigned int)v34;
        }
      }
      goto LABEL_19;
    }
LABEL_12:
    if ( v8 != (struct _SECURITY_SUBJECT_CONTEXT *)v12 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 3221225485LL;
}
