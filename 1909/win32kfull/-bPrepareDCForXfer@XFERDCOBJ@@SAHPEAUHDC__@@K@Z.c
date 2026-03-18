/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C00F6A9C
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1C00F6A10 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XFERDCOBJ::bPrepareDCForXfer(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    if ( a2 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v3 = 1;
      *(_DWORD *)(v5[0] + 2096LL) = a2;
    }
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
