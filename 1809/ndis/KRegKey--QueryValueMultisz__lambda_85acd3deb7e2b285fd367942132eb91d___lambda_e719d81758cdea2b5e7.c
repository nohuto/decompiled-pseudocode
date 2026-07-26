/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___ @ 0x1C00CEFA4
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00CEEB8 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C00BFA48 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00CF10C (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        Ndis::BindStack *a4)
{
  wchar_t *v7; // rbx
  wchar_t *PoolWithTag; // r14
  NTSTATUS ValueKey; // eax
  int v10; // ebp
  __int64 v11; // rax
  const wchar_t *v12; // rbp
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  const wchar_t *v16; // rdi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  v7 = 0LL;
  PoolWithTag = (wchar_t *)KeyValueInformation;
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
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x7A536C4Du);
    if ( !PoolWithTag )
    {
LABEL_13:
      v10 = -1073741670;
      goto LABEL_20;
    }
    operator delete[](0LL);
    v7 = PoolWithTag;
    ValueKey = ZwQueryValueKey(
                 *a1,
                 (PUNICODE_STRING)&Ndis::ProtocolListValueName,
                 KeyValuePartialInformation,
                 PoolWithTag,
                 ResultLength[0],
                 ResultLength);
    v10 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) != 7 )
    {
      v10 = -1073741788;
      goto LABEL_20;
    }
    v11 = *((unsigned int *)PoolWithTag + 2);
    if ( (v11 & 1) != 0 )
    {
      v10 = -1073741811;
      goto LABEL_20;
    }
    v12 = PoolWithTag + 6;
    v13 = PoolWithTag + 6;
    v14 = (unsigned __int64)PoolWithTag + v11 + 12;
    v15 = 0;
    if ( (unsigned __int64)(PoolWithTag + 6) >= v14 )
    {
LABEL_26:
      v10 = -1073741789;
      goto LABEL_20;
    }
LABEL_6:
    if ( *v13 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)++v13 >= v14 )
          goto LABEL_26;
        if ( !*v13 )
        {
          ++v15;
          if ( (unsigned __int64)++v13 < v14 )
            goto LABEL_6;
          goto LABEL_26;
        }
      }
    }
    if ( v15 > 0x80 )
    {
      v10 = -1073740757;
      goto LABEL_20;
    }
    if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                             a3,
                             v15) )
      goto LABEL_13;
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
  }
LABEL_20:
  operator delete[](v7);
  return (unsigned int)v10;
}
