/*
 * XREFs of HmgFreeDcAttr @ 0x1C0031308
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     bFreeDCAttributesWorker @ 0x1C0031100 (bFreeDCAttributesWorker.c)
 *     GdiThreadCallout @ 0x1C0061970 (GdiThreadCallout.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v4, v3);
    v5 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v6 = v5 + 192;
      v7 = *(_QWORD **)(v5 + 192);
      if ( v7 == (_QWORD *)(v5 + 192) || *((_DWORD *)v7 + 4) == 9 )
      {
        v7 = PALLOCMEM2(0x60uLL, 0x66636447u, 0);
        if ( !v7 )
          return GreReleaseHmgrSemaphore();
        v8 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
          __fastfail(3u);
        *v7 = v8;
        v7[1] = v6;
        *(_QWORD *)(v8 + 8) = v7;
        *(_QWORD *)v6 = v7;
        *((_DWORD *)v7 + 4) = 0;
      }
      v7[(unsigned int)(*((_DWORD *)v7 + 4))++ + 3] = a1;
      *(_QWORD *)(v5 + 40) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
