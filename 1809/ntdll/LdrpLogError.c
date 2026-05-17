/*
 * XREFs of LdrpLogError @ 0x18007168C
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpCompleteMapModule @ 0x180021B40 (LdrpCompleteMapModule.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrUnlockLoaderLock @ 0x180081CA0 (LdrUnlockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpLogError(int a1, char a2, char a3, __int64 a4)
{
  unsigned int *result; // rax
  __int64 v9; // r10
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v9 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v12 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v12 = 2147353477LL;
      }
      if ( (*(_BYTE *)v12 & 0x20) != 0 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = a2;
        return (unsigned int *)LdrpLogEtwEvent(5284, a1, v10, v11, a4, 0LL);
      }
    }
  }
  return result;
}
