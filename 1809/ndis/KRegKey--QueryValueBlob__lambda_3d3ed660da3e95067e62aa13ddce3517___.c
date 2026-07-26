/*
 * XREFs of KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C00C76C8
 * Callers:
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C00C6F40 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00D0550 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _DWORD *a3)
{
  _UNKNOWN **v5; // rbx
  NTSTATUS ValueKey; // eax
  unsigned int v8; // esi
  ULONG Length[2]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+40h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+0h] BYREF
  int v13; // [rsp+180h] [rbp+8h]
  int v14; // [rsp+184h] [rbp+Ch]

  v5 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, Length);
  v8 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    if ( !ExAllocatePoolWithTag(PagedPool, Length[0], 0x6E694252u) )
    {
      v8 = -1073741670;
      goto LABEL_6;
    }
    operator delete[](0LL);
    v5 = &retaddr;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, &retaddr, Length[0], Length);
    v8 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( HIDWORD(retaddr) == -65529 )
    {
      if ( v13 == 4 )
      {
        v8 = 0;
        *a3 = v14;
      }
      else
      {
        v8 = -1073741762;
      }
    }
    else
    {
      v8 = -1073741788;
    }
  }
LABEL_6:
  operator delete[](v5);
  return v8;
}
