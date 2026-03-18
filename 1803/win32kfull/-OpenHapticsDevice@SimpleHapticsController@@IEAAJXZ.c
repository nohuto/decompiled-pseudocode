/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0214E38
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C02140A0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02143C8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C0213DCC (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  void **v1; // rdi
  unsigned int v3; // ebx
  PVOID *v4; // r14
  NTSTATUS v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  NTSTATUS v8; // eax
  const GUID *v9; // r9
  GUID *v10; // r8
  NTSTATUS v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  PVOID Object; // [rsp+68h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-9h] BYREF
  const char *v18; // [rsp+C8h] [rbp+17h]
  __int64 v19; // [rsp+D0h] [rbp+1Fh]
  PVOID *p_Object; // [rsp+D8h] [rbp+27h]
  __int64 v21; // [rsp+E0h] [rbp+2Fh]

  v1 = (void **)((char *)this + 24);
  v3 = 0;
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    v4 = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateFile(
             v1,
             2u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             0LL,
             0x80u,
             3u,
             3u,
             0x40000000u,
             0LL,
             0);
      v3 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          LODWORD(Object) = v5;
          p_Object = &Object;
          v21 = 4LL;
          v18 = "Function failed.";
          v19 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v6, v7, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          684,
          v3,
          "Function failed.");
LABEL_16:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
        return v3;
      }
      v8 = ObReferenceObjectByHandle(*v1, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v10 = (GUID *)Object;
      v3 = v8;
      *((_QWORD *)this + 7) = Object;
      if ( v8 < 0 )
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          LODWORD(Object) = v8;
          p_Object = &Object;
          v21 = 4LL;
          v18 = "Function failed.";
          v19 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v10, v9, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          692,
          v3,
          "Function failed.");
        goto LABEL_16;
      }
      v11 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v10,
              gpWin32kDriverObject,
              (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
              this,
              v4);
      v3 = v11;
      if ( v11 < 0 )
      {
        if ( (unsigned int)dword_1C031C790 > 2 )
        {
          LODWORD(Object) = v11;
          p_Object = &Object;
          v21 = 4LL;
          v18 = "Function failed.";
          v19 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v12, v13, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          700,
          v3,
          "Function failed.");
        goto LABEL_16;
      }
    }
  }
  return v3;
}
