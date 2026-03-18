/*
 * XREFs of xxxGetWindowText @ 0x1C0158D5C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetWindowText(ULONG_PTR a1, _WORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int unused; // edx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 result; // rax
  struct HICON__ v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+24h] [rbp-14h]
  _WORD *v10; // [rsp+28h] [rbp-10h]

  v10 = a2;
  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v9 = 512;
  v8.unused = 0;
  if ( *(_QWORD *)(v2 + 416) == *(_QWORD *)(gptiCurrent + 416LL) )
    v3 = xxxSendMessage(a1);
  else
    v3 = xxxDefWindowProc((struct tagWND *)a1, 13LL, 0x100uLL, &v8);
  unused = v8.unused;
  v5 = v3;
  if ( (unsigned int)v8.unused > (unsigned __int64)(v9 & 0x7FFFFFFF) - 2 )
    unused = (v9 & 0x7FFFFFFF) - 2;
  v6 = unused >> 1;
  if ( (unsigned int)v3 >= v6 )
    v5 = v6;
  result = (unsigned int)v5;
  v10[v5] = 0;
  return result;
}
