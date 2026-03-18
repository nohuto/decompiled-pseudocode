/*
 * XREFs of MoveObjData @ 0x1C0065098
 * Callers:
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     CopyObject @ 0x1C0068C20 (CopyObject.c)
 *     RefOf @ 0x1C006A1F0 (RefOf.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

void *__fastcall MoveObjData(_OWORD *a1, _OWORD *a2)
{
  void *result; // rax

  result = a2;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
    return memset(a2, 0, 0x28uLL);
  }
  return result;
}
