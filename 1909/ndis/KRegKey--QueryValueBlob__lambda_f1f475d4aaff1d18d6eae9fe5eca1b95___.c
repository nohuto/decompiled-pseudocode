/*
 * XREFs of KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C0101840
 * Callers:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C0101918 (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3)
{
  _BYTE *v5; // rbx
  _BYTE *v6; // rsi
  NTSTATUS ValueKey; // eax
  NTSTATUS v8; // edi
  _BYTE *PoolWithTag; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v13; // [rsp+190h] [rbp+18h] BYREF

  v13 = a3;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v5 = 0LL;
  v6 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v8 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_5;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v8 >= 0 )
  {
    v6 = v5;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) == -65518 )
      v8 = lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(&v13, v6 + 12, *((unsigned int *)v6 + 2));
    else
      v8 = -1073741788;
  }
LABEL_5:
  if ( v5 )
    operator delete[](v5);
  return (unsigned int)v8;
}
