/*
 * XREFs of sub_18006F400 @ 0x18006F400
 * Callers:
 *     sub_18006FA6C @ 0x18006FA6C (sub_18006FA6C.c)
 * Callees:
 *     sub_18007DE54 @ 0x18007DE54 (sub_18007DE54.c)
 */

__int64 __fastcall sub_18006F400(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax

  v5 = sub_18007DE54(a1);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  v6 = a4[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(v5 + 16) = *a4;
  *(_QWORD *)(v5 + 24) = a4[1];
  return v5;
}
