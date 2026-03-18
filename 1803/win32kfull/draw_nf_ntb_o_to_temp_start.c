/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C00AB6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r10
  int v13; // eax
  unsigned __int8 *v14; // r9
  __int64 v15; // rsi
  unsigned int v16; // r11d
  int v17; // edi
  int v18; // ebx
  _BYTE *v19; // rax
  __int64 v20; // r8
  __int64 (__fastcall *v21)(); // rbx
  unsigned __int8 v22; // r8
  __int64 v23; // r10

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
      v14 = (unsigned __int8 *)(v12 + 16);
      v15 = *(int *)(v12 + 12);
      v16 = (*(_BYTE *)v12 + *(_BYTE *)(v10 + 24 * v11 + 16) - (_BYTE)a4) & 7;
      v17 = (v13 + 7) >> 3;
      v18 = (int)(v13 + v16 + 7) >> 3;
      v19 = (_BYTE *)(a3
                    + a5 * (*(_DWORD *)(v10 + 24 * v11 + 20) + *(_DWORD *)(v12 + 4) - a7)
                    + ((__int64)(*(_DWORD *)v12 + *(_DWORD *)(v10 + 24 * v11 + 16) - a4) >> 3));
      if ( v18 > 4 )
      {
        v23 = 0LL;
        if ( v18 > v17 )
          v23 = 2LL;
        OrAllTableWide[(v16 == 0) | (unsigned __int64)v23](v15, v16, a5, (int)v14, (__int64)v19, v17, v18);
      }
      else
      {
        v20 = 0LL;
        if ( v18 > v17 )
          v20 = 2LL;
        v21 = OrAllTableNarrow[(v16 == 0) | (unsigned int)(4 * v18) | (unsigned __int64)v20];
        if ( (char *)v21 == (char *)or_all_2_wide_rotated_no_last )
        {
          do
          {
            v22 = *v14++;
            *v19 |= v22 >> v16;
            v19[1] |= v22 << (8 - v16);
            v19 += a5;
          }
          while ( v14 != (unsigned __int8 *)(v15 + v12 + 16) );
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned __int8 *, _BYTE *, int))v21)(
            (unsigned int)v15,
            v16,
            (unsigned int)a5,
            v14,
            v19,
            v17);
        }
      }
      v10 = a1;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
}
