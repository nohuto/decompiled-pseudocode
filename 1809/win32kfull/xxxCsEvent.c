/*
 * XREFs of xxxCsEvent @ 0x1C022C7CC
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C012724C (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C0213AC0 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C022CA28 (xxxMessageEvent.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     memmove @ 0x1C0163300 (memmove.c)
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
  __int64 v15; // rdx
  int j; // esi
  _QWORD *v17; // rax
  ULONG_PTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+78h] [rbp-30h] BYREF

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
      *(_QWORD *)&v22 = &v12[2 * v13 + 2];
      *((_QWORD *)&v22 + 1) = *((_QWORD *)i + 6);
      v23 = v22;
      HMAssignmentLock(&v23);
      ++v13;
    }
  }
  PushW32ThreadLock(v6, v25, (__int64)Win32FreePool);
  PushW32ThreadLock((__int64)v12, v24, (__int64)DestroyEventPacketTargets);
  for ( j = 0; j < *v12; ++j )
  {
    v17 = (_QWORD *)HMAssignmentUnlock(&v12[2 * j + 2]);
    if ( v17 )
    {
      v18 = ValidateHwnd(*v17);
      if ( v18 )
      {
        *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v22;
        *((_QWORD *)&v22 + 1) = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        xxxSendMessage(v18);
        ThreadUnlock1(v20, v19);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v24, v15);
  PopAndFreeAlwaysW32ThreadLock((__int64)v25, v21);
  return 0LL;
}
