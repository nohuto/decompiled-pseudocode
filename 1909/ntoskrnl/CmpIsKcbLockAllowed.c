/*
 * XREFs of CmpIsKcbLockAllowed @ 0x140715220
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x140714FD4 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     CmpGetCorrectKcbLockOrder @ 0x1406E76AC (CmpGetCorrectKcbLockOrder.c)
 */

bool __fastcall CmpIsKcbLockAllowed(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0;
  if ( a1 == a2 )
  {
    *a3 = 1;
    return 1;
  }
  else
  {
    CmpGetCorrectKcbLockOrder(a1, a2, &v6, &v5);
    return v5 == a2;
  }
}
