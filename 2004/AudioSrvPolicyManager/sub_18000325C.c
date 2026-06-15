/*
 * XREFs of sub_18000325C @ 0x18000325C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy @ 0x18003A6C2 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_18000325C(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx

  *(_QWORD *)a1 = &off_18003E080;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = off_18003E090;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v4 = *(volatile signed __int32 **)(a2 + 168);
  v5 = *(_QWORD *)(a2 + 176);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 168) = v4;
    *(_QWORD *)(a1 + 176) = v5;
    _InterlockedIncrement(v4);
  }
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v6 = *(volatile signed __int32 **)(a2 + 184);
  v7 = *(_QWORD *)(a2 + 192);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 184) = v6;
    *(_QWORD *)(a1 + 192) = v7;
    _InterlockedIncrement(v6);
  }
  return a1;
}
