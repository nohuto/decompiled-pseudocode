/*
 * XREFs of xxxShowScrollBar @ 0x1C00F6D14
 * Callers:
 *     NtUserShowScrollBar @ 0x1C00F6C20 (NtUserShowScrollBar.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     _InitPwSB @ 0x1C004B6A4 (_InitPwSB.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // r9d
  int v7; // edx
  __int64 v8; // rdx
  int v9; // ecx
  int v11; // edx

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v11 = v7 - 1;
      if ( !v11 )
      {
        LOBYTE(v3) = a3 != 0;
        xxxShowWindowEx(a1, a3 != 0, gdwPUDFlags & 0x10000 | v3 & 0x10000);
        return 1LL;
      }
      if ( v11 == 1 )
        v6 = 3145728;
    }
    else
    {
      v6 = 0x200000;
    }
  }
  else
  {
    v6 = 0x100000;
  }
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_DWORD *)(v8 + 28);
  if ( !a3 )
  {
    if ( (v9 & v6) == 0 )
      return 1LL;
    *(_DWORD *)(v8 + 28) = v9 & ~v6;
LABEL_17:
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    return 1LL;
  }
  if ( (v6 & v9) != v6 )
  {
    v5 = 1;
    *(_DWORD *)(v8 + 28) = v6 | v9;
  }
  if ( !*((_QWORD *)a1 + 19) )
    InitPwSB((__int64)a1);
  if ( v5 )
    goto LABEL_17;
  return 1LL;
}
