/*
 * XREFs of _RegRtlEnumValue @ 0x1406FD91C
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        void *a1,
        ULONG a2,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *ResultLength)
{
  ULONG Length; // ebx
  unsigned int *v8; // r15
  unsigned __int64 v9; // rax
  unsigned int v13; // ecx
  KEY_VALUE_INFORMATION_CLASS v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  bool v19; // cf
  _DWORD *PoolWithTag; // rsi
  unsigned int v21; // eax
  __int64 v22; // rbx
  size_t v23; // r8
  unsigned int v25; // eax
  size_t v26; // r8
  __int64 v27; // rbx

  Length = -1;
  v8 = ResultLength;
  v9 = 2LL * (unsigned int)*a4;
  v13 = -1;
  if ( ResultLength )
  {
    v14 = KeyValueFullInformation;
    if ( v9 <= 0xFFFFFFFF )
      v13 = 2 * *a4;
    v15 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 <= 0xFFFFFFFF )
    {
      v16 = v13 + 24;
      v17 = -1;
      if ( v13 + 24 >= v13 )
        v17 = v13 + 24;
      v15 = v16 < v13 ? 0xC0000095 : 0;
      if ( v16 >= v13 )
      {
        v18 = v17 + *ResultLength;
        if ( v18 >= v17 )
          Length = v17 + *ResultLength;
        v15 = v18 < v17 ? 0xC0000095 : 0;
        v19 = v18 < v17;
LABEL_11:
        if ( !v19 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
          if ( PoolWithTag )
          {
            v15 = ZwEnumerateValueKey(a1, a2, v14, PoolWithTag, Length, (PULONG)&ResultLength);
            if ( !v15 || v15 == -2147483643 )
            {
              if ( v14 )
              {
                if ( a5 )
                  *a5 = PoolWithTag[1];
                if ( v15
                  || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)PoolWithTag[4] >> 1) + 1
                  || (v21 = PoolWithTag[3], *v8 < v21) )
                {
                  v15 = -1073741789;
                  *a4 = (PoolWithTag[4] >> 1) + 1;
                  *v8 = PoolWithTag[3];
                }
                else
                {
                  v22 = PoolWithTag[4] >> 1;
                  *v8 = v21;
                  v23 = (unsigned int)PoolWithTag[4];
                  *a4 = v22;
                  memmove(a3, PoolWithTag + 5, v23);
                  *((_WORD *)a3 + v22) = 0;
                  memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
                }
              }
              else
              {
                if ( a5 )
                  *a5 = PoolWithTag[1];
                if ( v15 || (v26 = (unsigned int)PoolWithTag[2], (unsigned int)*a4 < (v26 >> 1) + 1) )
                {
                  v15 = -1073741789;
                  LODWORD(v27) = (PoolWithTag[2] >> 1) + 1;
                }
                else
                {
                  v27 = (unsigned int)v26 >> 1;
                  memmove(a3, PoolWithTag + 3, v26);
                  *((_WORD *)a3 + v27) = 0;
                }
                *a4 = v27;
              }
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          else
          {
            return (unsigned int)-1073741801;
          }
        }
      }
    }
  }
  else
  {
    v14 = KeyValueBasicInformation;
    if ( v9 <= 0xFFFFFFFF )
      v13 = 2 * *a4;
    v15 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 <= 0xFFFFFFFF )
    {
      v25 = v13 + 16;
      if ( v13 + 16 >= v13 )
        Length = v13 + 16;
      v15 = v25 < v13 ? 0xC0000095 : 0;
      v19 = v25 < v13;
      goto LABEL_11;
    }
  }
  return v15;
}
