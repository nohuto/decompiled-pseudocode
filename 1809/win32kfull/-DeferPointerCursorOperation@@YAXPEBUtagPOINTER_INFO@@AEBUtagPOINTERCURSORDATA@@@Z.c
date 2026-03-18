/*
 * XREFs of ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C99E4
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01C95A0 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall DeferPointerCursorOperation(const struct tagPOINTER_INFO *a1, const struct tagPOINTERCURSORDATA *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  signed __int64 v9; // r8
  _DWORD v10[44]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v11[192]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v12[11]; // [rsp+190h] [rbp-C8h] BYREF

  v4 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v4 )
  {
    v5 = INPUTDEST_FROM_PWND(v10, v4);
    v12[0] = *v5;
    v12[1] = v5[1];
    v12[2] = v5[2];
    v12[3] = v5[3];
    v12[4] = v5[4];
    v12[5] = v5[5];
    v12[6] = v5[6];
    v12[7] = v5[7];
    v12[8] = v5[8];
    v12[9] = v5[9];
    v12[10] = v5[10];
    CInputDest::CInputDest((CInputDest *)v11, (const struct tagINPUTDEST *)v12);
    UpdateGlobalCursorOwner(v11, (char *)a1 + 32);
    CInputDest::~CInputDest((CInputDest *)v11);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)&(&Feedback::gppcdFree)[v6], 0LL);
    if ( v7 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 3 )
      return;
  }
  v8 = *((_DWORD *)a2 + 2);
  *(_QWORD *)v7 = *(_QWORD *)a2;
  *(_DWORD *)(v7 + 8) = v8;
  v9 = _InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, v7);
  if ( v9 )
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v9 - (__int64)&Feedback::gpcd) / 0xCuLL],
      v9,
      0LL);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
