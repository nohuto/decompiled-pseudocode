/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C01592BC
 * Callers:
 *     NtUserSetWindowWord @ 0x1C01591E0 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     FCallerOk @ 0x1C01009BC (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, int a2, unsigned __int16 a3)
{
  unsigned __int16 v3; // r13
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  char v13; // r14
  bool v14; // sf
  _WORD *v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // esi
  unsigned __int16 *v18; // r8
  unsigned __int16 v19; // si
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int *v32; // rdx
  int *v33; // rax
  int v34; // ebx
  bool v35; // zf
  unsigned int v36; // ecx
  _DWORD *v37; // r10
  __int64 v38; // rcx
  char v40; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v40 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
    goto LABEL_20;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v21 = 1413LL;
      goto LABEL_22;
    }
    if ( (*(_WORD *)(v8 + 42) & 0x3FFF) == 0x2A4 )
    {
      v13 = 0;
      if ( v4 + 2 <= *(unsigned int *)(v8 + 252) )
        goto LABEL_34;
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v22 == PsGetCurrentProcessWin32Process(v4 + 2, v7) || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
        goto LABEL_34;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v7);
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v22 + 872)
        || *(int *)(PsGetCurrentProcessWin32Process(v26, v25) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v6 = 1;
        v13 = 1;
LABEL_34:
        v3 = a3;
LABEL_9:
        v14 = (v4 & 0x80000000) != 0LL;
        goto LABEL_10;
      }
LABEL_20:
      v21 = 5LL;
LABEL_22:
      UserSetLastError(v21, v7, v8, v9);
      return 0LL;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v8 + 216);
    *(_QWORD *)(v8 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v8 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v8 + 28);
    *(_DWORD *)(v8 + 28) = v3 | *(_DWORD *)(v8 + 28) & 0xFFFF0000;
    return result;
  }
  v10 = 0;
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_8;
  if ( v4 + 2 <= *(unsigned int *)(v8 + 252) )
    goto LABEL_8;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( v11 == PsGetCurrentProcessWin32Process(v4 + 2, v7) )
    goto LABEL_8;
  v10 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
    goto LABEL_8;
  v27 = PsGetCurrentProcessWin32Process(v12, v7);
  if ( !(unsigned __int8)CheckAccess(v27 + 872, v11 + 872)
    && *(int *)(PsGetCurrentProcessWin32Process(v29, v28) + 12) >= 0 )
  {
    goto LABEL_20;
  }
  KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
  v6 = 1;
  v40 = 1;
  v10 = 1;
LABEL_8:
  v9 = *((_QWORD *)a1 + 5);
  v8 = *(_WORD *)(v9 + 42) & 0x3FFF;
  v13 = v10;
  if ( (*(_WORD *)(v9 + 42) & 0x3FFF) == 0 )
    goto LABEL_9;
  v13 = v10;
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_71:
    UserSetLastError(1413LL, v7, v8, v9);
    v35 = v13 == 0;
LABEL_72:
    if ( !v35 )
      KeDetachProcess();
    return 0LL;
  }
  v7 = (*(_WORD *)(v9 + 42) & 0x3FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 320 )
    goto LABEL_9;
  v8 = (unsigned int)(v8 - 673);
  if ( !(_DWORD)v8 )
  {
    if ( !(_DWORD)v4 )
    {
      v31 = **(_QWORD **)(v9 + 296);
      if ( !v31 || v31 == -1 )
      {
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
      else
      {
        v32 = (int *)(v31 + 8);
        v33 = v32;
        if ( (unsigned __int64)v32 >= MmUserProbeAddress )
          v33 = (int *)MmUserProbeAddress;
        v34 = *v33;
        *v32 = v3;
        if ( v40 )
          KeDetachProcess();
        return (unsigned __int16)v34;
      }
    }
LABEL_46:
    v30 = 1413LL;
LABEL_60:
    UserSetLastError(v30, v7, v8, v9);
    v35 = v6 == 0;
    goto LABEL_72;
  }
  if ( (_DWORD)v8 != 6 )
    goto LABEL_46;
  v14 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_46;
LABEL_10:
  if ( v14 )
    goto LABEL_71;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(unsigned int *)(v8 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v9 + *(_DWORD *)(v8 + 200)) )
    goto LABEL_71;
  v15 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v15[3] & 0x100) != 0 )
  {
    v36 = 0;
    v37 = &gDefaultServerClasses;
    while ( *v15 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
    {
      ++v36;
      v37 += 12;
      if ( v36 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v36 + 6) )
    {
      v7 = *v37 & 0xF8;
      if ( (*(_BYTE *)v37 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFEE0uLL )
      {
        v30 = 5LL;
        goto LABEL_60;
      }
    }
  }
LABEL_13:
  v16 = v4;
  if ( v4 + 2 <= v9 )
  {
    v38 = *((_QWORD *)a1 + 35);
    v19 = *(_WORD *)(v4 + v38);
    *(_WORD *)(v16 + v38) = v3;
  }
  else
  {
    v17 = v4 - v9;
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
      v18 = (unsigned __int16 *)(*(_QWORD *)(v8 + 296) + v17 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v18 = (unsigned __int16 *)(*(_QWORD *)(v8 + 296) + v17);
    v19 = *v18;
    *v18 = v3;
  }
  if ( v6 )
    KeDetachProcess();
  return v19;
}
