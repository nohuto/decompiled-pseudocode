/*
 * XREFs of ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C3D40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18005B110 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteSoftware::Initialize(void **this, struct IMMDevice *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  signed int LastError; // eax

  v3 = CMuteControlBase::Initialize(this, a2);
  if ( v3 < 0 )
    goto LABEL_7;
  if ( ThreadPool )
  {
    v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CMuteSoftware::OnPersistState,
           this);
    this[12] = (void *)v4;
    if ( !v4 )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v3 < 0 )
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CMuteSoftware::Initialize", 814, v3);
  return (unsigned int)v3;
}
