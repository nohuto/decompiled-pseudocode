/*
 * XREFs of _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x1800603B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___::Run @ 0x180060340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9d63f641584ad32e324d3d55f9a00553_::operator()(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-24h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+28h] BYREF
  int v14; // [rsp+88h] [rbp+30h] BYREF

  v10[1] = -2LL;
  v10[0] = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1[1] + 120LL) + 144LL))(
             *(_QWORD *)(a1[1] + 120LL),
             v10);
  if ( (int)result >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v12, &v11) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 64LL))(v10[0], v12, v11);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v13) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 136LL))(v10[0], v13);
    if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 32LL))(*a1, &v14) >= 0 )
      (*(void (__fastcall **)(_QWORD, bool))(*(_QWORD *)v10[0] + 32LL))(v10[0], v14 != 0);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 64LL))(*a1, &v5, &v4) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 104LL))(v10[0], v5, v4);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 80LL))(*a1, &v6) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 72LL))(v10[0], v6);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 96LL))(*a1, &v7) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10[0] + 120LL))(v10[0], v7);
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 128LL))(*a1, &v9, &v8);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v10[0] + 152LL))(v10[0], v9, v8);
  }
  v3 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
