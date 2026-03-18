/*
 * XREFs of HmgFreeDcAttr @ 0x1C0023B9C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C00204BC (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GdiThreadCallout @ 0x1C00711D0 (GdiThreadCallout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v5 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v4);
      v7 = v5 + 192;
      v8 = *(_QWORD *)(v5 + 192);
      if ( v8 == v5 + 192 || *(_DWORD *)(v8 + 16) == 11 )
      {
        v8 = PALLOCMEM2(0x70uLL);
        if ( !v8 )
          return GreReleaseHmgrSemaphore(v6);
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
          __fastfail(3u);
        *(_QWORD *)v8 = v9;
        *(_QWORD *)(v8 + 8) = v7;
        *(_QWORD *)(v9 + 8) = v8;
        *(_QWORD *)v7 = v8;
        *(_DWORD *)(v8 + 16) = 0;
      }
      *(_QWORD *)(v8 + 8LL * (unsigned int)(*(_DWORD *)(v8 + 16))++ + 24) = a1;
      *(_QWORD *)(v5 + 40) = a1;
      return GreReleaseHmgrSemaphore(v6);
    }
  }
  return result;
}
