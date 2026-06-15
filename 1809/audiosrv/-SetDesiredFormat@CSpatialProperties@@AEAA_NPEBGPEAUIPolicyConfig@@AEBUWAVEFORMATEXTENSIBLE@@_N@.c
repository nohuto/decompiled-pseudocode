/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEBGPEAUIPolicyConfig@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180123C1C
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        const unsigned __int16 *a2,
        struct IPolicyConfig *a3,
        const struct WAVEFORMATEXTENSIBLE *a4,
        bool a5)
{
  DWORD dwChannelMask; // eax
  int v10; // r10d
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rax
  __int128 v17; // xmm1
  ULONGLONG v18; // xmm0_8
  int v19; // eax
  int v20; // r11d
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v26; // [rsp+38h] [rbp-C8h] BYREF
  DWORD nSamplesPerSec; // [rsp+3Ch] [rbp-C4h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v30; // [rsp+60h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  WORD *p_nChannels; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  int *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  DWORD *p_nSamplesPerSec; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  WORD *p_wBitsPerSample; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  union $48F34F6E58318E719B3C17D5DF8D3416::$BF32DB6F8F7ADBF71F90C18AFCE2FD9C *p_Samples; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  DWORD *p_nAvgBytesPerSec; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  GUID *p_SubFormat; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+ECh] [rbp-14h]

  v24 = 1;
  v25 = 1;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, a2);
    dwChannelMask = a4->dwChannelMask;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v52 = 0;
    v26 = dwChannelMask;
    v35 = (int *)&v26;
    nSamplesPerSec = a4->Format.nSamplesPerSec;
    p_nSamplesPerSec = &nSamplesPerSec;
    p_wBitsPerSample = &a4->Format.wBitsPerSample;
    p_Samples = &a4->Samples;
    nAvgBytesPerSec = a4->Format.nAvgBytesPerSec;
    p_nAvgBytesPerSec = &nAvgBytesPerSec;
    p_nChannels = &a4->Format.nChannels;
    p_SubFormat = &a4->SubFormat;
    v33 = v10 - 2;
    v36 = v10;
    v39 = v10;
    v42 = v10 - 2;
    v45 = v10 - 2;
    v48 = v10;
    v51 = 16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175C39, v11, v12, 0xAu, &pData);
  }
  v13 = *(_QWORD *)a3;
  if ( a5 )
    v14 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const unsigned __int16 *, char *, const struct WAVEFORMATEXTENSIBLE *))(v13 + 280))(
            a3,
            a2,
            (char *)this + 104,
            a4);
  else
    v14 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const unsigned __int16 *, const struct WAVEFORMATEXTENSIBLE *, _QWORD))(v13 + 48))(
            a3,
            a2,
            a4,
            0LL);
  v24 = v14;
  v15 = v14;
  if ( v14 < 0 && a4->dwChannelMask == 1599 )
  {
    v16 = *(_QWORD *)a3;
    v17 = *(_OWORD *)&a4->Format.cbSize;
    pData = *(EVENT_DATA_DESCRIPTOR *)&a4->Format.wFormatTag;
    v18 = *(_QWORD *)a4->SubFormat.Data4;
    v30 = v17;
    DWORD1(v30) = 255;
    pDesc.Ptr = v18;
    if ( a5 )
      v19 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const unsigned __int16 *, char *, EVENT_DATA_DESCRIPTOR *))(v16 + 280))(
              a3,
              a2,
              (char *)this + 104,
              &pData);
    else
      v19 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, const unsigned __int16 *, EVENT_DATA_DESCRIPTOR *, _QWORD))(v16 + 48))(
              a3,
              a2,
              &pData,
              0LL);
    v15 = v19;
    v25 = v19;
  }
  if ( (unsigned int)hProvider > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, a2);
    v34 = 0;
    v37 = 0;
    v35 = &v25;
    p_nChannels = (WORD *)&v24;
    v33 = v20;
    v36 = v20;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175D36, v21, v22, 5u, &pData);
  }
  return v15 >= 0;
}
