/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800421D0
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180041DA0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  int v23; // [rsp+30h] [rbp-59h] BYREF
  int v24; // [rsp+34h] [rbp-55h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h]
  _OWORD *v27; // [rsp+48h] [rbp-41h]
  __int128 v28; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  const char *v31; // [rsp+90h] [rbp+7h]
  __int64 v32; // [rsp+98h] [rbp+Fh]
  int *v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]
  int *v35; // [rsp+B0h] [rbp+27h]
  __int64 v36; // [rsp+B8h] [rbp+2Fh]

  pvar = 0LL;
  v26 = 0LL;
  v2 = *((_QWORD *)this + 51);
  v27 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
          v2,
          &PKEY_SpatialAudio_Endpoint_Settings,
          &pvar);
  v5 = v24;
  if ( v24 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = 53LL;
      v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      v33 = &v23;
      v35 = &v24;
      v23 = 356;
      v34 = 4LL;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v3, v4, 5u, &pData);
    }
  }
  else
  {
    v5 = -2004286463;
    v6 = (_WORD)pvar == 65;
    *((_DWORD *)this + 128) = 0;
    if ( v6 && (_DWORD)v26 == 76 )
    {
      v7 = v27;
      *(_OWORD *)((char *)this + 428) = *v27;
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
    v23 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v32 = 53LL;
        v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
        v33 = &v24;
        v35 = &v23;
        v24 = 371;
        v34 = 4LL;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v3, v4, 5u, &pData);
      }
    }
    else
    {
      PropVariantClear(&pvar);
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
              *((_QWORD *)this + 51),
              &PKEY_SpatialAudio_EncoderDescriptor_Count,
              &pvar);
      v5 = v23;
      if ( v23 < 0 )
      {
        if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v32 = 53LL;
          v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
          v33 = &v24;
          v35 = &v23;
          v24 = 376;
          v34 = 4LL;
          v36 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v8, v9, 5u, &pData);
        }
      }
      else if ( (_WORD)pvar == 2 )
      {
        v10 = (__int16)v26;
        if ( (unsigned int)(__int16)v26 > 8 )
        {
          v5 = -2147024809;
          if ( (unsigned int)dword_1801B1488 > 2 )
          {
            v32 = 53LL;
            v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
            v33 = &v24;
            v35 = &v23;
            v24 = 379;
            v34 = 4LL;
            v23 = -2147024809;
            v36 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v8, v9, 5u, &pData);
          }
        }
        else
        {
          *((_DWORD *)this + 106) = (__int16)v26;
          v11 = 834LL * v10;
          if ( !is_mul_ok(v10, 0x342uLL) )
            v11 = -1LL;
          ProcessHeap = GetProcessHeap();
          v13 = HeapAlloc(ProcessHeap, 0, v11);
          v14 = 0;
          *((_QWORD *)this + 63) = v13;
          if ( *((_DWORD *)this + 106) )
          {
            while ( 1 )
            {
              v15 = *((_QWORD *)this + 51);
              v29 = v14 + 2;
              v28 = PKEY_SpatialAudio_EncoderDescriptor_Array;
              v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                      v15,
                      &v28,
                      &pvar);
              v5 = v23;
              if ( v23 < 0 )
                break;
              if ( (_WORD)pvar != 65 )
              {
                v5 = -2147024809;
                if ( (unsigned int)dword_1801B1488 > 2 )
                {
                  v32 = 53LL;
                  v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
                  v33 = &v24;
                  v35 = &v23;
                  v24 = 394;
                  v34 = 4LL;
                  v23 = -2147024809;
                  v36 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v16, v17, 5u, &pData);
                }
                goto LABEL_18;
              }
              v18 = 6LL;
              v19 = v27;
              v20 = *((_QWORD *)this + 63) + 834LL * v14;
              do
              {
                v20 += 128LL;
                v21 = *v19;
                v19 += 8;
                *(_OWORD *)(v20 - 128) = v21;
                *(_OWORD *)(v20 - 112) = *(v19 - 7);
                *(_OWORD *)(v20 - 96) = *(v19 - 6);
                *(_OWORD *)(v20 - 80) = *(v19 - 5);
                *(_OWORD *)(v20 - 64) = *(v19 - 4);
                *(_OWORD *)(v20 - 48) = *(v19 - 3);
                *(_OWORD *)(v20 - 32) = *(v19 - 2);
                *(_OWORD *)(v20 - 16) = *(v19 - 1);
                --v18;
              }
              while ( v18 );
              *(_OWORD *)v20 = *v19;
              *(_OWORD *)(v20 + 16) = v19[1];
              *(_OWORD *)(v20 + 32) = v19[2];
              *(_OWORD *)(v20 + 48) = v19[3];
              *(_WORD *)(v20 + 64) = *((_WORD *)v19 + 32);
              PropVariantClear(&pvar);
              if ( ++v14 >= *((_DWORD *)this + 106) )
                goto LABEL_18;
            }
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v32 = 53LL;
              v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
              v33 = &v24;
              v35 = &v23;
              v24 = 392;
              v34 = 4LL;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v16, v17, 5u, &pData);
            }
          }
        }
      }
      else
      {
        v5 = -2147024809;
        if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v32 = 53LL;
          v31 = "SpatialAudioDevicePropertyReader::LoadDeviceSettings";
          v33 = &v24;
          v35 = &v23;
          v24 = 378;
          v34 = 4LL;
          v23 = -2147024809;
          v36 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v8, v9, 5u, &pData);
        }
      }
    }
  }
LABEL_18:
  PropVariantClear(&pvar);
  return (unsigned int)v5;
}
