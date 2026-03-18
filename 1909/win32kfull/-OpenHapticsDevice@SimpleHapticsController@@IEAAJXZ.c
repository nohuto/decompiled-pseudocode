/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0256E60
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0255FE0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0256330 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C0255CAC (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  void **v1; // rdi
  unsigned int v3; // ebx
  PVOID *v4; // r14
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  PVOID v7; // r8
  NTSTATUS v8; // eax
  PVOID Object; // [rsp+68h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-9h] BYREF
  const char *v13; // [rsp+C8h] [rbp+17h]
  __int64 v14; // [rsp+D0h] [rbp+1Fh]
  PVOID *p_Object; // [rsp+D8h] [rbp+27h]
  __int64 v16; // [rsp+E0h] [rbp+2Fh]

  v1 = (void **)((char *)this + 24);
  v3 = 0;
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    v4 = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
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
        if ( (unsigned int)dword_1C031F2D0 > 2 )
        {
          LODWORD(Object) = v5;
          p_Object = &Object;
          v16 = 4LL;
          v13 = "Function failed.";
          v14 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          706,
          v3,
          "Function failed.");
LABEL_16:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
        return v3;
      }
      v6 = ObReferenceObjectByHandle(*v1, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v7 = Object;
      v3 = v6;
      *((_QWORD *)this + 7) = Object;
      if ( v6 < 0 )
      {
        if ( (unsigned int)dword_1C031F2D0 > 2 )
        {
          LODWORD(Object) = v6;
          p_Object = &Object;
          v16 = 4LL;
          v13 = "Function failed.";
          v14 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          714,
          v3,
          "Function failed.");
        goto LABEL_16;
      }
      v8 = IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             v7,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
             this,
             v4);
      v3 = v8;
      if ( v8 < 0 )
      {
        if ( (unsigned int)dword_1C031F2D0 > 2 )
        {
          LODWORD(Object) = v8;
          p_Object = &Object;
          v16 = 4LL;
          v13 = "Function failed.";
          v14 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          722,
          v3,
          "Function failed.");
        goto LABEL_16;
      }
    }
  }
  return v3;
}
