/*
 * XREFs of ObFastReferenceObject @ 0x14003ACD0
 * Callers:
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x1405DE5B0 (SeCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x1405DF3D0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x1405E5240 (SeCreateClientSecurity.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PspReferenceSystemDll @ 0x14067E85C (PspReferenceSystemDll.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140009AC0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  ULONG_PTR v6; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    return v6;
  if ( v5 )
  {
    ObReferenceObjectExWithTag(v6);
    _m_prefetchw(a1);
    v8 = *a1;
    while ( (v8 & 0xF) == 0 )
    {
      if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
      if ( v9 == v8 )
        return v6;
    }
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v6 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v6 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48);
    }
    return v6;
  }
  return 0LL;
}
