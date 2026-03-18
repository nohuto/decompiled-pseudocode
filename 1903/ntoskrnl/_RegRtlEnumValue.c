/*
 * XREFs of _RegRtlEnumValue @ 0x14071B698
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x1406F9340 (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E8FC (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x1401C0330 (ZwEnumerateValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *ResultLength)
{
  unsigned int *v8; // r15
  unsigned __int64 v9; // rax
  KEY_VALUE_INFORMATION_CLASS v13; // ebp
  ULONG v14; // ecx
  ULONG Length; // ebx
  _DWORD *PoolWithTag; // rsi
  unsigned int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rbx
  size_t v20; // r8
  size_t v22; // r8
  __int64 v23; // rbx

  v8 = ResultLength;
  v9 = 2LL * (unsigned int)*a4;
  if ( ResultLength )
  {
    v13 = KeyValueFullInformation;
    if ( v9 <= 0xFFFFFFFF )
    {
      v14 = v9 + 24;
      if ( (int)v9 + 24 >= (unsigned int)v9 )
      {
        Length = v14 + *ResultLength;
        if ( Length >= v14 )
          goto LABEL_5;
      }
    }
    return (unsigned int)-1073741675;
  }
  v13 = KeyValueBasicInformation;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  Length = v9 + 16;
  if ( (int)v9 + 16 < (unsigned int)v9 )
    return (unsigned int)-1073741675;
LABEL_5:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
  if ( PoolWithTag )
  {
    v17 = ZwEnumerateValueKey(KeyHandle, Index, v13, PoolWithTag, Length, (PULONG)&ResultLength);
    if ( !v17 || v17 == -2147483643 )
    {
      if ( v13 )
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( v17
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)PoolWithTag[4] >> 1) + 1
          || (v18 = PoolWithTag[3], *v8 < v18) )
        {
          v17 = -1073741789;
          *a4 = (PoolWithTag[4] >> 1) + 1;
          *v8 = PoolWithTag[3];
        }
        else
        {
          v19 = PoolWithTag[4] >> 1;
          *v8 = v18;
          v20 = (unsigned int)PoolWithTag[4];
          *a4 = v19;
          memmove(a3, PoolWithTag + 5, v20);
          *((_WORD *)a3 + v19) = 0;
          memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( v17 || (v22 = (unsigned int)PoolWithTag[2], (unsigned int)*a4 < (v22 >> 1) + 1) )
        {
          v17 = -1073741789;
          LODWORD(v23) = (PoolWithTag[2] >> 1) + 1;
        }
        else
        {
          v23 = (unsigned int)v22 >> 1;
          memmove(a3, PoolWithTag + 3, v22);
          *((_WORD *)a3 + v23) = 0;
        }
        *a4 = v23;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v17;
}
