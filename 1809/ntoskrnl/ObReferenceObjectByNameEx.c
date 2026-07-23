/*
 * XREFs of ObReferenceObjectByNameEx @ 0x14061245C
 * Callers:
 *     CmObReferenceObjectByName @ 0x140582128 (CmObReferenceObjectByName.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 *     ObInitServerSilo @ 0x14075B090 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1407EA7C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407EAA10 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E050 (SeClearLearningModeObjectInformation.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ObpAdjustAccessMask @ 0x14061272C (ObpAdjustAccessMask.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v12; // rbx
  unsigned int Number; // eax
  int *v14; // r13
  char v15; // r14
  char v16; // dl
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _LIST_ENTRY *CurrentSilo; // rax
  void *v21; // rsi
  __int64 v22; // rcx
  BOOLEAN v23; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v33; // [rsp+70h] [rbp-41h] BYREF
  __m128i v34; // [rsp+78h] [rbp-39h] BYREF
  char v35[16]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v36; // [rsp+98h] [rbp-19h]
  __m128i *v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  NTSTATUS AccessState; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v40; // [rsp+110h] [rbp+5Fh]

  v40 = a3;
  if ( !a1 || !a4 )
    return 3221225485LL;
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
  v16 = a5;
  v17 = a5;
  LODWORD(v12->Next) = Number;
  AccessState = ObpCaptureObjectCreateInformation(v17, v16, a1, &v34, (__int64)&v12[10], 1u);
  if ( AccessState >= 0 )
  {
    if ( !a2 )
    {
      AccessState = SeCreateAccessState(v12, &v12[14], v40, a4 + 76);
      if ( AccessState < 0 )
      {
LABEL_14:
        if ( a2 == (struct _ACCESS_STATE *)v12 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(&a2->SubjectSecurityContext);
        }
        Next = v12[12].Next;
        if ( Next )
        {
          LOBYTE(v18) = v12[11].Next;
          LOBYTE(v19) = 1;
          SeReleaseSecurityDescriptor(Next, v18, v19);
          v12[12].Next = 0LL;
        }
        if ( v34.m128i_i64[1] )
          ObpFreeObjectNameBuffer((__int64)&v34);
        goto LABEL_20;
      }
      a2 = (struct _ACCESS_STATE *)v12;
    }
    AccessState = ObpAdjustAccessMask(a2);
    if ( AccessState >= 0 )
    {
      CurrentSilo = PsGetCurrentSilo();
      AccessState = ObpLookupObjectName(
                      *((_QWORD *)&v12[10].Next + 1),
                      &v34,
                      *v14,
                      a4,
                      v15,
                      a6,
                      0LL,
                      0LL,
                      (__int64)CurrentSilo,
                      a2,
                      (__int64)&v12[28],
                      0LL,
                      (PVOID *)&v33);
      if ( AccessState >= 0 )
      {
        ObpReleaseLookupContext((__int64)&v12[28]);
        v21 = (void *)v33;
        v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v33 - 48) >> 8)];
        if ( (*(_DWORD *)(v22 + 72) & *v14) != 0 )
        {
          PsDereferenceSiloContext((void *)v33);
          AccessState = -1073741811;
        }
        else
        {
          v36 = v22 + 16;
          v37 = &v34;
          v38 = *((_QWORD *)&v12[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)v35);
          if ( ObpCheckObjectReference((__int64)v21, (__int64)a2, v23, v15, &AccessState) )
            *a7 = v21;
          else
            PsDereferenceSiloContext(v21);
          SeClearLearningModeObjectInformation();
        }
      }
    }
    goto LABEL_14;
  }
LABEL_20:
  v25 = KeGetCurrentPrcb();
  v26 = v25->PPLookasideList[8].P;
  ++v26->TotalFrees;
  if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
    || (++v26->FreeMisses,
        v26 = v25->PPLookasideList[8].L,
        ++v26->TotalFrees,
        LOWORD(v26->ListHead.Alignment) < v26->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v26->ListHead, v12);
  }
  else
  {
    ++v26->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v26->FreeEx)(v12);
  }
  return (unsigned int)AccessState;
}
