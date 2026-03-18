/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0083FAC
 * Callers:
 *     CoreMsgCreatePort @ 0x1C0083ED4 (CoreMsgCreatePort.c)
 * Callees:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C0084120 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00843A8 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C0084554 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0084DD4 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C0085434 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00854D8 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00A69AC (wcsncmp.c)
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
        *(_QWORD *)&v14.Length = 8912896LL;
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
