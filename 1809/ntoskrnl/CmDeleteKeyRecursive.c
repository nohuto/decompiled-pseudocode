/*
 * XREFs of CmDeleteKeyRecursive @ 0x1407FC404
 * Callers:
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407FD200 (CmpMoveBiosAliasTable.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1401B9CB0 (ZwDeleteKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, int a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rdx
  wchar_t *PoolWithTag; // rax
  wchar_t *v11; // r14
  __int64 v12; // rdx
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v13 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, a4 - 2, &ResultLength);
      if ( v13 < 0 )
        break;
      v9 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v9;
      while ( *(_WORD *)(a3 + 2 * v9 + 16) );
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v9 + 2, 0x20204D43u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
        break;
      }
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(a3 + 2 * v12 + 16) );
      wcscpy_s(PoolWithTag, v12 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v13 = CmDeleteKeyRecursive((int)KeyHandle, (int)v11, a3, a4, Length);
      ExFreePoolWithTag(v11, 0);
    }
    while ( v13 >= 0 );
    v14 = 0;
    if ( v13 != -2147483622 )
      v14 = v13;
    if ( v14 >= 0 )
      v14 = ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v14;
  }
  return result;
}
