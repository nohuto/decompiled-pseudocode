/*
 * XREFs of HvpViewMapMakeViewRangeInvalid @ 0x1407F8088
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x1407F8330 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14000F024 (CmSiProtectViewOfSection.c)
 *     CmSiUnlockViewOfSection @ 0x14016AD30 (CmSiUnlockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeInvalid(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // r15
  __int64 i; // rbp
  ULONG_PTR v9; // r14
  __int64 j; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  for ( i = a3; i < a4; i += 4096LL )
  {
    if ( !a2[8] )
      break;
    a1 = a2[3];
    v9 = (i - a1) >> 12;
    if ( (*((_BYTE *)a2 + v9 + 72) & 0x10) != 0 )
    {
      CmSiUnlockViewOfSection(a1, *(void ***)(v7 + 24), (void *)(i + a2[7] - a1), 0x1000uLL);
      *((_BYTE *)a2 + v9 + 72) &= ~0x10u;
      --a2[8];
    }
  }
  CmSiProtectViewOfSection(a1, *(void ***)(v7 + 24), (void *)(a3 + a2[7] - a2[3]), a4 - a3, 0x80000001, (ULONG *)&v13);
  for ( j = a3; j < a4; *((_BYTE *)a2 + ((unsigned __int64)(v11 - a2[3]) >> 12) + 72) = 0 )
  {
    v11 = j;
    j += 4096LL;
  }
  result = a2[6];
  if ( a2[5] == a3 )
  {
    if ( result == a4 )
    {
      a2[5] = 0LL;
      a2[6] = 0LL;
    }
    else
    {
      a2[5] = a4;
    }
  }
  else if ( result == a4 )
  {
    a2[6] = a3;
  }
  return result;
}
