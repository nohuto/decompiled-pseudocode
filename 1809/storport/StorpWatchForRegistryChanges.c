/*
 * XREFs of StorpWatchForRegistryChanges @ 0x1C0027070
 * Callers:
 *     DllInitialize @ 0x1C0023950 (DllInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorpWatchForRegistryChanges(char *P)
{
  char v1; // si
  char v2; // al
  char *v3; // rdi
  const UNICODE_STRING *v5; // r14
  char *PoolWithTag; // rax
  unsigned int Length; // ecx
  PVOID v8; // rax
  void *v9; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  v2 = P[32];
  v3 = 0LL;
  if ( !v2 || P[33] )
  {
    ObjectAttributes.RootDirectory = 0LL;
    v5 = (const UNICODE_STRING *)(P + 40);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(P + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x10u, &ObjectAttributes) < 0
      || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x57526152u), (v3 = PoolWithTag) == 0LL) )
    {
LABEL_17:
      if ( KeyHandle )
        ZwClose(KeyHandle);
      return;
    }
    Length = v5->Length;
    v1 = 1;
    *((_WORD *)PoolWithTag + 21) = Length;
    v8 = ExAllocatePoolWithTag(PagedPool, Length, 0x53446152u);
    *((_QWORD *)v3 + 6) = v8;
    if ( !v8 )
      goto LABEL_13;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 40), v5);
    v3[32] = 1;
    v3[33] = P[33];
    v3[34] = 1;
    *((_QWORD *)v3 + 7) = KeyHandle;
    *((_QWORD *)v3 + 8) = *((_QWORD *)P + 8);
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 2) = StorpWatchForRegistryChanges;
    *((_QWORD *)v3 + 3) = v3;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, (PIO_APC_ROUTINE)v3, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) < 0 )
    {
LABEL_13:
      if ( v3 )
      {
        v9 = (void *)*((_QWORD *)v3 + 6);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        ExFreePoolWithTag(v3, 0);
      }
      goto LABEL_17;
    }
    v2 = P[32];
  }
  if ( v2 )
  {
    (*((void (__fastcall **)(char *))P + 8))(P);
    ZwClose(*((HANDLE *)P + 7));
    if ( P[34] )
      ExFreePoolWithTag(*((PVOID *)P + 6), 0);
    ExFreePoolWithTag(P, 0);
  }
  if ( !v1 )
    goto LABEL_13;
}
