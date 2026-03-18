/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C001788C
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     DestroyProcessInfo @ 0x1C0036D0C (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // r12
  __int64 *v7; // r15
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v3 = (__int64 *)(gpDispInfo + 24);
  v4 = *(__int64 **)(gpDispInfo + 24);
  if ( !v4 )
    goto LABEL_14;
  do
  {
    v5 = *((_DWORD *)v4 + 16);
    v6 = v3;
    v7 = v4;
    if ( v5 < 0 )
    {
      if ( v4[10] != PsGetCurrentProcessWin32Process() )
        goto LABEL_4;
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
    }
    else if ( (v5 & 0x400000) == 0 )
    {
      goto LABEL_4;
    }
    DestroyCacheDC(v3, v4[1]);
LABEL_4:
    v8 = (__int64 *)*v3;
    v9 = (__int64 *)*v3;
    if ( v4 == (__int64 *)*v3 )
      v9 = (__int64 *)*v4;
    v3 = v4;
    v4 = v9;
    if ( v7 != v8 )
      v3 = v6;
  }
  while ( v9 );
  if ( v2 )
  {
LABEL_14:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
