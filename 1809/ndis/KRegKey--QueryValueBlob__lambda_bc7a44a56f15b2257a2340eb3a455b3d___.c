/*
 * XREFs of KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C00C78D8
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        char *a3)
{
  _UNKNOWN **v5; // rbx
  NTSTATUS ValueKey; // eax
  char v8; // r14
  unsigned int v9; // esi
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+0h] BYREF
  int v14; // [rsp+180h] [rbp+8h]
  char v15; // [rsp+184h] [rbp+Ch]

  v5 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v8 = 1;
  v9 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    if ( !ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u) )
    {
      v9 = -1073741670;
      goto LABEL_8;
    }
    operator delete[](0LL);
    v5 = &retaddr;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, &retaddr, ResultLength[0], ResultLength);
    v9 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( HIDWORD(retaddr) != -65519 )
    {
      v9 = -1073741788;
      goto LABEL_8;
    }
    if ( v14 == 1 )
    {
      if ( !v15 )
      {
        v8 = 0;
        goto LABEL_7;
      }
      if ( v15 == 1 )
      {
LABEL_7:
        *a3 = v8;
        v9 = 0;
        goto LABEL_8;
      }
    }
    v9 = -1073741762;
  }
LABEL_8:
  operator delete[](v5);
  return v9;
}
