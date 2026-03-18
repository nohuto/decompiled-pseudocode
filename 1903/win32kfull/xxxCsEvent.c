/*
 * XREFs of xxxCsEvent @ 0x1C0243880
 * Callers:
 *     xxxChangeMonitorFlags @ 0x1C01329A8 (xxxChangeMonitorFlags.c)
 *     NtUserEvent @ 0x1C022B950 (NtUserEvent.c)
 *     xxxMessageEvent @ 0x1C0243B1C (xxxMessageEvent.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     memmove @ 0x1C0166500 (memmove.c)
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
  __int64 v12; // r9
  _DWORD *v13; // rdi
  int v14; // r14d
  _QWORD *i; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int j; // esi
  _QWORD *v21; // rax
  ULONG_PTR v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // [rsp+30h] [rbp-78h]
  __int128 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+50h] [rbp-58h]
  _QWORD v32[3]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v33[3]; // [rsp+78h] [rbp-30h] BYREF

  memset(v32, 0, sizeof(v32));
  memset(v33, 0, sizeof(v33));
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
  v13 = v11;
  if ( !v11 )
  {
    Win32FreePool(v6);
    return 16392LL;
  }
  *v11 = v8;
  v14 = 0;
  for ( i = WPP_MAIN_CB.Queue.Wcb.DeviceObject; i && v14 < *v13; i = (_QWORD *)i[3] )
  {
    if ( ((*(_DWORD *)v6 & (_DWORD)i[5]) == 0 || *(_WORD *)(v6 + 4))
      && ((*(_DWORD *)v6 & (_DWORD)i[5]) != 0 || !*(_WORD *)(v6 + 4)) )
    {
      *(_QWORD *)&v29 = &v13[2 * v14 + 2];
      *((_QWORD *)&v29 + 1) = i[6];
      v30 = v29;
      HMAssignmentLock(&v30);
      ++v14;
    }
  }
  PushW32ThreadLock(v6, v33, (__int64)Win32FreePool, v12);
  PushW32ThreadLock((__int64)v13, v32, (__int64)DestroyEventPacketTargets, v16);
  for ( j = 0; j < *v13; ++j )
  {
    v30 = 0uLL;
    v31 = 0LL;
    v21 = (_QWORD *)HMAssignmentUnlock(&v13[2 * j + 2]);
    if ( v21 )
    {
      v22 = ValidateHwnd(*v21);
      if ( v22 )
      {
        *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v30;
        *((_QWORD *)&v30 + 1) = v22;
        HMLockObject(v22);
        xxxSendMessage(v22);
        ThreadUnlock1(v24, v23, v25);
      }
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v32, v17, v18, v19);
  PopAndFreeAlwaysW32ThreadLock((__int64)v33, v26, v27, v28);
  return 0LL;
}
