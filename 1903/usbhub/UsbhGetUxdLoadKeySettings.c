/*
 * XREFs of UsbhGetUxdLoadKeySettings @ 0x1C005E7AC
 * Callers:
 *     UsbhDeleteUxdSubKeys @ 0x1C005E2E0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdPortKey @ 0x1C005E898 (UsbhGetUxdPortKey.c)
 * Callees:
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhGetUxdLoadKeySettings(__int64 a1, void *a2, const WCHAR *a3, void *a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  NTSTATUS v8; // edi
  unsigned int v9; // eax
  size_t v10; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  __int64 ResultLength; // [rsp+50h] [rbp+8h] BYREF

  ResultLength = a1;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v8 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, v7, 0x50u, (PULONG)&ResultLength);
    if ( v8 >= 0 )
    {
      v9 = v7[2];
      v10 = 68LL;
      if ( v9 <= 0x44 )
        v10 = v9;
      memmove(a4, v7 + 3, v10);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
