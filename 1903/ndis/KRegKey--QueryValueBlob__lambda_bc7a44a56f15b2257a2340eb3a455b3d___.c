/*
 * XREFs of KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C010A08C
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B93C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        char *a3)
{
  _BYTE *v6; // rbx
  _BYTE *v7; // rbp
  NTSTATUS ValueKey; // eax
  char v9; // r14
  NTSTATUS v10; // esi
  _BYTE *PoolWithTag; // rax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = 0LL;
  v7 = KeyValueInformation;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, ResultLength);
  v9 = 1;
  v10 = ValueKey;
  if ( ValueKey != -2147483643 )
  {
    if ( ValueKey < 0 )
      goto LABEL_8;
LABEL_3:
    if ( *((_DWORD *)v7 + 1) == -65519 )
    {
      if ( *((_DWORD *)v7 + 2) == 1 )
      {
        if ( !v7[12] )
        {
          v9 = 0;
          goto LABEL_7;
        }
        if ( v7[12] == 1 )
        {
LABEL_7:
          *a3 = v9;
          v10 = 0;
          goto LABEL_8;
        }
      }
      v10 = -1073741762;
    }
    else
    {
      v10 = -1073741788;
    }
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x6E694252u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_8;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength[0], ResultLength);
  if ( v10 >= 0 )
  {
    v7 = v6;
    goto LABEL_3;
  }
LABEL_8:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v10;
}
