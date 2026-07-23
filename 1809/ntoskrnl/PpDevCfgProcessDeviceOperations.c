/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x14070E158
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F5C74 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F5CB8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
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
  int v15; // [rsp+50h] [rbp-59h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v18[14]; // [rsp+90h] [rbp-19h] BYREF
  int v19; // [rsp+110h] [rbp+67h] BYREF
  int v20; // [rsp+120h] [rbp+77h] BYREF
  int P; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  memset(v18, 0, 0x48uLL);
  v19 = 0;
  P = 0;
  v13 = 0;
  v20 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
    v15 = 2752552;
    v16 = L"PendingConfiguration";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
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
