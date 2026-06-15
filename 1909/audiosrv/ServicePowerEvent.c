/*
 * XREFs of ServicePowerEvent @ 0x1800502B0
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180044EE0 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180112358 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *v7; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned int)dword_1801B54B8 > 4 )
  {
    v7 = EventTypeNameFromEventType(a1);
    TlgCreateWsz(&pDesc, v7);
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_180178D18, v8, v9, 3u, &pData);
  }
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 != 9 && (_DWORD)a1 && (_DWORD)a1 != 2 )
      {
        if ( (_DWORD)a1 == 4 )
        {
          return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 88LL))(
                                 g_AudioService,
                                 a2);
        }
        else
        {
          if ( (_DWORD)a1 != 7 )
            return v2;
          return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 80LL))(
                                 g_AudioService,
                                 a2);
        }
      }
    }
    else if ( (_DWORD)a1 == 32787 )
    {
      return (unsigned int)(*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)g_AudioService + 96LL))(
                             g_AudioService,
                             a2);
    }
  }
  return v2;
}
