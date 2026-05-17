/*
 * XREFs of sub_1800CE894 @ 0x1800CE894
 * Callers:
 *     sub_18007533C @ 0x18007533C (sub_18007533C.c)
 * Callees:
 *     sub_1800625F4 @ 0x1800625F4 (sub_1800625F4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CE894(_QWORD *a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  _WORD *v5; // rdi
  _QWORD *v6; // r14
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  unsigned int *v10; // rcx
  int v11; // esi
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v20; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-98h] BYREF
  int v22; // [rsp+44h] [rbp-94h]
  int v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-80h]
  int v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+68h] [rbp-70h] BYREF
  __int64 v28; // [rsp+70h] [rbp-68h]
  _QWORD v29[12]; // [rsp+78h] [rbp-60h] BYREF
  __int16 v30; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+10h]
  unsigned int v32; // [rsp+F8h] [rbp+20h]

  v32 = a4;
  v31 = a2;
  v5 = a3;
  v6 = a1;
  v7 = 2;
  v29[0] = 0LL;
  v29[1] = sub_180079ED0;
  v29[2] = sub_180089470;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v8 = 0;
  }
  else
  {
    v8 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v6 = v29;
  v9 = 0LL;
  v25 = 0LL;
  v10 = a5;
  while ( v9 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v11 = 10240;
    v12 = 1;
    if ( v10 )
      *v10 = v7;
    v28 = a2 & 2;
    if ( (a2 & 2) != 0 )
      off_180118CF0[5 * v9 + 3]();
    v13 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *))off_180118CF0[5 * v9])(v6, &v24, &v27);
    if ( v13 < 0 )
    {
LABEL_14:
      v8 = v13;
      goto LABEL_36;
    }
    v14 = v24;
    if ( v24 )
    {
      v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))off_180118CF0[5 * v9 + 1])(v6, v24, &v20);
      if ( v13 < 0 )
        goto LABEL_14;
      while ( v20 != v24 )
      {
        if ( !v11 )
        {
          v8 = -1073741271;
          break;
        }
        v22 = --v11;
        v26 = v11;
        v7 += 320 * v12;
        v12 = 1;
        v23 = 1;
        if ( v32 >= v7 )
        {
          *v5 = 320;
          v13 = ((__int64 (__fastcall *)(_QWORD *, _WORD *, __int64, __int64, __int64))off_180118CF0[5 * v9 + 2])(
                  v6,
                  v5 + 4,
                  v20,
                  v27,
                  v31);
          if ( v13 < 0 )
            goto LABEL_14;
          v15 = *((_QWORD *)v5 + 3);
          if ( v15 )
          {
            v13 = sub_1800625F4((__int64)v6, v15 + 60, (__int64)&v21, 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v16 = *((_QWORD *)v5 + 3) + v21;
            v13 = sub_1800625F4((__int64)v6, v16 + 8, (__int64)(v5 + 154), 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = sub_1800625F4((__int64)v6, v16 + 88, (__int64)(v5 + 152), 4LL);
            if ( v13 < 0 )
              goto LABEL_14;
            v13 = sub_1800625F4((__int64)v6, v16 + 24, (__int64)&v30, 2LL);
            if ( v13 < 0 )
              goto LABEL_14;
            if ( v30 == 267 )
            {
              v17 = v16 + 52;
              v18 = 4LL;
            }
            else
            {
              v17 = v16 + 48;
              v18 = 8LL;
            }
            v13 = sub_1800625F4((__int64)v6, v17, (__int64)(v5 + 156), v18);
            if ( v13 < 0 )
              goto LABEL_14;
            v5 += 160;
            v29[3] = v5;
            *v5 = 0;
            v11 = v22;
          }
          else
          {
            v12 = 0;
            v23 = 0;
          }
        }
        else
        {
          v8 = -1073741820;
        }
        v13 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))off_180118CF0[5 * v9 + 1])(v6, v20, &v20);
        if ( v13 < 0 )
          goto LABEL_14;
      }
    }
LABEL_36:
    if ( v28 )
      ((void (__fastcall *)(__int64 (__fastcall **)(), __int64, _QWORD))off_180118CF0[5 * v9 + 4])(
        off_180118CF0,
        v14,
        0LL);
    v10 = a5;
    if ( a5 )
      *a5 = v7;
    v25 = ++v9;
    LOBYTE(a2) = v31;
  }
  return v8;
}
