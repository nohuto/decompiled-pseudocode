/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C0002320
 * Callers:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     NVMeHwStartIo @ 0x1C00020B0 (NVMeHwStartIo.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C0002710 (ProcessCommandTrace.c)
 */

__int64 __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rsi
  unsigned __int8 v8; // r13
  int v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  _WORD *v14; // r11
  unsigned __int16 *v15; // r10
  _QWORD *v16; // r12
  unsigned __int16 *v17; // rax
  int v18; // edx
  int v19; // r9d
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // r15
  bool v23; // zf
  _OWORD *v24; // rdx
  unsigned int v25; // eax
  int v26; // edx
  __int64 result; // rax
  unsigned __int16 v28; // cx
  __int16 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  signed __int32 v35[6]; // [rsp+8h] [rbp-59h] BYREF
  _QWORD *v36; // [rsp+28h] [rbp-39h]
  int *v37; // [rsp+30h] [rbp-31h]
  char *v38; // [rsp+38h] [rbp-29h]
  _DWORD v39[2]; // [rsp+48h] [rbp-19h]
  __int64 v40; // [rsp+50h] [rbp-11h]
  _QWORD v41[4]; // [rsp+58h] [rbp-9h] BYREF
  char v42; // [rsp+C8h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+D0h] [rbp+6Fh] BYREF
  int v44; // [rsp+D8h] [rbp+77h] BYREF
  unsigned __int16 v45; // [rsp+E0h] [rbp+7Fh]

  v45 = a4;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v41[0] = 1LL;
  v8 = 1;
  memset(&v41[1], 0, 24);
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 800));
  v9 = *(_DWORD *)(a1 + 20);
  if ( (v9 & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
    v8 = 0;
    goto LABEL_34;
  }
  if ( (v9 & 0x100) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v8 = 0;
    goto LABEL_34;
  }
  v36 = v41;
  StorPortExtendedFunction(93LL, a1, 1LL);
  v10 = *(_WORD *)(a3 + 40);
  if ( v10 )
  {
    v11 = *(_WORD *)(a1 + 270);
    v12 = 136LL * v10;
    v13 = *(_QWORD *)(a1 + 760);
    v14 = (_WORD *)(v12 + v13 - 92);
    v15 = (unsigned __int16 *)(v12 + v13 - 88);
    v16 = (_QWORD *)(v12 + v13 - 104);
    v17 = (unsigned __int16 *)(v12 + v13 - 90);
  }
  else
  {
    v11 = *(_WORD *)(a1 + 268);
    v14 = (_WORD *)(a1 + 324);
    v15 = (unsigned __int16 *)(a1 + 328);
    v16 = (_QWORD *)(a1 + 312);
    v17 = (unsigned __int16 *)(a1 + 326);
  }
  v18 = *v17;
  v19 = (unsigned __int16)*v14;
  if ( v18 == v19 + 1 || !(_WORD)v18 && v19 == v11 - 1 )
    goto LABEL_63;
  *v14 = v19 + 1;
  if ( (_WORD)v19 + 1 == v11 )
    *v14 = 0;
  v20 = *v15;
  if ( *v15 < v11 )
  {
    while ( 1 )
    {
      v21 = v20 + 1;
      if ( !*(_QWORD *)(16LL * v20 + *v16) )
        break;
      ++v20;
      if ( v21 >= v11 )
        goto LABEL_46;
    }
    *v15 = v21;
    if ( v21 != v11 )
      goto LABEL_18;
    goto LABEL_39;
  }
LABEL_46:
  v20 = 0;
  if ( !*v15 )
  {
LABEL_49:
    if ( *v14 )
      v29 = *v14 - 1;
    else
      v29 = v11 - 1;
    *v14 = v29;
LABEL_63:
    StorPortNotification(4100LL, a1, v41);
    v8 = 0;
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v28 = v20 + 1;
    if ( !*(_QWORD *)(16LL * v20 + *v16) )
      break;
    ++v20;
    if ( v28 >= *v15 )
      goto LABEL_49;
  }
  *v15 = v28;
  if ( v28 == v11 )
LABEL_39:
    *v15 = 0;
LABEL_18:
  *(_WORD *)(v7 + 4248) = v19;
  v22 = 0LL;
  *(_WORD *)(v7 + 4246) = v20;
  v23 = *(_WORD *)(a3 + 40) == 0;
  v40 = 0LL;
  if ( !v23 )
    v22 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 768) - 344LL;
  *(_WORD *)(v7 + 4098) = v20;
  if ( *(_BYTE *)(a1 + 17) )
  {
    ProcessCommandTrace(a1, a2);
    v20 = *(_WORD *)(v7 + 4246);
  }
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * v20) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v7 + 4246) + 8) = *(_WORD *)(v7 + 4248);
  v24 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248));
  *v24 = *(_OWORD *)(v7 + 4096);
  v24[1] = *(_OWORD *)(v7 + 4112);
  v24[2] = *(_OWORD *)(v7 + 4128);
  v24[3] = *(_OWORD *)(v7 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v7 + 4248) + 8) = *(_WORD *)(v7 + 4246);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 104) & 2) != 0) && a2 != a1 + 816 )
  {
    v25 = 0;
    while ( a2 != 104LL * v25 + a1 + 920 )
    {
      if ( ++v25 >= 6 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL);
        *(_QWORD *)(v7 + 4160) = v40;
        break;
      }
    }
  }
  _InterlockedIncrement16((volatile signed __int16 *)(a3 + 128));
  v26 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1) != v45 )
    v26 = (unsigned __int16)(*(_WORD *)(v7 + 4248) + 1);
  **(_DWORD **)(a3 + 16) = v26;
  _InterlockedOr(v35, 0);
  if ( *(_QWORD *)(v7 + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL);
    *(_QWORD *)(v7 + 4168) = v40;
  }
  StorPortNotification(4100LL, a1, v41);
  if ( v22 && *(_BYTE *)(v22 + 200) )
  {
    v43 = 0;
    StorPortExtendedFunction(92LL, a1, &v43);
    v30 = *(_QWORD *)(v22 + 208);
    if ( v30 )
    {
      v34 = *(_QWORD *)(v30 + 8LL * v43);
      v38 = &v42;
      v37 = 0LL;
      v36 = 0LL;
      StorPortExtendedFunction(89LL, a1, v34);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3748) & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 232);
        v32 = *(_QWORD *)(v31 + 48LL * v43 + 8);
        if ( v32 )
        {
          v39[0] = 0;
          LOWORD(v39[0]) = *(_WORD *)(v31 + 48LL * v43 + 16);
          _BitScanForward64(&v33, v32);
          *(_DWORD *)((char *)v39 + 2) = v33;
          StorPortNotification(4107LL, a1, v22 + 216);
        }
      }
      v37 = &v44;
      v36 = 0LL;
      v44 = 0;
      StorPortNotification(4098LL, a1, v22 + 216);
    }
  }
LABEL_34:
  result = v8;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 800));
  return result;
}
