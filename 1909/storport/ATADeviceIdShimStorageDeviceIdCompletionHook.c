/*
 * XREFs of ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0051700
 * Callers:
 *     <none>
 * Callees:
 *     ATAShimGetMsftId @ 0x1C0051770 (ATAShimGetMsftId.c)
 *     ReplaceDeviceId @ 0x1C0051A50 (ReplaceDeviceId.c)
 */

__int64 __fastcall ATADeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  result = *(unsigned int *)(a2 + 48);
  if ( (int)result >= 0 )
  {
    result = ATAShimGetMsftId(v3, v7);
    if ( (int)result >= 0 )
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *))ReplaceDeviceId)(v3, a2, a3, v7);
  }
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
