/*
 * XREFs of xxxCsEvent @ 0x1C0203878
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C01072C8 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C01ED740 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0203AA8 (xxxMessageEvent.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  size_t v4; // rdi
  void *v5; // rax
  __int64 v6; // rbx
  int v8; // esi
  struct tagSVR_INSTANCE_INFO *v9; // rax
  int v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // r14d
  struct tagSVR_INSTANCE_INFO *i; // rsi
  int j; // esi
  _QWORD *v16; // rax
  ULONG_PTR v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v23[3]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[3]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-38h] BYREF

  v4 = (unsigned int)a2 + 8;
  v5 = (void *)Win32AllocPoolWithQuota(v4, 895775573LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, v4);
  *(_WORD *)(v6 + 6) = a2;
  v8 = 0;
  v9 = psiiList;
  if ( psiiList )
  {
    v10 = *(_DWORD *)v6;
    do
    {
      if ( ((v10 & *((_DWORD *)v9 + 10)) == 0 || *(_WORD *)(v6 + 4))
        && ((v10 & *((_DWORD *)v9 + 10)) != 0 || !*(_WORD *)(v6 + 4)) )
      {
        ++v8;
      }
      v9 = (struct tagSVR_INSTANCE_INFO *)*((_QWORD *)v9 + 3);
    }
    while ( v9 );
  }
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(8LL * v8 + 8, 912552789LL);
  v12 = v11;
  if ( !v11 )
  {
    Win32FreePool(v6);
    return 16392LL;
  }
  *v11 = v8;
  v13 = 0;
  for ( i = psiiList; i && v13 < *v12; i = (struct tagSVR_INSTANCE_INFO *)*((_QWORD *)i + 3) )
  {
    if ( ((*(_DWORD *)v6 & *((_DWORD *)i + 10)) == 0 || *(_WORD *)(v6 + 4))
      && ((*(_DWORD *)v6 & *((_DWORD *)i + 10)) != 0 || !*(_WORD *)(v6 + 4)) )
    {
      *(_QWORD *)&v21 = &v12[2 * v13 + 2];
      *((_QWORD *)&v21 + 1) = *((_QWORD *)i + 6);
      v22 = v21;
      HMAssignmentLock(&v22);
      ++v13;
    }
  }
  PushW32ThreadLock(v6, v25, (__int64)Win32FreePool);
  PushW32ThreadLock((__int64)v12, v24, (__int64)DestroyEventPacketTargets);
  for ( j = 0; j < *v12; ++j )
  {
    v16 = (_QWORD *)HMAssignmentUnlock(&v12[2 * j + 2]);
    if ( v16 )
    {
      v17 = ValidateHwnd(*v16);
      if ( v17 )
      {
        v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v23;
        v23[1] = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        xxxSendMessage(v17);
        ThreadUnlock1(v19, v18, v20);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v24);
  PopAndFreeAlwaysW32ThreadLock((__int64)v25);
  return 0LL;
}
