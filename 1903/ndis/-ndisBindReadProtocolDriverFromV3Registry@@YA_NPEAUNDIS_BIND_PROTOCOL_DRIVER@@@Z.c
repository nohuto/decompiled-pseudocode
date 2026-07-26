/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0101228
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0101E40 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___ @ 0x1C0101D60 (KRegKey--QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  const wchar_t *v2; // rax
  char v3; // bl
  __int64 v4; // r8
  __int64 v5; // r9
  NTSTATUS v6; // ecx
  __int16 v7; // dx
  Rtl::KString *value; // rdx
  bool v10[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  void **p_Handle; // [rsp+50h] [rbp-B8h] BYREF
  const wchar_t *v14; // [rsp+58h] [rbp-B0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+90h] [rbp-78h] BYREF
  wchar_t v17[256]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  p_Handle = 0LL;
  v14 = 0LL;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  v3 = 1;
  v4 = 0x7FFFLL;
  v5 = 2LL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v4;
  }
  while ( v4 );
  v6 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    v14 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(p_Handle) = 2 * v7;
    WORD1(p_Handle) = 2 * v7 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&p_Handle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  }
  if ( v6 < 0
    || (value = a1->Name.__ptr_.__value_,
        v16[0] = 0LL,
        v16[1] = 0LL,
        (int)KRegKey::QueryValueBlob__lambda_4c31316cd24b7a1a6237bdc5842aee51___(&KeyHandle, value, v16, v5) < 0) )
  {
    v3 = 0;
  }
  else
  {
    netsetupBuildObjectPath(4LL, v16, 0LL);
    Handle = 0LL;
    if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, v17, 0LL) < 0
      || (p_Handle = &Handle,
          (unsigned int)NetSetupPropertyBag::ReadBoolean(
                          &p_Handle,
                          (const struct _NETSETUPPROPKEY *)&unk_1C00CD2C0,
                          v10)) )
    {
      v3 = 0;
    }
    else if ( !v10[0] )
    {
      a1->ProtocolBindFlags |= 1u;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v3;
}
