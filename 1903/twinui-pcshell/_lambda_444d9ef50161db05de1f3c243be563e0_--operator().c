/*
 * XREFs of _lambda_444d9ef50161db05de1f3c243be563e0_::operator() @ 0x180035DE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_444d9ef50161db05de1f3c243be563e0___::Run @ 0x180035DC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_444d9ef50161db05de1f3c243be563e0___--.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180013C14 (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18003604C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_444d9ef50161db05de1f3c243be563e0_::operator()(__int64 a1)
{
  float v2; // xmm8_4
  float v3; // xmm9_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rdx
  const char *v10; // r9
  char v11; // r15
  _OWORD *v12; // r8
  char v13; // si
  __int64 result; // rax
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-A8h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+50h] [rbp-78h]
  int v19; // [rsp+58h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v2 = (float)(*(_DWORD *)(**(_QWORD **)a1 + 8LL) - ***(_DWORD ***)a1);
    v3 = (float)(*(_DWORD *)(**(_QWORD **)a1 + 12LL) - *(_DWORD *)(**(_QWORD **)a1 + 4LL));
    v4 = (float)***(int ***)a1;
    v5 = (float)*(int *)(**(_QWORD **)a1 + 4LL);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 288LL) + 192LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL),
      SRWLock);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = **(_QWORD **)(a1 + 16);
    v8 = 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 288) + 208LL))(*(_QWORD *)(v6 + 288));
    *(_BYTE *)(v6 + 512) = 1;
    if ( *(float *)(v6 + 496) == v4 && *(float *)(v6 + 500) == v5 )
    {
      v8 = 2;
    }
    else
    {
      *(float *)(v6 + 496) = v4;
      *(float *)(v6 + 500) = v5;
    }
    v11 = 0;
    if ( *(float *)(v6 + 504) == v2 && *(float *)(v6 + 508) == v3 )
    {
      if ( !IsPPIEdition() )
        v8 &= ~2u;
    }
    else
    {
      *(float *)(v6 + 504) = v2;
      *(float *)(v6 + 508) = v3;
      v11 = 1;
    }
    v12 = (_OWORD *)(v6 + 520);
    v17[0] = *(_OWORD *)(v6 + 520);
    v17[1] = *(_OWORD *)(v6 + 536);
    v18 = *(_QWORD *)(v6 + 552);
    v19 = *(_DWORD *)(v6 + 560);
    if ( v7 )
    {
      *v12 = *(_OWORD *)v7;
      *(_OWORD *)(v6 + 536) = *(_OWORD *)(v7 + 16);
      *(_QWORD *)(v6 + 552) = *(_QWORD *)(v7 + 32);
      *(_DWORD *)(v6 + 560) = *(_DWORD *)(v7 + 40);
    }
    v13 = 0;
    if ( v7 )
      v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v6 + 136LL))(v6, v17);
    if ( v8 || v13 )
    {
      LOBYTE(v12) = v13;
      LOBYTE(v9) = v11;
      (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v6 + 144LL))(v6, v9, v12);
      WindowWrapperBase::PushBoundsToWindow(v6, v8);
      if ( ((v8 & 2) != 0 || v13) && !*(_BYTE *)(v6 + 568) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 192LL))(v6);
    }
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x143,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
