/*
 * XREFs of xxxCsEvent @ 0x1C0243140
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C010D4A8 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C022B330 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C02433DC (xxxMessageEvent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall xxxCsEvent(void *Src, unsigned __int16 a2)
{
  size_t v4; // rdi
  void *v5; // rax
  __int64 v6; // rbx
  int v8; // esi
  _DWORD *DeviceObject; // rax
  int v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // r14d
  _QWORD *i; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  int j; // esi
  _QWORD *v18; // rax
  ULONG_PTR v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int128 v25; // [rsp+30h] [rbp-78h]
  __int128 v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h]
  _QWORD v28[3]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+78h] [rbp-30h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v29, 0, sizeof(v29));
  v4 = (unsigned int)a2 + 8;
  v5 = (void *)Win32AllocPoolWithQuota(v4, 895775573LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return 16392LL;
  memmove(v5, Src, v4);
  *(_WORD *)(v6 + 6) = a2;
  v8 = 0;
  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
  {
    v10 = *(_DWORD *)v6;
    do
    {
      if ( ((v10 & DeviceObject[10]) == 0 || *(_WORD *)(v6 + 4))
        && ((v10 & DeviceObject[10]) != 0 || !*(_WORD *)(v6 + 4)) )
      {
        ++v8;
      }
      DeviceObject = (_DWORD *)*((_QWORD *)DeviceObject + 3);
    }
    while ( DeviceObject );
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
  for ( i = WPP_MAIN_CB.Queue.Wcb.DeviceObject; i && v13 < *v12; i = (_QWORD *)i[3] )
  {
    if ( ((*(_DWORD *)v6 & (_DWORD)i[5]) == 0 || *(_WORD *)(v6 + 4))
      && ((*(_DWORD *)v6 & (_DWORD)i[5]) != 0 || !*(_WORD *)(v6 + 4)) )
    {
      *(_QWORD *)&v25 = &v12[2 * v13 + 2];
      *((_QWORD *)&v25 + 1) = i[6];
      v26 = v25;
      HMAssignmentLock(&v26);
      ++v13;
    }
  }
  PushW32ThreadLock(v6, v29, (__int64)Win32FreePool);
  PushW32ThreadLock((__int64)v12, v28, (__int64)DestroyEventPacketTargets);
  for ( j = 0; j < *v12; ++j )
  {
    v26 = 0uLL;
    v27 = 0LL;
    v18 = (_QWORD *)HMAssignmentUnlock(&v12[2 * j + 2]);
    if ( v18 )
    {
      v19 = ValidateHwnd(*v18);
      if ( v19 )
      {
        *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v26;
        *((_QWORD *)&v26 + 1) = v19;
        HMLockObject(v19);
        xxxSendMessage(v19);
        ThreadUnlock1(v21, v20, v22);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v28, v15, v16);
  PopAndFreeAlwaysW32ThreadLock((__int64)v29, v23, v24);
  return 0LL;
}
