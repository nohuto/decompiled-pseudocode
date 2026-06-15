/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18010B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800D1FF8 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180107DA4 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v9; // rax
  DefaultChangedContext *v10; // rsi
  DefaultChangedContext *v11; // rbx
  signed int v12; // edi
  CAudioSessionManager *v13; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v16; // rbx
  ATL::CAtlException *v17; // [rsp+48h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      a4,
      a2,
      a3);
  }
  if ( a3 )
    return 0LL;
  v9 = (DefaultChangedContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v9, (__int64)&ATL::g_strmgr);
    *((_QWORD *)v10 + 2) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v10 + 3) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = WPP_GLOBAL_Control;
LABEL_27:
    if ( v13 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x800000) != 0
      && *((_BYTE *)v13 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x1Du, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, v12);
    }
    goto LABEL_31;
  }
  try
  {
    *((_DWORD *)v10 + 2) = a2;
    v12 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v10, a4);
  }
  catch ( ATL::CAtlException *v17 )
  {
    v16 = (signed int *)v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v12 = *v16;
    if ( *v16 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v10);
      v11 = v10;
LABEL_25:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_26;
    }
    v11 = v10;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v10, 0LL);
  *((_QWORD *)v10 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_25;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, v12);
    goto LABEL_25;
  }
LABEL_26:
  if ( v12 < 0 )
    goto LABEL_27;
LABEL_31:
  if ( v11 )
    DefaultChangedContext::`scalar deleting destructor'(v11);
  return (unsigned int)v12;
}
