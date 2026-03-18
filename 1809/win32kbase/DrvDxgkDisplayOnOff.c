/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C0093EF0
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 *     DrvEnableMDEV @ 0x1C00476A0 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00A2988 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  v3 = (unsigned int)a3;
  v4 = a2;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)(a1 + 2576);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
    v8[3] = *(_QWORD *)(v6 + 240);
    v8[4] = v4;
    v8[5] = v3;
    WdLogEvent5_WdEvent(v8);
    result = (unsigned int)(v3 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v10 = 0LL;
LABEL_7:
      LOBYTE(v9) = v4;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C01CDCA8)(
               v6 + 248,
               *(unsigned int *)(v6 + 256),
               v9,
               v10);
    }
    if ( (_DWORD)v3 == 3 && v4 )
    {
      LOBYTE(v10) = 1;
      goto LABEL_7;
    }
  }
  return result;
}
