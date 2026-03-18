/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x14070AE3C
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14070ACE0 (_CmAddDeviceToContainer.c)
 * Callees:
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406F30B4 (_PnpCtxRegQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140706AA4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x140707418 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x140708C20 (_PnpCtxRegSetValue.c)
 *     _CmCreateDeviceContainer @ 0x14070B01C (_CmCreateDeviceContainer.c)
 *     _PnpCtxRegDeleteKey @ 0x140933B34 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteDeviceContainer @ 0x1409364D0 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int DeviceContainer; // eax
  __int64 v11; // rcx
  char *v12; // r14
  int v13; // ebx
  int Value; // eax
  _BYTE v16[4]; // [rsp+40h] [rbp-30h] BYREF
  ULONG v17; // [rsp+44h] [rbp-2Ch] BYREF
  ULONG v18; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-20h] BYREF
  char *v20; // [rsp+58h] [rbp-18h] BYREF
  char *v21; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  *a5 = 0;
  v16[0] = 0;
  v18 = 0;
  v17 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, (_DWORD)a3, (unsigned int)&v21, (__int64)v16);
  v12 = v21;
  v13 = DeviceContainer;
  if ( DeviceContainer >= 0 )
  {
    v13 = PnpCtxRegCreateKey(a1, v21, L"BaseContainers", 0, 4u, 0LL, (HANDLE *)&v20, &v18);
    if ( v13 >= 0 )
    {
      v13 = PnpCtxRegCreateKey(a1, v20, a3, 0, 3u, 0LL, &v19, &v17);
      if ( v13 >= 0 )
      {
        if ( v17 == 2 )
        {
          LODWORD(a5) = 0;
          Value = PnpCtxRegQueryValue(v11, v19, a4, 0LL, 0LL, (unsigned int *)&a5);
          v13 = Value;
          if ( Value == -1073741772 || Value == -1073741444 )
          {
            v13 = 0;
          }
          else if ( !Value )
          {
            *v5 = 1;
            goto LABEL_9;
          }
        }
        if ( v13 >= 0 && !*v5 )
        {
          v13 = PnpCtxRegSetValue(v11, v19, (__int64)a4, 0LL, 0LL, 0);
          if ( v13 >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, (__int64)a4, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
        }
      }
    }
  }
  if ( v13 == -1073741444 )
    v13 = -1073741772;
  if ( v13 < 0 )
  {
    if ( v17 == 1 )
      PnpCtxRegDeleteKey(a1, v19, 0LL);
    if ( v18 == 1 )
      PnpCtxRegDeleteKey(a1, v20, 0LL);
    if ( v16[0] == 1 )
      CmDeleteDeviceContainer(a1, a2);
  }
LABEL_9:
  if ( v19 )
    PnpCtxRegCloseKey(v11, v19);
  if ( v20 )
    PnpCtxRegCloseKey(v11, v20);
  if ( v12 )
    PnpCtxRegCloseKey(v11, v12);
  return (unsigned int)v13;
}
