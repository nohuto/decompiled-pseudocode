/*
 * XREFs of ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029FF20
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C007E678 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278F08 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279538 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4F28 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02B5058 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B5200 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x1C02B5450 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0283930 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // esi

  v3 = (_QWORD *)a1[225];
  v4 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v6 = (_QWORD *)*v3;
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 21) + 32LL) + 48LL);
    while ( v6 )
    {
      if ( v4 == v6[6] )
        return v4;
      v6 = (_QWORD *)*v6;
    }
  }
  v7 = (_QWORD *)*v3;
  v8 = 0;
  if ( v7 )
  {
    do
    {
      if ( *((_DWORD *)v7 + 7) <= a2->left
        && *((_DWORD *)v7 + 9) >= a2->right
        && *((_DWORD *)v7 + 8) <= a2->top
        && *((_DWORD *)v7 + 10) >= a2->bottom )
      {
        return v7[6];
      }
      if ( (unsigned int)bIntersect((char *)v7 + 28, a2, a3) )
      {
        v4 = v7[6];
        if ( (*(_DWORD *)(v4 + 2128) & 0x100) != 0 )
          return v4;
        ++v8;
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 );
    if ( v8 == 1 )
      return v4;
  }
  return 0LL;
}
