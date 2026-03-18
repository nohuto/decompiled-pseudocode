/*
 * XREFs of NtUserSetInformationThread @ 0x1C000CF20
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // edi
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 0x20uLL);
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v9, v8, v10, v11) == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        ProbeForRead(a3, v4, 4u);
        memmove(Src, (const void *)a3, v4);
      }
      v13 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove((void *)a3, Src, v4);
      }
    }
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
