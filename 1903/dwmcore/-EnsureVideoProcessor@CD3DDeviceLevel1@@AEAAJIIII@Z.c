/*
 * XREFs of ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x18015CE18
 * Callers:
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@W4_D3DDDI_ROTATION@@0II2@Z @ 0x18015E400 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  unsigned int v8; // ebp
  int v10; // edi
  char *v11; // r15
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // rax
  signed int v26; // eax
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  signed int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-88h]
  __int64 (__fastcall *v41)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-88h]
  _BYTE v42[4]; // [rsp+38h] [rbp-80h] BYREF
  int v43; // [rsp+3Ch] [rbp-7Ch]
  int v44; // [rsp+40h] [rbp-78h]
  unsigned int v45; // [rsp+44h] [rbp-74h]
  unsigned int v46; // [rsp+48h] [rbp-70h]
  int v47; // [rsp+4Ch] [rbp-6Ch]
  int v48; // [rsp+50h] [rbp-68h]
  unsigned int v49; // [rsp+54h] [rbp-64h]
  unsigned int v50; // [rsp+58h] [rbp-60h]
  int v51; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v52; // [rsp+E0h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 672);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v10 = 0;
  if ( !*((_QWORD *)this + 84)
    || a2 > *((_DWORD *)this + 170)
    || a3 > *((_DWORD *)this + 171)
    || a4 > *((_DWORD *)this + 172)
    || a5 > *((_DWORD *)this + 173) )
  {
    memset_0(v42, 0, 0x28uLL);
    v11 = (char *)this + 648;
    if ( *((_QWORD *)this + 81)
      || (v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 79))(
                  *((_QWORD *)this + 79),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  (char *)this + 648),
          v10 = v12,
          v12 >= 0) )
    {
      if ( *((_QWORD *)this + 82)
        || (v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 80))(
                    *((_QWORD *)this + 80),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e),
            v10 = v14,
            v14 >= 0) )
      {
        v16 = (_QWORD *)((char *)this + 664);
        v17 = *((_QWORD *)this + 83);
        if ( v17 )
        {
          *v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = a5;
        v20 = *(_QWORD *)v11;
        if ( v8 <= *((_DWORD *)this + 170) )
          v8 = *((_DWORD *)this + 170);
        v21 = *((_DWORD *)this + 171);
        v45 = v8;
        if ( v7 <= v21 )
          v7 = v21;
        v22 = *((_DWORD *)this + 172);
        v46 = v7;
        if ( v6 <= v22 )
          v6 = v22;
        v23 = *((_DWORD *)this + 173);
        v49 = v6;
        if ( a5 <= v23 )
          v19 = v23;
        v51 = 0;
        v50 = v19;
        v43 = 1;
        v44 = 1;
        v47 = 1;
        v48 = 1;
        v52 = v19;
        v24 = *v16;
        v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v20 + 80LL);
        v40 = v25;
        if ( *v16 )
        {
          *v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          v25 = v40;
        }
        v26 = v25(v20, v42, (char *)this + 664);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x9F3u, 0LL);
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v16 + 72LL))(*v16, (char *)this + 784);
          v10 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x9F5u, 0LL);
          }
          else
          {
            v30 = *(_QWORD *)v11;
            v31 = *v5;
            v32 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)v11 + 32LL);
            v41 = v32;
            if ( *v5 )
            {
              *v5 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v32 = v41;
            }
            v33 = v32(v30, *v16, 0LL, v5);
            v10 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x9F9u, 0LL);
            }
            else
            {
              *((_DWORD *)this + 173) = v52;
              *((_DWORD *)this + 170) = v8;
              *((_DWORD *)this + 171) = v7;
              *((_DWORD *)this + 172) = v6;
            }
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x9DCu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9D7u, 0LL);
    }
    if ( v10 < 0 )
    {
      v35 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = *((_QWORD *)this + 83);
      if ( v36 )
      {
        *((_QWORD *)this + 83) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = *((_QWORD *)this + 82);
      if ( v37 )
      {
        *((_QWORD *)this + 82) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        *(_QWORD *)v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      *((_QWORD *)this + 85) = 0LL;
      *((_QWORD *)this + 86) = 0LL;
    }
  }
  return (unsigned int)v10;
}
