/*
 * XREFs of ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C
 * Callers:
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015B9B4 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C020DCF0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050648 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0050910 (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiResetIoMmuContext @ 0x1C0050A5C (DpiResetIoMmuContext.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0124280 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C01ED924 (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     ?DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F6E3C (-DdiBeginExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F9A34 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiDetachIoMmuDomain @ 0x1C02A8434 (DpiDetachIoMmuDomain.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnableIoMmuIsolation(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // si
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 IoMmuContextFromDevice; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int16 v19; // si
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rax

  v3 = a3;
  v4 = a2;
  if ( !*((_BYTE *)this + 1512) )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = *(_DWORD *)(v6 + 308);
    if ( (v7 & 8) == 0 && (v7 & 0x10) == 0 && !*(_BYTE *)(v6 + 185) )
    {
      if ( !qword_1C00A2C48 )
      {
        LODWORD(v8) = -1073741637;
LABEL_8:
        v11 = WdLogNewEntry5_WdWarning(v6, a2, a3);
        *(_QWORD *)(v11 + 24) = (int)v8;
LABEL_9:
        WdLogEvent5_WdWarning(v11);
LABEL_26:
        DpiResetIoMmuContext(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL));
        return (unsigned int)v8;
      }
      IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(*(_QWORD *)(v6 + 192));
      LOBYTE(v10) = 1;
      LODWORD(v8) = ((__int64 (__fastcall *)(__int64, __int64))qword_1C00A2C48)(v10, IoMmuContextFromDevice + 8);
      if ( (int)v8 < 0 )
        goto LABEL_8;
      if ( v4 )
      {
        v12 = DXGADAPTER::MapHardwareReservedRangesToIoMmu(*((DXGADAPTER **)this + 2));
        v8 = v12;
        if ( v12 < 0
          || (v16 = DpiMapMemoryTrackersToIoMmu(*(_QWORD *)(*((_QWORD *)this + 2) + 192LL)), v8 = v16, v16 < 0)
          || (v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 1208LL))(*((_QWORD *)this + 69)),
              v8 = v17,
              v17 < 0) )
        {
          v11 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v11 + 24) = v8;
          goto LABEL_9;
        }
        if ( v3 )
        {
          DXGADAPTER::AcquireCoreResourceExclusive(*((_QWORD *)this + 2), 3u, 0, 0xFFFFFFFF);
          ADAPTER_RENDER::DdiBeginExclusiveAccess(this);
          v18 = *((_QWORD *)this + 2);
          v19 = 0;
          if ( *(_DWORD *)(v18 + 256) )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)(352LL * v19 + *(_QWORD *)(v18 + 2440) + 8);
              v21 = DpiGetIoMmuContextFromDevice(v20);
              v22 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64))qword_1C00A2C58)(
                      *(_QWORD *)(v21 + 8),
                      v20,
                      0LL,
                      1LL);
              v8 = v22;
              if ( v22 < 0 )
                break;
              v18 = *((_QWORD *)this + 2);
              if ( (unsigned int)++v19 >= *(_DWORD *)(v18 + 256) )
                goto LABEL_24;
            }
            if ( v19 )
            {
              v26 = 0LL;
              v27 = v19;
              do
              {
                DpiDetachIoMmuDomain(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2440LL) + v26 + 8));
                v26 += 352LL;
                --v27;
              }
              while ( v27 );
            }
            v28 = WdLogNewEntry5_WdWarning(v24, v23, v25);
            *(_QWORD *)(v28 + 24) = v19;
            *(_QWORD *)(v28 + 32) = v8;
            WdLogEvent5_WdWarning(v28);
          }
LABEL_24:
          ADAPTER_RENDER::DdiEndExclusiveAccess(this);
          DXGADAPTER::ReleaseCoreResource(*((_QWORD *)this + 2), -1, 0LL);
          if ( (int)v8 < 0 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 1216LL))(*((_QWORD *)this + 69));
            goto LABEL_26;
          }
        }
      }
      *((_BYTE *)this + 1512) = 1;
    }
  }
  return 0LL;
}
