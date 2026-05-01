/*
 * XREFs of _lambda_72c2793fff4768e344ff217d60a44281_::operator() @ 0x180020D14
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72c2793fff4768e344ff217d60a44281___::Run @ 0x180020CF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72c2793fff4768e344ff217d60a44281___--.c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180020F7C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_72c2793fff4768e344ff217d60a44281_::operator()(__int64 a1)
{
  float v2; // xmm8_4
  float v3; // xmm9_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rbx
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
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 184LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
      SRWLock);
    v6 = **(_QWORD **)(a1 + 16);
    v7 = 3;
    v8 = *(_QWORD *)(a1 + 8);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 280) + 200LL))(*(_QWORD *)(v8 + 280));
    *(_BYTE *)(v8 + 496) = 1;
    if ( *(float *)(v8 + 480) == v4 && *(float *)(v8 + 484) == v5 )
    {
      v7 = 2;
    }
    else
    {
      *(float *)(v8 + 480) = v4;
      *(float *)(v8 + 484) = v5;
    }
    v11 = 0;
    if ( *(float *)(v8 + 488) == v2 && *(float *)(v8 + 492) == v3 )
    {
      if ( !IsPPIEdition() )
        v7 &= ~2u;
    }
    else
    {
      *(float *)(v8 + 488) = v2;
      *(float *)(v8 + 492) = v3;
      v11 = 1;
    }
    v12 = (_OWORD *)(v8 + 504);
    v17[0] = *(_OWORD *)(v8 + 504);
    v17[1] = *(_OWORD *)(v8 + 520);
    v18 = *(_QWORD *)(v8 + 536);
    v19 = *(_DWORD *)(v8 + 544);
    if ( v6 )
    {
      *v12 = *(_OWORD *)v6;
      *(_OWORD *)(v8 + 520) = *(_OWORD *)(v6 + 16);
      *(_QWORD *)(v8 + 536) = *(_QWORD *)(v6 + 32);
      *(_DWORD *)(v8 + 544) = *(_DWORD *)(v6 + 40);
    }
    v13 = 0;
    if ( v6 )
      v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v8 + 136LL))(v8, v17);
    if ( v7 || v13 )
    {
      LOBYTE(v12) = v13;
      LOBYTE(v9) = v11;
      (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v8 + 144LL))(v8, v9, v12);
      WindowWrapperBase::PushBoundsToWindow(v8, v7);
      if ( ((v7 & 2) != 0 || v13) && !*(_BYTE *)(v8 + 552) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
    }
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x121,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
