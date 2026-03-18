/*
 * XREFs of ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800A4FB8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     GetProcessAndSessionId @ 0x1800A5204 (GetProcessAndSessionId.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

void __fastcall CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(CTelemetryFrameStatistics *this, __int64 a2)
{
  _OWORD *v2; // rdi
  __int64 v5; // rax
  double v6; // xmm2_8
  double v7; // xmm0_8
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  double v10; // xmm0_8
  __int64 v11; // rax
  double v12; // xmm0_8
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v17[4]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  double v19; // [rsp+48h] [rbp-C0h] BYREF
  double v20; // [rsp+50h] [rbp-B8h] BYREF
  double v21; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v22[2]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  _BYTE *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  double *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  _OWORD *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  double *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  double *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  char *v42; // [rsp+108h] [rbp+0h]
  int v43; // [rsp+110h] [rbp+8h]
  int v44; // [rsp+114h] [rbp+Ch]
  __int64 *v45; // [rsp+118h] [rbp+10h]
  int v46; // [rsp+120h] [rbp+18h]
  int v47; // [rsp+124h] [rbp+1Ch]
  char *v48; // [rsp+128h] [rbp+20h]
  int v49; // [rsp+130h] [rbp+28h]
  int v50; // [rsp+134h] [rbp+2Ch]

  v2 = (_OWORD *)((char *)this + 32);
  if ( *((_DWORD *)this + 8) )
  {
    GetProcessAndSessionId(&v16, v17);
    if ( dword_18033A1D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
    {
      v26 = 0;
      v29 = 0;
      v24 = &v16;
      v25 = 4;
      v27 = v17;
      v5 = a2 - *(_QWORD *)this;
      v6 = (double)(int)g_qpcFrequency.LowPart / 1000.0;
      v28 = 4;
      v7 = (double)(int)v5;
      if ( v5 < 0 )
        v7 = v7 + 1.844674407370955e19;
      v8 = *(unsigned int *)v2;
      v32 = 0;
      v35 = 0;
      v30 = &v19;
      v9 = *((_QWORD *)this + 6) / v8;
      v31 = 8;
      v33 = v2;
      v34 = 4;
      v19 = v7 / v6;
      v10 = (double)(int)v9;
      if ( v9 < 0 )
        v10 = v10 + 1.844674407370955e19;
      v38 = 0;
      v36 = &v20;
      v11 = *((_QWORD *)this + 7);
      v37 = 8;
      v20 = v10 / v6;
      v12 = (double)(int)v11;
      if ( v11 < 0 )
        v12 = v12 + 1.844674407370955e19;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v39 = &v21;
      v42 = (char *)this + 36;
      v13 = *((_DWORD *)this + 11) + *((_DWORD *)this + 10);
      v50 = 0;
      LODWORD(v18) = v13;
      v40 = 8;
      v43 = 4;
      v45 = &v18;
      v46 = 4;
      v48 = (char *)this + 44;
      v49 = 4;
      v21 = v12 / v6;
      TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802DB216, 0LL, 0LL, 0xBu, &pData);
    }
    memset_0(v22, 0, sizeof(v22));
    v14 = v22[0];
    *(_QWORD *)this = a2;
    v15 = v22[1];
    *v2 = v14;
    v2[1] = v15;
  }
}
