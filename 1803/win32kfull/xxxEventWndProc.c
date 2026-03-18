/*
 * XREFs of xxxEventWndProc @ 0x1C006C550
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z @ 0x1C006CD78 (--9-$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C01072C8 (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C01D8828 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(struct tagWND *a1, unsigned int a2, HWND a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int16 v13; // dx
  __int16 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator!=((char *)a1 + 63, &v14) )
    return 0LL;
  v11 = (_QWORD *)*((_QWORD *)a1 + 34);
  if ( v11 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) >= 8u )
  {
    LOBYTE(v8) = 9;
    v12 = HMValidateHandleNoRip(*v11, v8, v9);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    if ( a2 == 2 )
    {
      xxxChangeMonitorFlags(v12, 0LL);
      return 0LL;
    }
    if ( a2 == 60 )
    {
      v13 = *(_WORD *)(a4 + 4);
      if ( (*(_DWORD *)(v12 + 40) & *(_DWORD *)a4) != 0 )
      {
        if ( !v13 )
          return 0LL;
      }
      else if ( v13 )
      {
        return 0LL;
      }
      ClientEventCallback(*(_QWORD *)(v12 + 56), a4);
      return 0LL;
    }
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
