/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180031FE0
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001CF20 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // esi
  bool v6; // zf
  _OWORD *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // kr00_8
  void *v13; // rax
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm0
  int v25; // [rsp+30h] [rbp-59h] BYREF
  int v26; // [rsp+34h] [rbp-55h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-51h] BYREF
  __int64 v28; // [rsp+40h] [rbp-49h]
  _OWORD *v29; // [rsp+48h] [rbp-41h]
  __int128 v30; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  const char *v33; // [rsp+90h] [rbp+7h]
  __int64 v34; // [rsp+98h] [rbp+Fh]
  int *v35; // [rsp+A0h] [rbp+17h]
  __int64 v36; // [rsp+A8h] [rbp+1Fh]
  int *v37; // [rsp+B0h] [rbp+27h]
  __int64 v38; // [rsp+B8h] [rbp+2Fh]

  pvar = 0LL;
  v28 = 0LL;
  v2 = *((_QWORD *)this + 51);
  v29 = 0LL;
  v26 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
          v2,
          &PKEY_SpatialAudio_Endpoint_Settings,
          &pvar);
  v5 = v26;
  if ( v26 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v34 = 53LL;
      v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      v35 = &v25;
      v37 = &v26;
      v25 = 356;
      v36 = 4LL;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v3, v4, 5u, &pData);
    }
  }
  else
  {
    v5 = -2004286463;
    v6 = (_WORD)pvar == 65;
    *((_DWORD *)this + 128) = 0;
    if ( v6 && (_DWORD)v28 == 76 )
    {
      v7 = v29;
      *(_OWORD *)((char *)this + 428) = *v29;
      *(_OWORD *)((char *)this + 444) = v7[1];
      *(_OWORD *)((char *)this + 460) = v7[2];
      *(_OWORD *)((char *)this + 476) = v7[3];
      *(_QWORD *)((char *)this + 492) = *((_QWORD *)v7 + 8);
      *((_DWORD *)this + 125) = *((_DWORD *)v7 + 18);
      if ( *((_DWORD *)this + 107) == 1509949441 )
      {
        *((_DWORD *)this + 128) = 1;
        v5 = 0;
      }
    }
    v25 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_1801B63C0 > 2 )
      {
        v34 = 53LL;
        v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
        v35 = &v26;
        v37 = &v25;
        v26 = 371;
        v36 = 4LL;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v3, v4, 5u, &pData);
      }
    }
    else
    {
      PropVariantClear(&pvar);
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
              *((_QWORD *)this + 51),
              &PKEY_SpatialAudio_EncoderDescriptor_Count,
              &pvar);
      v5 = v25;
      if ( v25 < 0 )
      {
        if ( (unsigned int)dword_1801B63C0 > 2 )
        {
          v34 = 53LL;
          v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
          v35 = &v26;
          v37 = &v25;
          v26 = 376;
          v36 = 4LL;
          v38 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v8, v9, 5u, &pData);
        }
      }
      else if ( (_WORD)pvar == 2 )
      {
        v10 = (__int16)v28;
        if ( (unsigned int)(__int16)v28 > 8 )
        {
          v5 = -2147024809;
          if ( (unsigned int)dword_1801B63C0 > 2 )
          {
            v34 = 53LL;
            v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
            v35 = &v26;
            v37 = &v25;
            v26 = 379;
            v36 = 4LL;
            v25 = -2147024809;
            v38 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v8, v9, 5u, &pData);
          }
        }
        else
        {
          *((_DWORD *)this + 106) = (__int16)v28;
          v12 = v10;
          v11 = 834LL * v10;
          if ( !is_mul_ok(v12, 0x342uLL) )
            v11 = -1LL;
          v13 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
          *((_QWORD *)this + 63) = v13;
          if ( v13 )
          {
            v5 = 0;
            v16 = 0;
            if ( *((_DWORD *)this + 106) )
            {
              while ( 1 )
              {
                v17 = *((_QWORD *)this + 51);
                v31 = v16 + 2;
                v30 = PKEY_SpatialAudio_EncoderDescriptor_Array;
                v25 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
                        v17,
                        &v30,
                        &pvar);
                v5 = v25;
                if ( v25 < 0 )
                  break;
                if ( (_WORD)pvar != 65 )
                {
                  v5 = -2147024809;
                  if ( (unsigned int)dword_1801B63C0 > 2 )
                  {
                    v34 = 53LL;
                    v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
                    v35 = &v26;
                    v37 = &v25;
                    v26 = 395;
                    v36 = 4LL;
                    v25 = -2147024809;
                    v38 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v18, v19, 5u, &pData);
                  }
                  goto LABEL_19;
                }
                v20 = 6LL;
                v21 = v29;
                v22 = *((_QWORD *)this + 63) + 834LL * v16;
                do
                {
                  v22 += 128LL;
                  v23 = *v21;
                  v21 += 8;
                  *(_OWORD *)(v22 - 128) = v23;
                  *(_OWORD *)(v22 - 112) = *(v21 - 7);
                  *(_OWORD *)(v22 - 96) = *(v21 - 6);
                  *(_OWORD *)(v22 - 80) = *(v21 - 5);
                  *(_OWORD *)(v22 - 64) = *(v21 - 4);
                  *(_OWORD *)(v22 - 48) = *(v21 - 3);
                  *(_OWORD *)(v22 - 32) = *(v21 - 2);
                  *(_OWORD *)(v22 - 16) = *(v21 - 1);
                  --v20;
                }
                while ( v20 );
                *(_OWORD *)v22 = *v21;
                *(_OWORD *)(v22 + 16) = v21[1];
                *(_OWORD *)(v22 + 32) = v21[2];
                *(_OWORD *)(v22 + 48) = v21[3];
                *(_WORD *)(v22 + 64) = *((_WORD *)v21 + 32);
                PropVariantClear(&pvar);
                if ( ++v16 >= *((_DWORD *)this + 106) )
                  goto LABEL_19;
              }
              if ( (unsigned int)dword_1801B63C0 > 2 )
              {
                v34 = 53LL;
                v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
                v35 = &v26;
                v37 = &v25;
                v26 = 393;
                v36 = 4LL;
                v38 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v18, v19, 5u, &pData);
              }
            }
          }
          else
          {
            v5 = -2147024882;
            v25 = -2147024882;
            if ( (unsigned int)dword_1801B63C0 > 2 )
            {
              v34 = 53LL;
              v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
              v35 = &v26;
              v37 = &v25;
              v26 = 384;
              v36 = 4LL;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v14, v15, 5u, &pData);
            }
          }
        }
      }
      else
      {
        v5 = -2147024809;
        if ( (unsigned int)dword_1801B63C0 > 2 )
        {
          v34 = 53LL;
          v33 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
          v35 = &v26;
          v37 = &v25;
          v26 = 378;
          v36 = 4LL;
          v25 = -2147024809;
          v38 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v8, v9, 5u, &pData);
        }
      }
    }
  }
LABEL_19:
  PropVariantClear(&pvar);
  return (unsigned int)v5;
}
