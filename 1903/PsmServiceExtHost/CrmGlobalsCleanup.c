/*
 * XREFs of CrmGlobalsCleanup @ 0x18007DFAC
 * Callers:
 *     PsmCrmCleanup @ 0x1800610F0 (PsmCrmCleanup.c)
 * Callees:
 *     CrmRegistrationCleanup @ 0x18003CCEC (CrmRegistrationCleanup.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x18007E0AC (CrmGlobalsRegistrationRemoveAll.c)
 */

ULONG CrmGlobalsCleanup()
{
  _QWORD *v0; // rdx
  __int64 v1; // rbx
  ULONG result; // eax
  RPC_BINDING_VECTOR *BindingVector; // [rsp+30h] [rbp+8h] BYREF

  BindingVector = ::BindingVector;
  if ( ::BindingVector )
  {
    RpcEpUnregister(&unk_180085770, ::BindingVector, 0LL);
    RpcBindingVectorFree(&BindingVector);
    RpcServerUnregisterIf(&unk_180085770, 0LL, 0);
  }
  v0 = P;
  if ( P )
  {
    v1 = 0LL;
    if ( dword_1800ABF70 )
    {
      while ( 1 )
      {
        CrmRegistrationCleanup(&v0[18 * v1], 1);
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= dword_1800ABF70 )
          break;
        v0 = P;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  if ( qword_1800ABF78 )
  {
    CrmRegistrationCleanup(qword_1800ABF78, 1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_1800ABF78);
  }
  CrmGlobalsRegistrationRemoveAll();
  result = EventUnregister(qword_1800AB318);
  qword_1800AB318 = 0LL;
  dword_1800AB2F8 = 0;
  return result;
}
