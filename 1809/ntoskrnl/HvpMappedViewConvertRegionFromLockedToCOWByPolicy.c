/*
 * XREFs of HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140705220
 * Callers:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x140709B0C (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14000F024 (CmSiProtectViewOfSection.c)
 *     CmSiUnlockViewOfSection @ 0x14016AD30 (CmSiUnlockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x1405A6B8C (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(SIZE_T a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  SIZE_T v4; // rdi
  _BYTE *v5; // rbp
  __int64 v7; // rsi
  NTSTATUS v10; // edx
  SIZE_T v11; // rcx
  ULONG_PTR v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = a4 - a3;
  v5 = (_BYTE *)(a3 + a2[7] - a2[3]);
  v7 = a3;
  v10 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v5, a4 - a3, 8u, (ULONG *)&v14);
  if ( v10 >= 0 )
  {
    HvpViewMapTouchPages(v5, v4, 1);
    CmSiProtectViewOfSection(v11, *(void ***)(a1 + 24), v5, v4, 2u, (ULONG *)&v14);
    v10 = CmSiUnlockViewOfSection(v12, *(void ***)(a1 + 24), v5, v4);
    while ( v7 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v7 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v7 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v7 += 4096LL;
    }
    a2[8] -= v4 >> 12;
  }
  return (unsigned int)v10;
}
