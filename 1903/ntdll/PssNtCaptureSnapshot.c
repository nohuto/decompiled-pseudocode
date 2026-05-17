/*
 * XREFs of PssNtCaptureSnapshot @ 0x1801101A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x18009D080 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     PssNtFreeSnapshot @ 0x180110900 (PssNtFreeSnapshot.c)
 *     sub_180110FD0 @ 0x180110FD0 (sub_180110FD0.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_18011138C @ 0x18011138C (sub_18011138C.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 result; // rax
  int v8; // r15d
  __int64 v9; // rbx
  int v10; // esi
  void *v11; // rcx
  int v12; // r12d
  int Process; // r12d
  int v14; // r15d
  int v15; // [rsp+28h] [rbp-59h]
  int v16; // [rsp+30h] [rbp-51h]
  _DWORD *v17; // [rsp+58h] [rbp-29h]
  __int64 v18; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-11h] BYREF
  __int64 v21; // [rsp+78h] [rbp-9h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v24[9]; // [rsp+90h] [rbp+Fh] BYREF

  v5 = a2;
  if ( (a3 & 0x3FFC000) != 0 )
    return 3221225485LL;
  v8 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v9 = 0LL;
  v21 = 0LL;
  v24[0] = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v10 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v9 = MEMORY[0x7FFE0300];
    sub_180110FD0(v24, &v23);
  }
  v11 = *a1;
  v12 = 0;
  v17 = *a1;
  if ( !*a1 )
  {
    v16 = 4;
    v15 = 4096;
    v24[1] = 1144LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
    v11 = 0LL;
    v12 = 1;
    *a1 = 0LL;
  }
  memset(v11, 0, 0x478uLL);
  *v17 = 1146311504;
  v17[1] = v12;
  v17[2] = a3;
  Process = sub_18011138C(v17, v5, a3);
  if ( Process < 0 )
    goto LABEL_11;
  if ( (a3 & 2) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v22 = 2147352576LL;
    Process = sub_180111530(v17, v5, a3, &v22, v15, v16);
    if ( Process < 0 )
      goto LABEL_11;
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)v17 + 135) = v18 - v20;
      *((_QWORD *)v17 + 136) = 1000000 * (v19 - v21) / v9;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    Process = sub_1801118C0(v17, v5, a3);
    if ( Process >= 0 )
    {
      if ( v10 )
      {
        sub_180110FD0(&v19, &v18);
        *((_QWORD *)v17 + 133) = v18 - v20;
        *((_QWORD *)v17 + 134) = 1000000 * (v19 - v21) / v9;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot(v17);
    *a1 = 0LL;
    return (unsigned int)Process;
  }
LABEL_24:
  if ( (a3 & 1) == 0 )
    goto LABEL_37;
  if ( v10 )
    sub_180110FD0(&v21, &v20);
  do
  {
    while ( 1 )
    {
      LODWORD(v22) = v8 & 0x10000000;
      Process = ZwCreateProcessEx();
      if ( Process >= 0 )
        goto LABEL_33;
      if ( (v8 & 0x4000000) == 0 )
        goto LABEL_11;
      if ( !(_DWORD)v22 )
        break;
      v8 &= ~0x10000000u;
    }
    if ( (v8 & 0x8000000) == 0 )
      goto LABEL_11;
    v8 &= ~0x8000000u;
    Process = -1073741267;
LABEL_33:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v17 + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)v17 + 109) = v24[2];
  if ( v10 )
  {
    sub_180110FD0(&v19, &v18);
    *((_QWORD *)v17 + 131) = v18 - v20;
    *((_QWORD *)v17 + 132) = 1000000 * (v19 - v21) / v9;
  }
  v5 = a2;
LABEL_37:
  if ( (a3 & 4) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v14 = sub_180111DA4(v17, v5, a3);
    if ( v14 < 0 )
    {
LABEL_41:
      PssNtFreeSnapshot(v17);
      *a1 = 0LL;
      return (unsigned int)v14;
    }
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)v17 + 137) = v18 - v20;
      *((_QWORD *)v17 + 138) = 1000000 * (v19 - v21) / v9;
    }
  }
  if ( (a3 & 0x80u) == 0 )
  {
LABEL_50:
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)v17 + 129) = v18 - v23;
      *((_QWORD *)v17 + 130) = 1000000 * (v19 - v24[0]) / v9;
    }
  }
  else
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v14 = sub_180112808(v17, v5, a3, a4);
    if ( v14 < 0 )
      goto LABEL_41;
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)v17 + 139) = v18 - v20;
      *((_QWORD *)v17 + 140) = 1000000 * (v19 - v21) / v9;
      goto LABEL_50;
    }
  }
  if ( (a3 & 0x2000) != 0 )
    sub_180111230(v17, v5);
  return 0LL;
}
