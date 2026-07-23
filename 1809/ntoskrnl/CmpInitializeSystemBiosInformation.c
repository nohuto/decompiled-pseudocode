/*
 * XREFs of CmpInitializeSystemBiosInformation @ 0x1409F4A30
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpBuildRegMultiSz @ 0x1409F4950 (CmpBuildRegMultiSz.c)
 */

void __fastcall CmpInitializeSystemBiosInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  char *PoolWithTag; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  const void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  v2 = *(unsigned __int16 *)(v1 + 2680);
  v3 = *(unsigned __int16 *)(v1 + 2696);
  v4 = *(unsigned __int16 *)(v1 + 2712);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + v3 + v2 + 8, 0x20204D43u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(const void **)(v1 + 2688);
    v13 = 0;
    CmpBuildRegMultiSz((__int64)PoolWithTag, v6, &v13, v8, v2);
    CmpBuildRegMultiSz((__int64)v7, v9, &v13, *(const void **)(v1 + 2704), v3);
    CmpBuildRegMultiSz((__int64)v7, v10, &v13, *(const void **)(v1 + 2720), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpSystemBiosVersionString, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}
