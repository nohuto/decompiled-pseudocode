/*
 * XREFs of KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___ @ 0x1C00CF200
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00CEEB8 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _lambda_36d6f42f749579043faa114aff526cbd_::operator() @ 0x1C00BF7E0 (_lambda_36d6f42f749579043faa114aff526cbd_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___(
        HANDLE *a1,
        __int64 a2,
        Ndis::BindStack *a3)
{
  void *v4; // rbx
  _DWORD *PoolWithTag; // rsi
  NTSTATUS ValueKey; // eax
  unsigned int v7; // edi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF
  Ndis::BindStack *v11; // [rsp+180h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0LL;
  PoolWithTag = KeyValueInformation;
  ValueKey = ZwQueryValueKey(
               *a1,
               (PUNICODE_STRING)&Ndis::FilterListValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x100u,
               ResultLength);
  v7 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_5;
    }
    operator delete[](0LL);
    v4 = PoolWithTag;
    ValueKey = ZwQueryValueKey(
                 *a1,
                 (PUNICODE_STRING)&Ndis::FilterListValueName,
                 KeyValuePartialInformation,
                 PoolWithTag,
                 ResultLength[0],
                 ResultLength);
    v7 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( PoolWithTag[1] == 3 )
      v7 = lambda_36d6f42f749579043faa114aff526cbd_::operator()(&v11, (__int64)(PoolWithTag + 3), PoolWithTag[2]);
    else
      v7 = -1073741788;
  }
LABEL_5:
  operator delete[](v4);
  return v7;
}
