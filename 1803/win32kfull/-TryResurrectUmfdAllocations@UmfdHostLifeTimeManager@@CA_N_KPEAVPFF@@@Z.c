/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290320
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02901F0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C008094C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00CE13C (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02AF234 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rax
  char v3; // di
  struct PFF *v4; // rsi
  unsigned int v6; // r14d
  struct _IFIMETRICS *v7; // r15
  __int64 v8; // rbx
  struct _IFIMETRICS *v9; // rsi
  struct _FD_GLYPHSET *v10; // rax
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v13; // r8
  struct _IFIMETRICS *v14; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 *v19; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v3 = 0;
  v4 = a2;
  v17[0] = a2;
  v18 = v2;
  if ( *((_DWORD *)a2 + 52) )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = PDEVOBJ::QueryFont((PDEVOBJ *)&v18, *((struct DHPDEV__ **)v4 + 12), a1, v6, &v16);
      if ( !v7 )
        return v3;
      v8 = *((_QWORD *)v4 + v6 + 27);
      v19 = (__int64 *)v8;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 32), v7) )
        break;
      v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v17, *((struct DHPDEV__ **)v4 + 12), a1, v6, 3u, &v15);
      if ( !v9 )
        return v3;
      v10 = PFEOBJ::pfdg(&v19);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v10, v9) )
      {
        v13 = v15;
LABEL_15:
        v14 = v9;
LABEL_17:
        PDEVOBJ::Free((PDEVOBJ *)&v18, v14, v13);
        return v3;
      }
      if ( *(_QWORD *)(v8 + 48) )
      {
        v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                      (PFFOBJ *)v17,
                                      *(struct DHPDEV__ **)(v17[0] + 96LL),
                                      a1,
                                      v6,
                                      2u,
                                      &v20);
        v9 = v11;
        if ( !v11 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 48), v11) )
        {
          v13 = v20;
          goto LABEL_15;
        }
      }
      v4 = (struct PFF *)v17[0];
      if ( v6++ >= *(_DWORD *)(v17[0] + 208LL) )
        return 1;
    }
    v13 = v16;
    v14 = v7;
    goto LABEL_17;
  }
  return 1;
}
