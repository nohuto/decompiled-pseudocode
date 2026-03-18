/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0032090
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  struct OBJECT *v8; // rcx
  bool v9; // zf
  struct OBJECT *v10; // rbx
  struct OBJECT *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x80000) == 0 )
    vDisableSynchronize(v3);
  if ( (int)IsvSpDisableSpritesSupported() >= 0 )
    vSpDisableSpritesWrap(*a1, a2);
  result = *a1;
  v8 = *(struct OBJECT **)(*a1 + 2544);
  if ( !v8 || !a3 )
  {
    *(_QWORD *)(result + 2544) = 0LL;
    return result;
  }
  *(_QWORD *)(result + 2544) = 0LL;
  v9 = (*(_DWORD *)(v3 + 40) & 0x8000) == 0;
  v11 = v8;
  if ( v9 || !a2 )
  {
    HmgDecrementShareReferenceCountEx(v8, 0LL);
    result = *(_QWORD *)(v3 + 2712);
    v10 = 0LL;
    if ( !result )
      return result;
    result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(*a1 + 1792));
  }
  else
  {
    result = SURFREF::bDeleteSurface(&v11, a2);
    v10 = v11;
  }
  if ( v10 )
    return HmgDecrementShareReferenceCountEx(v10, 0LL);
  return result;
}
