/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00AA288
 * Callers:
 *     CoreMsgCreatePort @ 0x1C00AA1B0 (CoreMsgCreatePort.c)
 * Callees:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C00AA3FC (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00AA504 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C00AA5E0 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C00AAB94 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00AB4D0 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AB6C8 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00BB5BC (wcsncmp.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS AlpcPortName; // ebx
  struct _GUID *v9; // rdi
  const unsigned __int16 *v10; // rcx
  void *v11; // rcx
  void *v13; // [rsp+20h] [rbp-89h] BYREF
  struct _UNICODE_STRING v14; // [rsp+28h] [rbp-81h] BYREF
  struct CoreMessagingK::CoreMsgObject *v15; // [rsp+38h] [rbp-71h] BYREF
  char v16; // [rsp+40h] [rbp-69h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  if ( !wcsncmp(L"Kernel\\MIT\\InputPort", L"Kernel\\", 7uLL) )
  {
    AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                     0,
                     (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ServerPortInfo::s_Vtbl,
                     &v15,
                     &v13);
    if ( AlpcPortName >= 0 )
    {
      v9 = (struct _GUID *)((char *)v15 + 8);
      AlpcPortName = CoreMessagingK::Runtime::CopyString(v7, v6, (char *)v15 + 40);
      if ( AlpcPortName >= 0 )
      {
        v14.MaximumLength = 136;
        v14.Buffer = (PWSTR)&v16;
        AlpcPortName = ExUuidCreate(v9 + 1);
        if ( AlpcPortName >= 0 )
        {
          AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v9 + 1, &v14);
          if ( AlpcPortName >= 0 )
          {
            AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(
                             a2,
                             &v14,
                             (struct CoreMessagingK::ServerPortInfo *)v9);
            if ( AlpcPortName >= 0 )
            {
              AlpcPortName = CoreMessagingK::RegistrarClient::RegisterAlpcPort(v9 + 1, &v14);
              if ( AlpcPortName >= 0 )
              {
                AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v10, v9 + 1);
                if ( AlpcPortName >= 0 )
                {
                  v11 = 0LL;
                  *(_QWORD *)&v9[3].Data1 = CoreMessagingK::ServerPorts::s_PortInfos;
                  AlpcPortName = 0;
                  *a4 = v13;
                  CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)v9;
                  v13 = 0LL;
                  goto LABEL_10;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    AlpcPortName = -1073741585;
  }
  v11 = v13;
LABEL_10:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)AlpcPortName;
}
