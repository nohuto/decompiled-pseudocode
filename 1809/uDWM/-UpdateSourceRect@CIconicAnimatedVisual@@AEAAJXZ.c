/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800AE140
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 39);
  v2 = 0;
  if ( v1 )
  {
    v10[0] = 0;
    v3 = 0;
    v10[1] = 0;
    v4 = *((_QWORD *)this + 36);
    v5 = *(_QWORD *)(v4 + 512);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 120);
    v6 = 0;
    *(float *)&v10[2] = (float)v3;
    v7 = *(_QWORD *)(v4 + 512);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 124);
    *(float *)&v10[3] = (float)v6;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(v1 + 16) + 312LL))(
           *(_QWORD *)(v1 + 16),
           *(unsigned int *)(v1 + 24),
           v10);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x87u);
  }
  return v2;
}
