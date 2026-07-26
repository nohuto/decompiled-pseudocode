/*
 * XREFs of KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x1C0107F6C
 * Callers:
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0107EE8 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _QWORD *a3)
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
      goto LABEL_6;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_6;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v6;
LABEL_3:
    if ( *((_DWORD *)v7 + 1) == -65527 )
    {
      if ( *((_DWORD *)v7 + 2) == 8 )
      {
        v9 = 0;
        *a3 = *(_QWORD *)(v7 + 12);
      }
      else
      {
        v9 = -1073741762;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_6:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v9;
}
