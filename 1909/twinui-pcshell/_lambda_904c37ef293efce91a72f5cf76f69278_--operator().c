/*
 * XREFs of _lambda_904c37ef293efce91a72f5cf76f69278_::operator() @ 0x180047D24
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_904c37ef293efce91a72f5cf76f69278___::Run @ 0x180047D00 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_904c37ef293efce91a72f5cf76f69278___--.c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18001E8BC (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180048AF4 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_904c37ef293efce91a72f5cf76f69278_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  __int64 v7; // rcx
  __int128 v8; // xmm10
  __int64 v9; // xmm11_8
  int v10; // esi
  __int64 v11; // rbx
  int v12; // edi
  char v13; // r14
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  char v18; // si
  __int64 result; // rax
  PSRWLOCK SRWLock[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C8h]
  _OWORD v22[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v2 = *a1;
    v3 = (float)*(int *)(*a1 + 16LL);
    v4 = (float)*(int *)(*a1 + 20LL);
    v5 = (float)*(int *)*a1;
    v6 = (float)*(int *)(*a1 + 4LL);
    v7 = a1[1];
    v8 = *(_OWORD *)(v7 + 520);
    v21 = *(_OWORD *)(v7 + 536);
    v9 = *(_QWORD *)(v7 + 552);
    v10 = *(_DWORD *)(v7 + 560);
    DWORD2(v21) = *(_DWORD *)(v2 + 32);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(v7 + 288) + 192LL))(*(_QWORD *)(v7 + 288), SRWLock);
    v11 = a1[1];
    v12 = 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 288) + 208LL))(*(_QWORD *)(v11 + 288));
    *(_BYTE *)(v11 + 512) = 1;
    if ( *(float *)(v11 + 496) == v3 && *(float *)(v11 + 500) == v4 )
    {
      v12 = 2;
    }
    else
    {
      *(float *)(v11 + 496) = v3;
      *(float *)(v11 + 500) = v4;
    }
    v13 = 0;
    if ( *(float *)(v11 + 504) == v5 && *(float *)(v11 + 508) == v6 )
    {
      if ( !IsPPIEdition() )
        v12 &= ~2u;
    }
    else
    {
      *(float *)(v11 + 504) = v5;
      *(float *)(v11 + 508) = v6;
      v13 = 1;
    }
    v22[0] = *(_OWORD *)(v11 + 520);
    v22[1] = *(_OWORD *)(v11 + 536);
    v23 = *(_QWORD *)(v11 + 552);
    v24 = *(_DWORD *)(v11 + 560);
    *(_OWORD *)(v11 + 520) = v8;
    *(_OWORD *)(v11 + 536) = v21;
    *(_QWORD *)(v11 + 552) = v9;
    *(_DWORD *)(v11 + 560) = v10;
    v14 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v11 + 136LL))(v11, v22);
    v18 = v14;
    if ( v12 || v14 )
    {
      LOBYTE(v16) = v14;
      LOBYTE(v15) = v13;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 144LL))(v11, v15, v16);
      WindowWrapperBase::PushBoundsToWindow(v11, v12);
      if ( ((v12 & 2) != 0 || v18) && !*(_BYTE *)(v11 + 568) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
    }
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x273,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v17);
  }
  return result;
}
