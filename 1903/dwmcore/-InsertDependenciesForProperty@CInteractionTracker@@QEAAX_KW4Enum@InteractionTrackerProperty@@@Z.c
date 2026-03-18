/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker@@QEAAX_KW4Enum@InteractionTrackerProperty@@@Z @ 0x1801DAD44
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800BDB78 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801DAC60 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _lambda_2149ae26af8bda672c72659e191929ce_::operator() @ 0x1801D88AC (_lambda_2149ae26af8bda672c72659e191929ce_--operator().c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForProperty(unsigned __int64 *a1, __int64 a2, int a3)
{
  int v3; // r8d
  unsigned __int64 v4[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 *v5[2]; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+40h] [rbp-20h] BYREF
  int v7; // [rsp+44h] [rbp-1Ch]
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF

  v10 = a2;
  v5[0] = a1;
  v5[1] = (unsigned __int64 *)&v10;
  v3 = a3 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return;
    v6 = 28;
    v7 = 29;
    v8 = 63;
    v4[0] = 3LL;
  }
  else
  {
    v6 = 2;
    v7 = 22;
    v8 = 25;
    v9 = 60;
    v4[0] = 4LL;
  }
  v4[1] = (unsigned __int64)&v6;
  lambda_2149ae26af8bda672c72659e191929ce_::operator()(v5, v4);
}
