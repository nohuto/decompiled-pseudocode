/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01C78D0
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01C6278 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C00B305C (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 **v4; // r14
  __int64 *i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // esi
  unsigned int v9; // r15d

  result = 120LL;
  v3 = 136LL;
  if ( a2 != 1 )
    v3 = 120LL;
  v4 = (__int64 **)(a1 + v3);
  for ( i = *v4; i != (__int64 *)v4 && i; i = (__int64 *)*i )
  {
    v6 = i[216];
    if ( v6 )
    {
      DXGADAPTER::AcquireCoreResourceExclusive(i[216], 1, 1);
      if ( *(_DWORD *)(v6 + 176) == 1 )
      {
        v7 = *(_QWORD *)(v6 + 2520);
        v8 = 0;
        v9 = *(_DWORD *)(v7 + 80);
        if ( v9 )
        {
          do
          {
            if ( i == (__int64 *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)v7, v8) )
              ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v7, (struct DXGDEVICE *)i);
            ++v8;
          }
          while ( v8 < v9 );
        }
      }
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v6);
      result = DXGDEVICE::MarkDeviceAsError((__int64)i, 22LL);
    }
  }
  return result;
}
