/*
 * XREFs of FindSiblingPointerDevice @ 0x1C0120024
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011F4EC (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C01200C8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

__int64 __fastcall FindSiblingPointerDevice(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  struct CInpPushLock *Lock; // rax
  struct DEVICEINFO *DeviceList; // rsi
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // ecx
  CInpPushLock *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v4 = 0;
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v11, Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  if ( DeviceList )
  {
    while ( 1 )
    {
      if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        v8 = *((_QWORD *)DeviceList + 58);
        if ( *(_WORD *)(v8 + 110) == *(_WORD *)(a1 + 6) && *(_WORD *)(v8 + 112) == *(_WORD *)(a1 + 8) )
        {
          v9 = *(_DWORD *)(a2 + 328);
          if ( v9 == *((_DWORD *)DeviceList + 82)
            && (!v9 || RtlCompareMemory(*(const void **)(a2 + 320), *((const void **)DeviceList + 40), v9) == v9) )
          {
            break;
          }
        }
      }
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
      if ( !DeviceList )
        goto LABEL_2;
    }
    v4 = 1;
    v10 = *(_DWORD *)(*((_QWORD *)DeviceList + 60) + 24LL);
    if ( v10 == 7 )
    {
      *(_WORD *)(a2 + 744) |= 2u;
    }
    else if ( (unsigned int)(v10 - 5) > 1 )
    {
      if ( (unsigned int)(v10 - 1) <= 3 )
        *(_WORD *)(a2 + 744) |= 8u;
    }
    else
    {
      *(_WORD *)(a2 + 744) |= 4u;
    }
  }
LABEL_2:
  if ( !v12 )
    CInpPushLock::UnLockShared(v11);
  return v4;
}
