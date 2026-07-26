/*
 * XREFs of ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001CBB8 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C00C4C74 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C00C51C8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C00C6F40 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 *     ndisIfReadHiddenFlag @ 0x1C00C93F0 (ndisIfReadHiddenFlag.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(unsigned int *a1, _DEVICE_OBJECT *a2)
{
  int v4; // ebx
  struct Rtl::KString *v5; // rax
  struct Rtl::KString *v6; // rcx
  struct Rtl::KString *v7; // rbx
  void **v9; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v10; // [rsp+78h] [rbp-41h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-39h] BYREF
  wchar_t Dest[48]; // [rsp+90h] [rbp-29h] BYREF

  Handle[0] = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey(a1, Handle, 1LL, 1LL);
  if ( v4 >= 0 )
  {
    v9 = Handle;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint64(
                         (NetSetupPropertyBag *)&v9,
                         (const struct _NETSETUPPROPKEY *)&unk_1C0088C68,
                         (unsigned __int64 *)a1 + 2) )
      goto LABEL_20;
    if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(&v9, (const struct _NETSETUPPROPKEY *)&unk_1C0088C50, a1 + 7) )
      *((_BYTE *)a1 + 24) = 1;
    v10 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint32(&v9, (const struct _NETSETUPPROPKEY *)&unk_1C0088C38, &v10)
      || (*((_BYTE *)a1 + 57) = (v10 & 2) != 0,
          (unsigned int)NetSetupPropertyBag::ReadBoolean(
                          &v9,
                          (const struct _NETSETUPPROPKEY *)&unk_1C0088C20,
                          (bool *)a1 + 58))
      || (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         &v9,
                         (const struct _NETSETUPPROPKEY *)&unk_1C0088C08,
                         (bool *)a1 + 59)
      || (unsigned int)ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v9, a2, (bool *)a1 + 60) )
    {
LABEL_20:
      v4 = -1073741491;
    }
    else
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
      if ( v4 >= 0 )
      {
        v5 = Rtl::KString::Initialize(Dest);
        v6 = (struct Rtl::KString *)*((_QWORD *)a1 + 5);
        v7 = v5;
        if ( v5 != v6 )
        {
          if ( v6 )
            ExFreePoolWithTag(v6, 0x7274534Bu);
          *((_QWORD *)a1 + 5) = v7;
          v6 = v7;
        }
        if ( v6 )
          v4 = 0;
        else
          v4 = -1073741670;
      }
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v4;
}
