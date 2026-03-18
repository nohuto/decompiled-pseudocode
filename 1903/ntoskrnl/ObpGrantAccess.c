/*
 * XREFs of ObpGrantAccess @ 0x1406BECCC
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 * Callees:
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x1406BED70 (ObCheckObjectAccess.c)
 */

__int64 __fastcall ObpGrantAccess(
        int a1,
        char *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS a5,
        ACCESS_MASK *a6)
{
  __int64 v8; // r11
  __int64 v9; // rax
  KPROCESSOR_MODE v10; // dl
  __int64 v11; // r11
  __int64 result; // rax

  v8 = (unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9 = (unsigned __int8)*(a2 - 24);
  v10 = 1;
  v11 = (unsigned __int8)ObHeaderCookie ^ v9 ^ v8;
  if ( (a5 & 0x400) == 0 )
    v10 = a4;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3, v10, ObTypeIndexTable[v11], (__int64)a2);
    if ( (int)result >= 0 )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &a5) )
    {
LABEL_5:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)a5;
  }
  return result;
}
