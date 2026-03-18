/*
 * XREFs of ?Update@BulkAnimator@Particles@@QEAAXH@Z @ 0x1801DDF28
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitter@@IEAAXM@Z @ 0x1801C5318 (-ApplyActiveBehaviors@CParticleEmitter@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall Particles::BulkAnimator::Update(Particles::BulkAnimator *this, int a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // r14
  int v9; // ebp
  int v10; // esi
  gsl::details *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+78h] [rbp+10h]

  v4 = (unsigned __int64)*((int *)this + 10) >> 2;
  v5 = (unsigned __int64)*((int *)this + 7) >> 2;
  v6 = (unsigned __int64)*((int *)this + 8) >> 2;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
  v8 = *((_QWORD *)this + 1);
  v9 = 0;
  v16 = v7;
  if ( a2 > 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = (gsl::details *)*((int *)this + 6);
      v12 = (int)v6;
      if ( (v6 & 0x80000000) != 0LL
        || (v13 = v8 + 4LL * (_QWORD)v11) == 0 && (_DWORD)v6
        || (v11 = (gsl::details *)(v10 + (__int64)*((int *)this + 9)), v14 = v7, v7 < 0LL)
        || (v15 = *((_QWORD *)this + 2) + 4LL * (_QWORD)v11) == 0 && v7 )
      {
        gsl::details::terminate(v11);
        __debugbreak();
      }
      (***(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this)(*(_QWORD *)this, &v14, &v12);
      ++v9;
      v10 += v4;
      v8 += 4LL * (int)v5;
      if ( v9 >= a2 )
        break;
      v7 = v16;
    }
  }
}
