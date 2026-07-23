/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x14074CD5C
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x14018B41C (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1406FDFC0 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdi
  unsigned int v7; // edx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned int *v10; // rbp
  ULONG v11; // r14d
  unsigned int v12; // eax
  int v13; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v16; // rax
  PVOID v17; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp-A0h] BYREF
  char v20; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v5 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(a1, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
  {
    v8 = 0;
  }
  else
  {
    v7 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v7 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v7 = HighLimit + 1;
      v4 = (int)HighLimit + 1 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
        return v4;
    }
    v8 = -1;
    v9 = 2LL * v7;
    if ( v9 <= 0xFFFFFFFF )
      v8 = 2 * v7;
    v4 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 > 0xFFFFFFFF )
      return v4;
  }
  if ( v8 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x4C474552u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v10 = (unsigned int *)PoolWithTag;
  }
  else
  {
    v10 = (unsigned int *)&v20;
    v8 = 80;
  }
  v11 = 0;
  while ( 1 )
  {
    LODWORD(HighLimit) = v8 >> 1;
    v12 = RegRtlEnumKey(a1, v11, v10, (unsigned int *)&HighLimit);
    if ( v12 == -2147483622 || v12 == -1073741444 )
      break;
    if ( v12 == -1073741789 )
    {
      v16 = 2LL * (unsigned int)HighLimit;
      v8 = -1;
      if ( v16 <= 0xFFFFFFFF )
        v8 = 2 * HighLimit;
      v4 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v16 > 0xFFFFFFFF )
        break;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v17 = ExAllocatePoolWithTag(PagedPool, v8, 0x4C474552u);
      v5 = v17;
      if ( !v17 )
        return (unsigned int)-1073741801;
      v10 = (unsigned int *)v17;
    }
    else
    {
      if ( v12 )
      {
        v4 = v12;
        break;
      }
      *((_WORD *)v10 + ((unsigned __int64)v8 >> 1) - 1) = 0;
      v13 = SysCtxInternalEnumSubkeyCallback((__int64)a1, (__int64)v10, a3);
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v11 = 0;
        }
        else if ( v13 != 2 )
        {
          if ( v13 == 3 )
            v4 = -1073741248;
          else
            v4 = -1073741595;
          break;
        }
      }
      else
      {
        ++v11;
      }
      if ( v4 || v13 == 2 )
        break;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v4;
}
