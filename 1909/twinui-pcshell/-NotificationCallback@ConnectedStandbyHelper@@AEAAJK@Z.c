/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802B10A0
 * Callers:
 *     wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_const_&)_::operator() @ 0x1802B0D70 (wistd--__function--__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(un_ea_1802B0D70.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18001EFAC (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___ @ 0x1802B07A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___--CTaskW.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this)
{
  std::_Ref_count_base *v1; // rcx
  __int64 *v2; // r8
  int v3; // r9d
  __int64 v4; // rax
  volatile signed __int32 *v5; // rdi
  std::_Ref_count_base *v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rbx
  void *v9; // rax
  _QWORD pExceptionObject[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+68h] [rbp-10h]

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v1 || !std::_Ref_count_base::_Incref_nz(v1) )
  {
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  v4 = *v2;
  v5 = (volatile signed __int32 *)v2[1];
  v12[0] = v2;
  if ( v5 )
    _InterlockedIncrement(v5 + 2);
  v12[1] = v4;
  v6 = (std::_Ref_count_base *)v5;
  v13 = (std::_Ref_count_base *)v5;
  v14 = v3;
  v7 = *((_DWORD *)v2 + 4);
  v8 = 0LL;
  v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___(
           (__int64)v9,
           (__int64)v12);
    v6 = v13;
  }
  SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return 0LL;
}
