/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C01DA3D0
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00EA8E0 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00EA9FC (AddRemovePointerDevicePresence.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C01200C8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01D7F9C (-GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

int __fastcall UpdatePointerDeviceSystemMetrics(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  struct CInpPushLock *Lock; // rax
  struct DEVICEINFO *i; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edi
  CInpPushLock *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  v2 = 0;
  v3 = 0;
  v17 = 0;
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 6) == 7 )
      return (int)v1;
    GetPointerDeviceType(&v17, a1);
    v6 = v17;
    if ( *(_DWORD *)(v5 + 712) > 1u )
    {
      v6 = v17 | 0x40;
      v3 = *(_DWORD *)(v5 + 712);
    }
    v2 = gdwHardwareTypes | v6;
  }
  else
  {
    Lock = CBaseInput::TmpGetLock(gpHidInput);
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v14, Lock);
    for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) != 0 && (*((_DWORD *)i + 46) & 0x400) == 0 )
      {
        v9 = *((_QWORD *)i + 60);
        if ( *(_DWORD *)(v9 + 24) != 7 )
        {
          GetPointerDeviceType(&v17, (struct tagHID_POINTER_DEVICE_INFO *)v9);
          v2 = v17;
          if ( *(_DWORD *)(v10 + 712) > v3 )
          {
            v2 = v17 | 0x40;
            v3 = *(_DWORD *)(v10 + 712);
            v17 |= 0x40u;
          }
        }
      }
    }
    if ( v15 )
      goto LABEL_18;
    CInpPushLock::UnLockShared(v14);
  }
  if ( a1 )
  {
    v11 = gCurrentMaxCount;
    if ( gCurrentMaxCount < v3 )
      goto LABEL_19;
    goto LABEL_20;
  }
LABEL_18:
  v11 = gCurrentMaxCount;
  if ( gCurrentMaxCount != v3 )
  {
LABEL_19:
    v11 = v3;
    gCurrentMaxCount = v3;
  }
LABEL_20:
  if ( v2 )
    v2 |= 0x80u;
  if ( v11 > 0xFFFF )
    v11 = 0xFFFF;
  v12 = (v11 << 8) | v2 & 0xCF;
  LODWORD(v1) = gdwSystemMetrics;
  if ( v12 != gdwSystemMetrics )
  {
    if ( a1 )
      v12 |= (unsigned __int8)gdwSystemMetrics;
    AddRemovePointerDeviceSystemMetricKey(v12, 1);
    AddRemovePointerDeviceSystemMetricKey(v12, 0);
    LODWORD(v1) = AddRemovePointerDevicePresence(v2);
  }
  return (int)v1;
}
