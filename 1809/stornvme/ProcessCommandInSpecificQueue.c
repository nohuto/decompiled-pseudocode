/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C0002E50
 * Callers:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C0002BE0 (NVMeHwStartIo.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C00033A0 (ProcessCommandTrace.c)
 */

__int64 __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v4; // r15
  bool v5; // zf
  __int64 v9; // rdi
  unsigned __int8 v10; // r12
  __int16 v11; // ax
  int v12; // ecx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r8
  _WORD *v15; // r10
  unsigned __int16 *v16; // r9
  _QWORD *v17; // r14
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  int v22; // r13d
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // cx
  __int16 v25; // r8
  __int64 v26; // r14
  _OWORD *v27; // rdx
  unsigned int v28; // edx
  int v29; // edx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 result; // rax
  signed __int32 v36[6]; // [rsp+8h] [rbp-69h] BYREF
  __int64 v37; // [rsp+28h] [rbp-49h]
  int *v38; // [rsp+30h] [rbp-41h]
  __int64 v39; // [rsp+38h] [rbp-39h]
  int v40; // [rsp+40h] [rbp-31h]
  int v41; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v42[3]; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v43; // [rsp+58h] [rbp-19h] BYREF
  __int64 v44; // [rsp+60h] [rbp-11h] BYREF
  __int64 v45; // [rsp+68h] [rbp-9h]
  __int64 v46; // [rsp+70h] [rbp-1h]
  __int64 v47; // [rsp+78h] [rbp+7h]
  __int64 v48; // [rsp+80h] [rbp+Fh]
  __int64 v49; // [rsp+88h] [rbp+17h]
  __int64 v50; // [rsp+90h] [rbp+1Fh]
  char v51; // [rsp+D8h] [rbp+67h] BYREF
  unsigned int v52; // [rsp+E0h] [rbp+6Fh] BYREF
  int v53; // [rsp+E8h] [rbp+77h]
  __int16 v54; // [rsp+F0h] [rbp+7Fh]

  v54 = a4;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  v50 = v4;
  if ( v5 )
    v9 = *(_QWORD *)(a2 + 104);
  else
    v9 = *(_QWORD *)(a2 + 56);
  if ( (v9 & 0xFFF) != 0 )
    v9 = v9 - (v9 & 0xFFF) + 4096;
  LODWORD(v44) = 1;
  v53 = 0;
  v10 = 1;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v11 = *(_WORD *)(a3 + 40);
  if ( !v11 )
  {
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 792));
    v11 = *(_WORD *)(a3 + 40);
  }
  v12 = *(_DWORD *)(a1 + 20);
  if ( (v12 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    v10 = 0;
    goto LABEL_57;
  }
  if ( (v12 & 0x100) != 0 && v11 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v10 = 0;
    goto LABEL_57;
  }
  StorPortExtendedFunction(
    93LL,
    a1,
    1LL,
    a3 + 56,
    (unsigned int)&v44,
    v38,
    v39,
    v40,
    v41,
    *(_QWORD *)&v42[1],
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v13 = *(_WORD *)(a3 + 40);
  if ( v13 )
  {
    v14 = *(_WORD *)(a1 + 262);
    v19 = 136LL * v13;
    v20 = *(_QWORD *)(a1 + 752);
    v15 = (_WORD *)(v19 + v20 - 92);
    v16 = (unsigned __int16 *)(v19 + v20 - 88);
    v17 = (_QWORD *)(v19 + v20 - 104);
    v18 = (unsigned __int16 *)(v19 + v20 - 90);
  }
  else
  {
    v14 = *(_WORD *)(a1 + 260);
    v15 = (_WORD *)(a1 + 316);
    v16 = (unsigned __int16 *)(a1 + 320);
    v17 = (_QWORD *)(a1 + 304);
    v18 = (unsigned __int16 *)(a1 + 318);
  }
  v21 = *v18;
  v22 = (unsigned __int16)*v15;
  if ( v21 == v22 + 1 || !(_WORD)v21 && v22 == v14 - 1 )
    goto LABEL_56;
  *v15 = v22 + 1;
  if ( (_WORD)v22 + 1 == v14 )
    *v15 = 0;
  v23 = *v16;
  if ( *v16 < v14 )
  {
    do
    {
      v24 = v23 + 1;
      if ( !*(_QWORD *)(16LL * v23 + *v17) )
        goto LABEL_29;
      ++v23;
    }
    while ( v24 < v14 );
  }
  v23 = 0;
  if ( !*v16 )
  {
LABEL_27:
    if ( *v15 )
      v25 = *v15 - 1;
    else
      v25 = v14 - 1;
    *v15 = v25;
LABEL_56:
    StorPortNotification(4100LL, a1, &v44, v16);
    v10 = 0;
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v24 = v23 + 1;
    if ( !*(_QWORD *)(16LL * v23 + *v17) )
      break;
    ++v23;
    if ( v24 >= *v16 )
      goto LABEL_27;
  }
LABEL_29:
  *v16 = v24;
  if ( v24 == v14 )
    *v16 = 0;
  *(_WORD *)(v9 + 4248) = v22;
  *(_WORD *)(v9 + 4246) = v23;
  v26 = 0LL;
  v43 = 0LL;
  if ( *(_WORD *)(a3 + 40) )
    v26 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 760) - 344LL;
  *(_WORD *)(v9 + 4098) = v23;
  if ( *(_BYTE *)(a1 + 17) )
  {
    ProcessCommandTrace(a1, a2);
    v23 = *(_WORD *)(v9 + 4246);
  }
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * v23) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v9 + 4246) + 8) = *(_WORD *)(v9 + 4248);
  v27 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v9 + 4248));
  *v27 = *(_OWORD *)(v9 + 4096);
  v27[1] = *(_OWORD *)(v9 + 4112);
  v27[2] = *(_OWORD *)(v9 + 4128);
  v27[3] = *(_OWORD *)(v9 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v9 + 4248) + 8) = *(_WORD *)(v9 + 4246);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 104) & 2) != 0) && a2 != a1 + 808 )
  {
    v28 = 0;
    while ( a2 != 104LL * v28 + a1 + 912 )
    {
      if ( ++v28 >= 6 )
      {
        ((void (__fastcall *)(__int64, __int64, _QWORD, __int64 *, _DWORD, int *, __int64, int, int, _QWORD))StorPortExtendedFunction)(
          47LL,
          a1,
          0LL,
          &v43,
          v37,
          v38,
          v39,
          v40,
          v41,
          *(_QWORD *)&v42[1]);
        *(_QWORD *)(v9 + 4160) = v43;
        break;
      }
    }
  }
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 128));
  v29 = v53 ^ (unsigned __int16)(v53 ^ (*(_WORD *)(v9 + 4248) + 1));
  v53 = v29;
  if ( (_WORD)v29 == v54 )
  {
    v29 &= 0xFFFF0000;
    v53 = v29;
  }
  **(_DWORD **)(a3 + 16) = v29;
  _InterlockedOr(v36, 0);
  if ( *(_QWORD *)(v9 + 4160) )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, __int64 *, _DWORD, int *, __int64, int, int, _QWORD))StorPortExtendedFunction)(
      47LL,
      a1,
      0LL,
      &v43,
      v37,
      v38,
      v39,
      v40,
      v41,
      *(_QWORD *)&v42[1]);
    *(_QWORD *)(v9 + 4168) = v43;
  }
  StorPortNotification(4100LL, a1, &v44, v16);
  if ( v26 && *(_BYTE *)(v26 + 200) )
  {
    v52 = 0;
    StorPortExtendedFunction(
      92LL,
      a1,
      &v52,
      v30,
      v37,
      v38,
      v39,
      v40,
      v41,
      *(_QWORD *)&v42[1],
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v31 = *(_QWORD *)(v26 + 208);
    if ( v31 )
    {
      StorPortExtendedFunction(
        89LL,
        a1,
        *(_QWORD *)(v31 + 8LL * v52),
        -10LL * *(unsigned int *)(v26 + 204),
        0,
        0LL,
        &v51,
        v40,
        v41,
        *(_QWORD *)&v42[1],
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3740) & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 224);
        v33 = *(_QWORD *)(v32 + 48LL * v52 + 8);
        if ( v33 )
        {
          v42[0] = 0;
          LOWORD(v42[0]) = *(_WORD *)(v32 + 48LL * v52 + 16);
          _BitScanForward64(&v34, v33);
          *(_DWORD *)((char *)v42 + 2) = v34;
          StorPortNotification(4107LL, a1, v26 + 216, v42);
        }
      }
      v38 = &v41;
      v37 = 0LL;
      v41 = 0;
      StorPortNotification(4098LL, a1, v26 + 216, v52);
    }
  }
LABEL_57:
  result = v10;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 792));
  return result;
}
