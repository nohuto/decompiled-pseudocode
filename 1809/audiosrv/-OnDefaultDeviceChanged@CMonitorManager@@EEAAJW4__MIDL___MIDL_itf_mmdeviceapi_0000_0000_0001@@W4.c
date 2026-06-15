/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800FDCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800C37C8 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x1800FB534 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v8; // rax
  DefaultChangedContext *v9; // r14
  DefaultChangedContext *v10; // rbx
  signed int v11; // esi
  CAudioSessionManager *v12; // rcx
  __int64 v13; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+48h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
      a4,
      a2,
      a3);
  }
  if ( a2 || a3 )
    return 0LL;
  v8 = (DefaultChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v8, (__int64)&ATL::g_strmgr);
    *((_QWORD *)v9 + 1) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v9 + 2) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = WPP_GLOBAL_Control;
LABEL_32:
    if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x800000) != 0
      && *((_BYTE *)v12 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v12 + 2), 0x1Cu, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v11);
    }
    goto LABEL_36;
  }
  v11 = 0;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
  }
  else
  {
    LODWORD(v13) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v9, a4, v13);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (signed int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      o__resetstkoflw_0();
    v11 = *v17;
    if ( *v17 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v9);
      v10 = v9;
LABEL_30:
      v12 = WPP_GLOBAL_Control;
      goto LABEL_31;
    }
    v10 = v9;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultRenderDeviceChanged, v9, 0LL);
  *((_QWORD *)v9 + 2) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v10 = 0LL;
    goto LABEL_30;
  }
  LastError = GetLastError();
  v11 = LastError;
  if ( LastError > 0 )
    v11 = (unsigned __int16)LastError | 0x80070000;
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v11);
    goto LABEL_30;
  }
LABEL_31:
  if ( v11 < 0 )
    goto LABEL_32;
LABEL_36:
  if ( v10 )
    DefaultChangedContext::`scalar deleting destructor'(v10);
  return (unsigned int)v11;
}
