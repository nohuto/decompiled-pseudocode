/*
 * XREFs of sub_180088668 @ 0x180088668
 * Callers:
 *     sub_18008BE6C @ 0x18008BE6C (sub_18008BE6C.c)
 *     sub_18008D340 @ 0x18008D340 (sub_18008D340.c)
 * Callees:
 *     sub_18008D340 @ 0x18008D340 (sub_18008D340.c)
 *     sub_18008DDA4 @ 0x18008DDA4 (sub_18008DDA4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180088668(_QWORD *a1, __int64 a2, unsigned __int8 *a3, __int64 *a4)
{
  __int64 v7; // rax
  unsigned __int8 *v8; // r9
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  char v26[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+38h] [rbp-30h] BYREF

  v27 = -2LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = a3;
  if ( a3 < a3 + 8 )
  {
    do
      v7 = 0x100000001B3LL * (*v8++ ^ (unsigned __int64)v7);
    while ( v8 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v9 = v7 & a1[6];
  v10 = a1[1];
  v11 = a1[3];
  v12 = *(_QWORD *)(v11 + 16 * v9);
  if ( v10 != v12 )
  {
    v10 = **(_QWORD **)(v11 + 16 * v9 + 8);
    while ( v10 != v12 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( *(_QWORD *)a3 == *(_QWORD *)(v10 + 16) )
      {
        sub_18008DDA4(a1 + 1, v26, a4);
        *(_QWORD *)a2 = v10;
        *(_BYTE *)(a2 + 8) = 0;
        result = a2;
        goto LABEL_23;
      }
    }
  }
  v14 = *a4;
  if ( v10 != *a4 )
  {
    *(_QWORD *)a4[1] = v14;
    **(_QWORD **)(v14 + 8) = v10;
    **(_QWORD **)(v10 + 8) = a4;
    v15 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = a4[1];
    a4[1] = v15;
  }
  v16 = 2 * v9;
  v17 = a1[3];
  v18 = *(_QWORD *)(v17 + 8 * v16);
  if ( v18 == a1[1] )
  {
    *(_QWORD *)(v17 + 8 * v16) = a4;
    v19 = a1[3];
    *(_QWORD *)(v19 + 8 * v16 + 8) = a4;
  }
  else if ( v18 == v10 )
  {
    *(_QWORD *)(v17 + 8 * v16) = a4;
  }
  else
  {
    v20 = *(__int64 ***)(v17 + 8 * v16 + 8);
    v21 = *v20;
    *(_QWORD *)(v17 + 8 * v16 + 8) = *v20;
    if ( v21 != a4 )
    {
      v22 = a1[3];
      v23 = *(_QWORD *)(v22 + 8 * v16 + 8);
      *(_QWORD *)(v22 + 8 * v16 + 8) = *(_QWORD *)(v23 + 8);
    }
  }
  try
  {
    sub_18008D340(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v24 = (_QWORD *)sub_18008D568(a1, v26, a4);
    sub_18008900C(a1, &v28, *v24);
    throw;
  }
LABEL_23:
  try
  {
  }
  catch ( ... )
  {
    sub_18008D42C(a1, a4);
    throw;
  }
  return result;
}
