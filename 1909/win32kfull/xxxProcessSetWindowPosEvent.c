/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C0108FB8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     ??9?$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z @ 0x1C0016EB0 (--9-$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C006C554 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rsi
  _QWORD *v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 *v6; // rdi
  int i; // ebp
  __int64 v8; // rax
  __int64 v9; // r9

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v5 = *(_DWORD *)(a1 + 28);
    v6 = (unsigned __int64 *)v2[5];
    *((_DWORD *)v2 + 7) = v5;
    for ( i = v5 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v6 + 39) & 0x20) != 0 )
      {
        if ( *v6 )
        {
          LOBYTE(v3) = 1;
          v8 = HMValidateHandleNoSecure(*v6, (__int64)v3, v4);
          if ( v8 )
          {
            if ( tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(v8 + 215, v6 + 16) )
              *v3 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 256LL);
          }
        }
      }
      v6 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0LL);
  }
  return Win32FreePool(a1);
}
