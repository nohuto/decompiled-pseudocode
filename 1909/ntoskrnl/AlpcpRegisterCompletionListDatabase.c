/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x1406C33B4
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_140446410;
  if ( (__int64 *)qword_140446410 != &qword_140446410 )
  {
    v6 = (unsigned __int64)a1[2];
    while ( v2[2] <= v6 )
    {
      if ( v2[2] == v6 )
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
      if ( v2 == &qword_140446410 )
        break;
    }
  }
  v3 = (__int64 **)v2[1];
  if ( *v3 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v3;
  *v3 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v4 = 1;
  ++dword_140446408;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v4;
}
