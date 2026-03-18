/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0069900
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C012226C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::vDisableSurface(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v7; // r8
  __int64 result; // rax
  struct OBJECT *v9; // rcx
  bool v10; // zf
  struct OBJECT *v11; // rbx
  struct OBJECT *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x80000) == 0 )
    vDisableSynchronize(v3);
  if ( (int)IsvSpDisableSpritesSupported() >= 0 )
    vSpDisableSpritesWrap(*a1, a2);
  result = *a1;
  v9 = *(struct OBJECT **)(*a1 + 2552);
  if ( !v9 || !a3 )
  {
    *(_QWORD *)(result + 2552) = 0LL;
    return result;
  }
  *(_QWORD *)(result + 2552) = 0LL;
  v10 = (*(_DWORD *)(v3 + 40) & 0x8000) == 0;
  v12 = v9;
  if ( !v10 && a2 )
  {
    result = SURFREF::bDeleteSurface(&v12, a2, v7);
    v11 = v12;
  }
  else
  {
    HmgDecrementShareReferenceCountEx(v9, 0LL);
    result = *(_QWORD *)(v3 + 2720);
    v11 = 0LL;
    if ( !result )
      return result;
    result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(*a1 + 1800));
  }
  if ( v11 )
    return HmgDecrementShareReferenceCountEx(v11, 0LL);
  return result;
}
