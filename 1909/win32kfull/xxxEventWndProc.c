/*
 * XREFs of xxxEventWndProc @ 0x1C0055930
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z @ 0x1C0054B94 (--9-$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     xxxChangeMonitorFlags @ 0x1C010D4A8 (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C02149B4 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, unsigned int a2, unsigned __int64 a3, HICON a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int16 v12; // dx
  __int16 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  if ( tagWND::RedirectedFieldfnid<unsigned short>::operator!=(a1 + 87, &v14) )
    return 0LL;
  v10 = *(_QWORD **)(a1 + 280);
  if ( v10 && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) >= 8u )
  {
    LOBYTE(v8) = 9;
    v11 = HMValidateHandleNoRip(*v10, v8, v9);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    if ( a2 == 2 )
    {
      xxxChangeMonitorFlags(v11, 0LL);
      return 0LL;
    }
    if ( a2 == 60 )
    {
      v12 = *((_WORD *)a4 + 2);
      if ( (*(_DWORD *)(v11 + 40) & *(_DWORD *)a4) != 0 )
      {
        if ( !v12 )
          return 0LL;
      }
      else if ( v12 )
      {
        return 0LL;
      }
      ClientEventCallback(*(_QWORD *)(v11 + 56), a4);
      return 0LL;
    }
  }
  return xxxDefWindowProc((struct tagWND *)a1, a2, a3, a4);
}
