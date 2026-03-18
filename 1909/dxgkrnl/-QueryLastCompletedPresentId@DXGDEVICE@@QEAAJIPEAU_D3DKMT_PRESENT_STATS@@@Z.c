/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C022FFAC
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0132A60 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1C01F37FC (-QueryLastCompletedPresentId@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // rax
  ADAPTER_DISPLAY **v5; // rbx
  __int64 v8; // r8
  int LastCompletedPresentId; // edi
  _BYTE v10[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v11[64]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v12[72]; // [rsp+68h] [rbp-70h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 216);
  if ( v5 == *(ADAPTER_DISPLAY ***)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) + 480LL))(*((_QWORD *)this + 82));
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v5, 0LL);
  LastCompletedPresentId = COREADAPTERACCESS::AcquireShared((__int64)v10, 0xFFFFFFFFLL, v8);
  if ( LastCompletedPresentId >= 0 )
    LastCompletedPresentId = ADAPTER_DISPLAY::QueryLastCompletedPresentId(v5[319], a2, a3);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  return (unsigned int)LastCompletedPresentId;
}
