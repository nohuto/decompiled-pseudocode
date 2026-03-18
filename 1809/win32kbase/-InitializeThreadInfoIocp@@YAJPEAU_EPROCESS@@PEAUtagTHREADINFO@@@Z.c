/*
 * XREFs of ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C00175A0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 */

__int64 __fastcall InitializeThreadInfoIocp(struct _EPROCESS *a1, void **a2)
{
  HANDLE *v2; // r14
  int v5; // ebx
  void **v6; // rdi
  int v7; // edx
  char v9; // [rsp+38h] [rbp-50h]
  struct _OBJECT_ATTRIBUTES v10; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v2 = a2 + 175;
  v10.Length = 48;
  v10.Attributes = 512;
  v10.RootDirectory = 0LL;
  v10.ObjectName = 0LL;
  *(_OWORD *)&v10.SecurityDescriptor = 0LL;
  v5 = ZwCreateIoCompletion(a2 + 175, 0x1F0003u, &v10, 0);
  if ( v5 < 0 )
  {
    *v2 = 0LL;
    return (unsigned int)v5;
  }
  v5 = ObReferenceObjectByHandle(*v2, 0x1F0003u, 0LL, 0, &Object, 0LL);
  a2[174] = Object;
  if ( v5 < 0 )
  {
    a2[174] = 0LL;
    return (unsigned int)v5;
  }
  v6 = a2 + 176;
  v9 = 0;
  v5 = ObDuplicateObject(a1, *v2, a1, a2 + 176, 0, 0, 2, v9);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = ProtectHandle(*v6, v7, 0LL, 1);
  if ( v5 < 0 )
  {
    ObCloseHandle(*v6, 1);
    goto LABEL_11;
  }
  v6 = a2 + 178;
  v5 = ZwCreateWaitCompletionPacket(a2 + 178, 1LL, &v10);
  if ( v5 < 0 )
  {
LABEL_11:
    *v6 = 0LL;
    return (unsigned int)v5;
  }
  return (unsigned int)ZwAssociateWaitCompletionPacket(*v6, *v2, a2[177], 0LL, 1LL, 0, 0LL, 0LL);
}
