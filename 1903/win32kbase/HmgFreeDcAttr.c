/*
 * XREFs of HmgFreeDcAttr @ 0x1C0027468
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0019B4C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GdiThreadCallout @ 0x1C0059760 (GdiThreadCallout.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v4, v3);
    v8 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v6, v5, v7);
      v11 = v8 + 192;
      v12 = *(_QWORD **)(v8 + 192);
      if ( v12 == (_QWORD *)(v8 + 192) || *((_DWORD *)v12 + 4) == 11 )
      {
        v12 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
        if ( !v12 )
          return GreReleaseHmgrSemaphore(v9, (__int64)v12, v10);
        v13 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
          __fastfail(3u);
        *v12 = v13;
        v12[1] = v11;
        *(_QWORD *)(v13 + 8) = v12;
        *(_QWORD *)v11 = v12;
        *((_DWORD *)v12 + 4) = 0;
      }
      v12[(unsigned int)(*((_DWORD *)v12 + 4))++ + 3] = a1;
      *(_QWORD *)(v8 + 40) = a1;
      return GreReleaseHmgrSemaphore(v9, (__int64)v12, v10);
    }
  }
  return result;
}
