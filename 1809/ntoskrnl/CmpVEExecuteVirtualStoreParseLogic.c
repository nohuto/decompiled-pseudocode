/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpFindPathByNameEx @ 0x140581574 (CmpFindPathByNameEx.c)
 *     CmpUnicodeStringAppendCharacter @ 0x140582078 (CmpUnicodeStringAppendCharacter.c)
 *     CmpBlockHiveWrites @ 0x1407F18A0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1407F1AE8 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpVirtualBranchIsReplicated @ 0x1407F4FBC (CmpVirtualBranchIsReplicated.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(
        __int64 a1,
        const UNICODE_STRING *a2,
        _DWORD *a3,
        UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  int v9; // ebx
  unsigned int v10; // edx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rcx
  volatile signed __int32 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING v17; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+40h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v17, 0LL);
  *a3 |= 8u;
  if ( (unsigned __int8)CmpVirtualBranchIsReplicated(a1, a2, &v19) )
    goto LABEL_2;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 >= 0 )
  {
    v10 = a2->Length + DestinationString.Length + 2;
    if ( v10 <= 0xFFFF )
    {
      v17.MaximumLength = a2->Length + DestinationString.Length + 2;
      v17.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v10, 0x624E4D43u);
      if ( !v17.Buffer )
      {
        v9 = -1073741670;
        goto LABEL_24;
      }
      RtlUnicodeStringCopy(&v17, &DestinationString);
      CmpUnicodeStringAppendCharacter(&v17.Length);
      RtlUnicodeStringCat(&v17, a2);
      if ( (*a3 & 1) != 0 && (_BYTE)v19 )
      {
        v9 = CmpBlockHiveWrites(0LL, 16, &v15);
        if ( v9 >= 0 )
        {
          PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v17, 0LL, 16, &v19, &v16);
          CmpUnblockHiveWrites(0LL, 16, v15);
          if ( PathByName )
          {
            Buffer = a4->Buffer;
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            *a4 = v17;
            RtlInitUnicodeString(&v17, 0LL);
            v9 = 260;
            goto LABEL_22;
          }
          goto LABEL_2;
        }
        v6 = v15;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0x800000 )
        {
LABEL_2:
          v9 = -1073741199;
          goto LABEL_22;
        }
        v13 = a4->Buffer;
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        *a4 = v17;
        RtlInitUnicodeString(&v17, 0LL);
        v9 = 260;
      }
      if ( v6 )
        CmpUnblockHiveWrites(0LL, 16, v6);
      goto LABEL_22;
    }
    v9 = -1073741811;
  }
LABEL_22:
  if ( v17.Buffer )
    ExFreePoolWithTag(v17.Buffer, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
