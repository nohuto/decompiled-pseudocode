/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180007C80
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180005B90 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  __int128 *v11; // rdi
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // esi
  __int128 *v23; // rdi
  unsigned int v24; // r8d
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // r8d
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // esi
  __int128 *v31; // rdi
  unsigned int v32; // r8d
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rax
  int v37; // eax
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-60h] BYREF
  __int128 v41; // [rsp+30h] [rbp-50h]
  _QWORD v42[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v43; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v42[3] = -2LL;
  memset(v42, 0, 24);
  v6 = 0LL;
  v40 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
      &v40);
    v6 = v40;
  }
  if ( !a2 )
    goto LABEL_11;
  if ( v6 )
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v6 + 64LL))(
           v6,
           &PKEY_AudioEngine_HWMixFormat,
           v42);
  else
    v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *))a1->lpVtbl->SetValue)(
           a1,
           &PKEY_AudioEngine_HWMixFormat,
           v42);
  v8 = v7;
  if ( v7 < 0 )
  {
    v39 = 521LL;
  }
  else
  {
    if ( v40 )
      v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *))(*(_QWORD *)v40 + 64LL))(
             v40,
             &PKEY_AudioEngine_MixFormat,
             v42);
    else
      v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *))a1->lpVtbl->SetValue)(
             a1,
             &PKEY_AudioEngine_MixFormat,
             v42);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v6 = v40;
