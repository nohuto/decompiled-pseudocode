/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C00B0A74
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C00B0710 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0010850 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0053780 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E6BC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C007E720 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     bPolyPolygon @ 0x1C00B0B70 (bPolyPolygon.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C00B0C30 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 */

struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(
        struct _POINTL *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5)
{
  struct HOBJ__ *v5; // rdi
  REGION *v9; // rbx
  REGION *v11; // [rsp+38h] [rbp-51h] BYREF
  int v12; // [rsp+40h] [rbp-49h]
  _BYTE v13[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v14; // [rsp+50h] [rbp-39h]
  _QWORD v15[4]; // [rsp+98h] [rbp+Fh] BYREF
  int v16; // [rsp+B8h] [rbp+2Fh]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
    if ( v14 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)&v11, 1u, 8u);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v13, (struct EXFORMOBJ *)&v11, a1, a3, a5) )
      {
        v12 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v11, (struct EPATHOBJ *)v13, a4, 0LL);
        v9 = v11;
        if ( v11 )
        {
          v5 = RGNOBJ::hrgnAssociate(&v11);
          if ( !v5 )
          {
            REGION::vDeleteREGION(v9);
            v9 = 0LL;
          }
        }
        if ( v12 == 1 )
          REGION::vDeleteREGION(v9);
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v13);
    if ( v16 )
      PopThreadGuardedObject(v15);
  }
  return v5;
}
