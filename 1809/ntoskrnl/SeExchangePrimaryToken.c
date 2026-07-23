/*
 * XREFs of SeExchangePrimaryToken @ 0x140749D88
 * Callers:
 *     PspAssignPrimaryToken @ 0x140749B58 (PspAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SepSetTrustLevelForProcessToken @ 0x1400D9E94 (SepSetTrustLevelForProcessToken.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14065D2A4 (SepSetTokenLowboxNumber.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A004 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  unsigned int SessionId; // eax
  unsigned int v10; // esi
  struct _KTHREAD *CurrentThread; // rcx
  int v12; // r14d
  PVOID v13; // rcx
  unsigned int v14; // ecx
  ULONG_PTR v15; // rbx
  struct _KTHREAD *v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  char v18; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  v10 = SessionId;
  if ( SessionId == -1 )
  {
    v10 = 0;
  }
  else if ( !SeTokenDoesNotTrackSessionObject )
  {
    SessionObjectById = MmGetSessionObjectById(SessionId);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v17, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v17, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v12 = SepSetTrustLevelForProcessToken(a2, a1, &v18);
  if ( v12 < 0 )
  {
    _InterlockedOr(v17, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !SessionObjectById )
      return (unsigned int)v12;
    v13 = SessionObjectById;
LABEL_14:
    ObfDereferenceObject(v13);
    return (unsigned int)v12;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 120);
    if ( v14 != v10 )
    {
      SepDereferenceLowBoxNumberEntry(v14, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      SepSetTokenSessionById(a2, v10, 1, (__int64)SessionObjectById, &Object);
      v12 = SepSetTokenLowboxNumber(a2, *(_QWORD *)(a2 + 784));
      if ( v12 < 0 )
      {
        _InterlockedOr(v17, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v13 = Object;
        if ( !Object )
          return (unsigned int)v12;
        goto LABEL_14;
      }
    }
  }
  SepSetTokenSessionById(a2, v10, 1, (__int64)SessionObjectById, &Object);
  _InterlockedOr(v17, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  ObfReferenceObject((PVOID)a2);
  v15 = ObFastReplaceObject((volatile __int64 *)(a1 + 856), a2);
  if ( !v15 )
    return 3221225596LL;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 48), 1u);
  _InterlockedOr(v17, 0);
  *(_BYTE *)(v15 + 204) = 0;
  _InterlockedOr(v17, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v15 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  result = 0LL;
  *a3 = v15;
  return result;
}
