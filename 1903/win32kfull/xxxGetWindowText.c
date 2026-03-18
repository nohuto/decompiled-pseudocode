/*
 * XREFs of xxxGetWindowText @ 0x1C0157F9C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetWindowText(ULONG_PTR a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v9; // [rsp+28h] [rbp-10h]

  v9 = a2;
  *(_WORD *)a2 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v8 = 0x20000000000LL;
  if ( *(_QWORD *)(v2 + 416) == *(_QWORD *)(gptiCurrent + 416LL) )
    v3 = xxxSendMessage(a1);
  else
    v3 = xxxDefWindowProc((struct tagWND *)a1, 0xDu, (HWND)0x100, (unsigned __int64)&v8);
  v4 = v8;
  v5 = v3;
  if ( (unsigned int)v8 > (unsigned __int64)(HIDWORD(v8) & 0x7FFFFFFF) - 2 )
    v4 = (HIDWORD(v8) & 0x7FFFFFFF) - 2;
  v6 = v4 >> 1;
  if ( (unsigned int)v3 >= v6 )
    v5 = v6;
  result = (unsigned int)v5;
  *((_WORD *)v9 + v5) = 0;
  return result;
}
