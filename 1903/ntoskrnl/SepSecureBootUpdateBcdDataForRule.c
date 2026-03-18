/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1408E1E74
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1408E1CF0 (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408E1FD0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, __int64 a3)
{
  _WORD *v3; // rsi
  char *PoolWithTag; // rdi
  int PolicyDefaultValue; // ebx
  unsigned int v8; // edx
  char *v9; // r15
  int ElementDataWithFlags; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_WORD *)(qword_14050ECD0 + *(unsigned int *)(a1 + 8));
  PoolWithTag = 0LL;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    LODWORD(NumberOfBytes) = 8;
    v9 = &v16;
    ElementDataWithFlags = BcdGetElementDataWithFlags((__int64)a2, v8, a3, (__int64)&v16, &NumberOfBytes);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v9 = PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(
                           (__int64)a2,
                           *(_DWORD *)(a1 + 4),
                           v12,
                           (__int64)PoolWithTag,
                           &NumberOfBytes);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, v9, (unsigned int)NumberOfBytes),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v17, (int *)&NumberOfBytes);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, v17, NumberOfBytes);
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
