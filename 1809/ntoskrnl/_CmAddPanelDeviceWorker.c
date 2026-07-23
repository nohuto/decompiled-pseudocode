/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x1408FC4D4
 * Callers:
 *     _CmAddPanelDevice @ 0x1408FC390 (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _CmCreateDevicePanel @ 0x1408FC688 (_CmCreateDevicePanel.c)
 *     _CmDeleteDevicePanel @ 0x1408FC898 (_CmDeleteDevicePanel.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int DevicePanel; // eax
  HANDLE v9; // r14
  int v10; // ebx
  int Value; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  ULONG v15; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v15 = 0;
  *a4 = 0;
  v18 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, (_DWORD)a3, (unsigned int)&v16, (__int64)&v18);
  v9 = v16;
  v10 = DevicePanel;
  if ( DevicePanel >= 0 )
  {
    v10 = PnpCtxRegCreateKey(a1, (char *)v16, L"Devices", 0, 7u, 0LL, &Handle, &v15);
    if ( v10 >= 0 )
    {
      if ( v15 == 2 )
      {
        LODWORD(v16) = 0;
        Value = RegRtlQueryValue(Handle, a3, 0LL, 0LL, (unsigned int *)&v16);
        v10 = Value;
        if ( Value == -1073741772 || Value == -1073741444 )
        {
          v10 = 0;
        }
        else if ( !Value )
        {
          *a4 = 1;
          goto LABEL_24;
        }
      }
      if ( v10 >= 0 && !*a4 )
      {
        v10 = RegRtlSetValue(Handle, a3, 0, 0LL, 0);
        if ( v10 >= 0 )
          PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
      }
    }
  }
  if ( v10 == -1073741444 )
    v10 = -1073741772;
  if ( v10 < 0 )
  {
    if ( v15 == 1 )
    {
      if ( a1 && (v12 = *(_QWORD *)(a1 + 224)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v13);
    }
    if ( v18 == 1 )
      CmDeleteDevicePanel(a1, a2);
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)v10;
}
