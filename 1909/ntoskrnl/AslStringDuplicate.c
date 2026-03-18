/*
 * XREFs of AslStringDuplicate @ 0x14070D108
 * Callers:
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140779848 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409222A8 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindFirst @ 0x140927D2C (AslRegWildcardFindFirst.c)
 *     AslpFileVerQueryBlock @ 0x14092B114 (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400EDF4C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140154604 (RtlStringCchCopyW.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rbx
  wchar_t *v7; // rax
  wchar_t *v8; // rdi
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v10);
  if ( v5 < 0 )
  {
LABEL_17:
    AslLogCallPrintf(1LL);
    return (unsigned int)v5;
  }
  v6 = v10 + 1;
  if ( v10 + 1 < v10 || !is_mul_ok(v6, 2uLL) )
  {
    v5 = -1073741675;
    goto LABEL_17;
  }
  v7 = (wchar_t *)AslAlloc(v4, 2 * v6);
  v8 = v7;
  if ( v7 )
  {
    v5 = RtlStringCchCopyW(v7, v6, a2);
    if ( v5 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      *a1 = v8;
      v8 = 0LL;
      v5 = 0;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74705041u);
  }
  else
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v5;
}
