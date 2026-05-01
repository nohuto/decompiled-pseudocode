/*
 * XREFs of ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180010FF0
 * Callers:
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180010DD4 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B714 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x180011044 (CempUtilValidateSid.c)
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
