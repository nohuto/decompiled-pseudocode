/*
 * XREFs of LdrpLogError @ 0x18007EA24
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrUnlockLoaderLock @ 0x18007D300 (LdrUnlockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

int __fastcall LdrpLogError(int a1, char a2, char a3, __int64 a4)
{
  struct _PEB *v8; // rax
  __int64 v9; // r10
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx

  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v12 = (__int64)v8->SharedData + 555;
      }
      else
      {
        v12 = 2147353477LL;
      }
      if ( (*(_BYTE *)v12 & 0x20) != 0 )
      {
        LOBYTE(v11) = a3;
        LOBYTE(v10) = a2;
        LODWORD(v8) = LdrpLogEtwEvent(5284, a1, v10, v11, a4, 0LL);
      }
    }
  }
  return (int)v8;
}
