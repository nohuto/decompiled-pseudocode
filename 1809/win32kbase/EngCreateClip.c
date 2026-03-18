/*
 * XREFs of EngCreateClip @ 0x1C0107770
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00FC080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngAllocMem @ 0x1C005F5F0 (EngAllocMem.c)
 */

CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rax
  CLIPOBJ *v1; // rbx
  struct _RECTL v3; // [rsp+20h] [rbp-18h] BYREF
  LONG *p_top; // [rsp+40h] [rbp+8h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x138u, 0x76726447u);
  v1 = v0;
  if ( v0 )
  {
    *(_WORD *)&v0->iDComplexity = 256;
    *(_QWORD *)&v0[2].rclBounds.top = (char *)v0 + 152;
    v0->iMode = 0;
    v3.top = -134217728;
    v3.left = -134217728;
    *(_QWORD *)&v0[8].rclBounds.bottom = (char *)v0 + 200;
    *(_QWORD *)&v0[8].rclBounds.top = (char *)v0 + 200;
    p_top = &v0[6].rclBounds.top;
    v3.bottom = 0x7FFFFFF;
    v3.right = 0x7FFFFFF;
    RGNOBJ::vSet((RGNOBJ *)&p_top, &v3);
  }
  return v1;
}
