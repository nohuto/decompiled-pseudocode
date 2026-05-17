/*
 * XREFs of sub_18002E4A8 @ 0x18002E4A8
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_18002952C @ 0x18002952C (sub_18002952C.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18002E5E8 @ 0x18002E5E8 (sub_18002E5E8.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002E4A8(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-B8h]
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v10 = v11;
  v2 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  v9 = 0x1000000;
  v11[0] = 0;
  v4 = sub_180029CEC((unsigned __int16 *)a1, (__int64)&v9, v1 + 88, (_OWORD *)(v1 + 72), v2);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 168) )
    goto LABEL_6;
  v5 = sub_18002E5E8(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v9, v4);
  if ( v5 < 0 )
    goto LABEL_7;
  v6 = sub_18002952C((unsigned __int16 *)(v1 + 88));
  *(_DWORD *)(v1 + 264) = v6;
  sub_18002E6A0(v1 + 88, v1 + 72, *(_DWORD *)(a1 + 32), v6, (__int64)&v8);
  if ( v8 )
  {
    sub_180070848(a1);
  }
  else
  {
LABEL_6:
    if ( v5 >= 0 )
    {
      v5 = sub_18002D3B4(a1, (__int64)&v9);
      if ( v5 == 1073741838 )
        v5 = -1073741701;
    }
  }
LABEL_7:
  if ( v11 != v10 )
    RtlDeleteBoundaryDescriptor(v10);
  return (unsigned int)v5;
}
