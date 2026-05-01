/*
 * XREFs of ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x1800154EC
 * Callers:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180015598 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x180015540 (CempUtilValidateSid.c)
 */

__int64 __fastcall HampAppInfoValidate(const unsigned __int16 *a1, unsigned __int8 *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( (int)CempUtilValidateSid(a2) < 0 )
      return (unsigned int)-1073741584;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v3;
}
