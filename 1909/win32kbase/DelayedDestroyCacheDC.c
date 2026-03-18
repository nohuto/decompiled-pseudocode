/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C002B920
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v6 = (__int64 *)(gpDispInfo + 24);
  v7 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v7 )
    goto LABEL_14;
  do
  {
    v8 = *(_DWORD *)(v7 + 64);
    v9 = v6;
    v10 = v7;
    if ( v8 < 0 )
    {
      if ( *(_QWORD *)(v7 + 80) != PsGetCurrentProcessWin32Process(v4) )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v8 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v6, *(_QWORD *)(v7 + 8));
LABEL_4:
    v4 = *v6;
    v11 = *v6;
    if ( v7 == *v6 )
      v11 = *(_QWORD *)v7;
    v6 = (__int64 *)v7;
    v7 = v11;
    if ( v10 != v4 )
      v6 = v9;
  }
  while ( v11 );
  if ( v2 )
  {
LABEL_14:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v5);
}
