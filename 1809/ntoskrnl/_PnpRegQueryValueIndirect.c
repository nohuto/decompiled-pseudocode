/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x1406A4260
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _PnpParseIndirectResourceString @ 0x1406969B4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406B8FD8 (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        size_t a1,
        void *a2,
        const WCHAR *a3,
        unsigned int *a4,
        unsigned __int64 a5,
        __int64 a6,
        bool *a7)
{
  void *v7; // rbx
  unsigned int *v9; // rsi
  PVOID PoolWithTag; // rdi
  bool *v13; // r14
  unsigned int Value; // eax
  unsigned int v15; // ebp
  unsigned int v17; // ecx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  pcbLength = a1;
  v7 = (void *)a5;
  v9 = (unsigned int *)a6;
  PoolWithTag = 0LL;
  if ( a5 )
    v7 = (void *)(-(__int64)(*(_DWORD *)a6 != 0) & a5);
  else
    *(_DWORD *)a6 = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(a2, a3, a4, v7, v9);
  v15 = Value;
  if ( Value && Value != -1073741789 || !v13 )
    return v15;
  v17 = *a4;
  if ( *a4 > 3 )
  {
    if ( v17 <= 6 )
      goto LABEL_21;
    if ( v17 != 7 )
    {
      if ( v17 - 8 > 3 )
      {
        *v13 = (_WORD)v17 == 25;
        return v15;
      }
LABEL_21:
      *v13 = 0;
      return v15;
    }
  }
  v18 = *v9;
  if ( Value )
  {
    if ( v18 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x52504E50u);
        if ( !PoolWithTag )
          break;
        LODWORD(pcbLength) = v18;
        v21 = RegRtlQueryValue(a2, a3, 0LL, PoolWithTag, (unsigned int *)&pcbLength);
        if ( v21 != -1073741789 )
          goto LABEL_32;
        if ( (unsigned int)pcbLength <= v18 )
        {
          v21 = -1073741595;
LABEL_32:
          if ( v21 )
            goto LABEL_19;
          v7 = PoolWithTag;
          goto LABEL_16;
        }
        v18 = pcbLength;
        if ( (unsigned int)pcbLength > 0xFFFE )
          goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_16:
    if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)v7, v18, &pcbLength) >= 0
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || PnpParseIndirectResourceString((__int64)v7, v19, v20)) )
    {
      *v13 = 1;
    }
LABEL_19:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v15;
}
