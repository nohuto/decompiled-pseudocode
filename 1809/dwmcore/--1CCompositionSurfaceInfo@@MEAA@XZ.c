/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800A0374
 * Callers:
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800A02E0 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800207E4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x1800A0320 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x1800A139C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  void *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-39h] BYREF
  char *v7; // [rsp+60h] [rbp-29h]
  int v8; // [rsp+68h] [rbp-21h]
  int v9; // [rsp+6Ch] [rbp-1Dh]
  char *v10; // [rsp+70h] [rbp-19h]
  int v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+7Ch] [rbp-Dh]
  char *v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+8Ch] [rbp+3h]
  char *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  char *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  char *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  char *v25; // [rsp+C0h] [rbp+37h]
  int v26; // [rsp+C8h] [rbp+3Fh]
  int v27; // [rsp+CCh] [rbp+43h]

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
  {
    CCompositionSurfaceManager::RemoveFromSurfaceMap(
      *((CCompositionSurfaceManager **)this + 3),
      *(struct _LUID *)((char *)this + 40));
    CloseHandle(*((HANDLE *)this + 4));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 46);
  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
  if ( *((_QWORD *)this + 43) )
  {
    CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)this + 6, 0, 0);
    if ( dword_180305E80 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 43));
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v8 = 4;
      v11 = 4;
      v13 = (char *)this + 360;
      v16 = (char *)this + 288;
      v19 = (char *)this + 304;
      v22 = (char *)this + 320;
      v25 = (char *)this + 336;
      v7 = (char *)this + 352;
      v10 = (char *)this + 352;
      v14 = 1;
      v17 = 8;
      v20 = 8;
      v23 = 8;
      v26 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B5DFF, 0LL, 0LL, 0xAu, &pData);
    }
    v4 = (void *)*((_QWORD *)this + 43);
    if ( v4 )
      WPF::ProcessHeapImpl::Free(v4);
  }
  v3 = *((_QWORD *)this + 24);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
