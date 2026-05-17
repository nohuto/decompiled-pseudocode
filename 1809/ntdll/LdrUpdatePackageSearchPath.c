/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800E0310
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  wchar_t *StringRoutine; // rax
  wchar_t *v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  wchar_t *Buffer; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  if ( !LdrpAppPackagesPath.Length )
    return (unsigned int)-1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4 + 2);
      v6 = StringRoutine;
      if ( StringRoutine )
      {
        memmove(StringRoutine, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, v7, v8, v9);
        Buffer = LdrpAppPackagesPath.Buffer;
        LdrpAppPackagesPath.Length = v4;
        LdrpAppPackagesPath.MaximumLength = v4 + 2;
        LdrpAppPackagesPath.Buffer = v6;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( Buffer != LdrpOriginalAppPackagesPath.Buffer )
          NtdllpFreeStringRoutine((__int64)Buffer);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
