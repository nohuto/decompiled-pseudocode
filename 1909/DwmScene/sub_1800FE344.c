/*
 * XREFs of sub_1800FE344 @ 0x1800FE344
 * Callers:
 *     sub_1800FEEA0 @ 0x1800FEEA0 (sub_1800FEEA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800FE344(_QWORD *a1, float a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, float *); // rcx
  signed __int32 v7; // eax
  __int64 v8; // rdx
  signed __int32 v9; // eax
  float *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  float v14; // [rsp+28h] [rbp-28h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]

  v14 = a2;
  v3 = a1[2];
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 8);
  else
    v4 = 0;
  if ( v4 )
    goto LABEL_8;
  v5 = a1[4];
  if ( v5 )
    LODWORD(v5) = *(_DWORD *)(v5 + 8);
  if ( (_DWORD)v5 )
  {
LABEL_8:
    v15 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v7 + 1, v7) )
        {
          v6 = (void (__fastcall ***)(_QWORD, float *))a1[1];
          v15 = *(_OWORD *)(a1 + 1);
          goto LABEL_10;
        }
      }
    }
    v6 = (void (__fastcall ***)(_QWORD, float *))v15;
LABEL_10:
    if ( v6 )
    {
      (**v6)(v6, &v14);
    }
    else
    {
      v8 = a1[4];
      if ( v8 )
      {
        while ( 1 )
        {
          v9 = *(_DWORD *)(v8 + 8);
          if ( !v9 )
            break;
          if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
          {
            v10 = (float *)a1[3];
            v11 = (volatile signed __int32 *)a1[4];
            if ( v10 )
              *v10 = v14;
            if ( v11 )
            {
              if ( !_InterlockedDecrement(v11 + 2) )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
                if ( !_InterlockedDecrement(v11 + 3) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
              }
            }
            break;
          }
        }
      }
    }
    if ( *((_QWORD *)&v15 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL)) )
      {
        v12 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
    LOBYTE(v5) = 1;
  }
  return v5;
}
