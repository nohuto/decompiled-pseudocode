/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x1800843A0
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18008E80C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD v10[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v11; // [rsp+80h] [rbp-58h] BYREF
  __int64 v12; // [rsp+90h] [rbp-48h] BYREF
  __int128 v13; // [rsp+98h] [rbp-40h]
  double v14; // [rsp+A8h] [rbp-30h]
  __int128 v15; // [rsp+B0h] [rbp-28h]

  v5 = *((_QWORD *)this + 2);
  if ( !v5 )
  {
    v6 = CResource::Create(0x14u, *((_QWORD *)this + 5), (CBaseObject **)this + 2);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x70u);
      return v7;
    }
    v5 = *((_QWORD *)this + 2);
  }
  v13 = xmmword_1800C4988;
  v10[0] = 0LL;
  v10[1] = 0LL;
  v12 = 0LL;
  v14 = DOUBLE_1_0;
  v15 = xmmword_1800C4978;
  v11 = _xmm;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, __int128 *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, __int64 *, int))(**(_QWORD **)(v5 + 16) + 1192LL))(
         *(_QWORD *)(v5 + 16),
         *(unsigned int *)(v5 + 24),
         &v11,
         v10,
         &v11,
         0,
         0,
         0,
         0,
         1,
         0,
         &v12,
         2);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x92u);
  return v7;
}
