/*
 * XREFs of sub_180033E08 @ 0x180033E08
 * Callers:
 *     sub_1800331A0 @ 0x1800331A0 (sub_1800331A0.c)
 *     sub_1800354E0 @ 0x1800354E0 (sub_1800354E0.c)
 *     sub_1800356B0 @ 0x1800356B0 (sub_1800356B0.c)
 *     sub_180035D60 @ 0x180035D60 (sub_180035D60.c)
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 *     sub_180037510 @ 0x180037510 (sub_180037510.c)
 *     sub_18009EB64 @ 0x18009EB64 (sub_18009EB64.c)
 *     sub_18009F894 @ 0x18009F894 (sub_18009F894.c)
 *     sub_1800AE8E0 @ 0x1800AE8E0 (sub_1800AE8E0.c)
 *     sub_1800CE3A8 @ 0x1800CE3A8 (sub_1800CE3A8.c)
 *     sub_1800D1ED4 @ 0x1800D1ED4 (sub_1800D1ED4.c)
 *     sub_1800D278C @ 0x1800D278C (sub_1800D278C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180033E08(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a3 < *((_DWORD *)v4 + 8) )
LABEL_8:
    v4 = v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != v3 )
  {
    v6 = v4[6];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}
