/*
 * XREFs of sub_18003BC00 @ 0x18003BC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EB64 @ 0x18009EB64 (sub_18009EB64.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003BC00(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 *v6; // rcx
  char v7; // r14
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 *v11; // rcx
  char v12; // r14
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 *v15; // rcx
  char v16; // r14
  __int64 v17; // rax
  volatile signed __int32 *v18; // rbx
  char v20; // [rsp+30h] [rbp-21h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-19h]
  char v22; // [rsp+40h] [rbp-11h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-9h]
  char v24; // [rsp+50h] [rbp-1h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp+7h]
  _BYTE v26[8]; // [rsp+60h] [rbp+Fh] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp+17h]
  _BYTE v28[8]; // [rsp+70h] [rbp+1Fh] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp+27h]
  _BYTE v30[8]; // [rsp+80h] [rbp+2Fh] BYREF
  volatile signed __int32 *v31; // [rsp+88h] [rbp+37h]

  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        return a2;
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        v6 = (__int64 *)sub_18009EB64(*(_QWORD *)(a1 + 192), v26, *(unsigned int *)(a1 + 88));
        v7 = 12;
        v8 = *v6;
      }
      else
      {
        v21 = 0LL;
        v6 = (__int64 *)&v20;
        v7 = 20;
        v8 = 0LL;
      }
      *a2 = v8;
      a2[1] = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      if ( (v7 & 0x10) != 0 )
      {
        v7 &= ~0x10u;
        if ( v21 )
        {
          if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
          {
            v9 = v21;
            (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          }
        }
      }
      if ( (v7 & 8) != 0 )
      {
        v10 = v27;
LABEL_35:
        if ( v10 )
        {
          if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          }
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v11 = (__int64 *)sub_18009EB64(*(_QWORD *)(a1 + 176), v28, *(unsigned int *)(a1 + 88));
        v12 = 36;
        v13 = *v11;
      }
      else
      {
        v23 = 0LL;
        v11 = (__int64 *)&v22;
        v12 = 68;
        v13 = 0LL;
      }
      *a2 = v13;
      a2[1] = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      if ( (v12 & 0x40) != 0 )
      {
        v12 &= ~0x40u;
        if ( v23 )
        {
          if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
          {
            v14 = v23;
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          }
        }
      }
      if ( (v12 & 0x20) != 0 )
      {
        v10 = v29;
        goto LABEL_35;
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v15 = (__int64 *)sub_18009EB64(*(_QWORD *)(a1 + 144), v30, *(unsigned int *)(a1 + 88));
      v16 = 5;
      v17 = *v15;
    }
    else
    {
      v25 = 0LL;
      v15 = (__int64 *)&v24;
      v16 = 6;
      v17 = 0LL;
    }
    *a2 = v17;
    a2[1] = v15[1];
    *v15 = 0LL;
    v15[1] = 0LL;
    if ( (v16 & 2) != 0 )
    {
      v16 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          v18 = v25;
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( (v16 & 1) != 0 )
    {
      v10 = v31;
      goto LABEL_35;
    }
  }
  return a2;
}
