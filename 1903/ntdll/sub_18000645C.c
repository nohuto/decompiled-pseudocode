/*
 * XREFs of sub_18000645C @ 0x18000645C
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x1800063B0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     sub_180009D9C @ 0x180009D9C (sub_180009D9C.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180084E50 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     sub_180006E00 @ 0x180006E00 (sub_180006E00.c)
 *     sub_180006ECC @ 0x180006ECC (sub_180006ECC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSubscribeWnfStateChange @ 0x18009FD50 (ZwSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800DDA54 @ 0x1800DDA54 (sub_1800DDA54.c)
 */

__int64 __fastcall sub_18000645C(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int i; // ecx
  unsigned int v14; // edi
  int v15; // eax
  void (__fastcall *v17)(__int64); // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v5 = qword_180166088 + 8;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_180166088 + 8);
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      sub_1800DDA54(*(_QWORD *)(a1 + 16), a2, a1, *(_DWORD *)(a1 + 108), *(_QWORD *)(a2 + 32), *(_DWORD *)(a2 + 64));
    v8 = (_DWORD *)(a1 + 88);
    v9 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v10 = (_DWORD *)(a1 + 88);
    do
    {
      v11 = *(_DWORD *)(a2 + 64);
      if ( _bittest(&v11, v9) )
        --*v10;
      ++v9;
      ++v10;
    }
    while ( v9 < 5 );
    v12 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v8 )
        v12 |= 1 << i;
      ++v8;
    }
    --*(_DWORD *)(a1 + 80);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 84);
    v14 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v15 = ZwSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v12, &v19);
      v14 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741772 || v15 == -1073741431 )
          v14 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v19;
      }
    }
    sub_180006E00(a2, &v17, &v18);
    RtlReleaseSRWLockExclusive(a1 + 56);
    RtlReleaseSRWLockExclusive(qword_180166088 + 8);
    if ( v17 )
      v17(v18);
    sub_180006ECC(a1);
    return v14;
  }
}
