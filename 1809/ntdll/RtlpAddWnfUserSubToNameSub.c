/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x18005BF98
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BE4C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     NtSubscribeWnfStateChange @ 0x1800A3930 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventSubscribe @ 0x1800DFEA8 (RtlpWnfETWEventSubscribe.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 ***v9; // r8
  __int64 *****v10; // rcx
  __int64 ****v11; // rax
  _DWORD *v12; // r9
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int i; // ecx
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rdx
  __int64 **v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(qword_1801660D0 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v6, v7, v8);
  v9 = (__int64 ***)(a1 + 64);
  v10 = *(__int64 ******)(a1 + 72);
  v11 = (__int64 ****)(a2 + 8);
  if ( *v10 != (__int64 ****)(a1 + 64) )
    __fastfail(3u);
  *v11 = v9;
  *(_QWORD *)(a2 + 16) = v10;
  *v10 = v11;
  *(_QWORD *)(a1 + 72) = v11;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 128) == 1 && (*(_DWORD *)(a2 + 64) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 160) = 1;
  v12 = (_DWORD *)(a1 + 88);
  v13 = 0;
  v14 = (_DWORD *)(a1 + 88);
  do
  {
    v15 = *(_DWORD *)(a2 + 64);
    if ( _bittest(&v15, v13) )
      ++*v14;
    ++v13;
    ++v14;
  }
  while ( v13 < 5 );
  v16 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v12 )
      v16 |= 1 << i;
    ++v12;
  }
  ++*(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
    ++*(_DWORD *)(a1 + 84);
  v18 = *(unsigned int *)(a2 + 56);
  if ( *(_DWORD *)(a1 + 24) < (unsigned int)v18 )
  {
    v22 = *v9;
    while ( v22 != (__int64 **)v9 )
    {
      v23 = v18;
      v18 = *((unsigned int *)v22 + 12);
      v22 = (__int64 **)*v22;
      if ( v23 <= (unsigned int)v18 )
        v18 = v23;
    }
  }
  *(_DWORD *)(a1 + 24) = v18;
  v19 = NtSubscribeWnfStateChange(a1 + 16, v18, v16, &v24);
  if ( v19 >= 0 )
    *(_QWORD *)(a1 + 8) = v24;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v20 = 2147353486LL;
  if ( *(_BYTE *)v20 && v19 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 108),
      *(_QWORD *)(a2 + 32),
      *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801660D0 + 8));
  return (unsigned int)v19;
}
