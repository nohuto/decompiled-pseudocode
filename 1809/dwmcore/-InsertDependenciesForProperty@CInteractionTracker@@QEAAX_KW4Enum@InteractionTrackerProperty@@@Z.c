/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801A0024
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019FF1C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?InsertDependenciesInOrder@CScrollKeyframeAnimation@@UEAAX_K@Z @ 0x1801E05C0 (-InsertDependenciesInOrder@CScrollKeyframeAnimation@@UEAAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _lambda_7c061d99726d1f4bac322afd65a4fadb_::operator() @ 0x18019DCB4 (_lambda_7c061d99726d1f4bac322afd65a4fadb_--operator().c)
 */

__int64 *__fastcall CInteractionTracker::InsertDependenciesForProperty(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 *result; // rax
  int v4; // r8d
  __int64 v5[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 *v6[2]; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+44h] [rbp-1Ch]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF

  v11 = a2;
  v6[0] = a1;
  result = &v11;
  v6[1] = (unsigned __int64 *)&v11;
  v4 = a3 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return result;
    v7 = 28;
    v8 = 29;
    v9 = 63;
    v5[0] = 3LL;
  }
  else
  {
    v7 = 2;
    v8 = 22;
    v9 = 25;
    v10 = 60;
    v5[0] = 4LL;
  }
  v5[1] = (__int64)&v7;
  return (__int64 *)lambda_7c061d99726d1f4bac322afd65a4fadb_::operator()(v6, v5);
}
