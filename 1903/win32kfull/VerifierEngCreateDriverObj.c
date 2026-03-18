/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C0298850
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C02832F0 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029845C (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
