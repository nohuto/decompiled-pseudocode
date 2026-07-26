/*
 * XREFs of KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C00C5090
 * Callers:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C00C5154 (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  _DWORD *PoolWithTag; // rsi
  void *v5; // rbx
  NTSTATUS ValueKey; // eax
  unsigned int v8; // edi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v12; // [rsp+190h] [rbp+18h] BYREF

  v12 = a3;
  PoolWithTag = KeyValueInformation;
  v5 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v8 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_5;
    }
    operator delete[](0LL);
    v5 = PoolWithTag;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
    v8 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( PoolWithTag[1] == -65518 )
      v8 = lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(&v12, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
    else
      v8 = -1073741788;
  }
LABEL_5:
  operator delete[](v5);
  return v8;
}
