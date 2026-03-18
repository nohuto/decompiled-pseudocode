/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C011D00C
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1C011CF80 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
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
