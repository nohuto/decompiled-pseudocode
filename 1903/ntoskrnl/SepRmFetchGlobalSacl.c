/*
 * XREFs of SepRmFetchGlobalSacl @ 0x14077C050
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x14077BFC0 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCchCatNW @ 0x140198184 (RtlStringCchCatNW.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepRegOpenKey @ 0x14061AA0C (SepRegOpenKey.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // rdi
  size_t v9; // rbx
  signed int v10; // ecx
  size_t v11; // rdx
  wchar_t *v12; // rcx
  wchar_t v13; // ax
  wchar_t *v14; // rax
  NTSTATUS v15; // ebx
  char *v17; // rsi
  PVOID v18; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(unsigned __int16 *)a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = v3 + 98;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C635347u);
  if ( !PoolWithTag )
    goto LABEL_18;
  v9 = v7 >> 1;
  v10 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
  {
    v11 = v9;
    v12 = PoolWithTag;
    do
    {
      if ( !(2147483646 - v9 + v11) )
        break;
      v13 = *(wchar_t *)((char *)v12
                       + (char *)L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName"
                       - (char *)PoolWithTag);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    v10 = v11 == 0 ? 0x80000005 : 0;
    *v14 = 0;
  }
  if ( v10 >= 0 )
    RtlStringCchCatNW(PoolWithTag, v9, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  v15 = SepRegOpenKey(PoolWithTag, 0x201u, &KeyHandle);
  if ( v15 >= 0 )
  {
    v15 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v15 + 0x80000000) < 0 || v15 == -1073741789) && ResultLength <= 0x1000B )
    {
      v15 = 0;
      if ( ResultLength <= 0xC )
      {
        *a2 = 0;
        *a3 = 0LL;
        goto LABEL_13;
      }
      v17 = (char *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6C635347u);
      if ( v17 )
      {
        v15 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, v17, ResultLength, &ResultLength);
        if ( v15 >= 0 )
        {
          ResultLength -= 12;
          v18 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6C635347u);
          *a3 = v18;
          if ( v18 )
          {
            memmove(v18, v17 + 12, ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        ExFreePoolWithTag(v17, 0);
        goto LABEL_13;
      }
LABEL_18:
      v15 = -1073741801;
    }
  }
LABEL_13:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v15;
}
