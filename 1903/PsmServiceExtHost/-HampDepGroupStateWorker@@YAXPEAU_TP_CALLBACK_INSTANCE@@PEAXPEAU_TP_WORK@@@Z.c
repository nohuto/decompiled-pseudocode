/*
 * XREFs of ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECA4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002ECE8 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18003057C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupStateWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_DEPENDENCY_GROUP *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // edi
  _BYTE v5[144]; // [rsp+30h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v7; // [rsp+E0h] [rbp-28h]
  int v8; // [rsp+E8h] [rbp-20h]
  int v9; // [rsp+ECh] [rbp-1Ch]

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009929D, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  while ( 1 )
  {
    HampDepGroupAcquireLockExclusive(a2);
    if ( *((_QWORD *)a2 + 14) == *((_QWORD *)a2 + 13) || !HampDepGroupTryEnterStateChange(a2, 0LL) )
      break;
    HampDepGroupReleaseLockExclusive(a2);
    HampDepGroupRunStateChangeWorker(a2);
  }
  *((_DWORD *)a2 + 33) &= ~1u;
  HampDepGroupReleaseLockExclusive(a2);
  HampDepGroupDereference(a2);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v9 = 0;
    v7 = a2;
    v8 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009937D, 0LL, 0LL, 3u, &pData);
  }
}
