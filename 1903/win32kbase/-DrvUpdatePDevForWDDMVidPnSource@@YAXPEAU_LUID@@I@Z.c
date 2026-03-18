/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00A1DB0
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00A1BE0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003ED70 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C004ABB4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2, __int64 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  struct _LUID *v9; // rax
  struct PDEV *v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v10 = v6;
    v8 = *((_DWORD *)v6 + 10);
    if ( (v8 & 1) != 0 && (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
      {
        v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
        if ( v9->LowPart == a1->LowPart
          && v9->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v7 + 2576) + 256LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v7);
        }
      }
    }
  }
}
