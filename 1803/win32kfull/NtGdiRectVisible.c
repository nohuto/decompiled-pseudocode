/*
 * XREFs of NtGdiRectVisible @ 0x1C009F8C0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C009F750 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1, _OWORD *a2)
{
  LONG v3[8]; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v3 = *a2;
  return GreRectVisible(a1, v3);
}
