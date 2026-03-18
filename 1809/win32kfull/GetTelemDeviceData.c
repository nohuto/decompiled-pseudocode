/*
 * XREFs of GetTelemDeviceData @ 0x1C01BBB0C
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01BBF68 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     GetHidVidPidStrings @ 0x1C01BBAA8 (GetHidVidPidStrings.c)
 *     IsLegacyTouchPad @ 0x1C01BBCDC (IsLegacyTouchPad.c)
 */

__int64 __fastcall GetTelemDeviceData(
        WCHAR *a1,
        WCHAR *a2,
        int *a3,
        int *a4,
        int *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  int v8; // ebp
  unsigned int v9; // esi
  CInpPushLock *v10; // rbx
  struct DEVICEINFO *DeviceList; // rdi
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int HidVidPidStrings; // eax
  struct _UNICODE_STRING v19; // [rsp+20h] [rbp-58h] BYREF
  struct _UNICODE_STRING v20; // [rsp+30h] [rbp-48h] BYREF
  CInpPushLock *Lock; // [rsp+80h] [rbp+8h]

  v20.Buffer = a1;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)&v20.Length = 0x100000;
  v19.Buffer = a2;
  *(_DWORD *)&v19.Length = 0x100000;
  Lock = CBaseInput::TmpGetLock(gpHidInput);
  v10 = Lock;
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  if ( DeviceList )
  {
    v12 = 1;
    v13 = 0;
    while ( 1 )
    {
      if ( *((_BYTE *)DeviceList + 48) == (_BYTE)v13 )
      {
        if ( *((_WORD *)DeviceList + 372) == (_WORD)v13 )
        {
          *a3 = v12;
        }
        else if ( (unsigned int)IsLegacyTouchPad(DeviceList) )
        {
          goto LABEL_19;
        }
      }
      else if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        v14 = *(_DWORD *)(*((_QWORD *)DeviceList + 60) + 24LL);
        if ( v14 != 7 )
        {
          if ( (unsigned int)(v14 - 1) <= 3 )
            *a4 = v12;
          goto LABEL_22;
        }
        if ( !v8 )
        {
          *a6 = v13;
          v8 = v12;
          v15 = *((_QWORD *)DeviceList + 60);
          v16 = *(_DWORD *)(v15 + 896);
          if ( v16 == v12 )
          {
            *a5 = v12;
          }
          else if ( v16 == 2 )
          {
            *a5 = 2;
          }
          else if ( v16 == 3 )
          {
            *a5 = 3;
          }
          *a7 = *(_OWORD *)(v15 + 124);
          *a8 = *(_OWORD *)(*((_QWORD *)DeviceList + 60) + 140LL);
          HidVidPidStrings = GetHidVidPidStrings((__int64)DeviceList, &v20, &v19);
          v13 = 0;
          if ( HidVidPidStrings < 0 )
          {
LABEL_23:
            v10 = Lock;
            break;
          }
          v12 = 1;
LABEL_19:
          v9 = v12;
        }
      }
LABEL_22:
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
      if ( !DeviceList )
        goto LABEL_23;
    }
  }
  CInpPushLock::UnLockShared(v10);
  return v9;
}
