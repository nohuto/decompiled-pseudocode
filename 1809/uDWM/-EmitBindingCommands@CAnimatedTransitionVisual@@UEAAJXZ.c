/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800038C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x180003BAC (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003D18 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ddqqqqqqp @ 0x18009D644 (McTemplateU0ddqqqqqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  int v27; // [rsp+68h] [rbp-30h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  LOBYTE(v3) = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x766u);
  }
  else
  {
    v5 = 0;
    v26 = 0LL;
    v27 = 0;
    if ( *((_QWORD *)this + 77) || *((_QWORD *)this + 78) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 86) + 16LL) + 1136LL))(
             *(_QWORD *)(*((_QWORD *)this + 86) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 86) + 24LL));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x777u);
        return v4;
      }
      v5 = 1;
      LODWORD(v26) = *(_DWORD *)(*((_QWORD *)this + 86) + 24LL);
    }
    if ( *((_QWORD *)this + 79) || *((_QWORD *)this + 80) )
    {
      HIDWORD(v25) = 0;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 85) + 16LL) + 1144LL))(
              *(_QWORD *)(*((_QWORD *)this + 85) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 85) + 24LL));
      v4 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x784u);
        return v4;
      }
      v21 = v5++;
      *((_DWORD *)&v26 + v21) = *(_DWORD *)(*((_QWORD *)this + 85) + 24LL);
    }
    if ( *((_QWORD *)this + 81) || *((_QWORD *)this + 82) )
    {
      HIDWORD(v25) = 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 87) + 16LL) + 1152LL))(
              *(_QWORD *)(*((_QWORD *)this + 87) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 87) + 24LL));
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x790u);
        return v4;
      }
      v23 = v5++;
      *((_DWORD *)&v26 + v23) = *(_DWORD *)(*((_QWORD *)this + 87) + 24LL);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 88) + 16LL)
                                                                      + 1128LL))(
           *(_QWORD *)(*((_QWORD *)this + 88) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 88) + 24LL),
           &v26,
           v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x798u);
    }
    else
    {
      LODWORD(v25) = 0;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 84)
                                                                                             + 16LL)
                                                                               + 992LL))(
             *(_QWORD *)(*((_QWORD *)this + 84) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 84) + 24LL),
             v8,
             0LL,
             v25);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x79Eu);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL)
                                                                              + 16LL)
                                                                + 392LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 16LL),
                *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 24LL),
                *(unsigned int *)(*((_QWORD *)this + 84) + 24LL));
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x7A2u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 91)
                                                                                            + 16LL)
                                                                                + 16LL)
                                                                  + 384LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 16LL),
                  *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 91) + 16LL) + 24LL),
                  *(unsigned int *)(*((_QWORD *)this + 88) + 24LL));
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7A6u);
          }
          else
          {
            v12 = CAnimatedTransitionVisual::_BindIfPresent(
                    this,
                    0LL,
                    *(unsigned int *)(*((_QWORD *)this + 86) + 24LL),
                    5LL);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x7A8u);
            }
            else
            {
              v13 = CAnimatedTransitionVisual::_BindIfPresent(
                      this,
                      1LL,
                      *(unsigned int *)(*((_QWORD *)this + 86) + 24LL),
                      6LL);
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x7A9u);
              }
              else
              {
                v14 = CAnimatedTransitionVisual::_BindIfPresent(
                        this,
                        2LL,
                        *(unsigned int *)(*((_QWORD *)this + 85) + 24LL),
                        3LL);
                v4 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7AAu);
                }
                else
                {
                  v15 = CAnimatedTransitionVisual::_BindIfPresent(
                          this,
                          3LL,
                          *(unsigned int *)(*((_QWORD *)this + 85) + 24LL),
                          4LL);
                  v4 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7ABu);
                  }
                  else
                  {
                    v16 = CAnimatedTransitionVisual::_BindIfPresent(
                            this,
                            4LL,
                            *(unsigned int *)(*((_QWORD *)this + 87) + 24LL),
                            1LL);
                    v4 = v16;
                    if ( v16 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x7ACu);
                    }
                    else
                    {
                      v17 = CAnimatedTransitionVisual::_BindIfPresent(
                              this,
                              5LL,
                              *(unsigned int *)(*((_QWORD *)this + 87) + 24LL),
                              2LL);
                      v4 = v17;
                      if ( v17 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x7ADu);
                      }
                      else
                      {
                        v18 = CAnimatedTransitionVisual::_BindIfPresent(
                                this,
                                6LL,
                                *(unsigned int *)(*((_QWORD *)this + 84) + 24LL),
                                0LL);
                        v4 = v18;
                        if ( v18 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x7AEu);
                        }
                        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          v24 = *((_QWORD *)this + 3);
                          if ( v24 )
                            v3 = *(_DWORD *)(v24 + 24);
                          McTemplateU0ddqqqqqqp(
                            v24,
                            *(_QWORD *)(v24 + 16),
                            *((_DWORD *)this + 184),
                            *((_DWORD *)this + 185),
                            v3,
                            *(_DWORD *)(*((_QWORD *)this + 84) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 88) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 86) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 85) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this + 87) + 24LL),
                            *(_QWORD *)(v24 + 16));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
