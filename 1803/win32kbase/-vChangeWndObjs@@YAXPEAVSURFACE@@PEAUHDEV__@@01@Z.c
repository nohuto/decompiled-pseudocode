/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006E4FC
 * Callers:
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, struct PDEV *a2, struct SURFACE *a3, struct PDEV *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *i; // rbx
  int v11; // r8d
  struct SURFACE *v12; // rax
  __int64 j; // rdi
  int v14; // r8d
  __int64 k; // rdi
  int v16; // r8d
  struct _ERESOURCE *v17; // [rsp+20h] [rbp-28h] BYREF
  struct PDEV *v18; // [rsp+58h] [rbp+10h] BYREF
  struct PDEV *v19; // [rsp+68h] [rbp+20h] BYREF

  v17 = (struct _ERESOURCE *)ghsemWndobj;
  EngAcquireSemaphore(ghsemWndobj);
  v18 = a2;
  v19 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(v8); i; i = (_QWORD *)i[1] )
  {
    v12 = (struct SURFACE *)i[4];
    if ( v12 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v19, v9, v11);
        PDEVOBJ::vUnreferencePdev(&v18, 0, v14);
      }
    }
    else if ( v12 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18, v9, v11);
        PDEVOBJ::vUnreferencePdev(&v19, 0, v16);
      }
    }
  }
  SEMOBJ::vUnlock(&v17, v9, v11);
}
