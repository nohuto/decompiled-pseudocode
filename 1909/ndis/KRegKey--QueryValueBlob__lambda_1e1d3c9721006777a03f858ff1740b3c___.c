/*
 * XREFs of KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___ @ 0x1C0127144
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01275A4 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_1e1d3c9721006777a03f858ff1740b3c___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  _BYTE *v6; // rbx
  _BYTE *v7; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v9; // esi
  _BYTE *PoolWithTag; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = 0LL;
  v7 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_12;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_12;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v6;
LABEL_7:
    if ( *((_DWORD *)v7 + 1) == 3 )
    {
      if ( *((_DWORD *)v7 + 2) == 16 )
      {
        v9 = 0;
        *a3 = *(_OWORD *)(v7 + 12);
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_12:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v9;
}
