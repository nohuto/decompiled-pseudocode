/*
 * XREFs of ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C028E3D8
 * Callers:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C028E228 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bRemoveColorTransform(XDCOBJ *this, void *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 2064LL);
  if ( !v3 )
    return 0LL;
  v4 = v3;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(void **)v3 == a2 )
      break;
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    if ( !v5 )
      return 0LL;
  }
  if ( v4 == v3 )
    *(_QWORD *)(v2 + 2064) = v5;
  else
    *(_QWORD *)(v4 + 8) = v5;
  Win32FreePool(v3);
  return 1LL;
}
