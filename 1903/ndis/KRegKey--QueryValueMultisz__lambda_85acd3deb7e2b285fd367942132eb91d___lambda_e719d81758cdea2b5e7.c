/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___ @ 0x1C0109DF8
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C0109D0C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C0102A78 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0105600 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___(
        HANDLE *a1,
        __int64 a2,
        unsigned int *a3,
        Ndis::BindStack *a4)
{
  PVOID PoolWithTag; // rbx
  _BYTE *v8; // r14
  NTSTATUS ValueKey; // eax
  NTSTATUS v10; // ebp
  __int64 v11; // rax
  const wchar_t *v12; // rbp
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  const wchar_t *v16; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  PoolWithTag = 0LL;
  v8 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               *a1,
               (PUNICODE_STRING)&Ndis::ProtocolListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v10 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_13;
    v10 = ZwQueryValueKey(
            *a1,
            (PUNICODE_STRING)&Ndis::ProtocolListValueName,
            KeyValuePartialInformation,
            PoolWithTag,
            ResultLength[0],
            ResultLength);
    if ( v10 < 0 )
      goto LABEL_20;
    v8 = PoolWithTag;
  }
  else if ( ValueKey < 0 )
  {
    goto LABEL_20;
  }
  if ( *((_DWORD *)v8 + 1) != 7 )
  {
    v10 = -1073741788;
    goto LABEL_20;
  }
  v11 = *((unsigned int *)v8 + 2);
  if ( (v11 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_20;
  }
  v12 = (const wchar_t *)(v8 + 12);
  v13 = v8 + 12;
  v14 = (unsigned __int64)&v8[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v8 + 12) >= v14 )
    goto LABEL_29;
LABEL_6:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_6;
        break;
      }
    }
LABEL_29:
    v10 = -1073741789;
    goto LABEL_20;
  }
  if ( v15 > 0x80 )
  {
    v10 = -1073740757;
    goto LABEL_20;
  }
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          a3,
          v15) )
  {
LABEL_13:
    v10 = -1073741670;
    goto LABEL_20;
  }
  while ( *v12 )
  {
    v16 = v12;
    do
      ++v16;
    while ( *v16 );
    v10 = Ndis::BindStack::AddStaticProtocolBinding(a4, v12);
    if ( v10 < 0 )
      goto LABEL_20;
    v12 = v16 + 1;
  }
  v10 = 0;
LABEL_20:
  if ( PoolWithTag )
    operator delete[](PoolWithTag);
  return (unsigned int)v10;
}
