/*
 * XREFs of PopDispatchNotificationsToList @ 0x1406A3148
 * Callers:
 *     PopDispatchNotifications @ 0x1406A3730 (PopDispatchNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x1406A35E0 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x14072871C (PopFreeRegistration.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(__int64 **a1)
{
  __int64 *v2; // rdi
  unsigned int v3; // eax
  _QWORD *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  __int64 v7; // r8
  int updated; // ebx
  _QWORD *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-78h]
  int v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+30h] [rbp-68h]
  unsigned int v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-48h] BYREF

  v14 = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (__int64 *)a1 )
  {
    v3 = *((_DWORD *)v2 + 13);
    v4 = v2;
    while ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v14 = v2[7];
      *((_DWORD *)v2 + 13) = *((_DWORD *)v2 + 13) & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, v15, 36LL, &v13, v10, v11, v12);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v13;
      v12 = 0;
      v11 = 0;
      v10 = 0LL;
      if ( v6 < 0 )
        v7 = 0LL;
      v13 = v7;
      updated = ZwUpdateWnfStateData((__int64)&v14, (__int64)v15, v7);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_19;
      ExAcquireFastMutex(&PopSettingLock);
      v3 = *((_DWORD *)v2 + 13) & 0xFFFFFFFD;
      *((_DWORD *)v2 + 13) = v3;
      if ( updated < 0 )
      {
        v3 |= 1u;
        *((_DWORD *)v2 + 13) = v3;
        break;
      }
    }
    v2 = (__int64 *)*v2;
    if ( (v3 & 2) == 0 && (v3 & 4) != 0 )
    {
      if ( (_QWORD *)v2[1] != v4 || (v9 = (_QWORD *)v4[1], (_QWORD *)*v9 != v4) )
        __fastfail(3u);
      *v9 = v2;
      v2[1] = (__int64)v9;
      PopFreeRegistration(v4);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_19:
    __fastfail(0x20u);
  return result;
}
