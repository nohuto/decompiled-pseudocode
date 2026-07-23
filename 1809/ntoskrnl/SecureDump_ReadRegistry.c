/*
 * XREFs of SecureDump_ReadRegistry @ 0x1401916C0
 * Callers:
 *     SecureDump_PrepareForInit @ 0x1401915AC (SecureDump_PrepareForInit.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 */

__int64 __fastcall SecureDump_ReadRegistry(__int64 a1, __int64 a2, int a3, void **a4, _DWORD *a5)
{
  _DWORD *v7; // rsi
  __int64 result; // rax
  int RegistryValue; // ebx
  unsigned int v10; // eax
  PVOID PoolWithTag; // rax
  _DWORD *P; // [rsp+30h] [rbp-28h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 )
    return 3221225485LL;
  result = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
  if ( (int)result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      v10 = P[3];
      if ( v10 )
      {
        if ( a3 == P[1] )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x706D6453u);
          *a4 = PoolWithTag;
          if ( PoolWithTag )
          {
            *v7 = P[3];
            memmove(*a4, (char *)P + (unsigned int)P[2], (unsigned int)P[3]);
          }
          else
          {
            RegistryValue = -1073741670;
          }
        }
        else
        {
          RegistryValue = -1073741788;
        }
      }
      else
      {
        RegistryValue = -1073741820;
      }
      ExFreePoolWithTag(P, 0);
    }
    ObCloseHandle(Handle, 0);
    return (unsigned int)RegistryValue;
  }
  return result;
}
