/*
 * XREFs of ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x180063648
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800571EC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::CreateWorkItemThread(AudioDeviceMgr *this)
{
  signed int v1; // edx
  HANDLE EventW; // rax
  HANDLE v4; // rax
  char *Thread; // rax
  signed int LastError; // eax
  signed int v8; // eax
  signed int v9; // eax

  v1 = 0;
  if ( ((*((_QWORD *)this + 28) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 26) = EventW;
    if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_3;
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
    {
LABEL_3:
      v4 = CreateEventW(0LL, 0, 0, 0LL);
      *((_QWORD *)this + 27) = v4;
      if ( (((unsigned __int64)v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        goto LABEL_4;
      v8 = GetLastError();
      v1 = v8;
      if ( v8 > 0 )
        v1 = (unsigned __int16)v8 | 0x80070000;
      if ( v1 >= 0 )
      {
LABEL_4:
        Thread = (char *)CreateThread(0LL, 0LL, AudioDeviceMgr::s_WorkItemThreadProc, this, 0, 0LL);
        *((_QWORD *)this + 28) = Thread;
        if ( (unsigned __int64)(Thread - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v9 = GetLastError();
          v1 = v9;
          if ( v9 > 0 )
            return (unsigned __int16)v9 | 0x80070000;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return (unsigned int)v1;
}
