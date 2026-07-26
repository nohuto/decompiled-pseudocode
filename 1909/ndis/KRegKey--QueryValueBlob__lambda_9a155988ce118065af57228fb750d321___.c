/*
 * XREFs of KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___ @ 0x1C0101AF4
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_9a155988ce118065af57228fb750d321___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rbp
  NTSTATUS ValueKey; // eax
  NTSTATUS v9; // esi
  unsigned int v11; // eax
  _DWORD *PoolWithTag; // rax
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
      goto LABEL_3;
    goto LABEL_6;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_3;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v6;
LABEL_6:
    if ( v7[1] == 3 )
    {
      v11 = v7[2];
      if ( v11 > 0x20 )
      {
        v9 = -1073741811;
      }
      else
      {
        *a3 = v11;
        memmove(a3 + 1, v7 + 3, v11);
        v9 = 0;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_3:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v9;
}
