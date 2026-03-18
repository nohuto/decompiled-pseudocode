/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02A3F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbp
  unsigned int v6; // r9d
  int v7; // r13d
  int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // edi
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-68h]
  char *v18; // [rsp+28h] [rbp-60h]
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-58h]
  unsigned int v20; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v22; // [rsp+40h] [rbp-48h]
  unsigned int v23; // [rsp+44h] [rbp-44h]

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = 1;
  v17 = v6;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  if ( v8 <= 0 )
    v7 = -1;
  v9 = abs32(v8);
  v10 = ((int)v5 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v5 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v19 = v12;
  if ( v8 <= 0 )
  {
    do
    {
      v15 = *(_DWORD *)v3;
      v16 = *((_QWORD *)a1 + 54);
      v20 = v11;
      v21 = v10 - v15 + 1;
      v22 = ++v11;
      v23 = v10 + 1;
      v12(v16, v6, &v20);
      v6 = v17;
      v12 = v19;
      v3 += 4;
      v5 += v15 * v8 + 4;
      v10 += v15 * v7;
    }
    while ( v3 < v18 );
  }
  else
  {
    do
    {
      v13 = *(_DWORD *)v3;
      v14 = *((_QWORD *)a1 + 54);
      v20 = v11++;
      v21 = v10;
      v22 = v11;
      v23 = v13 + v10;
      v12(v14, v6, &v20);
      v6 = v17;
      v12 = v19;
      v3 += 4;
      v5 += v13 * v8 + 4;
      v10 += v13 * v7;
    }
    while ( v3 < v18 );
  }
  *((_QWORD *)a1 + 2) = v5;
}
