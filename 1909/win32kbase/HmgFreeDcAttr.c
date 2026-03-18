/*
 * XREFs of HmgFreeDcAttr @ 0x1C0027DBC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C001B258 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GdiThreadCallout @ 0x1C0067F40 (GdiThreadCallout.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v4 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v5 = v4 + 192;
      v6 = *(_QWORD **)(v4 + 192);
      if ( v6 == (_QWORD *)(v4 + 192) || *((_DWORD *)v6 + 4) == 11 )
      {
        v6 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
        if ( !v6 )
          return GreReleaseHmgrSemaphore();
        v7 = *(_QWORD *)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          __fastfail(3u);
        *v6 = v7;
        v6[1] = v5;
        *(_QWORD *)(v7 + 8) = v6;
        *(_QWORD *)v5 = v6;
        *((_DWORD *)v6 + 4) = 0;
      }
      v6[(unsigned int)(*((_DWORD *)v6 + 4))++ + 3] = a1;
      *(_QWORD *)(v4 + 40) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
