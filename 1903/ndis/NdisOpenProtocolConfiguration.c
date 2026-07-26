/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C00238B0
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C1F8 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

_UNKNOWN **__fastcall NdisOpenProtocolConfiguration(int *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  __int64 MaximumLength; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  int v9; // edx
  NTSTATUS v10; // eax
  int v11; // eax
  _UNKNOWN **result; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  v13[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v13[0] = 6815846LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      &a3->Length);
  MaximumLength = a3->MaximumLength;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + 178, 0x6370444Eu);
  v8 = PoolWithTag;
  v9 = PoolWithTag == 0LL ? 0xC000009A : 0;
  *a1 = v9;
  if ( v9 )
  {
    *a2 = 0LL;
    v11 = *a1;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, MaximumLength + 178);
  memmove(v8 + 176, a3->Buffer, a3->Length);
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 2) = v8 + 40;
  v8[40] = 10;
  *(_BYTE *)(*((_QWORD *)v8 + 2) + 1LL) = 1;
  *(_WORD *)(*((_QWORD *)v8 + 2) + 2LL) = 40;
  *(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) |= 2u;
  *((_DWORD *)v8 + 24) = 0;
  *((_QWORD *)v8 + 15) = 0LL;
  *((_DWORD *)v8 + 32) = 0;
  *((_QWORD *)v8 + 17) = 0LL;
  *((_QWORD *)v8 + 8) = &ndisSaveParameters;
  *((_DWORD *)v8 + 18) = 20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  *a1 = v10;
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = a3;
    if ( ZwOpenKey((PHANDLE)v8 + 4, 0xBu, &ObjectAttributes) < 0 )
      *((_QWORD *)v8 + 4) = 0LL;
    *a2 = v8;
    *a1 = 0;
    v11 = 0;
LABEL_8:
    if ( v11 >= 0 )
      goto LABEL_9;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v9,
                          13,
                          41,
                          (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids);
  }
  return result;
}
