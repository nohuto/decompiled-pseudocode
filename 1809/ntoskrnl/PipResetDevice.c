/*
 * XREFs of PipResetDevice @ 0x1409F6578
 * Callers:
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     _CmDeleteDevice @ 0x1408F7968 (_CmDeleteDevice.c)
 *     _CmDeleteDeviceRegKey @ 0x1408F8274 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PipResetDevice(__int64 a1, const WCHAR *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+44h] [rbp-45h] BYREF
  int v15; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  GUID Guid; // [rsp+60h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-19h] BYREF

  v15 = 0;
  v14 = 0;
  v13 = 0;
  DbgPrintEx(0x20u, 0, "Resetting device '%ws'\n", a2);
  if ( PipResetDeviceBreakOnReset )
    __debugbreak();
  v13 = 78;
  if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 9, (__int64)&v14, (__int64)SourceString, (__int64)&v13, 0) >= 0
    && v14 == 1
    && v13 >= 2
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
  {
    v4 = *(_QWORD *)Guid.Data4;
    v5 = *(_QWORD *)&Guid.Data1;
  }
  else
  {
    v4 = 0LL;
    v5 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
    *(_QWORD *)&Guid.Data1 = 0LL;
  }
  if ( CmIsRootEnumeratedDevice(a2) )
    goto LABEL_15;
  v6 = v5 - 0x11CEE3254D36E968LL;
  if ( !v6 )
    v6 = v4 - 0x1803E12B0008C1BFLL;
  if ( !v6 )
  {
LABEL_15:
    v8 = CmDeleteDeviceRegKey(a1, (__int64)a2, 17, 0);
    v7 = 0;
    if ( v8 < 0 )
      v7 = v8;
    v9 = CmDeleteDeviceRegKey(a1, (__int64)a2, 18, 0);
    if ( v7 >= 0 && v9 < 0 )
      v7 = v9;
    v13 = 4;
    if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 11, (__int64)&v14, (__int64)&v15, (__int64)&v13, 0) >= 0
      && v14 == 4
      && v13 == 4 )
    {
      v10 = v15;
    }
    else
    {
      v10 = 0;
    }
    if ( (v10 & 0x20) == 0 )
    {
      v15 = v10 | 0x20;
      v11 = CmSetDeviceRegProp(a1, (__int64)a2, 0LL, 0xBu, 4u, (__int64)&v15, 4u, 0);
      if ( v7 >= 0 && v11 < 0 )
        return (unsigned int)v11;
    }
  }
  else
  {
    return (unsigned int)CmDeleteDevice(a1, (__int64)a2, 0);
  }
  return (unsigned int)v7;
}
