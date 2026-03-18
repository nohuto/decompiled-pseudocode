/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C015209C
 * Callers:
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C001CDC4 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C001CEF4 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C005D2BC (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001CFC8 (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001CFF0 (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        const GUID *a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r14d
  __int64 v22; // rdx
  int v23; // r12d
  unsigned int v24; // edi
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r11
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+54h] [rbp-ACh]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  int v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h]
  _DWORD *v56; // [rsp+88h] [rbp-78h]
  const GUID *v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h]
  char v61; // [rsp+B0h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v63[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v64[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v65[72]; // [rsp+108h] [rbp+8h] BYREF

  v60 = 0LL;
  v53 = a7;
  *a8 = 0;
  v52 = a4;
  v57 = a3;
  v58 = a2;
  v56 = a8;
  v55 = a9;
  v59 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v61 = 1;
    v59 = 2094;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a9, &EventProfilerEnter, a3, 2094);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 2094LL);
  HandleInformation = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v14 = v10;
  if ( v10 == -1073741788 )
  {
    v42 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v42 + 32) = -1073741788LL;
LABEL_30:
    *(_QWORD *)(v42 + 24) = Handle;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_21;
  }
  if ( v10 < 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v42 + 32) = v14;
    goto LABEL_30;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, (struct DXGADAPTER *const)v15, 0LL);
  if ( *(_QWORD *)(v15 + 2552) == v16 )
  {
    LODWORD(v14) = -1073741823;
  }
  else
  {
    v17 = COREADAPTERACCESS::AcquireShared((__int64)v63, 0xFFFFFFFFLL, v16);
    v14 = v17;
    if ( v17 < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v43 + 24) = v15;
      *(_QWORD *)(v43 + 32) = v14;
      WdLogEvent5_WdWarning(v43);
    }
    else
    {
      v21 = 0;
      v22 = v53;
      v23 = 0;
      v49 = a6;
      v24 = a6;
      v51 = v53;
      v50 = 0LL;
      if ( a6 )
      {
        do
        {
          if ( (v24 & 1) != 0 )
            break;
          ++v21;
          v24 >>= 1;
        }
        while ( v24 );
        v49 = v24;
        LODWORD(v50) = v21;
      }
      while ( v24 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)(v15 + 2552) + 80LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
                             (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
                             v22) >= v25 )
        {
          LODWORD(v14) = -1073741811;
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
          v48[3] = -1073741811LL;
LABEL_39:
          v47 = v48;
          goto LABEL_40;
        }
        v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL) + 2392LL);
        if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
                             (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
                             v26) >= v29 )
        {
          LODWORD(v14) = -1073741811;
          v44 = (_QWORD *)WdLogNewEntry5_WdError(v30, v22, v20);
          v44[3] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
                                   (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
                                   v45);
          v44[4] = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
                                   (DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
                                   v46);
          v47 = v44;
          v44[5] = a6;
          v44[6] = -1073741811LL;
LABEL_40:
          WdLogEvent5_WdError(v47);
          goto LABEL_20;
        }
        v24 >>= 1;
        v49 = v24;
        if ( v24 )
        {
          do
          {
            if ( (v24 & 1) != 0 )
              break;
            ++v21;
            v24 >>= 1;
          }
          while ( v24 );
          v49 = v24;
          LODWORD(v50) = v21;
        }
        HIDWORD(v50) = ++v23;
      }
      v31 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
          + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v32 = (v31 & 0xF0F0F0F) + ((v31 >> 4) & 0xF0F0F0F);
      v33 = v32 & 0xFF00FF;
      v34 = (unsigned __int16)((unsigned __int8)v32 + BYTE1(v32))
          + (((unsigned int)v33 + ((v32 >> 8) & 0xFF00FF)) >> 16);
      if ( v34 > 1 && *(int *)(v15 + 2452) < 2400 )
      {
        LODWORD(v14) = -1073741811;
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v33, 16711935LL, v20);
        v48[3] = v34;
        v48[4] = a6;
        v48[5] = -1073741811LL;
        goto LABEL_39;
      }
      v35 = *(_QWORD *)(v15 + 2560);
      v36 = *(_QWORD *)(v35 + 528);
      v37 = *(_QWORD *)(*(_QWORD *)(v35 + 520) + 8LL);
      if ( v52 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, const GUID *, __int64, int, _DWORD *, __int64))(v37 + 392))(
          v36,
          a6,
          v58,
          v57,
          v53,
          a5,
          v56,
          v55);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, const GUID *, __int64, int, char, _DWORD *, __int64))(v37 + 400))(
          v36,
          a6,
          v58,
          v57,
          v53,
          a5,
          1,
          v56,
          v55);
    }
  }
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v65);
  COREACCESS::~COREACCESS((COREACCESS *)v64);
LABEL_21:
  if ( Object )
    ObfDereferenceObject(Object);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v38);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v59);
  return (unsigned int)v14;
}
