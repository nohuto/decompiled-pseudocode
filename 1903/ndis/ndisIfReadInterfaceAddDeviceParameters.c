/*
 * XREFs of ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002CE8C (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0100DC0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C0101980 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C01073E0 (ndisIfReadHiddenFlag.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0107EE8 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(unsigned int *a1, _DEVICE_OBJECT *a2)
{
  int v4; // ebx
  struct Rtl::KString *v5; // rax
  void *v6; // rcx
  void **v8; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v9; // [rsp+78h] [rbp-41h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-39h] BYREF
  wchar_t Dest[48]; // [rsp+90h] [rbp-29h] BYREF

  Handle[0] = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey(a1, Handle, 1LL, 1LL);
  if ( v4 >= 0 )
  {
    v8 = Handle;
    if ( !(unsigned int)NetSetupPropertyBag::ReadUint64(
                          (NetSetupPropertyBag *)&v8,
                          (const struct _NETSETUPPROPKEY *)&unk_1C00CD938,
                          (unsigned __int64 *)a1 + 2) )
    {
      if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(&v8, (const struct _NETSETUPPROPKEY *)&unk_1C00CD920, a1 + 11) )
        *((_BYTE *)a1 + 40) = 1;
      v9 = 0;
      if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(&v8, (const struct _NETSETUPPROPKEY *)&unk_1C00CD908, &v9) )
      {
        *((_BYTE *)a1 + 72) = (v9 & 2) != 0;
        if ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                              &v8,
                              (const struct _NETSETUPPROPKEY *)&unk_1C00CD8F0,
                              (bool *)a1 + 73)
          && !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                              &v8,
                              (const struct _NETSETUPPROPKEY *)&unk_1C00CD8D8,
                              (bool *)a1 + 74)
          && !(unsigned int)ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v8, a2, (bool *)a1 + 75) )
        {
          v4 = RtlStringCchPrintfW(
                 Dest,
                 48LL,
                 L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                 *a1,
                 *((unsigned __int16 *)a1 + 2),
                 *((unsigned __int16 *)a1 + 3),
                 *((unsigned __int8 *)a1 + 8),
                 *((unsigned __int8 *)a1 + 9),
                 *((unsigned __int8 *)a1 + 10),
                 *((unsigned __int8 *)a1 + 11),
                 *((unsigned __int8 *)a1 + 12),
                 *((unsigned __int8 *)a1 + 13),
                 *((unsigned __int8 *)a1 + 14),
                 *((unsigned __int8 *)a1 + 15));
          if ( v4 < 0 )
            goto LABEL_15;
          v5 = Rtl::KString::Initialize(Dest);
          v6 = (void *)*((_QWORD *)a1 + 7);
          *((_QWORD *)a1 + 7) = v5;
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0x7274534Bu);
            v5 = (struct Rtl::KString *)*((_QWORD *)a1 + 7);
          }
          if ( !v5 )
          {
            v4 = -1073741670;
            goto LABEL_15;
          }
          if ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                                &v8,
                                (const struct _NETSETUPPROPKEY *)&unk_1C00CD840,
                                (bool *)a1 + 89) )
          {
            v4 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v4 = -1073741491;
  }
LABEL_15:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v4;
}
