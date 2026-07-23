/*
 * XREFs of AslStringDuplicate @ 0x14067D684
 * Callers:
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1407204D0 (AslFileMappingCreateFromImageView.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140720780 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x140720DD8 (AslpFileVerQueryBlock.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindFirst @ 0x1408EC840 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v5; // rbp
  wchar_t *v6; // rax
  wchar_t *v7; // rdi
  const char *v9; // r9
  int v10; // r8d
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v4 < 0 )
  {
    v9 = "RtlStringCchLengthW failed [%x]";
    v10 = 565;
LABEL_16:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v10, (_DWORD)v9);
    return (unsigned int)v4;
  }
  v5 = -1LL;
  if ( pcchLength + 1 >= pcchLength )
    v5 = pcchLength + 1;
  v4 = pcchLength + 1 < pcchLength ? 0xC0000095 : 0;
  if ( pcchLength + 1 < pcchLength )
  {
    v9 = "SIZE_T arithmetic failed [%x]";
    v10 = 576;
    goto LABEL_16;
  }
  if ( !is_mul_ok(v5, 2uLL) )
  {
    v4 = -1073741675;
    v10 = 582;
    v9 = "SIZE_T arithmetic failed [%x]";
    goto LABEL_16;
  }
  v6 = (wchar_t *)AslAlloc(pcchLength, 2 * v5);
  v7 = v6;
  if ( v6 )
  {
    v4 = RtlStringCchCopyW(v6, v5, a2);
    if ( v4 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 599, (unsigned int)"RtlStringCchCopyW failed [%x]");
    }
    else
    {
      *a1 = v7;
      v7 = 0LL;
      v4 = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    v4 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 589, (unsigned int)"Out of memory");
  }
  return (unsigned int)v4;
}
