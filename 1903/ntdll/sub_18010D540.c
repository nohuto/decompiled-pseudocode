/*
 * XREFs of sub_18010D540 @ 0x18010D540
 * Callers:
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_18010D214 @ 0x18010D214 (sub_18010D214.c)
 *     sub_18010E004 @ 0x18010E004 (sub_18010E004.c)
 */

__int64 __fastcall sub_18010D540(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = qword_180163518;
  v4 = a1 & 0x7FFF;
  v9 = v4;
  if ( !qword_180163518 )
    return 4201;
  if ( v4 >= 0x40 )
  {
    v5 = sub_18010D214(a1, &v9);
    if ( v5 )
    {
      v6 = v10;
      goto LABEL_10;
    }
    v4 = v9;
    v2 = qword_180163518;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v4 + 8));
  v6 = *(_QWORD *)(qword_180163518 + 16LL * v4);
  if ( (v6 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * v4 + 8));
    return 4201;
  }
  v5 = 0;
LABEL_10:
  if ( !v5 )
  {
    v7 = *(_DWORD *)(v6 + 324);
    if ( (v7 & 0x800) != 0 && (v7 & 0x10000) == 0 )
      v5 = sub_18010E004(v6, a2);
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v6 + 20) + 8));
  }
  return v5;
}
