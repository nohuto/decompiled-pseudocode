/*
 * XREFs of _GetTouchValidationStatus @ 0x1C01E1108
 * Callers:
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01F7B6C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     NtUserGetTouchValidationStatus @ 0x1C022F190 (NtUserGetTouchValidationStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  int v3; // ecx
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *DeviceList; // rdx
  __int64 v6; // rax

  v1 = 3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 464);
      if ( *(_WORD *)(v2 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v2 + 40) - 4) <= 1u )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 312LL);
        if ( (v3 & 8) == 0 )
          return 2 - (unsigned int)((v3 & 0x100) != 0);
      }
    }
    return v1;
  }
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  if ( !DeviceList )
    goto LABEL_17;
  while ( 1 )
  {
    if ( *((_BYTE *)DeviceList + 48) != 2 )
      goto LABEL_14;
    if ( (*((_DWORD *)DeviceList + 46) & 0x2000) != 0 )
      goto LABEL_14;
    v6 = *((_QWORD *)DeviceList + 58);
    if ( *(_WORD *)(v6 + 42) != 13 || *(_WORD *)(v6 + 40) != 4 )
      goto LABEL_14;
    if ( (*(_DWORD *)(*((_QWORD *)DeviceList + 60) + 312LL) & 0x100) != 0 )
      break;
    v1 = 2;
LABEL_14:
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    if ( !DeviceList )
      goto LABEL_17;
  }
  v1 = 1;
LABEL_17:
  CInpPushLock::UnLockShared(Lock);
  return v1;
}
