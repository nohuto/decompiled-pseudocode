/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x14068F340
 * Callers:
 *     HvpViewMapExtendStorage @ 0x14068C3D4 (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14008B908 (CmSiProtectViewOfSection.c)
 *     CmSiPrefetchVirtualMemoryRange @ 0x1400ED494 (CmSiPrefetchVirtualMemoryRange.c)
 *     CmSiLockViewOfSection @ 0x140177704 (CmSiLockViewOfSection.c)
 *     HvpViewMapTouchPages @ 0x140638360 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(SIZE_T a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  SIZE_T v5; // rdi
  _BYTE *v6; // r14
  int v11; // esi
  SIZE_T v12; // rcx
  char v13; // r13
  SIZE_T v14; // rcx
  __int64 i; // r8
  unsigned __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  char v20; // cl
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4 - a3;
  v6 = (_BYTE *)(a3 + a2[7] - a2[3]);
  v11 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v6, a4 - a3, 2u, (ULONG *)&v21);
  if ( v11 >= 0 )
  {
    CmSiPrefetchVirtualMemoryRange(*(void ***)(a1 + 24), v6, v5);
    v13 = 0;
    if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    {
      v11 = HvpViewMapTouchPages(v6, v5, 0);
      if ( v11 >= 0 )
        goto LABEL_4;
LABEL_27:
      CmSiProtectViewOfSection(v14, *(void ***)(a1 + 24), v6, v5, 0x80000001, (ULONG *)&v21);
      return (unsigned int)v11;
    }
    if ( a5 && CmSiLockViewOfSection(v12, *(void ***)(a1 + 24), v6, v5) >= 0 )
    {
      v13 = 1;
      a2[8] += v5 >> 12;
      *(_DWORD *)(a1 + 32) |= 4u;
    }
    else
    {
      v11 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), v6, v5, 8u, (ULONG *)&v21);
      if ( v11 < 0 )
        goto LABEL_27;
      v11 = HvpViewMapTouchPages(v6, v5, 1);
      if ( v11 < 0 )
        goto LABEL_27;
      CmSiProtectViewOfSection(v14, *(void ***)(a1 + 24), v6, v5, 2u, (ULONG *)&v21);
    }
LABEL_4:
    for ( i = a3; i < a4; i += 4096LL )
    {
      v16 = (unsigned __int64)(i - a2[3]) >> 12;
      v17 = *((_BYTE *)a2 + v16 + 72);
      *((_BYTE *)a2 + v16 + 72) = v17 | 1;
      if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
      {
        if ( v13 )
          v20 = v17 | 0x11;
        else
          v20 = v17 | 5;
        *((_BYTE *)a2 + v16 + 72) = v20;
      }
    }
    v18 = a2[5];
    if ( v18 || a2[6] )
    {
      if ( v18 == a4 )
      {
        a2[5] = a3;
        return 0;
      }
      if ( a2[6] != a3 )
        return 0;
    }
    else
    {
      a2[5] = a3;
    }
    a2[6] = a4;
    return 0;
  }
  return (unsigned int)v11;
}
