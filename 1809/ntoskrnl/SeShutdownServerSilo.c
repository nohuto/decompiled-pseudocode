/*
 * XREFs of SeShutdownServerSilo @ 0x14089CB10
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140888334 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x1400140A0 (SepDeReferenceLogonSessionDirect.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A3A98 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 */

__int64 __fastcall SeShutdownServerSilo(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = *(void **)(a2 + 16);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  v5 = *(void **)(a2 + 24);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  if ( *(_QWORD *)a2 )
  {
    SepDeReferenceLogonSessionDirect(*(_QWORD **)a2);
    *(_QWORD *)a2 = 0LL;
  }
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
  {
    SepDeReferenceLogonSessionDirect(v6);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(void **)(a2 + 40);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x63734943u);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  v8 = *(void **)(a2 + 32);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x63734943u);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return SepDeleteUnreferencedLogonSessionsInSilo(a1);
}
