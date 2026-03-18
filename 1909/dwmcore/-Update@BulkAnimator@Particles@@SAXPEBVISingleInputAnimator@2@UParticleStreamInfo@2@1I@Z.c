/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@UParticleStreamInfo@2@1I@Z @ 0x1801E88B0
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801EA444 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Particles::BulkAnimator::Update(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 i; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) >> 2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v12 = *a3;
  v13 = 0;
  for ( i = (unsigned int)result; v13 < a4; v12 += 4 * result )
  {
    v15 = *((unsigned int *)a3 + 2);
    v19[0] = v8;
    v16 = v12 + 4 * v15;
    v19[1] = v16;
    if ( !v16 && v8
      || (v17 = *(unsigned int *)(a2 + 8),
          v18 = v13 * *(_DWORD *)(a2 + 12),
          v20[0] = i,
          v15 = *(_QWORD *)a2 + 4 * (v17 + v18),
          (v20[1] = v15) == 0LL)
      && (_DWORD)i )
    {
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        v15,
        v16,
        v10,
        v11);
      __debugbreak();
    }
    (**(void (__fastcall ***)(__int64, _QWORD *, _QWORD *))a1)(a1, v20, v19);
    result = *((unsigned int *)a3 + 3);
    ++v13;
  }
  return result;
}
