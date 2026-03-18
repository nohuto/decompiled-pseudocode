/*
 * XREFs of NtUserSetInformationThread @ 0x1C00BB620
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // edi
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 0x20uLL);
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
  v16 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v17 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        ProbeForRead(a3, v4, 4u);
        memmove(Src, (const void *)a3, v4);
      }
      v17 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove((void *)a3, Src, v4);
      }
    }
  }
  else
  {
    v17 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16, v15);
  return v17;
}
