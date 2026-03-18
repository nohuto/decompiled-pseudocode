/*
 * XREFs of xxxGetWindowText @ 0x1C0151F7C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetWindowText(ULONG_PTR a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+24h] [rbp-14h]
  struct tagWND *v10; // [rsp+28h] [rbp-10h]

  v10 = a2;
  *(_WORD *)a2 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v9 = 512;
  v8 = 0;
  if ( *(_QWORD *)(v2 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
    v3 = xxxSendMessage(a1);
  else
    v3 = xxxDefWindowProc((struct tagWND *)a1, 0xDu, 0x100uLL, (unsigned __int64)&v8);
  v4 = v8;
  v5 = v3;
  if ( v8 > (unsigned __int64)(v9 & 0x7FFFFFFF) - 2 )
    v4 = (v9 & 0x7FFFFFFF) - 2;
  v6 = v4 >> 1;
  if ( (unsigned int)v3 >= v6 )
    v5 = v6;
  result = (unsigned int)v5;
  *((_WORD *)v10 + v5) = 0;
  return result;
}
