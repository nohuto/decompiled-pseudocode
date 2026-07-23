/*
 * XREFs of CmpQueryKeyValueData @ 0x1405D2B30
 * Callers:
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407EE550 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1407F2744 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1405B0298 (CmpCopyCompressedName.c)
 *     CmpGetValueDataFromCache @ 0x1405D0438 (CmpGetValueDataFromCache.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Src, unsigned int a6, int *a7)
{
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  void *ValueDataFromCache; // rbx
  _DWORD *v13; // rsi
  unsigned __int16 v14; // dx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  int v24; // edx
  unsigned int v25; // eax
  size_t v26; // r8
  unsigned int v27; // r8d
  unsigned int i; // eax
  __int64 v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  _WORD *v32; // rcx
  int v33; // r9d
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  void *v38; // [rsp+48h] [rbp-60h] BYREF
  void *v39; // [rsp+50h] [rbp-58h]
  _DWORD v40[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+68h] [rbp-40h]
  __int64 v43; // [rsp+B0h] [rbp+8h] BYREF
  int v44; // [rsp+B8h] [rbp+10h]
  unsigned int v45; // [rsp+C0h] [rbp+18h]
  char v46; // [rsp+C8h] [rbp+20h] BYREF

  v44 = a2;
  v43 = a1;
  v10 = a6;
  v11 = 0;
  ValueDataFromCache = 0LL;
  v39 = 0LL;
  v46 = 0;
  v40[0] = -1;
  v40[1] = 0;
  v42 = *(_QWORD *)(a1 + 24);
  v13 = Src;
  v41 = a3;
  v14 = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    v14 = *(_WORD *)(a3 + 2);
  if ( a4 == 2 )
  {
    v15 = *(_DWORD *)(a3 + 4);
    v16 = v15 + 0x80000000;
    if ( v15 < 0x80000000 )
      v16 = *(_DWORD *)(a3 + 4);
    v17 = 0;
    *a7 = v16 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
      goto LABEL_21;
    }
    *v13 = 0;
    v13[1] = *(_DWORD *)(a3 + 12);
    v13[2] = v16;
    v18 = v10 - 12;
    if ( v18 >= v16 )
      v18 = v16;
    else
      v17 = -2147483643;
    if ( !v16 )
      goto LABEL_21;
    if ( v15 >= 0x80000000 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
      v39 = (void *)(a3 + 8);
    }
    else
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(a1 + 24),
                              a2,
                              a3,
                              (unsigned int)&v43,
                              (__int64)&Src,
                              (__int64)&v46,
                              (__int64)v40) )
      {
        ValueDataFromCache = Src;
        v39 = Src;
        if ( Src )
        {
LABEL_14:
          memmove(v13 + 3, ValueDataFromCache, v18);
          goto LABEL_21;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
        v39 = 0LL;
      }
      v17 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_21;
    goto LABEL_14;
  }
  if ( !a4 )
  {
    v30 = v14;
    v17 = 0;
    *a7 = v14 + 12;
    if ( v10 < 0xC )
    {
      v17 = -1073741789;
    }
    else
    {
      *v13 = 0;
      v13[1] = *(_DWORD *)(a3 + 12);
      v13[2] = v14;
      v31 = v10 - 12;
      if ( v10 - 12 >= v30 )
        v31 = v30;
      else
        v17 = -2147483643;
      v32 = v13 + 3;
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName(v32, v31, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v32, (const void *)(a3 + 20), v31);
    }
    goto LABEL_21;
  }
  v20 = a4 - 1;
  if ( v20 )
  {
    v33 = v20 - 2;
    if ( v33 )
    {
      if ( v33 == 1 )
      {
        v34 = *(_DWORD *)(a3 + 4);
        v35 = v34 + 0x80000000;
        if ( v34 < 0x80000000 )
          v35 = *(_DWORD *)(a3 + 4);
        v17 = 0;
        *a7 = v35 + 8;
        if ( v10 < 8 )
        {
          v17 = -1073741789;
        }
        else
        {
          *v13 = *(_DWORD *)(a3 + 12);
          v13[1] = v35;
          v36 = v10 - 8;
          v37 = v35;
          if ( v36 < v35 )
          {
            v37 = v36;
            v17 = -2147483643;
          }
          if ( v35 )
          {
            if ( v34 < 0x80000000 )
            {
              ValueDataFromCache = (void *)CmpGetValueDataFromCache(a1, a2, a3, (__int64)&v46, (__int64)v40);
              v39 = ValueDataFromCache;
              if ( !ValueDataFromCache )
                v17 = -1073741670;
            }
            else
            {
              ValueDataFromCache = (void *)(a3 + 8);
              v39 = (void *)(a3 + 8);
            }
            if ( ValueDataFromCache )
              memmove(v13 + 2, ValueDataFromCache, v37);
          }
        }
      }
      else
      {
        v17 = -1073741811;
      }
      goto LABEL_21;
    }
  }
  v21 = *(_DWORD *)(a3 + 4);
  LODWORD(v38) = v21;
  v22 = v21 + 0x80000000;
  if ( v21 < 0x80000000 )
    v22 = v21;
  LODWORD(Src) = v22;
  v23 = v14;
  v24 = v14 + v22 + 20;
  v45 = 0;
  if ( v22 )
  {
    v25 = (v24 - v22 + 7) & 0xFFFFFFF8;
    v45 = v25;
    if ( v25 > v24 - v22 )
      v24 = v25 + v22;
  }
  v17 = 0;
  *a7 = v24;
  if ( v10 < 0x14 )
  {
    v17 = -1073741789;
    goto LABEL_21;
  }
  *v13 = 0;
  v13[1] = *(_DWORD *)(a3 + 12);
  v13[3] = v22;
  v13[4] = v23;
  v26 = v10 - 20;
  if ( (unsigned int)v26 >= v23 )
    v26 = v23;
  else
    v17 = -2147483643;
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
  {
    v27 = (unsigned int)v26 >> 1;
    if ( v27 >= *(unsigned __int16 *)(a3 + 2) )
      v27 = *(unsigned __int16 *)(a3 + 2);
    for ( i = 0; i < v27; ++i )
      *((_WORD *)v13 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
  }
  else
  {
    memmove(v13 + 5, (const void *)(a3 + 20), v26);
    v22 = (unsigned int)Src;
    v21 = (unsigned int)v38;
  }
  if ( !v22 )
  {
    v13[2] = -1;
    goto LABEL_21;
  }
  if ( v21 >= 0x80000000 )
  {
    ValueDataFromCache = (void *)(a3 + 8);
    v39 = (void *)(a3 + 8);
    goto LABEL_49;
  }
  if ( !(unsigned __int8)CmpGetValueData(
                           *(_QWORD *)(v43 + 24),
                           v44,
                           a3,
                           (unsigned int)&v43,
                           (__int64)&v38,
                           (__int64)&v46,
                           (__int64)v40) )
  {
    ValueDataFromCache = 0LL;
    v39 = 0LL;
    goto LABEL_60;
  }
  ValueDataFromCache = v38;
  v39 = v38;
  if ( !v38 )
LABEL_60:
    v17 = -1073741670;
  v22 = (unsigned int)Src;
LABEL_49:
  v29 = v45;
  v13[2] = v45;
  if ( v10 >= (unsigned int)v29 )
    v11 = v10 - v29;
  if ( v11 >= v22 )
    v11 = v22;
  else
    v17 = -2147483643;
  if ( ValueDataFromCache )
    memmove((char *)v13 + v29, ValueDataFromCache, v11);
LABEL_21:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v46 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v42 + 16))(v42, v40);
  }
  return v17;
}
