/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C00EC710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // r14d
  unsigned int v15; // r10d
  __int64 v16; // rdx
  int v17; // r11d
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rbp
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 result; // rax
  __int64 v25; // rcx

  if ( a2 )
  {
    v9 = a2;
    v10 = a1;
    v11 = 0LL;
    do
    {
      --v9;
      v12 = **(_QWORD **)(v10 + 24 * v11 + 8);
      v13 = *(_DWORD *)(v12 + 8);
      v14 = *(_DWORD *)(v12 + 12);
      v15 = (*(_BYTE *)v12 + *(_BYTE *)(v10 + 24 * v11 + 16) - (_BYTE)a4) & 7;
      v16 = (__int64)(*(_DWORD *)v12 + *(_DWORD *)(v10 + 24 * v11 + 16) - a4) >> 3;
      v17 = (v13 + 7) >> 3;
      v18 = v13 + v15 + 7;
      v19 = *(_DWORD *)(v10 + 24 * v11 + 20) + *(_DWORD *)(v12 + 4);
      v20 = v12 + 16;
      v21 = v18 >> 3;
      v22 = a3 + (int)(a5 * (v19 - a7)) + v16;
      if ( v21 > 4 )
      {
        v25 = 0LL;
        if ( v21 > v17 )
          v25 = 2LL;
        result = OrAllTableWide[(v15 == 0) | (unsigned __int64)v25](v14, v15, a5, v12 + 16, v22, v17, v21);
      }
      else
      {
        v23 = 0LL;
        if ( v21 > v17 )
          v23 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrAllTableNarrow[(v15 == 0) | (unsigned int)(4 * v21) | (unsigned __int64)v23])(
                   v14,
                   v15,
                   a5,
                   v20,
                   v22,
                   v17);
      }
      v10 = a1;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
  return result;
}
