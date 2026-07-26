/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01071C8
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C00C4DC8 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001CBB8 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00C8F10 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C0106DE8 (KRegKey--QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___.c)
 */

__int64 __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  int v4; // r15d
  NTSTATUS v5; // r8d
  __int16 v6; // ax
  char v7; // bl
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  __int16 v10; // r14
  unsigned __int8 v11; // bl
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  KRegKey v14; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v15; // [rsp+88h] [rbp-80h]
  unsigned int v16; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING v17; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t Dest[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  v14.m_ptr = 0LL;
  v15 = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  KeyHandle = 0LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = -1073741811;
  v5 = -1073741811;
  if ( v2 )
  {
    v5 = 0;
    v6 = 0x7FFF - v2;
  }
  else
  {
    v6 = 0;
  }
  if ( v2 )
  {
    v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v14.m_ptr) = 2 * v6;
    WORD1(v14.m_ptr) = 2 * v6 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  }
  if ( v5 < 0
    || (int)KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___(
              &KeyHandle,
              &a1->Name._Myptr->_UNICODE_STRING,
              &v19) < 0
    || (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%02"
               "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              (unsigned int)v19,
              WORD2(v19),
              WORD3(v19),
              BYTE8(v19),
              BYTE9(v19),
              BYTE10(v19),
              BYTE11(v19),
              BYTE12(v19),
              BYTE13(v19),
              BYTE14(v19),
              HIBYTE(v19)) < 0 )
  {
    v11 = 0;
    goto LABEL_35;
  }
  v14.m_ptr = 0LL;
  if ( (int)KRegKey::Open(&v14, 1u, Dest, 0LL) < 0 )
    goto LABEL_31;
  v7 = 0;
  v8 = L"NoStartAtBoot";
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  v9 = 0x7FFFLL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( v9 )
  {
    v4 = 0;
    v10 = 0x7FFF - v9;
  }
  else
  {
    v10 = 0;
  }
  if ( v9 )
  {
    v17.Buffer = L"NoStartAtBoot";
    v17.Length = 2 * v10;
    v17.MaximumLength = 2 * v10 + 2;
    if ( KRegKey::QueryValueUlong(&v14, &v17, &v16) == -1073741772 || !v16 )
    {
      v7 = 0;
    }
    else
    {
      if ( v16 != 1 )
      {
        v4 = -1073739509;
        goto LABEL_27;
      }
      v7 = 1;
    }
    v4 = 0;
  }
LABEL_27:
  if ( v4 >= 0 )
  {
    if ( !v7 )
      a1->ProtocolBindFlags |= 1u;
    v11 = 1;
    goto LABEL_32;
  }
LABEL_31:
  v11 = 0;
LABEL_32:
  if ( v14.m_ptr )
    ZwClose(v14.m_ptr);
LABEL_35:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v11;
}
