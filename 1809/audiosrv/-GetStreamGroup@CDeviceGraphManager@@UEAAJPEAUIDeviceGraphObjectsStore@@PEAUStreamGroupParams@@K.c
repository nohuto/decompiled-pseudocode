/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180064A30
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180013A08 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800254A0 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@012@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18003DC3C (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@012@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800E16A0 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStream_ea_1800E16A0.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct IDeviceGraphObjectsStore *a2,
        struct StreamGroupParams *a3,
        int a4,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a5,
        struct IStreamGroupProxy **a6)
{
  __int64 v6; // rax
  struct IStreamGroupProxy **v8; // rbx
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v9; // rdi
  void (__fastcall *v11)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  _BYTE *v12; // r12
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  unsigned __int64 v15; // rax
  char *v16; // rbx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  signed int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  TraceLoggingHProvider v28; // r10
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rcx
  signed int v33; // [rsp+30h] [rbp-D0h] BYREF
  char *v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-B8h] BYREF
  struct IStreamGroupProxy **v37; // [rsp+50h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 **v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  signed int *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char **v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  char *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  char *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  char *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+198h] [rbp+98h] BYREF

  v61 = a4;
  v6 = *(_QWORD *)a2;
  v8 = a6;
  v9 = a5;
  v36 = (__int64 *)a3;
  v11 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(v6 + 72);
  v37 = a6;
  v11(a2, &lpCriticalSection);
  v12 = (char *)a3 + 48;
  if ( *((_BYTE *)a3 + 48) || *((_BYTE *)a3 + 50) )
    v13 = -2147023728;
  else
    v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 32LL))(
            a2,
            a3,
            v8);
  v33 = v13;
  if ( v13 == -2147023728 )
  {
    v35 = 0LL;
    if ( v9 )
      v14 = *((_DWORD *)v9 + 14);
    else
      v14 = 0;
    v15 = 16 * (v14 + 5LL);
    if ( v15 <= 0x7FFFFFFF )
      v16 = (char *)CoTaskMemAlloc((unsigned int)v15);
    else
      v16 = 0LL;
    v34 = v16;
    v33 = v16 == 0LL ? 0x8007000E : 0;
    if ( v16 )
    {
      *(_DWORD *)v16 = *((_DWORD *)a3 + 2);
      *(_QWORD *)(v16 + 4) = (unsigned __int8)*v12;
      if ( v9 )
        v17 = *(unsigned __int16 *)(*((_QWORD *)v9 + 2) + 16LL) + 18;
      else
        v17 = 0;
      *((_DWORD *)v16 + 3) = v17;
      if ( v9 )
        v18 = *((_QWORD *)v9 + 2);
      else
        v18 = 0LL;
      *((_QWORD *)v16 + 2) = v18;
      *((_QWORD *)v16 + 3) = *(_QWORD *)a3;
      *((_DWORD *)v16 + 9) = *(unsigned __int16 *)(*((_QWORD *)a3 + 2) + 16LL) + 18;
      *((_QWORD *)v16 + 5) = *((_QWORD *)a3 + 2);
      *((_QWORD *)v16 + 6) = *((_QWORD *)a3 + 3);
      if ( v9 )
        v19 = *((_DWORD *)v9 + 8);
      else
        v19 = 0;
      *((_DWORD *)v16 + 14) = v19;
      v20 = 0;
      *(_OWORD *)(v16 + 60) = *((_OWORD *)a3 + 2);
      *((_DWORD *)v16 + 19) = v14;
      *((_DWORD *)v16 + 8) = *((unsigned __int8 *)a3 + 50);
      if ( *((_DWORD *)v16 + 19) )
      {
        do
        {
          v21 = 2LL * v20;
          v22 = v20++ + 5LL;
          *(_OWORD *)&v16[16 * v22] = *(_OWORD *)((char *)v9 + 8 * v21 + 60);
        }
        while ( v20 < *((_DWORD *)v16 + 19) );
      }
      if ( *v12 )
        v23 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                &v35,
                &v36,
                &v34,
                &v61);
      else
        v23 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                (__int64 *)&v35,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)&v61);
      v33 = v23;
      if ( *(_DWORD *)AudioSrvTelemetryProvider::Provider() > 4u )
      {
        v40 = &v36;
        v36 = v35;
        v42 = &v33;
        v41 = 8LL;
        v43 = 4LL;
        TlgCreateWsz(&pDesc, *(LPCWSTR *)a3);
        v24 = *((_QWORD *)a3 + 2) + 4LL;
        v46 = 4LL;
        v45 = v24;
        v25 = *((_QWORD *)a3 + 2) + 2LL;
        v49 = (char *)a3 + 32;
        v47 = v25;
        v48 = 2LL;
        v51 = (char *)a3 + 24;
        v50 = 16LL;
        v52 = 8LL;
        LODWORD(v34) = *((_DWORD *)a3 + 2);
        v53 = &v34;
        v57 = (char *)a3 + 49;
        v54 = 4LL;
        v55 = (char *)a3 + 48;
        v56 = 1LL;
        v58 = 1LL;
        v59 = (char *)a3 + 50;
        v60 = 1LL;
        TlgWrite(v28, &unk_180173668, v26, v27, 0xDu, &pData);
      }
      if ( v33 >= 0 )
      {
        v34 = 0LL;
        v36 = (__int64 *)&v34;
        v29 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v36);
        v33 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v35, v29);
        if ( v33 >= 0 )
          v33 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, char **))(*(_QWORD *)a2 + 40LL))(a2, &v34);
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v34);
        if ( v33 >= 0 )
        {
          v30 = v35;
          v35 = 0LL;
          *v37 = (struct IStreamGroupProxy *)v30;
        }
      }
    }
    v31 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
    }
    CoTaskMemFree(v16);
    v13 = v33;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
