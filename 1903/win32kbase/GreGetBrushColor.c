/*
 * XREFs of GreGetBrushColor @ 0x1C0122EC0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005248C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00524B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, a1);
  if ( v9[0] && (unsigned int)(*(_DWORD *)(v9[0] + 80LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v9[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}
