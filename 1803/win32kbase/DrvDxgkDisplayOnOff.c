/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C00D4740
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C004E0C0 (GreSuspendDirectDraw.c)
 *     DrvEnableMDEV @ 0x1C0069878 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0069AAC (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = (unsigned int)a3;
  v5 = a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(a1 + 2568);
  result = v8 + 4;
  if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
    v10[3] = *(_QWORD *)(v8 + 240);
    v10[4] = v5;
    v10[5] = v4;
    WdLogEvent5_WdEvent(v10);
    result = (unsigned int)(v4 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v12 = 0LL;
      goto LABEL_10;
    }
    if ( (_DWORD)v4 == 3 && v5 )
    {
      LOBYTE(v12) = 1;
LABEL_10:
      LOBYTE(v11) = v5;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C01A1E08)(
               v8 + 248,
               *(unsigned int *)(v8 + 256),
               v11,
               v12);
    }
  }
  return result;
}
