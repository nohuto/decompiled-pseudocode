/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C00F6A10
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C00F6A9C (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, unsigned int a2)
{
  char v4; // bl
  unsigned int v5; // esi
  __int64 v6; // rdx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v4 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore();
  v5 = 0;
  if ( v4 == 1 )
  {
    if ( (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, a2) )
    {
      LOBYTE(v6) = BYTE2(a1) & 0x1F;
      v5 = HmgMarkXferable(a1, v6);
    }
  }
  GreReleaseHmgrSemaphore();
  return v5;
}
