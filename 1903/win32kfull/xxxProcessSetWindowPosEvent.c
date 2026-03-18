/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C012E07C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C00CAE84 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ??9?$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z @ 0x1C0133FE0 (--9-$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rsi
  _QWORD *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned __int64 *v7; // rdi
  int i; // ebp
  __int64 v9; // rax

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v6 = *(_DWORD *)(a1 + 28);
    v7 = (unsigned __int64 *)v2[5];
    *((_DWORD *)v2 + 7) = v6;
    for ( i = v6 - 1; i >= 0; --i )
    {
      if ( (*((_DWORD *)v7 + 39) & 0x20) != 0 )
      {
        if ( *v7 )
        {
          LOBYTE(v3) = 1;
          v9 = HMValidateHandleNoSecure(*v7, (__int64)v3, v4, v5);
          v5 = v9;
          if ( v9 )
          {
            if ( (unsigned __int8)tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(v9 + 215, v7 + 16, v4, v9) )
              *v3 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 256LL);
          }
        }
      }
      v7 += 21;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0LL);
  }
  return Win32FreePool(a1);
}
