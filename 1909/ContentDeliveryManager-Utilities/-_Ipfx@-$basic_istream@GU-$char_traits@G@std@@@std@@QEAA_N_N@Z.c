/*
 * XREFs of ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x1800324E8
 * Callers:
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800303A4 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x180030564 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180024F20 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x1800302E0 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800359B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::basic_istream<unsigned short>::_Ipfx(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // r8
  int v11; // edx
  unsigned __int16 v12; // cx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // ecx
  unsigned __int16 **v19; // rax
  unsigned __int16 *v20; // rcx
  int v21; // ecx
  _WORD **v22; // rcx
  __int16 *v23; // rdx
  __int16 v24; // ax
  unsigned __int16 *v25; // rdx
  int v26; // ecx
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  __int64 v34; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)v1 + v3 + 16) )
  {
    v4 = *(__int64 **)((char *)v1 + v3 + 80);
    if ( v4 )
    {
      std::basic_ostream<unsigned short>::flush(v4);
      v2 = *v1;
    }
    v5 = *(int *)(v2 + 4);
    if ( (*((_BYTE *)v1 + v5 + 24) & 1) != 0 )
    {
      v6 = **(_QWORD **)((char *)v1 + v5 + 64);
      v34 = v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = std::use_facet<std::ctype<unsigned short>>(&v34);
      if ( v6 )
      {
        v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        if ( v8 )
          (**v8)(v8, 1LL);
      }
      try
      {
        v9 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
        v10 = **(unsigned __int16 ***)(v9 + 56);
        if ( v10 )
          v11 = **(_DWORD **)(v9 + 80);
        else
          v11 = 0;
        if ( v11 <= 0 )
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
        else
          v12 = *v10;
        while ( v12 != 0xFFFF )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, 72LL, v12) )
            goto LABEL_50;
          v16 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
          v17 = **(_QWORD **)(v16 + 56);
          if ( v17 )
            v18 = **(_DWORD **)(v16 + 80);
          else
            v18 = 0;
          if ( v18 <= 1 )
          {
            if ( v17 )
              v21 = **(_DWORD **)(v16 + 80);
            else
              v21 = 0;
            if ( v21 <= 0 )
            {
              v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
            }
            else
            {
              --**(_DWORD **)(v16 + 80);
              v22 = *(_WORD ***)(v16 + 56);
              v23 = (*v22)++;
              v24 = *v23;
            }
            if ( v24 == -1 )
            {
              v12 = -1;
            }
            else
            {
              v25 = **(unsigned __int16 ***)(v16 + 56);
              if ( v25 )
                v26 = **(_DWORD **)(v16 + 80);
              else
                v26 = 0;
              if ( v26 <= 0 )
                v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
              else
                v27 = *v25;
              v12 = v27;
            }
          }
          else
          {
            --**(_DWORD **)(v16 + 80);
            v19 = *(unsigned __int16 ***)(v16 + 56);
            v20 = *v19 + 1;
            *v19 = v20;
            v12 = *v20;
          }
        }
        v13 = (__int64)v1 + *(int *)(*v1 + 4);
        v14 = *(_DWORD *)(v13 + 16) | 1;
        if ( !*(_QWORD *)(v13 + 72) )
          LOBYTE(v14) = *(_BYTE *)(v13 + 16) | 5;
        std::ios_base::clear((std::ios_base *)v13, v14, 0);
      }
      catch ( ... )
      {
        v30 = (__int64)a1 + *(int *)(*a1 + 4);
        v31 = *(_DWORD *)(v30 + 16) | 4;
        v32 = v31 & 0x17;
        *(_DWORD *)(v30 + 16) = v32;
        if ( (v32 & *(_DWORD *)(v30 + 20)) != 0 )
          throw;
        v1 = a1;
        goto LABEL_20;
      }
LABEL_50:
      ;
    }
LABEL_20:
    v2 = *v1;
    if ( !*(_DWORD *)((char *)v1 + *(int *)(*v1 + 4) + 16) )
      return 1;
  }
  v28 = (__int64)v1 + *(int *)(v2 + 4);
  v29 = *(_DWORD *)(v28 + 16) | 2;
  if ( !*(_QWORD *)(v28 + 72) )
    LOBYTE(v29) = *(_BYTE *)(v28 + 16) | 6;
  std::ios_base::clear((std::ios_base *)v28, v29, 0);
  return 0;
}
