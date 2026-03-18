/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x1C01A2420
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0080730 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(_OWORD *a1, __int64 a2, __int64 a3)
{
  void *v4; // r14
  int v6; // edi
  int ProcessInformation; // [rsp+40h] [rbp-128h] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-120h] BYREF
  PVOID v10; // [rsp+50h] [rbp-118h] BYREF
  PVOID Object; // [rsp+58h] [rbp-110h] BYREF
  PVOID v12; // [rsp+60h] [rbp-108h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-100h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter1[16]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = (void *)(int)a2;
  v6 = -1073741790;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
    return (unsigned int)v6;
  if ( (_DWORD)v4 != -1414746709 || a3 )
  {
    v6 = CompositionObject::ResolveHandle(a1, 1u, 1, 1, &v12);
    if ( v6 < 0 )
      v6 = CompositionObject::ResolveHandle(a1, 1u, 1, 3, &v12);
    if ( v6 >= 0 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v4;
      v6 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v6 >= 0 )
      {
        ProcessInformation = 0;
        v6 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v6 >= 0 && (unsigned int)PsGetCurrentProcessSessionId() != ProcessInformation )
          v6 = -1073741790;
        if ( v6 >= 0 )
        {
          v6 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v10, 0LL);
            if ( v6 >= 0 )
            {
              v6 = ObDuplicateObject(v10, a1, Object, a3, 0x80000000, 0, 2, 1);
              ObfDereferenceObjectWithTag(v10, 0);
            }
            ObfDereferenceObjectWithTag(Object, 0);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      ObfDereferenceObject(v12);
    }
    return (unsigned int)v6;
  }
  if ( !PsGetVersion(0LL, 0LL, 0LL, 0LL) )
  {
    memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
    if ( a1 )
    {
      if ( a1 + 8 < a1 || (unsigned __int64)(a1 + 8) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)BugCheckParameter1 = *a1;
      *(_OWORD *)&BugCheckParameter1[2] = a1[1];
      *(_OWORD *)&BugCheckParameter1[4] = a1[2];
      *(_OWORD *)&BugCheckParameter1[6] = a1[3];
      *(_OWORD *)&BugCheckParameter1[8] = a1[4];
      *(_OWORD *)&BugCheckParameter1[10] = a1[5];
      *(_OWORD *)&BugCheckParameter1[12] = a1[6];
      *(_OWORD *)&BugCheckParameter1[14] = a1[7];
    }
    KeBugCheckEx(0xC0000017, (ULONG_PTR)BugCheckParameter1, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
