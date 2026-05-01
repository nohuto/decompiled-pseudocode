/*
 * XREFs of _lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator() @ 0x1800672E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___::Run @ 0x180067270 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5af8d5de97e6639990840c940ce8594c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8dfae0f1a0c35483e19f36087ce437d3_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-24h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+28h] BYREF
  int v15; // [rsp+88h] [rbp+30h] BYREF

  v11[1] = -2LL;
  v11[0] = 0LL;
  v2 = *(__int64 **)(a1[1] + 120LL);
  v3 = *v2;
  v11[0] = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v3 + 144))(v2, v11);
  if ( (int)result >= 0 )
  {
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 48LL))(*a1, &v13, &v12) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v11[0] + 64LL))(v11[0], v13, v12);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v14) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[0] + 136LL))(v11[0], v14);
    if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a1 + 32LL))(*a1, &v15) >= 0 )
      (*(void (__fastcall **)(_QWORD, bool))(*(_QWORD *)v11[0] + 32LL))(v11[0], v15 != 0);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 64LL))(*a1, &v6, &v5) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v11[0] + 104LL))(v11[0], v6, v5);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 80LL))(*a1, &v7) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[0] + 72LL))(v11[0], v7);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 96LL))(*a1, &v8) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[0] + 120LL))(v11[0], v8);
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 128LL))(
               *a1,
               &v10,
               &v9);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v11[0] + 152LL))(v11[0], v10, v9);
  }
  if ( v11[0] )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return result;
}
