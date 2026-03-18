/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x1407391D8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F93F4 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F99E8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FD444 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1407153A8 (PiDevCfgConfigureDeviceKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073A40C (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  int inited; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  int v18[28]; // [rsp+90h] [rbp-19h] BYREF
  int v19; // [rsp+110h] [rbp+67h] BYREF
  int v20; // [rsp+120h] [rbp+77h] BYREF
  int P; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v18, 0, 0x48uLL);
  v19 = 0;
  P = 0;
  v13 = 0;
  v20 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    v16 = L"PendingConfiguration";
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
    LODWORD(v15) = 2752552;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    inited = v4;
    if ( v4 == -1073741772 )
    {
      inited = 0;
    }
    else if ( v4 >= 0 )
    {
      inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)a2, v18);
      if ( inited >= 0 )
      {
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v18, KeyHandle, -1, &P, 0LL);
        if ( inited >= 0 )
        {
          if ( *(_QWORD *)&PiPnpRtlCtx && (v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
            v8 = *(_QWORD *)(v7 + 8);
          else
            v8 = 0LL;
          RegRtlDeleteTreeInternal(a2, L"PendingConfiguration", v8, 0LL);
          v9 = P;
          if ( P )
          {
            v10 = *(_QWORD *)(a1 + 48);
            v20 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v10,
                        (__int64)a2,
                        11,
                        (__int64)&v13,
                        (__int64)&v19,
                        (__int64)&v20,
                        0) >= 0
              && v13 == 4
              && v20 == 4 )
            {
              v12 = v19;
            }
            else
            {
              v12 = 0;
            }
            v19 = v9 | v12;
            PiDevCfgSetDeviceRegProp(v11, (__int64)v18, 0xBu, 4, (__int64)&v19, 4);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    inited = -1073741808;
  }
  PiDevCfgFreeDeviceContext((__int64)v18);
  return (unsigned int)inited;
}
