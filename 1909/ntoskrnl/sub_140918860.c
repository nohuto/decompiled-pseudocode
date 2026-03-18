/*
 * XREFs of sub_140918860 @ 0x140918860
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x140626870 (ExpHwidAppendDeviceInfoBlock.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140943EDC (PnpGetDeviceInstanceRegistryValue.c)
 */

__int64 __fastcall sub_140918860(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  PVOID v9; // rbx
  wchar_t *v10; // rdi
  unsigned int v11; // r14d
  NTSTATUS DeviceInstanceRegistryValue; // eax
  char v13; // al
  unsigned int appended; // edi
  __int64 v16; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v18[10]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v19[38]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[16]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v19, 0, 0x124uLL);
  memset(v18, 0, 0x20uLL);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  P = 0LL;
  if ( a2 )
  {
    if ( (int)ExpHwidSendSynchronousIrpToDevice(a2, 0x410000u, 0LL, 0, v19, 0x124u, 0LL, 0LL) < 0 )
      goto LABEL_14;
    LODWORD(v16) = v19[1];
    DeviceInstanceRegistryValue = RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%04x%08x", WORD2(v19[1]), v16);
    if ( DeviceInstanceRegistryValue < 0 )
      goto LABEL_14;
    v10 = pszDest;
    v11 = 26;
  }
  else
  {
    DeviceInstanceRegistryValue = PnpGetDeviceInstanceRegistryValue(*(_QWORD *)(a3 + 8), v6, v7, v8, (__int64)&P);
    v9 = P;
    if ( DeviceInstanceRegistryValue < 0 )
    {
LABEL_14:
      appended = 0;
      goto LABEL_15;
    }
    if ( *((_DWORD *)P + 1) == 1 && *((_DWORD *)P + 3) <= 0x1Au )
    {
      v11 = *((_DWORD *)P + 3);
      v10 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    }
    else
    {
      DeviceInstanceRegistryValue = -1073741823;
    }
  }
  if ( DeviceInstanceRegistryValue < 0 )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v13 = *(_BYTE *)(a3 + 32);
    v18[7] = 0;
    BYTE2(v18[1]) = v13;
    HIBYTE(v18[1]) = *(_BYTE *)(a3 + 33);
    BYTE1(v18[1]) = *(_BYTE *)(a3 + 34);
    v18[2] = *(_DWORD *)(a3 + 36);
    LOBYTE(v18[1]) = 2;
    *(GUID *)&v18[3] = GUID_BTHPORT_DEVICE_INTERFACE;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, (__int64)v18, v10, v11);
LABEL_15:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return appended;
}
