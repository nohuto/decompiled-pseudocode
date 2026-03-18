/*
 * XREFs of UsbhRawWait @ 0x1C001ACD0
 * Callers:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A780 (UsbhSyncPowerOnPorts.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 *     UsbhAddDevice @ 0x1C0028CF0 (UsbhAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhRawWait(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r8
  LARGE_INTEGER v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  LARGE_INTEGER v7; // rcx
  bool v8; // cc
  __int64 v9; // rax
  struct _KEVENT Object; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v1 = a1;
    Interval.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( dword_1C006F694 == 1
      && (memset(&Object, 0, sizeof(Object)),
          KeInitializeEvent(&Object, NotificationEvent, 0),
          (v2 = ((__int64 (__fastcall *)(void *, struct _KEVENT *, __int64))g_ExAllocateTimer)(
                  &UsbhHighResTimerCompletion,
                  &Object,
                  4LL)) != 0) )
    {
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))g_ExSetTimer)(v2, -10000LL * (unsigned int)v1, 0LL, 0LL);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LOBYTE(v3) = 1;
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))g_ExDeleteTimer)(v2, 1LL, v3, 0LL);
    }
    else
    {
      v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v5 = ((unsigned __int64)(PerformanceFrequency.QuadPart * v1) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      v6 = v4.QuadPart + ((v5 + ((unsigned __int64)(PerformanceFrequency.QuadPart * v1 - v5) >> 1)) >> 9);
      v13 = v6;
      Interval.QuadPart = -10000 * (int)v1;
      while ( 1 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v8 = v7.HighPart <= SHIDWORD(v6);
        if ( v7.HighPart == HIDWORD(v6) )
        {
          if ( v7.LowPart >= (unsigned int)v6 )
            return;
          v8 = v7.HighPart <= SHIDWORD(v6);
        }
        if ( !v8 )
          break;
        v9 = (__int64)(v6 - v7.QuadPart) / (__int64)(PerformanceFrequency.QuadPart / 0x3E8uLL);
        PerformanceFrequency.QuadPart /= 0x3E8uLL;
        if ( (unsigned int)v9 | ((unsigned __int64)((__int64)(v6 - v7.QuadPart) / PerformanceFrequency.QuadPart) >> 32) )
          Interval.QuadPart = -10000 * v9;
        else
          Interval.QuadPart = -10000LL;
      }
    }
  }
}
