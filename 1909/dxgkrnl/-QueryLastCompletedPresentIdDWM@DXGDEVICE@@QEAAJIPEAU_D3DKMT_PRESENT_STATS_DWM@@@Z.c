/*
 * XREFs of ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0230088
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0132A60 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C027DAB0 (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentIdDWM(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS_DWM *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // r8
  int PresentStatsDWM; // ebx
  __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v12[64]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v13[72]; // [rsp+68h] [rbp-70h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 216);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) + 488LL))(
             *((_QWORD *)this + 82),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, v5, 0LL);
  PresentStatsDWM = COREADAPTERACCESS::AcquireShared((__int64)v11, 0xFFFFFFFFLL, v8);
  if ( PresentStatsDWM >= 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v5 + 319) + 368LL);
    if ( v10 )
      PresentStatsDWM = BLTQUEUE::QueryPresentStatsDWM((BLTQUEUE *)(*(_QWORD *)(v10 + 8) + 2760 * v6), a3);
    else
      PresentStatsDWM = -1073741811;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return (unsigned int)PresentStatsDWM;
}
