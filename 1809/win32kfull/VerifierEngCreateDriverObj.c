/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C0282110
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C026A110 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0281D14 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
