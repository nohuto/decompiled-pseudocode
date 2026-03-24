/*
 * XREFs of PopFxAcpiDispatchNotification @ 0x1402E8230
 * Callers:
 *     PoFxPlatformRequestHandler @ 0x14018D7B0 (PoFxPlatformRequestHandler.c)
 * Callees:
 *     PopFxAcpiForwardNotification @ 0x1402E833C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x1402E85A0 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x1402E86B8 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1402E87B0 (PopFxAcpiUnregisterDevice.c)
 *     PopFxAcpiValidateParameters @ 0x1402E8874 (PopFxAcpiValidateParameters.c)
 *     PopPluginAcpiNotificationStrict @ 0x1402E9314 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiDispatchNotification(__int64 a1)
{
  char v1; // di
  int v3; // r9d
  int v4; // ecx
  _QWORD *v5; // r10
  void *v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+18h] BYREF

  v1 = 0;
  LOBYTE(v10) = 0;
  LOBYTE(v9) = 0;
  if ( (unsigned __int8)PopFxAcpiValidateParameters() )
  {
    v5 = *(_QWORD **)(a1 + 16);
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        v4 = PopFxAcpiPrepareDevice(*v5, *(_QWORD *)(a1 + 16), &v9, &v10);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 40) = v9;
          *(_BYTE *)(a1 + 48) = v10;
        }
        break;
      case 2:
        PopPluginAcpiNotificationStrict(*(_QWORD *)(a1 + 40), 2uLL, *(_QWORD *)(a1 + 16));
        v4 = 0;
        break;
      case 3:
        v4 = PopFxAcpiRegisterDevice(*v5, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 16), &v9, &v10);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 48) = v9;
          *(_QWORD *)(a1 + 56) = v10;
        }
        break;
      default:
        v6 = *(void **)(a1 + 8);
        if ( *(_DWORD *)a1 != 4 )
        {
          v7 = PopFxAcpiForwardNotification((_DWORD)v6, *(_DWORD *)a1, *(_QWORD *)(a1 + 16), v3, (__int64)&v9);
          v1 = v9;
          v4 = v7;
          goto LABEL_15;
        }
        v4 = PopFxAcpiUnregisterDevice(v6);
        break;
    }
    v1 = 1;
    goto LABEL_15;
  }
  v4 = -1073741823;
LABEL_15:
  *(_BYTE *)(a1 + 32) = v1;
  return (unsigned int)v4;
}
