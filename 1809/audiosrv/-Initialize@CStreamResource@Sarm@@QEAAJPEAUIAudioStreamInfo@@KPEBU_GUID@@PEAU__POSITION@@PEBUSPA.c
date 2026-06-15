/*
 * XREFs of ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180117AE0
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011349C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800127FC (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B3720 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180116F30 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::Initialize(
        Sarm::CStreamResource *this,
        struct IAudioStreamInfo *a2,
        int a3,
        const struct _GUID *a4,
        struct __POSITION *a5,
        const struct SPATIAL_STREAM_PROPERTIES *a6,
        struct Sarm::CEndpointResourcePool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  const WCHAR *v13; // rax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  const CHAR *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  char *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  char *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  _QWORD *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v23[1] = -2LL;
  SarmTraceLoggingTracer("Sarm::CStreamResource::Initialize", 32);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      34LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
    __debugbreak();
  }
  if ( !a7 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      35LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0108LL);
    __debugbreak();
  }
  v18 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v18);
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *((_QWORD *)this + 4) = a5;
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 360LL))(v18);
    *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    *((_DWORD *)this + 12) = a3;
    *((struct _GUID *)this + 1) = *a4;
    *((_BYTE *)this + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 120LL))(v18) == 1;
    *((_DWORD *)this + 14) = *((_DWORD *)a6 + 1);
    *((_DWORD *)this + 15) = *(_DWORD *)a6;
    *((_DWORD *)this + 17) = *((_DWORD *)a6 + 3);
    *((_QWORD *)this + 1) = a7;
    ++*((_DWORD *)a7 + 3);
    if ( (unsigned int)dword_1801B1350 > 4 )
    {
      v25 = "Sarm::CStreamResource::Initialize";
      v26 = 34LL;
      v19 = 68;
      v27 = &v19;
      v28 = 4LL;
      v29 = (char *)this + 40;
      v30 = 8LL;
      v31 = (char *)this + 16;
      v32 = 16LL;
      v20 = *((_DWORD *)this + 12);
      v33 = &v20;
      v34 = 4LL;
      v21 = *((_DWORD *)this + 14);
      v35 = &v21;
      v36 = 4LL;
      v37 = (char *)this + 60;
      v38 = 4LL;
      v39 = (char *)this + 68;
      v40 = 4LL;
      v17 = *((_BYTE *)this + 88);
      v41 = &v17;
      v42 = 1LL;
      v22 = *((_DWORD *)this + 13);
      v43 = &v22;
      v44 = 4LL;
      v13 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
      TlgCreateWsz(&pDesc, v13);
      v23[0] = *((_QWORD *)this + 1);
      v46 = v23;
      v47 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_180175908, v14, v15, 0xEu, &pData);
    }
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      38LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v11);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  return v12;
}
