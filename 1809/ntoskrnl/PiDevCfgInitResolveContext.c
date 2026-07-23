/*
 * XREFs of PiDevCfgInitResolveContext @ 0x1406FB580
 * Callers:
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406FAC94 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x1406FB038 (PiDevCfgFreeResolveContext.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14083FDE4 (PiDrvDbResolveKeyFilePaths.c)
 */

__int64 __fastcall PiDevCfgInitResolveContext(void *a1, void *a2, HANDLE *a3)
{
  NTSTATUS v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v17; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(a3, 0, 0x20uLL);
  *a3 = a1;
  v17 = L"Variables";
  a3[2] = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  v16 = 1310738;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(a3 + 2, 0x20019u, &ObjectAttributes);
  v7 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7F0uLL, 0x63647050u);
    a3[3] = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_4;
    }
    v11 = 0LL;
    v12 = 127LL;
    do
    {
      v13 = (char *)a3[3] + v11;
      v11 += 16LL;
      v13[1] = v13;
      *v13 = v13;
      --v12;
    }
    while ( v12 );
  }
  KeyHandle = 0LL;
  v17 = L"Setup\\ResolveFilePaths";
  v16 = 3014700;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v7 = v8;
  if ( v8 == -1073741772 || v8 == -1073741444 )
    goto LABEL_3;
  if ( v8 < 0 )
    goto LABEL_4;
  v7 = PiDrvDbResolveKeyFilePaths(a2);
  if ( v7 < 0 )
  {
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( *(_QWORD *)&PiPnpRtlCtx && (v14 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v15 = *(_QWORD *)(v14 + 8);
  else
    v15 = 0LL;
  RegRtlDeleteTreeInternal(KeyHandle, 0LL, v15, 0LL);
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v7 < 0 )
    PiDevCfgFreeResolveContext((__int64)a3);
  return (unsigned int)v7;
}
