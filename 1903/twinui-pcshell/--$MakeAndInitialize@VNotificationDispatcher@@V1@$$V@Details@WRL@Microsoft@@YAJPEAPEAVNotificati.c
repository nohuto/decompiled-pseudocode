/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x180153990
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180156CA0 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18015901C (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800801DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18010D0C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x180159568 (-RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>(
        volatile signed __int32 **a1)
{
  Microsoft::WRL::FtmBase *v2; // rax
  volatile signed __int32 *v3; // rbx
  int v4; // edi
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL::FtmBase *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (Microsoft::WRL::FtmBase *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v3 = (volatile signed __int32 *)v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v2);
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = &NotificationDispatcher::`vftable';
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    InitializeSRWLock((PSRWLOCK)v3 + 10);
    *((_BYTE *)v3 + 88) = 0;
    v6 = v3;
    v4 = NotificationDispatcher::RuntimeClassInitialize((NotificationDispatcher *)v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
      {
        _InterlockedIncrement(v3 + 9);
        v3 = v6;
      }
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
