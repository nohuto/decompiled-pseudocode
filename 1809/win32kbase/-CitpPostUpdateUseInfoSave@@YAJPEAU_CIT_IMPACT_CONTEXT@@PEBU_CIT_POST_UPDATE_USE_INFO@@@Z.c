/*
 * XREFs of ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0077EF8
 * Callers:
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077440 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0077D70 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0078370 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C00787D4 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

NTSTATUS __fastcall CitpPostUpdateUseInfoSave(struct _CIT_IMPACT_CONTEXT *a1, _BYTE *Data)
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v7[112]; // [rsp+50h] [rbp-88h] BYREF

  KeyHandle = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( !*((_WORD *)a1 + 148) )
    return -1073741823;
  if ( !Data )
  {
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)v7);
    Data = v7;
  }
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PUUActive");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, 0x70u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
