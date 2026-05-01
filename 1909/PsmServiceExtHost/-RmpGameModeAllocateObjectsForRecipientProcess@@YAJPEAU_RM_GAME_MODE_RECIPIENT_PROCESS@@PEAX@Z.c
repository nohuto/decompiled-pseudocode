/*
 * XREFs of ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x18006AEDC
 * Callers:
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18006B620 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180031080 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeAllocateObjectsForRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1, void *a2)
{
  int v4; // r9d
  DWORD ProcessId; // ebx
  const struct _TlgProvider_t *v6; // rcx
  UINT32 cData; // r10d
  NTSTATUS v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  NTSTATUS *v12; // [rsp+60h] [rbp+17h]
  UINT32 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v4 = TpAllocWait((char *)a1 + 48, RmpGameModeRecipientProcessTerminationCallback, a1, 0LL);
  if ( v4 >= 0 )
  {
    ProcessId = GetProcessId(a2);
    if ( RmpSystemOpenProcess((void **)a1 + 5, 0x101200u, ProcessId) >= 0
      || (v9 = RmpSystemOpenProcess((void **)a1 + 5, 0x103000u, ProcessId), v4 = v9, v9 >= 0) )
    {
      *((_DWORD *)a1 + 27) = ProcessId;
      return 0;
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
    {
      v14 = 0;
      v17 = 0;
      v12 = &v9;
      v15 = &v10;
      v13 = cData;
      v10 = 0x1000000LL;
      v16 = 8;
      TlgWrite(v6, &unk_180094680, 0LL, 0LL, cData, &pData);
      return (unsigned int)v9;
    }
  }
  return (unsigned int)v4;
}
