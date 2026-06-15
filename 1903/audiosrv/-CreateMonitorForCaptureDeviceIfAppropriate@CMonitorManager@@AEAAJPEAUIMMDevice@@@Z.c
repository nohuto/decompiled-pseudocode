/*
 * XREFs of ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180108488
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180108E68 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180109E10 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B980 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005DDC0 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18005DE80 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x180107D38 (--_GCreateMonitorContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  signed int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  int v11; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x42u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
  }
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v13);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v11);
    if ( v4 >= 0 )
    {
      v5 = v11;
      if ( v11 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(a2, (unsigned __int16 **)&pv, 0LL) )
        {
LABEL_12:
          v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v7 = v6;
          if ( v6 )
          {
            *v6 = a2;
            ((void (__fastcall *)(struct IMMDevice *))a2->lpVtbl->AddRef)(a2);
            v7[1] = this;
            if ( this )
              (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
            v7[2] = 0LL;
          }
          else
          {
            v7 = 0LL;
          }
          if ( v7 )
          {
            ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::CreateMonitorIfAppropriateWorker, v7, 0LL);
            v7[2] = ThreadpoolWork;
            if ( ThreadpoolWork )
            {
              SubmitThreadpoolWork(ThreadpoolWork);
            }
            else
            {
              LastError = GetLastError();
              v4 = LastError;
              if ( LastError > 0 )
                v4 = (unsigned __int16)LastError | 0x80070000;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x43u,
                  (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
                  v4);
              }
              CreateMonitorContext::`scalar deleting destructor'((CreateMonitorContext *)v7);
            }
          }
          else
          {
            v4 = -2147024882;
          }
          goto LABEL_28;
        }
        v5 = v11;
      }
      if ( v5 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, (unsigned __int16 **)&pv) )
        goto LABEL_28;
      goto LABEL_12;
    }
  }
LABEL_28:
  CoTaskMemFree(pv);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v4;
}
