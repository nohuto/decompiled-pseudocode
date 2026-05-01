/*
 * XREFs of DPA_Destroy @ 0x180422F80
 * Callers:
 *     ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1804225B8 (-Destroy@-$CDPA_Base@UtagRGBQUAD@@V-$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ.c)
 *     DPA_Clone @ 0x180422E80 (DPA_Clone.c)
 *     DPA_DestroyCallback @ 0x180422FE0 (DPA_DestroyCallback.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x1804144A4 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DPA_Destroy(HDPA hdpa)
{
  BOOL v1; // ebx
  void *v4; // rdx

  v1 = 0;
  if ( !hdpa )
    return 1;
  v4 = (void *)*((_QWORD *)hdpa + 1);
  if ( v4 && (int)CCv6s_HeapFree(*((void **)hdpa + 2), v4) < 0 )
    return 0;
  LOBYTE(v1) = (int)CCv6s_HeapFree(*((void **)hdpa + 2), hdpa) >= 0;
  return v1;
}
