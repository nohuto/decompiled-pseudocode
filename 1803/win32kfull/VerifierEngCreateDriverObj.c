/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C026E120
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C02570C0 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C026DD48 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
