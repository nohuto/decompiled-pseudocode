/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x1406FAC94
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PiDevCfgQueryResolveValue @ 0x1402897AC (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x1406FB038 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x1406FB580 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(__int64 a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  int v7; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v8; // [rsp+28h] [rbp-58h]
  _BYTE v9[32]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID P; // [rsp+B0h] [rbp+30h] BYREF

  inited = 0;
  memset(v9, 0, sizeof(v9));
  P = 0LL;
  KeyHandle = 0LL;
  v8 = L"Status";
  v7 = 917516;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  ObjectAttributes.Length = 48;
  v5 = 0;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, v9);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v9, KeyHandle, (__int64)L"Blocked", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext(v9);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
