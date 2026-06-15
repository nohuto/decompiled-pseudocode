/*
 * XREFs of ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18011811C
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x18011430C (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180116F30 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180117624 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1801183DC (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1801185BC (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::ProcessDynamicObjectCountChange(
        Sarm::CStreamResource *this,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v6; // r8d
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx
  bool v12; // cf
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rsi
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned int v19; // r15d
  double v20; // xmm1_8
  __int64 *v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  bool v24; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-71h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  char *v28; // [rsp+70h] [rbp-39h]
  int v29; // [rsp+78h] [rbp-31h]
  int v30; // [rsp+7Ch] [rbp-2Dh]
  char *v31; // [rsp+80h] [rbp-29h]
  int v32; // [rsp+88h] [rbp-21h]
  int v33; // [rsp+8Ch] [rbp-1Dh]
  unsigned int *v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+98h] [rbp-11h]
  int v36; // [rsp+9Ch] [rbp-Dh]
  unsigned int *v37; // [rsp+A0h] [rbp-9h]
  int v38; // [rsp+A8h] [rbp-1h]
  int v39; // [rsp+ACh] [rbp+3h]
  bool *v40; // [rsp+B0h] [rbp+7h]
  int v41; // [rsp+B8h] [rbp+Fh]
  int v42; // [rsp+BCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  unsigned int v44; // [rsp+118h] [rbp+6Fh] BYREF

  v44 = a2;
  v25 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::ProcessDynamicObjectCountChange", 409);
  v6 = v25;
  v7 = v44;
  *a4 = 0LL;
  v8 = Sarm::CStreamResource::ValidateDynamicObjectRequest(this, v7, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v25;
    v12 = v25 < *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = v44;
    v13 = v11;
    if ( !v12 )
      v13 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 18) = v13;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v19 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, v11);
    if ( v19 < *((_DWORD *)this + 20) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v20 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v20 = v20 + 1.844674407370955e19;
      v21 = *(__int64 **)(*((_QWORD *)this + 1) + 16LL);
      if ( *v21 >= 0 )
        v14 = *v21;
      if ( v21[1] >= 0 )
        v15 = v21[1];
      v16 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v20);
    }
    if ( (unsigned int)dword_1801B1350 > 5 )
    {
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v12 = v19 < *((_DWORD *)this + 20);
      v28 = (char *)this + 40;
      v31 = (char *)this + 16;
      v24 = v12;
      v42 = 0;
      v34 = &v44;
      v37 = &v25;
      v40 = &v24;
      v29 = 8;
      v32 = 16;
      v35 = 4;
      v38 = 4;
      v41 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_180175651, v17, v18, 7u, &pData);
    }
    v22 = Sarm::CStreamResource::SetDynamicObjects(this, v19, v16 + v14);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a4 = v14 + v16 + v15;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        442LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v22);
      return v23;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      412LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
