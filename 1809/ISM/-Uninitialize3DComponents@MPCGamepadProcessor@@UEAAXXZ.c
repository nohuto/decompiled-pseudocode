/*
 * XREFs of ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1800FA310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::Uninitialize3DComponents(MPCGamepadProcessor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  _QWORD *v4; // rdi
  volatile signed __int32 *v5; // rbx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 737);
  *((_QWORD *)this + 737) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 738);
  *((_QWORD *)this + 738) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = (_QWORD *)*((_QWORD *)this + 739);
  *((_QWORD *)this + 739) = 0LL;
  if ( v4 )
  {
    v5 = (volatile signed __int32 *)v4[3];
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    operator delete(v4, (const struct std::nothrow_t *)0x20);
  }
}
