/*
 * XREFs of ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0034768
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 * Callees:
 *     ProtectHandle @ 0x1C00348F8 (ProtectHandle.c)
 */

__int64 __fastcall InitializeThreadInfoIocp(struct _EPROCESS *a1, void **a2)
{
  HANDLE *v2; // r14
  NTSTATUS v5; // ebx
  HANDLE *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r9
  char v10; // [rsp+38h] [rbp-50h]
  struct _OBJECT_ATTRIBUTES v11; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v2 = a2 + 178;
  *(_QWORD *)&v11.Length = 48LL;
  *(_QWORD *)&v11.Attributes = 512LL;
  v11.RootDirectory = 0LL;
  v11.ObjectName = 0LL;
  *(_OWORD *)&v11.SecurityDescriptor = 0LL;
  v5 = ZwCreateIoCompletion(a2 + 178, 0x1F0003u, &v11, 0);
  if ( v5 < 0 )
  {
    *v2 = 0LL;
    return (unsigned int)v5;
  }
  v5 = ObReferenceObjectByHandle(*v2, 0x1F0003u, 0LL, 0, &Object, 0LL);
  a2[177] = Object;
  if ( v5 < 0 )
  {
    a2[177] = 0LL;
    return (unsigned int)v5;
  }
  v6 = a2 + 179;
  v10 = 0;
  v5 = ObDuplicateObject(a1, *v2, a1, a2 + 179, 0, 0, 2, v10);
  if ( v5 < 0 )
    goto LABEL_11;
  LOBYTE(v8) = 1;
  v5 = ProtectHandle(*v6, v7, 0LL, v8);
  if ( v5 < 0 )
  {
    ObCloseHandle(*v6, 1);
    goto LABEL_11;
  }
  v6 = a2 + 181;
  v5 = ZwCreateWaitCompletionPacket(a2 + 181, 1LL, &v11);
  if ( v5 < 0 )
  {
LABEL_11:
    *v6 = 0LL;
    return (unsigned int)v5;
  }
  return (unsigned int)ZwAssociateWaitCompletionPacket(*v6, *v2, a2[180], 0LL);
}
