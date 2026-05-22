/*
 * XREFs of ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1800F2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::Uninitialize3DComponents(MPCSixDofProcessor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  _QWORD *v9; // rsi
  volatile signed __int32 *v10; // rdi
  _QWORD *v11; // rdi
  volatile signed __int32 *v12; // rbx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 509);
  *((_QWORD *)this + 509) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 510);
  *((_QWORD *)this + 510) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 511);
  *((_QWORD *)this + 511) = 0LL;
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 512);
  *((_QWORD *)this + 512) = 0LL;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 513);
  *((_QWORD *)this + 513) = 0LL;
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 514);
  *((_QWORD *)this + 514) = 0LL;
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 515);
  *((_QWORD *)this + 515) = 0LL;
  if ( v8 )
    (**v8)(v8, 1LL);
  v9 = (_QWORD *)*((_QWORD *)this + 516);
  *((_QWORD *)this + 516) = 0LL;
  if ( v9 )
  {
    v10 = (volatile signed __int32 *)v9[3];
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    operator delete(v9, (const struct std::nothrow_t *)0x20);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 517);
  *((_QWORD *)this + 517) = 0LL;
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)v11[3];
    if ( v12 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
}
