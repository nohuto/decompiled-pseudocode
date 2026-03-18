/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@@Z @ 0x1C01F6B04
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01F527C (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01F5474 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0156290 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02306CC (-Reset@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 **v6; // r14
  __int64 *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned int v11; // r15d

  v5 = 136LL;
  if ( a2 != 1 )
    v5 = 120LL;
  v6 = (__int64 **)(a1 + v5);
  for ( i = *v6; i != (__int64 *)v6 && i; i = (__int64 *)*i )
  {
    if ( !a3 || a3 == i[216] )
    {
      v8 = i[216];
      if ( v8 )
      {
        if ( v8 != *(_QWORD *)(a1 + 16) )
          DXGADAPTER::AcquireCoreResourceExclusive(i[216], 1u, 0, 0xFFFFFFFF);
        if ( *(_DWORD *)(v8 + 176) == 1 )
        {
          v9 = *(_QWORD *)(v8 + 2552);
          v10 = 0;
          v11 = *(_DWORD *)(v9 + 80);
          if ( v11 )
          {
            do
            {
              if ( i == (__int64 *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)v9, v10) )
                ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v9, (struct DXGDEVICE *)i);
              ++v10;
            }
            while ( v10 < v11 );
          }
        }
        if ( v8 != *(_QWORD *)(a1 + 16) )
          DXGADAPTER::ReleaseCoreResource(v8, -1, 0LL);
      }
      DXGDEVICE::Reset((DXGDEVICE *)i);
    }
  }
}
