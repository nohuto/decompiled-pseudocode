/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x1C01663E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0013110 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C006E960 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(_OWORD *a1, int a2, _QWORD *a3)
{
  void *v4; // r15
  int v6; // edi
  int ProcessInformation; // [rsp+40h] [rbp-118h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-110h] BYREF
  void *ProcessHandle; // [rsp+50h] [rbp-108h] BYREF
  PVOID v11; // [rsp+58h] [rbp-100h] BYREF
  PVOID Object; // [rsp+60h] [rbp-F8h] BYREF
  ULONG Tag[2]; // [rsp+68h] [rbp-F0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+70h] [rbp-E8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter1[16]; // [rsp+B0h] [rbp-A8h] BYREF

  v4 = (void *)a2;
  v6 = -1073741790;
  if ( !UserIsCurrentProcessDwm((__int64)a1) )
    return (unsigned int)v6;
  if ( (_DWORD)v4 != -1414746709 || a3 )
  {
    v6 = CompositionObject::ResolveHandle(a1, 1u, 1, 1, Tag);
    if ( v6 < 0 )
      v6 = CompositionObject::ResolveHandle(a1, 1u, 1, 3, Tag);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v4;
      v6 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v6 >= 0 )
      {
        v6 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v6 >= 0 && (unsigned int)PsGetCurrentProcessSessionId() != ProcessInformation )
          v6 = -1073741790;
        if ( v6 >= 0 )
        {
          v6 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v11, 0LL);
            if ( v6 >= 0 )
            {
              Handle = (HANDLE)-1LL;
              v6 = ObDuplicateObject(v11, a1, Object, &Handle, 0x80000000, 0, 2, 1);
              if ( v6 >= 0 )
              {
                if ( (unsigned __int64)a3 >= MmUserProbeAddress )
                  a3 = (_QWORD *)MmUserProbeAddress;
                *a3 = Handle;
              }
              ObfDereferenceObjectWithTag(v11, 0);
            }
            ObfDereferenceObjectWithTag(Object, 0);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      CompositionObject::Release(*(CompositionObject **)Tag);
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
