/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x180134DD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v8; // r14
  unsigned int v11; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rax
  unsigned int v15; // edi
  float *v16; // rdx
  int v18; // [rsp+30h] [rbp-59h] BYREF
  float *v19; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  const char *v21; // [rsp+60h] [rbp-29h]
  __int64 v22; // [rsp+68h] [rbp-21h]
  float **v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  float **v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v8 = a2;
  v19 = a6;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *((_QWORD *)this + 6);
  if ( !v14 )
  {
    v15 = -2147418113;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v22 = 78LL;
      v21 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      v18 = 499;
      v23 = (float **)&v18;
      v24 = 4LL;
      LODWORD(v19) = -2147418113;
      v25 = &v19;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v12, v13, 5u, &pData);
    }
    return v15;
  }
  if ( !a3 || !a4 || !a5 || (unsigned int)v8 >= 0x11 )
  {
    v15 = -2147024809;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v22 = 78LL;
      v21 = "SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      LODWORD(v19) = 500;
      v23 = &v19;
      v24 = 4LL;
      v18 = -2147024809;
      v25 = (float **)&v18;
      v26 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v12, v13, 5u, &pData);
    }
    return v15;
  }
  v16 = v19;
  *(_DWORD *)a3 = *(_OWORD *)(v14 + 16 * v8);
  *a4 = *(float *)(*((_QWORD *)this + 6) + 16 * v8 + 4);
  *a5 = *(float *)(*((_QWORD *)this + 6) + 16 * v8 + 8);
  if ( v16 )
    *v16 = *(float *)(*((_QWORD *)this + 6) + 16 * v8 + 12);
  return v11;
}
