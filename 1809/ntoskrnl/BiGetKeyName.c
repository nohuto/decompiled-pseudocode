/*
 * XREFs of BiGetKeyName @ 0x140713B6C
 * Callers:
 *     BiGetObjectIdentifier @ 0x140713B18 (BiGetObjectIdentifier.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22F8 (BiBindEfiEntryToBcdObject.c)
 *     BiCreateBootEntry @ 0x1408F2A38 (BiCreateBootEntry.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B3B0 (BiSanitizeHandle.c)
 *     BiZwQueryKey @ 0x14016E5D8 (BiZwQueryKey.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetKeyName(void *a1, _QWORD *a2)
{
  unsigned int i; // r14d
  unsigned int *PoolWithTag; // rsi
  NTSTATUS Key; // eax
  NTSTATUS v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // r15
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+20h] BYREF

  for ( i = 0; ; ++i )
  {
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    PoolWithTag = 0LL;
    LODWORD(NumberOfBytes) = 0;
    Key = BiZwQueryKey(a1, KeyBasicInformation, 0LL, 0, (PULONG)&NumberOfBytes);
    v7 = Key;
    if ( Key == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_13;
      v7 = BiZwQueryKey(a1, KeyBasicInformation, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( v7 < 0 )
        goto LABEL_7;
      v8 = ExAllocatePoolWithTag(PagedPool, PoolWithTag[3] + 2LL, 0x4B444342u);
      v9 = v8;
      if ( v8 )
      {
        memmove(v8, PoolWithTag + 4, PoolWithTag[3]);
        v9[(unsigned __int64)PoolWithTag[3] >> 1] = 0;
        *a2 = v9;
      }
      else
      {
LABEL_13:
        v7 = -1073741670;
      }
    }
    else if ( Key >= 0 )
    {
      v7 = -1073741811;
    }
LABEL_7:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v7 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v7;
}
