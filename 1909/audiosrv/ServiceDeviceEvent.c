/*
 * XREFs of ServiceDeviceEvent @ 0x180112928
 * Callers:
 *     ServiceDeviceEventCallback @ 0x180112B00 (ServiceDeviceEventCallback.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E56EC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180112358 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801127DC (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180112840 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall ServiceDeviceEvent(unsigned int a1, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  const WCHAR *v4; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)dword_1801B54B8 > 4 )
  {
    v4 = EventTypeNameFromEventType(a1);
    TlgCreateWsz(&pDesc, v4);
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_180178D44, v5, v6, 3u, &pData);
  }
  v7 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196.Data4;
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_03b80e5a_ede8_4b33_a751_6ce34ec4c700.Data4;
  if ( !v8 )
    goto LABEL_12;
  v9 = *(_QWORD *)&a2->dbcc_classguid.Data1 - *(_QWORD *)&GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)a2->dbcc_classguid.Data4 - *(_QWORD *)GUID_9f2f7b66_65ac_4fa6_8ae4_123c78b89313.Data4;
  if ( !v9 )
  {
LABEL_12:
    if ( a2->dbcc_devicetype != 5 )
    {
      v14 = 782LL;
      goto LABEL_32;
    }
    v10 = a1 - 0x8000;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
            {
              v14 = 777LL;
LABEL_32:
              wil::details::in1diag3::Log_Hr(
                retaddr,
                v14,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                (const char *)0x80070078LL);
              return 0LL;
            }
            v15 = OnAudioDeviceRemoval(a2);
            if ( v15 < 0 )
            {
              v16 = (unsigned int)v15;
              v17 = 774LL;
LABEL_30:
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)v17,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                (const char *)v16);
            }
          }
          else
          {
            v18 = OnAudioDeviceRemoval(a2);
            if ( v18 < 0 )
            {
              v16 = (unsigned int)v18;
              v17 = 771LL;
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        v19 = PostDeviceEvent(2, &a2->dbcc_size);
        if ( v19 < 0 )
        {
          v16 = (unsigned int)v19;
          v17 = 768LL;
          goto LABEL_30;
        }
      }
    }
    else
    {
      v20 = PostDeviceEvent(0, &a2->dbcc_size);
      v21 = v20;
      if ( v20 >= 0 )
        v21 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x217,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
          (const char *)(unsigned int)v20);
      if ( v21 < 0 )
      {
        v16 = (unsigned int)v21;
        v17 = 763LL;
        goto LABEL_30;
      }
    }
  }
  return 0LL;
}
