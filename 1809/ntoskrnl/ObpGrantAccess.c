/*
 * XREFs of ObpGrantAccess @ 0x14059678C
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 * Callees:
 *     ObCheckObjectAccess @ 0x1405968F0 (ObCheckObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C94C8 (ObpAdjustCreatorAccessState.c)
 */

__int64 __fastcall ObpGrantAccess(int a1, void *a2, struct _ACCESS_STATE *a3, __int64 a4, NTSTATUS a5, ACCESS_MASK *a6)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3);
    if ( (int)result >= 0 )
      goto LABEL_3;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &a5) )
    {
LABEL_3:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)a5;
  }
  return result;
}
