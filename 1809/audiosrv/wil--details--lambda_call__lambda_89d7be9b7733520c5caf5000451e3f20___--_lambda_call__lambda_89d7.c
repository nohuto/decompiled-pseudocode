/*
 * XREFs of wil::details::lambda_call__lambda_89d7be9b7733520c5caf5000451e3f20___::_lambda_call__lambda_89d7be9b7733520c5caf5000451e3f20___ @ 0x180066C34
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::dtor$2 @ 0x180066EBE (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_89d7be9b7733520c5caf5000451e3f20___::_lambda_call__lambda_89d7be9b7733520c5caf5000451e3f20___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 544LL))(**a1, *a1[1]);
  }
  return result;
}
