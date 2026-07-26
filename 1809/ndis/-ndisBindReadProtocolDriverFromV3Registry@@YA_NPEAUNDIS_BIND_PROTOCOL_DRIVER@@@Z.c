/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C57C0
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C00C4DC8 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___ @ 0x1C00C7BE8 (KRegKey--QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___.c)
 */

__int64 __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  const wchar_t *v2; // rax
  HANDLE v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // bl
  NTSTATUS v6; // eax
  bool v8; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE *p_Handle; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v12; // [rsp+50h] [rbp-B0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[24]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v15[256]; // [rsp+A0h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  p_Handle = 0LL;
  v12 = 0LL;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v3 = 0LL;
  v4 = 0x7FFFLL;
  while ( *v2 )
  {
    ++v2;
    if ( !--v4 )
      goto LABEL_4;
  }
  v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  LOWORD(p_Handle) = 2 * (0x7FFF - v4);
  ObjectAttributes.Length = 48;
  WORD1(p_Handle) = (_WORD)p_Handle + 2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&p_Handle;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v3 = KeyHandle;
  if ( v6 < 0 )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_15;
  }
  if ( (int)KRegKey::QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___(&KeyHandle, a1->Name._Myptr, v14) < 0 )
  {
    v3 = KeyHandle;
    goto LABEL_4;
  }
  netsetupBuildObjectPath(4LL, v14, 0LL);
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, v15, 0LL) < 0
    || (p_Handle = &Handle,
        (unsigned int)NetSetupPropertyBag::ReadBoolean(
                        (NetSetupPropertyBag *)&p_Handle,
                        (const struct _NETSETUPPROPKEY *)&unk_1C0088630,
                        &v8)) )
  {
    v5 = 0;
  }
  else
  {
    if ( !v8 )
      a1->ProtocolBindFlags |= 1u;
    v5 = 1;
  }
  if ( Handle )
    ZwClose(Handle);
  v3 = KeyHandle;
LABEL_15:
  if ( v3 )
    ZwClose(v3);
  return v5;
}
