/*
 * XREFs of SepRmFetchGlobalSacl @ 0x1407380C0
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x140738030 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCchCatNW @ 0x140181B10 (RtlStringCchCatNW.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepRegOpenKey @ 0x1407381E0 (SepRegOpenKey.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  SIZE_T v7; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rsi
  size_t v10; // rbx
  int v11; // r10d
  size_t v12; // rdx
  char *v13; // r9
  wchar_t v14; // cx
  NTSTATUS v15; // ebx
  char *v17; // rdi
  PVOID v18; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = v3 + 98;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C635347u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741801;
    goto LABEL_16;
  }
  v10 = v7 >> 1;
  v11 = 0;
  if ( !v10 )
    v11 = -1073741811;
  if ( v11 < 0 )
  {
    if ( !v10 )
      goto LABEL_13;
  }
  else
  {
    v12 = v10;
    v11 = 0;
    if ( !v10 )
      goto LABEL_22;
    v13 = (char *)((char *)L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName" - (char *)PoolWithTag);
    while ( 2147483646 - v10 + v12 )
    {
      v14 = *(wchar_t *)((char *)PoolWithTag + (_QWORD)v13);
      if ( !v14 )
        break;
      *PoolWithTag++ = v14;
      if ( !--v12 )
        goto LABEL_22;
    }
    if ( !v12 )
    {
LABEL_22:
      --PoolWithTag;
      v11 = -2147483643;
    }
  }
  *PoolWithTag = 0;
LABEL_13:
  if ( v11 >= 0 )
    RtlStringCchCatNW(v9, v10, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  v15 = SepRegOpenKey(v9, 0x201u, &KeyHandle);
  if ( v15 >= 0 )
  {
    v15 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v15 + 0x80000000) < 0 || v15 == -1073741789) && ResultLength <= 0x1000B )
    {
      v15 = 0;
      if ( ResultLength > 0xC )
      {
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
        }
        else
        {
          v15 = -1073741801;
        }
      }
      else
      {
        *a2 = 0;
        *a3 = 0LL;
      }
    }
  }
LABEL_16:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v15;
}
