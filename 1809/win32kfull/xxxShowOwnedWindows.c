/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00B8C70
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0157210 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 */

struct tagBWL *__fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  struct tagBWL *result; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  struct tagBWL *v9; // r13
  __int64 v10; // r14
  unsigned __int64 *v11; // r15
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  __int64 i; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF

  result = *(struct tagBWL **)(a1 + 40);
  if ( (*((_BYTE *)result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    result = BuildHwndList(*(struct tagWND **)(DesktopWindow + 88), 2, 0LL);
    v9 = result;
    if ( result )
    {
      v10 = 4LL;
      if ( a2 != 2 )
        v10 = 0LL;
      v11 = (unsigned __int64 *)((char *)result + 32);
      if ( a2 == 4 )
        v10 = 3LL;
      while ( 1 )
      {
        if ( *v11 == 1 )
          return (struct tagBWL *)FreeHwndList(v9);
        LOBYTE(v8) = 1;
        v12 = HMValidateHandleNoSecure(*v11, v8);
        v13 = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
          if ( (*(_BYTE *)(v8 + 8) & 4) == 0 && v12 != a1 )
          {
            v14 = *(_QWORD *)(v12 + 96);
            if ( v14 )
            {
              for ( i = *(_QWORD *)(v14 + 40); ; i = *(_QWORD *)(v16 + 40) )
              {
                LOBYTE(v8) = *(_BYTE *)(i + 31) & 0xC0;
                if ( !(_BYTE)v8 )
                  break;
                if ( (_BYTE)v8 == 0xC0 )
                  break;
                if ( v14 == a1 )
                  break;
                v16 = *(_QWORD *)(v14 + 96);
                if ( !v16 )
                  break;
                v14 = *(_QWORD *)(v14 + 96);
              }
            }
            if ( v10 )
            {
              if ( !v14 || v14 == a1 || a2 == 4 && (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_14;
            }
            else if ( v14 != a1 )
            {
              goto LABEL_14;
            }
            v17 = *(_QWORD *)(v13 + 40);
            if ( a2 >= 3 )
            {
              if ( (*(_BYTE *)(v17 + 17) & 0x40) == 0 )
                goto LABEL_14;
            }
            else if ( (*(_BYTE *)(v17 + 31) & 0x10) == 0 )
            {
              goto LABEL_14;
            }
            if ( a3 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v13 + 40) + 88LL);
              GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1, v13, 0x140u, 1);
              SetVisible((struct tagWND *)v13, 0);
            }
            else
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
              v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v22;
              v22[1] = v13;
              _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
              xxxSendMessage(v13);
              ThreadUnlock1(v21, v20);
            }
          }
        }
LABEL_14:
        ++v11;
      }
    }
  }
  return result;
}
