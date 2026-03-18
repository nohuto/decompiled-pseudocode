/*
 * XREFs of SepSetServerSiloToken @ 0x1408DAA38
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408DA5B0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400796D4 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x14061B754 (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x1408E1060 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x1408E140C (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      SepRemoveTokenLogonSession(a1);
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_QWORD *)(a1 + 216) = v8;
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      SepAddTokenLogonSession();
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_10:
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
