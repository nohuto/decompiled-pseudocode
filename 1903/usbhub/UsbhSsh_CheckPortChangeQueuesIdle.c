/*
 * XREFs of UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C000A180
 * Callers:
 *     UsbhSsh_CheckHubIdle @ 0x1C000A0F8 (UsbhSsh_CheckHubIdle.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhSsh_CheckPortChangeQueuesIdle(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  KIRQL v9; // al
  bool v10; // zf
  KSPIN_LOCK *v11; // rcx

  FdoExt(a1);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v3 = *(_QWORD *)(a1 + 64);
    if ( !v3 )
LABEL_24:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v3 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v3);
    if ( i > *(unsigned __int8 *)(v3 + 2938) )
      return 0LL;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
      *(_DWORD *)v4 = 1413771367;
      *(_QWORD *)(v4 + 16) = i;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
    }
    if ( i )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( !v5 )
        goto LABEL_24;
      if ( *(_DWORD *)v5 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v5);
      if ( i > *(unsigned __int8 *)(v5 + 2938) )
      {
        v7 = 0LL;
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 3056);
        if ( v6 )
        {
          v7 = 2928LL * i + v6 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v8 = *(_QWORD *)(v5 + 888)
               + 32LL
               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
            *(_DWORD *)v8 = 1044672615;
            *(_QWORD *)(v8 + 8) = 0LL;
            *(_QWORD *)(v8 + 16) = i;
            *(_QWORD *)(v8 + 24) = v7;
          }
        }
        else
        {
          v7 = 0LL;
        }
      }
    }
    else
    {
      v7 = 0LL;
    }
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 440));
    *(_DWORD *)(v7 + 448) = 1;
    v10 = *(_QWORD *)(v7 + 456) != v7 + 456;
    *(_DWORD *)(v7 + 448) = 0;
    v11 = (KSPIN_LOCK *)(v7 + 440);
    if ( v10 )
      break;
    KeReleaseSpinLock(v11, v9);
  }
  KeReleaseSpinLock(v11, v9);
  return 3221225473LL;
}
