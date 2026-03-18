/*
 * XREFs of ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C008DBA0
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58 (_lambda_49808adf2e8287706ad80fa46f25ee96_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall RemovePDEVFromList(struct PDEV **a1, struct PDEV *a2)
{
  struct PDEV *v2; // r8
  struct PDEV *v3; // rax

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(struct PDEV **)a2;
  }
  else if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(struct PDEV **)v2;
      if ( *(struct PDEV **)v2 == a2 )
        break;
      v2 = *(struct PDEV **)v2;
      if ( !v3 )
        return;
    }
    *(_QWORD *)v2 = *(_QWORD *)a2;
  }
}
