/*
 * XREFs of PiUEventDeviceNeedsInstall @ 0x1406FFEFC
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiUEventDeviceNeedsInstall(__int64 a1, _BYTE *a2)
{
  int ObjectProperty; // edx
  _BYTE v6[4]; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v7[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v8; // [rsp+98h] [rbp+28h] BYREF
  int v9; // [rsp+A0h] [rbp+30h] BYREF
  char v10; // [rsp+A8h] [rbp+38h] BYREF

  *a2 = 0;
  v8 = 0;
  v9 = 0;
  v7[0] = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_DevNodeStatus,
                     (__int64)v6,
                     (__int64)&v8,
                     4,
                     (__int64)&v10,
                     0);
  if ( ObjectProperty >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ProblemCode,
                       (__int64)v6,
                       (__int64)&v9,
                       4,
                       (__int64)&v10,
                       0);
    if ( ObjectProperty >= 0 )
    {
      if ( (v8 & 0x40000) != 0 || (v8 & 0x400) != 0 && v9 == 22 )
      {
        *a2 = 0;
      }
      else if ( (v8 & 0x400) != 0 && (v9 == 18 || v9 == 1)
             || (ObjectProperty = PnpGetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    a1,
                                    1u,
                                    0LL,
                                    0LL,
                                    (__int64)&DEVPKEY_Device_ConfigFlags,
                                    (__int64)v6,
                                    (__int64)v7,
                                    4,
                                    (__int64)&v10,
                                    0),
                 ObjectProperty >= 0)
             && (v7[0] & 0x420) != 0 )
      {
        *a2 = 1;
      }
    }
  }
  return (unsigned int)ObjectProperty;
}
