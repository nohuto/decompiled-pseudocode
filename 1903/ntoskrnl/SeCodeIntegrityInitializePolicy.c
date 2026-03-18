/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140A09340
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     SepInitializeDebugOptions @ 0x140A093D4 (SepInitializeDebugOptions.c)
 *     SeSecureBootRegisterPolicy @ 0x140A0942C (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  __int64 v3; // rbx
  ULONG_PTR v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = 0;
  v3 = 0LL;
  if ( !v1
    || (v3 = *(_QWORD *)(v1 + 2856)) == 0
    || (v4 = *(unsigned int *)(v3 + 64), !(_DWORD)v4)
    || (v2 = SeSecureBootRegisterPolicy(*(unsigned int *)(v3 + 60) + v3 + 72, v4), v2 >= 0) )
  {
    SepInitializeDebugOptions();
    if ( qword_1404364E0 )
    {
      v2 = qword_1404364E0(v3, &v7, &v6);
      if ( v2 >= 0 )
      {
        SeCiStateElements = v7;
        SeCiStateElementCount = v6;
      }
    }
  }
  return (unsigned int)v2;
}
