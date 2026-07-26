/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01275A4
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0101E40 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002CE7C (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0107E54 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C0127144 (KRegKey--QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  const wchar_t *v2; // rax
  __int64 v3; // rdx
  char v4; // r15
  NTSTATUS v5; // ecx
  __int16 v6; // ax
  Rtl::KString *value; // rdx
  char v8; // bl
  __int64 v9; // rdx
  const wchar_t *v10; // rax
  signed int v11; // ecx
  __int16 v12; // r14
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v16; // [rsp+88h] [rbp-80h]
  unsigned int v17; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING v18; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t Dest[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  Handle = 0LL;
  v16 = 0LL;
  v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  v3 = 0x7FFFLL;
  v4 = 1;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
    v6 = 0x7FFF - v3;
  else
    v6 = 0;
  if ( v3 )
  {
    v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(Handle) = 2 * v6;
    WORD1(Handle) = 2 * v6 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Handle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  }
  if ( v5 < 0
    || (value = a1->Name.__ptr_.__value_,
        v20 = 0uLL,
        (int)KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___(
               &KeyHandle,
               &value->_UNICODE_STRING,
               &v20) < 0)
    || (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%02"
               "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              (unsigned int)v20,
              WORD2(v20),
              WORD3(v20),
              BYTE8(v20),
              BYTE9(v20),
              BYTE10(v20),
              BYTE11(v20),
              BYTE12(v20),
              BYTE13(v20),
              BYTE14(v20),
              HIBYTE(v20)) < 0 )
  {
    v4 = 0;
    goto LABEL_34;
  }
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, Dest, 0LL) < 0 )
    goto LABEL_30;
  *(_QWORD *)&v18.Length = 0LL;
  v8 = 0;
  v18.Buffer = 0LL;
  v9 = 0x7FFFLL;
  v10 = L"NoStartAtBoot";
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
    v12 = 0x7FFF - v9;
  else
    v12 = 0;
  if ( v9 )
  {
    v18.Buffer = L"NoStartAtBoot";
    v18.Length = 2 * v12;
    v18.MaximumLength = 2 * v12 + 2;
    if ( KRegKey::QueryValueUlong((KRegKey *)&Handle, &v18, &v17) == -1073741772 || !v17 )
    {
      v8 = 0;
    }
    else
    {
      if ( v17 != 1 )
      {
        v11 = -1073739509;
        goto LABEL_27;
      }
      v8 = 1;
    }
    v11 = 0;
  }
LABEL_27:
  if ( v11 >= 0 )
  {
    if ( !v8 )
      a1->ProtocolBindFlags |= 1u;
    goto LABEL_31;
  }
LABEL_30:
  v4 = 0;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
LABEL_34:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
