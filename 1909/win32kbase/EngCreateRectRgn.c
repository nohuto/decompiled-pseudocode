/*
 * XREFs of EngCreateRectRgn @ 0x1C012EBC0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRegionOwner @ 0x1C00161A0 (GreSetRegionOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BCC64 (--0EngModeState@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 */

HANDLE __stdcall EngCreateRectRgn(INT left, INT top, INT right, INT bottom)
{
  __int64 RectRgn; // rax
  void *v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v11);
  RectRgn = GreCreateRectRgn((unsigned int)left, (unsigned int)top, (unsigned int)right, (unsigned int)bottom);
  v9 = (void *)RectRgn;
  if ( RectRgn )
    GreSetRegionOwner(RectRgn, 0);
  if ( v11[0] )
    *(_DWORD *)(v11[0] + 328LL) &= ~0x10u;
  return v9;
}
