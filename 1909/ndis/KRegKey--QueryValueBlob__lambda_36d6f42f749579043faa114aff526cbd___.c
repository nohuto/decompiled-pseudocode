/*
 * XREFs of KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___ @ 0x1C0109F74
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C0109D0C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     _lambda_36d6f42f749579043faa114aff526cbd_::operator() @ 0x1C010268C (_lambda_36d6f42f749579043faa114aff526cbd_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___(
        HANDLE *a1,
        __int64 a2,
        Ndis::BindStack *a3)
{
  PVOID PoolWithTag; // rbx
  _BYTE *v5; // rsi
  NTSTATUS ValueKey; // eax
  int v7; // edi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF
  Ndis::BindStack *v11; // [rsp+180h] [rbp+18h] BYREF

  v11 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  PoolWithTag = 0LL;
  v5 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               *a1,
               (PUNICODE_STRING)&Ndis::FilterListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v7 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_5;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_5;
  }
  v7 = ZwQueryValueKey(
         *a1,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         PoolWithTag,
         ResultLength[0],
         ResultLength);
  if ( v7 >= 0 )
  {
    v5 = PoolWithTag;
LABEL_3:
    if ( *((_DWORD *)v5 + 1) == 3 )
      v7 = lambda_36d6f42f749579043faa114aff526cbd_::operator()(&v11, (__int64)(v5 + 12), *((unsigned int *)v5 + 2));
    else
      v7 = -1073741788;
  }
LABEL_5:
  if ( PoolWithTag )
    operator delete[](PoolWithTag);
  return (unsigned int)v7;
}
