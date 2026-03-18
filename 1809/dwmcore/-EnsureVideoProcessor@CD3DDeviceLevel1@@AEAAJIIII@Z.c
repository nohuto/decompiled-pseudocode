/*
 * XREFs of ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x1801FC0F8
 * Callers:
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801FD56C (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureVideoProcessor(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 *v5; // rsi
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  int v9; // edi
  __int64 *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v37; // [rsp+30h] [rbp-48h]
  _DWORD v38[10]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v39; // [rsp+E0h] [rbp+68h]

  v5 = (__int64 *)((char *)this + 672);
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !*((_QWORD *)this + 84)
    || a2 > *((_DWORD *)this + 170)
    || a3 > *((_DWORD *)this + 171)
    || a4 > *((_DWORD *)this + 172)
    || a5 > *((_DWORD *)this + 173) )
  {
    memset_0(v38, 0, sizeof(v38));
    v10 = (__int64 *)((char *)this + 648);
    if ( *((_QWORD *)this + 81)
      || (v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 79))(
                  *((_QWORD *)this + 79),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  (char *)this + 648),
          v9 = v11,
          v11 >= 0) )
    {
      if ( *((_QWORD *)this + 82)
        || (v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 80))(
                    *((_QWORD *)this + 80),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e),
            v9 = v13,
            v13 >= 0) )
      {
        v15 = (_QWORD *)((char *)this + 664);
        v16 = *((_QWORD *)this + 83);
        if ( v16 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = a4;
        v19 = a5;
        v20 = *v10;
        if ( v7 <= *((_DWORD *)this + 170) )
          v7 = *((_DWORD *)this + 170);
        v21 = *((_DWORD *)this + 171);
        v38[3] = v7;
        if ( v6 <= v21 )
          v6 = v21;
        v22 = *((_DWORD *)this + 172);
        v38[4] = v6;
        if ( a4 <= v22 )
          v18 = v22;
        v23 = *((_DWORD *)this + 173);
        v37 = v18;
        v38[7] = v18;
        v24 = *v15;
        if ( a5 <= v23 )
          v19 = v23;
        v38[0] = 0;
        v38[9] = 0;
        v39 = v19;
        v38[1] = 1;
        v38[2] = 1;
        v38[5] = 1;
        v38[6] = 1;
        v38[8] = v19;
        if ( v24 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v25 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v20 + 80LL))(
                v20,
                v38,
                (char *)this + 664);
        v9 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x9F2u);
        }
        else
        {
          v27 = *v5;
          v28 = *v10;
          if ( *v5 )
          {
            *v5 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v28 + 32LL))(
                  v28,
                  *v15,
                  0LL,
                  v5);
          v9 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x9F6u);
          }
          else
          {
            *((_DWORD *)this + 172) = v37;
            *((_DWORD *)this + 173) = v39;
            *((_DWORD *)this + 170) = v7;
            *((_DWORD *)this + 171) = v6;
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x9DBu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x9D6u);
    }
    if ( v9 < 0 )
    {
      v31 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = *((_QWORD *)this + 83);
      if ( v32 )
      {
        *((_QWORD *)this + 83) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      v33 = *((_QWORD *)this + 82);
      if ( v33 )
      {
        *((_QWORD *)this + 82) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      *((_QWORD *)this + 85) = 0LL;
      *((_QWORD *)this + 86) = 0LL;
    }
  }
  return (unsigned int)v9;
}
