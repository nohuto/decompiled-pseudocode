/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C012F6FC
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C012AFA0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C007AE90 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, struct PDEV *a2, HDEV a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 i; // rbx
  __int64 v9; // r8
  __int64 j; // rdi
  __int64 v11; // r8
  HDEV v12; // [rsp+48h] [rbp+10h] BYREF
  struct PDEV *v13; // [rsp+50h] [rbp+18h] BYREF
  struct _ERESOURCE *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = (struct _ERESOURCE *)ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v13 = a2;
  v12 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v6); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v12, v7, v9);
        PDEVOBJ::vUnreferencePdev(&v13, 0, v11);
      }
    }
  }
  SEMOBJ::vUnlock(&v14, v7, v9);
}
