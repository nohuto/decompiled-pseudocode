/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C008CA40
 * Callers:
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1, int a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 *v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 CurrentProcessWin32Process; // rax

  v4 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v8 = (__int64 *)(gpDispInfo + 24);
  v9 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v9 )
  {
LABEL_10:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v5, v7);
  }
  do
  {
    v10 = *(_DWORD *)(v9 + 64);
    v11 = v8;
    v12 = v9;
    if ( v10 >= 0 )
    {
      if ( (v10 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_14:
      DestroyCacheDC(v8, *(_QWORD *)(v9 + 8), v7);
      goto LABEL_4;
    }
    if ( *(_QWORD *)(v9 + 80) != PsGetCurrentProcessWin32Process(v6) )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_14;
    v4 = 0;
LABEL_4:
    v6 = *v8;
    v13 = *v8;
    if ( v9 == *v8 )
      v13 = *(_QWORD *)v9;
    v8 = (__int64 *)v9;
    v9 = v13;
    if ( v12 != v6 )
      v8 = v11;
  }
  while ( v13 );
  if ( v4 )
    goto LABEL_10;
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v5, v7);
}