LABEL_11:
      v10 = 0;
      v11 = (__int128 *)qword_1801B75F0;
      while ( 1 )
      {
        if ( a2 )
        {
          v41 = *v11;
          v12 = 0;
          while ( 1 )
          {
            v13 = qword_1801B75F0[2 * v12] - v41;
            if ( !v13 )
              v13 = qword_1801B75F0[2 * v12 + 1] - *((_QWORD *)&v41 + 1);
            if ( !v13 )
              break;
            if ( ++v12 >= 9 )
            {
              v8 = -2147023728;
              v39 = 534LL;
              goto LABEL_121;
            }
          }
          v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
          v44 = v12 + 2;
          if ( v6 )
            v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                    v6,
                    &v43,
                    v42,
                    *((_QWORD *)&v41 + 1));
          else
            v14 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                    a1,
                    &v43,
                    v42,
                    *((_QWORD *)&v41 + 1));
          v8 = v14;
          if ( v14 < 0 )
          {
            v39 = 537LL;
            goto LABEL_121;
          }
          v41 = *v11;
          v15 = 0;
          while ( 1 )
          {
            v16 = qword_1801B75F0[2 * v15] - v41;
            if ( !v16 )
              v16 = qword_1801B75F0[2 * v15 + 1] - *((_QWORD *)&v41 + 1);
            if ( !v16 )
              break;
            if ( ++v15 >= 9 )
              goto LABEL_30;
          }
          v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
          v44 = v15 + 2;
          if ( v40 )
            (*(void (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, &v43, v42, v41);
          else
            ((void (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v43,
              v42,
              v41);
LABEL_30:
          v6 = v40;
        }
        if ( a3 )
        {
          v41 = *v11;
          v17 = 0;
          while ( 1 )
          {
            v18 = qword_1801B75F0[2 * v17] - v41;
            if ( !v18 )
              v18 = qword_1801B75F0[2 * v17 + 1] - *((_QWORD *)&v41 + 1);
            if ( !v18 )
              break;
            if ( ++v17 >= 9 )
            {
              v8 = -2147023728;
              v39 = 549LL;
              goto LABEL_121;
            }
          }
          v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
          v44 = v17 + 602;
          if ( v6 )
            v19 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                    v6,
                    &v43,
                    v42,
                    *((_QWORD *)&v41 + 1));
          else
            v19 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                    a1,
                    &v43,
                    v42,
                    *((_QWORD *)&v41 + 1));
          v8 = v19;
          if ( v19 < 0 )
          {
            v39 = 552LL;
            goto LABEL_121;
          }
          v41 = *v11;
          v20 = 0;
          while ( 1 )
          {
            v21 = qword_1801B75F0[2 * v20] - v41;
            if ( !v21 )
              v21 = qword_1801B75F0[2 * v20 + 1] - *((_QWORD *)&v41 + 1);
            if ( !v21 )
              break;
            if ( ++v20 >= 9 )
              goto LABEL_49;
          }
          v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
          v44 = v20 + 602;
          if ( v40 )
            (*(void (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v40 + 64LL))(v40, &v43, v42, v41);
          else
            ((void (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
              a1,
              &v43,
              v42,
              v41);
LABEL_49:
          v6 = v40;
        }
        ++v10;
        ++v11;
        if ( v10 >= 9 )
        {
          v22 = 0;
          v23 = (__int128 *)qword_1801B75F0;
          while ( 1 )
          {
            if ( a2 )
            {
              v41 = *v23;
              v24 = 0;
              while ( 1 )
              {
                v25 = qword_1801B75F0[2 * v24] - v41;
                if ( !v25 )
                  v25 = qword_1801B75F0[2 * v24 + 1] - *((_QWORD *)&v41 + 1);
                if ( !v25 )
                  break;
                if ( ++v24 >= 9 )
                {
                  v8 = -2147023728;
                  v39 = 568LL;
                  goto LABEL_121;
                }
              }
              v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
              v44 = v24 + 2;
              if ( v6 )
                v26 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                        v6,
                        &v43,
                        v42,
                        *((_QWORD *)&v41 + 1));
              else
                v26 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                        a1,
                        &v43,
                        v42,
                        *((_QWORD *)&v41 + 1));
              v8 = v26;
              if ( v26 < 0 )
              {
                v39 = 571LL;
                goto LABEL_121;
              }
              v6 = v40;
            }
            if ( a3 )
            {
              v41 = *v23;
              v27 = 0;
              while ( 1 )
              {
                v28 = qword_1801B75F0[2 * v27] - v41;
                if ( !v28 )
                  v28 = qword_1801B75F0[2 * v27 + 1] - *((_QWORD *)&v41 + 1);
                if ( !v28 )
                  break;
                if ( ++v27 >= 9 )
                {
                  v8 = -2147023728;
                  v39 = 577LL;
                  goto LABEL_121;
                }
              }
              v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
              v44 = v27 + 602;
              if ( v6 )
                v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                        v6,
                        &v43,
                        v42,
                        *((_QWORD *)&v41 + 1));
              else
                v29 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                        a1,
                        &v43,
                        v42,
                        *((_QWORD *)&v41 + 1));
              v8 = v29;
              if ( v29 < 0 )
              {
                v39 = 580LL;
                goto LABEL_121;
              }
              v6 = v40;
            }
            ++v22;
            ++v23;
            if ( v22 >= 9 )
            {
              v30 = 0;
              v31 = (__int128 *)qword_1801B75F0;
              while ( 1 )
              {
                if ( a2 )
                {
                  v41 = *v31;
                  v32 = 0;
                  while ( 1 )
                  {
                    v33 = qword_1801B75F0[2 * v32] - v41;
                    if ( !v33 )
                      v33 = qword_1801B75F0[2 * v32 + 1] - *((_QWORD *)&v41 + 1);
                    if ( !v33 )
                      break;
                    if ( ++v32 >= 9 )
                    {
                      v8 = -2147023728;
                      v39 = 590LL;
                      goto LABEL_121;
                    }
                  }
                  v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
                  v44 = v32 + 2;
                  if ( v6 )
                    v34 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                            v6,
                            &v43,
                            v42,
                            *((_QWORD *)&v41 + 1));
                  else
                    v34 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                            a1,
                            &v43,
                            v42,
                            *((_QWORD *)&v41 + 1));
                  v8 = v34;
                  if ( v34 < 0 )
                  {
                    v39 = 593LL;
                    goto LABEL_121;
                  }
                  v6 = v40;
                }
                if ( a3 )
                {
                  v41 = *v31;
                  v35 = 0;
                  while ( 1 )
                  {
                    v36 = qword_1801B75F0[2 * v35] - v41;
                    if ( !v36 )
                      v36 = qword_1801B75F0[2 * v35 + 1] - *((_QWORD *)&v41 + 1);
                    if ( !v36 )
                      break;
                    if ( ++v35 >= 9 )
                    {
                      v8 = -2147023728;
                      v39 = 599LL;
                      goto LABEL_121;
                    }
                  }
                  v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
                  v44 = v35 + 602;
                  if ( v6 )
                    v37 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                            v6,
                            &v43,
                            v42,
                            *((_QWORD *)&v41 + 1));
                  else
                    v37 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, _QWORD *, _QWORD))a1->lpVtbl->SetValue)(
                            a1,
                            &v43,
                            v42,
                            *((_QWORD *)&v41 + 1));
                  v8 = v37;
                  if ( v37 < 0 )
                  {
                    v39 = 602LL;
                    goto LABEL_121;
                  }
                  v6 = v40;
                }
                ++v30;
                ++v31;
                if ( v30 >= 9 )
                {
                  v8 = 0;
                  goto LABEL_100;
                }
              }
            }
          }
        }
      }
    }
    v39 = 525LL;
  }
LABEL_121:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v39,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)v8);
  v6 = v40;
LABEL_100:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
