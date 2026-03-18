/*
 * XREFs of BRUSHOBJ_pvGetRbrush @ 0x1C026AF80
 * Callers:
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C0299E18 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F50C4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00F5330 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  PVOID result; // rax
  void *v2; // rbx
  int RealizedBrush; // eax
  char *pvRbrush; // rdx

  result = pbo->pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    RealizedBrush = bGetRealizedBrush(
                      *(struct BRUSH **)&pbo[4].flColorType,
                      (struct EBRUSHOBJ *)pbo,
                      *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)pbo[3].pvRbrush + 6) + 2784LL));
    pvRbrush = (char *)pbo->pvRbrush;
    if ( RealizedBrush )
    {
      if ( pvRbrush )
      {
        vTryToCacheRealization(
          (struct EBRUSHOBJ *)pbo,
          (struct RBRUSH *)(pvRbrush - 16),
          *(struct BRUSH **)&pbo[4].flColorType,
          0);
        return pbo->pvRbrush;
      }
    }
    else if ( pvRbrush )
    {
      Win32FreePool(pvRbrush - 16);
      pbo->pvRbrush = 0LL;
    }
    return v2;
  }
  return result;
}
