/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x18007D87C
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007D7A4 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18007E050 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::Initialize(CMagnifier *this)
{
  char *v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (char *)this + 32;
  v3 = CResource::Create(0x18u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( v5 )
      v6 = *(unsigned int *)(v5 + 24);
    else
      v6 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)v1 + 16LL) + 728LL))(
           *(_QWORD *)(*(_QWORD *)v1 + 16LL),
           *(unsigned int *)(*(_QWORD *)v1 + 24LL),
           v6);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 5);
      if ( !v8 )
      {
        v9 = CResource::Create(0x15u, *((_QWORD *)this + 2), (CBaseObject **)this + 5);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x88u);
          return v4;
        }
        v8 = *((_QWORD *)this + 5);
      }
      v13[0] = _xmm;
      v13[1] = _xmm;
      v13[2] = 0LL;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v8 + 16) + 1160LL))(
              *(_QWORD *)(v8 + 16),
              *(unsigned int *)(v8 + 24),
              v13);
      v4 = v10;
      if ( v10 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 16LL) + 776LL))(
                *(_QWORD *)(*(_QWORD *)v1 + 16LL),
                *(unsigned int *)(*(_QWORD *)v1 + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 5) + 24LL));
        v4 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x99u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x95u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x84u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x80u);
  }
  return v4;
}
