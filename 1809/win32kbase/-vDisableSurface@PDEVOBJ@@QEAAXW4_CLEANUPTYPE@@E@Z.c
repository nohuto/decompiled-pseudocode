/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C0022880 (HmgDecrementShareReferenceCountEx.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00F7C84 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct SURFACE *v7; // rdx
  void (__fastcall *v8)(_QWORD); // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v10; // [rsp+40h] [rbp-18h]

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40LL) & 0x80000) == 0 )
    vDisableSynchronize(*a1);
  if ( (int)IsvSpDisableSpritesSupported() >= 0 )
    vSpDisableSpritesWrap(*a1, a2);
  v7 = *(struct SURFACE **)(*a1 + 2552LL);
  if ( v7 && a3 )
  {
    SURFREF::SURFREF((SURFREF *)v9, v7);
    *(_QWORD *)(*a1 + 2552LL) = 0LL;
    if ( (*(_DWORD *)(v3 + 40) & 0x8000) != 0 && a2 )
    {
      SURFREF::bDeleteSurface(v9, a2);
    }
    else
    {
      HmgDecrementShareReferenceCountEx(v10, 0LL);
      v8 = *(void (__fastcall **)(_QWORD))(v3 + 2720);
      v10 = 0LL;
      if ( v8 )
        v8(*(_QWORD *)(*a1 + 1800LL));
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  else
  {
    *(_QWORD *)(*a1 + 2552LL) = 0LL;
  }
}
