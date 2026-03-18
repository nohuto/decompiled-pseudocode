/*
 * XREFs of CmpInitializeSystemBiosInformation @ 0x140A38E74
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpBuildRegMultiSz @ 0x140A38D94 (CmpBuildRegMultiSz.c)
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
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = (HANDLE)-1LL;
  v2 = *(unsigned __int16 *)(v1 + 2704);
  v3 = *(unsigned __int16 *)(v1 + 2720);
  v4 = *(unsigned __int16 *)(v1 + 2736);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + v3 + v2 + 8, 0x20204D43u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(const void **)(v1 + 2712);
    v13 = 0;
    CmpBuildRegMultiSz((__int64)PoolWithTag, v6, &v13, v8, v2);
    CmpBuildRegMultiSz((__int64)v7, v9, &v13, *(const void **)(v1 + 2728), v3);
    CmpBuildRegMultiSz((__int64)v7, v10, &v13, *(const void **)(v1 + 2744), v4);
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
