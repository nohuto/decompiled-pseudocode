/*
 * XREFs of DxgkRetrieveStringFromRegistry @ 0x1C0168EC0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167A7C (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167BDC (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0167E78 (DpiGetAdapterInfo.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

NTSTATUS __fastcall DxgkRetrieveStringFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // edi
  int v10; // edi
  ULONG v11; // ecx
  __int16 v12; // cx
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)NumberOfBytes);
  if ( result != -1073741789 && result != -2147483643 )
  {
    if ( result >= 0 )
      return -1073741823;
    return result;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x74727044u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, PoolWithTag, NumberOfBytes[0], &ResultLength);
  if ( v9 < 0 )
  {
LABEL_20:
    ExFreePoolWithTag(v8, 0);
    return v9;
  }
  v10 = v8[1];
  if ( v10 != 7 && v10 != 1 )
  {
    v9 = -1073741788;
    goto LABEL_20;
  }
  v11 = v8[2];
  ResultLength = v11;
  if ( v11 && v11 <= LODWORD(NumberOfBytes[0]) - 12 )
  {
    if ( v11 > 0xFFFC )
      v11 = 65532;
    ResultLength = v11;
    memmove(v8, v8 + 3, v11);
    if ( v10 == 7 )
    {
      v12 = ResultLength;
    }
    else
    {
      *(_WORD *)((char *)v8 + ResultLength) = 0;
      v12 = ResultLength + 2;
    }
    *(_WORD *)(a3 + 2) = NumberOfBytes[0];
    result = 0;
    *(_WORD *)a3 = v12;
    *(_QWORD *)(a3 + 8) = v8;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return -1073741772;
  }
  return result;
}
