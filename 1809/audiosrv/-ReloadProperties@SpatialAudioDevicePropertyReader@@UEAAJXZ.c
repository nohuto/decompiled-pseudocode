/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180041DA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800421D0 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180042484 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int16 v12; // ax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // esi
  void *v22; // rax
  void *v23; // rax
  const GUID *v24; // r8
  const GUID *v25; // r9
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  int DeviceSettings; // [rsp+30h] [rbp-29h] BYREF
  int v31; // [rsp+34h] [rbp-25h] BYREF
  int v32; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v34; // [rsp+60h] [rbp+7h]
  __int64 v35; // [rsp+68h] [rbp+Fh]
  int *v36; // [rsp+70h] [rbp+17h]
  __int64 v37; // [rsp+78h] [rbp+1Fh]
  int *p_DeviceSettings; // [rsp+80h] [rbp+27h]
  __int64 v39; // [rsp+88h] [rbp+2Fh]

  v32 = 1;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    _aligned_free(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    _aligned_free(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v4);
  *((_QWORD *)this + 63) = 0LL;
  v31 = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v32);
  if ( v31 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v34 = "SpatialAudioDevicePropertyReader::ReloadProperties";
      v36 = &DeviceSettings;
      p_DeviceSettings = &v31;
      v35 = 51LL;
      DeviceSettings = 277;
      v37 = 4LL;
      v39 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v6, v7, 5u, &pData);
    }
  }
  else
  {
    DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
    if ( DeviceSettings < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v34 = "SpatialAudioDevicePropertyReader::ReloadProperties";
        v36 = &v31;
        p_DeviceSettings = &DeviceSettings;
        v35 = 51LL;
        v31 = 281;
        v37 = 4LL;
        v39 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v8, v9, 5u, &pData);
      }
    }
    else
    {
      DeviceSettings = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
      if ( DeviceSettings < 0 && (unsigned int)dword_1801B1488 > 2 )
      {
        v34 = "SpatialAudioDevicePropertyReader::ReloadProperties";
        v36 = &v31;
        p_DeviceSettings = &DeviceSettings;
        v35 = 51LL;
        v31 = 284;
        v37 = 4LL;
        v39 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v10, v11, 5u, &pData);
      }
    }
  }
  if ( v32 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *(_QWORD *)((char *)this + 124) = 262142LL;
    *(_OWORD *)((char *)this + 134) = xmmword_18016C7F0;
    *((_WORD *)this + 66) = 0;
    *(_OWORD *)((char *)this + 150) = xmmword_18016C800;
    *(_OWORD *)((char *)this + 166) = xmmword_18016C810;
    *(_OWORD *)((char *)this + 182) = xmmword_18016C820;
    *(_OWORD *)((char *)this + 198) = xmmword_18016C830;
    *(_OWORD *)((char *)this + 214) = xmmword_18016C840;
    *(_OWORD *)((char *)this + 230) = xmmword_18016C850;
    *(_DWORD *)((char *)this + 246) = 0;
    v12 = *((_WORD *)this + 124);
    v13 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v14 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v13;
    v15 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v14;
    v16 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v15;
    v17 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v16;
    v18 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v17;
    v19 = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 346) = v18;
    v20 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 362) = v19;
    *(_OWORD *)((char *)this + 378) = v20;
    *((_WORD *)this + 197) = v12;
  }
  v21 = -2147024882;
  v22 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 6) = v22;
  if ( v22 )
    v21 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
            *((_QWORD *)this + 50),
            (char *)this + 134,
            v22,
            272LL);
  v23 = _aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v23;
  if ( v23 )
  {
    DeviceSettings = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
                       *((_QWORD *)this + 50),
                       (char *)this + 280,
                       v23,
                       272LL);
    v21 = DeviceSettings;
    if ( DeviceSettings < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v35 = 56LL;
        v34 = "SpatialAudioDevicePropertyReader::AllocatePositionTable";
        v36 = &v31;
        p_DeviceSettings = &DeviceSettings;
        v31 = 424;
        v37 = 4LL;
        v39 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v24, v25, 5u, &pData);
      }
    }
    else
    {
      v26 = (__m128)*((unsigned int *)this + 71);
      v27 = (__m128)*((unsigned int *)this + 72);
      v26.m128_f32[0] = v26.m128_f32[0] * 0.5;
      v27.m128_f32[0] = v27.m128_f32[0] * 0.5;
      v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, v27), (__m128)0LL);
      *(__m128 *)*((_QWORD *)this + 7) = _mm_add_ps(*(__m128 *)*((_QWORD *)this + 7), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 16LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 16LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 32LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 32LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 48LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 48LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 64LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 64LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 80LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 80LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 96LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 96LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 112LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 112LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 128LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 128LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 144LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 144LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 160LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 160LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 176LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 176LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 192LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 192LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 208LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 208LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 224LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 224LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 240LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 240LL), v28);
      *(__m128 *)(*((_QWORD *)this + 7) + 256LL) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + 256LL), v28);
    }
  }
  DeviceSettings = v21;
  if ( v21 < 0 && (unsigned int)dword_1801B1488 > 2 )
  {
    v34 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    v36 = &v31;
    p_DeviceSettings = &DeviceSettings;
    v35 = 51LL;
    v31 = 302;
    v37 = 4LL;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v24, v25, 5u, &pData);
  }
  return (unsigned int)v21;
}
