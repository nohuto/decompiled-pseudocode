/*
 * XREFs of ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C2780
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800C2740 (--_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180020968 (-UpdateSwapChainStat@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionS.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C2820 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800C2A20 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::~CGlobalCompositionSurfaceInfo(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-39h] BYREF
  char *v6; // [rsp+60h] [rbp-29h]
  int v7; // [rsp+68h] [rbp-21h]
  int v8; // [rsp+6Ch] [rbp-1Dh]
  char *v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+78h] [rbp-11h]
  int v11; // [rsp+7Ch] [rbp-Dh]
  char *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  char *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  char *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  char *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]
  char *v24; // [rsp+C0h] [rbp+37h]
  int v25; // [rsp+C8h] [rbp+3Fh]
  int v26; // [rsp+CCh] [rbp+43h]

  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
  if ( *((_QWORD *)this + 48) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)this + 11, 0, 0);
    if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 48));
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v7 = 4;
      v10 = 4;
      v12 = (char *)this + 400;
      v15 = (char *)this + 328;
      v18 = (char *)this + 344;
      v21 = (char *)this + 360;
      v24 = (char *)this + 376;
      v6 = (char *)this + 392;
      v9 = (char *)this + 392;
      v13 = 1;
      v16 = 8;
      v19 = 8;
      v22 = 8;
      v25 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802DF076, 0LL, 0LL, 0xAu, &pData);
    }
    v3 = (void *)*((_QWORD *)this + 48);
    if ( v3 )
      operator delete(v3);
  }
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
}
