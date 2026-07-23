/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x1406E9414
 * Callers:
 *     _CmAddDeviceToContainer @ 0x1406EBC5C (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     _CmCreateDeviceContainer @ 0x1406EB0F4 (_CmCreateDeviceContainer.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceContainer @ 0x1408F9AA4 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int DeviceContainer; // eax
  HANDLE v11; // r14
  int v12; // ebx
  int Value; // eax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  _BYTE v19[4]; // [rsp+40h] [rbp-30h] BYREF
  ULONG v20; // [rsp+44h] [rbp-2Ch] BYREF
  ULONG v21; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v24; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v24 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  *a5 = 0;
  v19[0] = 0;
  v21 = 0;
  v20 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, (_DWORD)a3, (unsigned int)&v24, (__int64)v19);
  v11 = v24;
  v12 = DeviceContainer;
  if ( DeviceContainer >= 0 )
  {
    v12 = PnpCtxRegCreateKey(a1, (char *)v24, L"BaseContainers", 0, 4u, 0LL, &v23, &v21);
    if ( v12 >= 0 )
    {
      v12 = PnpCtxRegCreateKey(a1, (char *)v23, a3, 0, 3u, 0LL, &Handle, &v20);
      if ( v12 >= 0 )
      {
        if ( v20 == 2 )
        {
          LODWORD(a5) = 0;
          Value = RegRtlQueryValue(Handle, a4, 0LL, 0LL, (unsigned int *)&a5);
          v12 = Value;
          if ( Value == -1073741772 || Value == -1073741444 )
          {
            v12 = 0;
          }
          else if ( !Value )
          {
            *v5 = 1;
            goto LABEL_9;
          }
        }
        if ( v12 >= 0 && !*v5 )
        {
          v12 = RegRtlSetValue(Handle, 0);
          if ( v12 >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, (__int64)a4, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
        }
      }
    }
  }
  if ( v12 == -1073741444 )
    v12 = -1073741772;
  if ( v12 < 0 )
  {
    if ( v20 == 1 )
    {
      if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
        v16 = *(_QWORD *)(v15 + 8);
      else
        v16 = 0LL;
      RegRtlDeleteKeyTransacted(Handle, 0LL, v16);
    }
    if ( v21 == 1 )
    {
      if ( a1 && (v17 = *(_QWORD *)(a1 + 224)) != 0 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      RegRtlDeleteKeyTransacted(v23, 0LL, v18);
    }
    if ( v19[0] == 1 )
      CmDeleteDeviceContainer(a1, a2);
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v12;
}
