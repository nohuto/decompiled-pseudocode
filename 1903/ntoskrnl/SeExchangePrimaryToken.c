/*
 * XREFs of SeExchangePrimaryToken @ 0x14078038C
 * Callers:
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReplaceObject @ 0x14007FAD4 (ObFastReplaceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x140085908 (SepSetTrustLevelForProcessToken.c)
 *     SepSetTokenSessionById @ 0x140619754 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14061E0BC (SepSetTokenLowboxNumber.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  unsigned int SessionId; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v13; // ebp
  int v14; // r14d
  PVOID v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  ULONG_PTR v18; // rbx
  struct _KTHREAD *v19; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, v10);
  v11 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v13 = v11;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v20, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v14 = SepSetTrustLevelForProcessToken(a2, a1, &v21);
  if ( v14 < 0 )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !SessionObjectById )
      return (unsigned int)v14;
    v15 = SessionObjectById;
LABEL_13:
    ObfDereferenceObject(v15);
    return (unsigned int)v14;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v16 = *(_DWORD *)(a2 + 120);
    if ( v16 != v13 )
    {
      SepDereferenceLowBoxNumberEntry(v16, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      SepSetTokenSessionById(a2, v13, 1, (__int64)SessionObjectById, &Object);
      v17 = *(_QWORD *)(a2 + 784);
      *(_DWORD *)(a2 + 120) = v13;
      v14 = SepSetTokenLowboxNumber(a2, v17);
      if ( v14 < 0 )
      {
        _InterlockedOr(v20, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = Object;
        if ( !Object )
          return (unsigned int)v14;
        goto LABEL_13;
      }
    }
  }
  SepSetTokenSessionById(a2, v13, 1, (__int64)SessionObjectById, &Object);
  *(_DWORD *)(a2 + 120) = v13;
  _InterlockedOr(v20, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  ObfReferenceObject((PVOID)a2);
  v18 = ObFastReplaceObject((volatile __int64 *)(a1 + 864), a2);
  if ( !v18 )
    return 3221225596LL;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 48), 1u);
  _InterlockedOr(v20, 0);
  *(_BYTE *)(v18 + 204) = 0;
  _InterlockedOr(v20, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v18 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = 0LL;
  *a3 = v18;
  return result;
}
