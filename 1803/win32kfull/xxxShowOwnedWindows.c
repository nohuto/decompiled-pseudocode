/*
 * XREFs of xxxShowOwnedWindows @ 0x1C0066E74
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0135D50 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

struct tagBWL *__fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  struct tagBWL *result; // rax
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  struct tagBWL *v9; // r13
  int v10; // r14d
  unsigned __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r8
  ULONG_PTR v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF

  result = *(struct tagBWL **)(a1 + 40);
  if ( (*((_BYTE *)result + 31) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    result = BuildHwndList(*(_QWORD **)(DesktopWindow + 88), 2, 0LL);
    v9 = result;
    if ( result )
    {
      v10 = 4;
      if ( a2 != 2 )
        v10 = 0;
      v11 = (unsigned __int64 *)((char *)result + 32);
      if ( a2 == 4 )
        v10 = 3;
      while ( 1 )
      {
        if ( *v11 == 1 )
          return (struct tagBWL *)FreeHwndList(v9);
        LOBYTE(v8) = 1;
        v12 = HMValidateHandleNoSecure(*v11, v8);
        v14 = v12;
        if ( v12 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
          if ( (*(_BYTE *)(v8 + 8) & 4) == 0 && v12 != a1 )
          {
            v15 = *(_QWORD *)(v12 + 96);
            if ( v15 )
            {
              v16 = *(_QWORD *)(v15 + 40);
              LOBYTE(v13) = -64;
              while ( 1 )
              {
                LOBYTE(v8) = *(_BYTE *)(v16 + 31) & 0xC0;
                if ( !(_BYTE)v8 )
                  break;
                if ( (_BYTE)v8 == 0xC0 )
                  break;
                if ( v15 == a1 )
                  break;
                v17 = *(_QWORD *)(v15 + 96);
                if ( !v17 )
                  break;
                v15 = *(_QWORD *)(v15 + 96);
                v16 = *(_QWORD *)(v17 + 40);
              }
            }
            if ( v10 )
            {
              if ( !v15 || v15 == a1 || a2 == 4 && (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x28) == 0x20 )
                goto LABEL_14;
            }
            else if ( v15 != a1 )
            {
              goto LABEL_14;
            }
            v18 = *(_QWORD *)(v14 + 40);
            if ( a2 >= 3 )
            {
              if ( (*(_BYTE *)(v18 + 17) & 0x40) == 0 )
                goto LABEL_14;
            }
            else if ( (*(_BYTE *)(v18 + 31) & 0x10) == 0 )
            {
              goto LABEL_14;
            }
            if ( a3 )
            {
              RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v14 + 40) + 88LL, v8, v13);
              GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
              GreDeleteObject(RectRgnIndirect);
              SetOrClrWF(1LL, v14, 320LL, 1LL);
              SetVisible((struct tagWND *)v14);
            }
            else
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
              v24[0] = *(_QWORD *)(ThreadWin32Thread + 408);
              *(_QWORD *)(ThreadWin32Thread + 408) = v24;
              v24[1] = v14;
              _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
              xxxSendMessage(v14);
              ThreadUnlock1(v22, v21, v23);
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
