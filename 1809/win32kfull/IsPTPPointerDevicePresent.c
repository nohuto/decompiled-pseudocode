/*
 * XREFs of IsPTPPointerDevicePresent @ 0x1C01BBD2C
 * Callers:
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPTPPointerDevicePresent(__int64 a1, struct DEVICEINFO **a2)
{
  unsigned int v2; // esi
  CInpPushLock *Lock; // rbx
  struct DEVICEINFO *i; // rax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 )
    *a2 = 0LL;
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  CInpPushLock::LockShared(Lock);
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 50) & 0x80u) != 0 )
    {
      v6 = *((_QWORD *)i + 58);
      if ( *(_WORD *)(v6 + 42) == 13 && *(_WORD *)(v6 + 40) == 5 )
      {
        v2 = 1;
        if ( a2 )
          *a2 = i;
        break;
      }
    }
  }
  CInpPushLock::UnLockShared(Lock);
  return v2;
}
