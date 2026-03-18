/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C0033300
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v5 = (_QWORD *)(gpDispInfo + 24);
  v6 = *(_QWORD **)(gpDispInfo + 24);
  if ( !v6 )
    goto LABEL_13;
  do
  {
    v7 = *((_DWORD *)v6 + 16);
    if ( v7 < 0 )
    {
      if ( v6[10] != PsGetCurrentProcessWin32Process(v4, v3) )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v7 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v5, v6[1]);
LABEL_4:
    v4 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)*v5 )
      v4 = (_QWORD *)*v6;
    else
      v6 = v5;
    v5 = v6;
    v6 = v4;
  }
  while ( v4 );
  if ( v2 )
  {
LABEL_13:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
