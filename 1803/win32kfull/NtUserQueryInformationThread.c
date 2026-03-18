/*
 * XREFs of NtUserQueryInformationThread @ 0x1C000B630
 * Callers:
 *     <none>
 * Callees:
 *     xxxQueryInformationThread @ 0x1C000B7BC (xxxQueryInformationThread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  __int64 v16; // rax
  unsigned int InformationThread; // esi
  _BYTE *v19; // [rsp+20h] [rbp-A8h]
  _BYTE v20[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v14 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v16 = Win32AllocPoolWithQuota((unsigned int)v4, 1230271317LL);
        v15 = (_BYTE *)v16;
        v19 = (_BYTE *)v16;
        if ( !v16 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v16, v20, Win32FreePool);
      }
      else
      {
        v15 = Src;
        v19 = Src;
      }
      memmove(v15, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v15 = 0LL;
      v19 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v15, (unsigned int)v4, v19);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v15, v4);
    }
    if ( v15 != Src && v15 )
      PopAndFreeAlwaysW32ThreadLock(v20);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v11, v12, v13);
  return InformationThread;
}
