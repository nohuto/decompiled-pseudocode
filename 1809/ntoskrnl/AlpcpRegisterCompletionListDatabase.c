/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x1406D62EC
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_14041BB50;
  if ( (__int64 *)qword_14041BB50 != &qword_14041BB50 )
  {
    v6 = a1[2];
    do
    {
      v7 = v2[2];
      if ( v7 > (unsigned __int64)v6 )
        break;
      if ( (__int64 *)v7 == v6 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v4 = 0;
          goto LABEL_4;
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != &qword_14041BB50 );
  }
  v3 = (__int64 **)v2[1];
  if ( *v3 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v3;
  *v3 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v4 = 1;
  ++dword_14041BB48;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v4;
}
