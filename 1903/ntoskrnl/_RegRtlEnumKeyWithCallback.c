/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x140768D48
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400C2F20 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x1401948FC (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _RegRtlEnumKey @ 0x140714FB0 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14071AC38 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  void *v4; // rsi
  unsigned int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned int *v9; // rbp
  ULONG v10; // r14d
  int v11; // eax
  int v12; // eax
  PVOID PoolWithTag; // rax
  PVOID v15; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp-A0h] BYREF
  char v18; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, &HighLimit, 0LL, 0LL, 0LL) )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    v6 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
      {
        v7 = -1073741675;
        v6 = -1;
      }
      else
      {
        v7 = 0;
        v6 = HighLimit + 1;
      }
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    v8 = 2LL * v6;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  if ( (unsigned int)v8 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v9 = (unsigned int *)PoolWithTag;
  }
  else
  {
    v9 = (unsigned int *)&v18;
    LODWORD(v8) = 80;
  }
  v10 = 0;
  while ( 1 )
  {
    LODWORD(HighLimit) = (unsigned int)v8 >> 1;
    v11 = RegRtlEnumKey(KeyHandle, v10, v9, (unsigned int *)&HighLimit);
    v7 = 0;
    if ( v11 == -2147483622 || v11 == -1073741444 )
      break;
    if ( v11 == -1073741789 )
    {
      v8 = 2LL * (unsigned int)HighLimit;
      if ( v8 > 0xFFFFFFFF )
      {
        v7 = -1073741675;
        break;
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
      v4 = v15;
      if ( !v15 )
        return (unsigned int)-1073741801;
      v9 = (unsigned int *)v15;
    }
    else
    {
      if ( v11 )
      {
        v7 = v11;
        break;
      }
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)v8 >> 1) - 1) = 0;
      v12 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v9, a3);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v10 = 0;
        }
        else if ( v12 != 2 )
        {
          if ( v12 == 3 )
            v7 = -1073741248;
          else
            v7 = -1073741595;
          break;
        }
      }
      else
      {
        ++v10;
      }
      if ( v12 == 2 )
        break;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v7;
}
