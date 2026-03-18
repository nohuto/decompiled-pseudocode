/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EB7E0
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C00EBA8C (xxxInitInput.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  void *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v29[52]; // [rsp+88h] [rbp-80h] BYREF
  int v30; // [rsp+BCh] [rbp-4Ch]

  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    if ( gdwInAtomicOperation )
    {
      v22 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v23, v24);
    KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    goto LABEL_16;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result < 0 )
    return result;
  v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)a1 + 7) = Object;
  ZwClose(EventHandle);
  if ( v3 < 0 )
    return v3;
  if ( (*(_DWORD *)a1 & 2) == 0 && !(unsigned int)xxxInitInput(a1) )
  {
    v3 = -1073741801;
LABEL_24:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
    return v3;
  }
  v3 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v3 < 0 )
    goto LABEL_24;
  v4 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v5 = Handle;
  v3 = v4;
  *((_QWORD *)a1 + 5) = Object;
  ZwClose(v5);
  if ( v3 < 0 )
    goto LABEL_24;
  v6 = (void *)*((_QWORD *)a1 + 5);
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v29, 1LL, a1) )
    goto LABEL_26;
  v10 = 0;
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v8, v9);
  v15 = PsGetCurrentProcess(v12, v11, v13, v14) == gpepCSRSS
      ? LpcRequestPort(CsrApiPort, v29)
      : LpcRequestWaitReplyPort(CsrApiPort, v29, v29);
  if ( v15 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v17, v16, v18, v19);
    if ( v30 >= 0 || CurrentProcess == gpepCSRSS )
    {
      KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  EnterCrit(0LL, 1LL);
  if ( !v10 )
  {
LABEL_26:
    ObfDereferenceObject(*((PVOID *)a1 + 7));
    ObfDereferenceObject(v6);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
    return -1073741801;
  }
LABEL_16:
  ObfDereferenceObject(v6);
  v21 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v21 & 8) != 0 )
  {
    *(_DWORD *)a1 = v21 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v21 | 1;
  return 0;
}
