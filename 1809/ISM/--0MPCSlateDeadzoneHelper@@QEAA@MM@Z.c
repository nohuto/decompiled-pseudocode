/*
 * XREFs of ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180102CA4
 * Callers:
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1800F2810 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1800FA160 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180102B34 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
MPCSlateDeadzoneHelper *__fastcall MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper(
        MPCSlateDeadzoneHelper *this,
        float a2,
        float a3)
{
  __int64 v4; // r8
  const char *v5; // r9
  volatile signed __int32 *v6; // rbx
  _DWORD *v8; // [rsp+50h] [rbp+8h]

  *(float *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_BYTE *)this + 14) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v8 = operator new(0x38uLL);
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj<MPCButtonHoldHelper>::`vftable';
  MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)(v8 + 4), a3, v4, v5);
  *((_QWORD *)this + 2) = v8 + 4;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v8;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return this;
}
