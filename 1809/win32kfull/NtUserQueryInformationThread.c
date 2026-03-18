/*
 * XREFs of NtUserQueryInformationThread @ 0x1C00BAE80
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxQueryInformationThread @ 0x1C00BB038 (xxxQueryInformationThread.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserQueryInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _BYTE *v17; // rdi
  __int64 v18; // rax
  unsigned int InformationThread; // esi
  _BYTE *v21; // [rsp+20h] [rbp-A8h]
  _QWORD v22[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a4;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v16 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      ProbeForRead(a3, (unsigned int)v4, 2u);
      if ( (unsigned int)v4 > 0x40 )
      {
        v18 = Win32AllocPoolWithQuota((unsigned int)v4, 1230271317LL);
        v17 = (_BYTE *)v18;
        v21 = (_BYTE *)v18;
        if ( !v18 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v18, v22, (__int64)Win32FreePool);
      }
      else
      {
        v17 = Src;
        v21 = Src;
      }
      memmove(v17, (const void *)a3, (unsigned int)v4);
    }
    else
    {
      v17 = 0LL;
      v21 = 0LL;
    }
    InformationThread = xxxQueryInformationThread(a1, a2, v17, (unsigned int)v4, v21);
    if ( a3 )
    {
      ProbeForWrite(a3, v4, 2u);
      memmove((void *)a3, v17, v4);
    }
    if ( v17 != Src && v17 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v22, v13);
  }
  else
  {
    InformationThread = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v16, v13, v14, v15);
  return InformationThread;
}
