/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18006BBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(
        __int16 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rax
  bool v13; // zf
  _DWORD v14[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  v6 = v14[0];
  if ( (a1 & 0x100) != 0 )
    v6 = 5;
  v14[0] = v6;
  LODWORD(v7) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v7) = v7 + 1;
    v14[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v12 = (unsigned int)v7;
    v7 = (unsigned int)(v7 + 1);
    v13 = (_WORD)LdrpDllDirectory == 0;
    v14[v12] = 6;
    if ( !v13 )
    {
      v14[v7] = 0;
      LODWORD(v7) = v7 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v8 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v8] = 7;
  }
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v9 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v9] = 8;
  }
  v10 = RtlpComputePath(v14, (unsigned int)v7, a2);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 100) = 1;
    if ( !(_WORD)LdrpAppPackagesPath )
      *(_QWORD *)(v10 + 88) = 0LL;
  }
  return v10;
}
