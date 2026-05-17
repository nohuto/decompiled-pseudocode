/*
 * XREFs of LdrUnlockLoaderLock @ 0x180081CA0
 * Callers:
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v4 = a1 & 1;
      if ( a2 >= 0x1000000000000000LL || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v4 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
      }
      else if ( (_DWORD)v4 )
      {
        LdrpReleaseLoaderLock(v4, 13, 0);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14, 0);
      }
    }
  }
  return v2;
}
