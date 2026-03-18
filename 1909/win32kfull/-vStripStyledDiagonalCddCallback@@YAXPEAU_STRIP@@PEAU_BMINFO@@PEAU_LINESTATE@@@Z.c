/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CC100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r12
  __int64 v5; // rsi
  int v7; // r9d
  unsigned int v8; // r10d
  int v9; // ebp
  int v10; // edi
  int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r11
  int v16; // r12d
  unsigned int v17; // edx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  int v21; // [rsp+24h] [rbp-74h]
  int v22; // [rsp+28h] [rbp-70h]
  unsigned int v23; // [rsp+2Ch] [rbp-6Ch]
  char *v24; // [rsp+30h] [rbp-68h]
  void (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-60h]
  char *v26; // [rsp+40h] [rbp-58h]
  _DWORD v27[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v7 = 1;
  v24 = (char *)a1 + 28;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 20);
  v10 = *((_DWORD *)a3 + 5);
  v11 = -4 * *((_DWORD *)a1 + 2);
  v26 = (char *)a1 + 4 * *(int *)a1 + 28;
  v23 = *((_DWORD *)a3 + 1);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v11 = 4 * *((_DWORD *)a1 + 2);
  v21 = v11;
  if ( v11 <= 0 )
    v7 = -1;
  v22 = v7;
  v12 = abs32(v11);
  v13 = ((int)v5 - *((_DWORD *)a1 + 110)) / v12;
  v14 = (((int)v5 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v25 = v15;
  do
  {
    v16 = *(_DWORD *)v3;
    while ( 1 )
    {
      v17 = v14;
      if ( !v9 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v27[2] = v14 + 1;
        v27[0] = v14;
        v27[3] = v13 + 1;
        v27[1] = v13;
        v15(v18, v8, v27);
        v11 = v21;
        v17 = v14;
        v7 = v22;
        v8 = v23;
        v15 = v25;
      }
      v5 += 4LL;
      ++v14;
      if ( !--v16 )
        break;
      v10 -= *((_DWORD *)a3 + 4);
      v13 += v7;
      v5 += v11;
      if ( v10 <= 0 )
      {
        v19 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v19;
        if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
        {
          v19 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v19;
        }
        v10 += *v19;
        v9 = v9 == 0;
      }
    }
    v10 -= *((_DWORD *)a3 + 2);
    if ( v10 <= 0 )
    {
      v20 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v20;
      if ( (unsigned __int64)v20 > *((_QWORD *)a3 + 6) )
      {
        v20 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v20;
      }
      v10 += *v20;
      v9 = v9 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v14 = v17;
      v5 += v11 - 4;
      v13 += v7;
    }
    v3 = v24 + 4;
    v24 = v3;
  }
  while ( v3 < v26 );
  *((_QWORD *)a1 + 2) = v5;
  *((_DWORD *)a3 + 20) = v9;
  *((_DWORD *)a3 + 5) = v10;
}
