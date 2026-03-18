/*
 * XREFs of xxxCheckFocus @ 0x1C0071E7C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0071D1C (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     zzzDestroyCaret @ 0x1C0063850 (zzzDestroyCaret.c)
 */

__int64 __fastcall xxxCheckFocus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
    {
      v5 = *(_QWORD *)(a1 + 80);
      v9[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v9;
      v9[1] = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      xxxSetFocus(*(struct tagWND **)(a1 + 80), 0LL, a3);
      ThreadUnlock1(v7, v6, v8);
    }
    else
    {
      xxxSetFocus(0LL, 0LL, a3);
    }
  }
  result = *(_QWORD *)(gptiCurrent + 424LL);
  if ( a1 == *(_QWORD *)(result + 296) )
    return zzzDestroyCaret();
  return result;
}
