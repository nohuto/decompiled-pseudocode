/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x1800DB294
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800DBC24 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180022FC0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180047348 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(
        CAppAudioSessionId *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4)
{
  int v7; // ebx
  __int64 v8; // rax
  GUID v9; // xmm0
  _WORD *v10; // rax
  _WORD *v11; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_3;
    v8 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v8 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v8 )
    {
LABEL_3:
      v7 = -2147024809;
LABEL_13:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v7);
      return (unsigned int)v7;
    }
  }
  if ( a3 )
    v9 = *a3;
  else
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)this + 1) = v9;
  if ( !a4 )
  {
    v10 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 1, v10);
    v11 = (_WORD *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this, v11);
  }
  *((_DWORD *)this + 10) = a4;
  v7 = CAppAudioSessionId::CalculateStaticId(this);
  if ( v7 < 0 )
    goto LABEL_13;
  return (unsigned int)v7;
}
