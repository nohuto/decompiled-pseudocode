/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C015A26C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C015A190 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FCallerOk @ 0x1C00A83A4 (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, int a2, unsigned __int16 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rcx
  bool v12; // sf
  _WORD *v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // esi
  unsigned __int16 *v16; // r8
  unsigned __int16 v17; // si
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rdx
  int *v31; // rax
  int v32; // ebx
  unsigned int v33; // ecx
  _DWORD *v34; // r10
  __int64 v35; // rcx
  char v36; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  v36 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
  {
LABEL_20:
    v19 = 5LL;
LABEL_22:
    UserSetLastError(v19, v7, v8, v9);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v19 = 1413LL;
      goto LABEL_22;
    }
    if ( (*(_WORD *)(v8 + 42) & 0x3FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *(unsigned int *)(v8 + 252) )
        goto LABEL_9;
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v20 == PsGetCurrentProcessWin32Process(v4 + 2, v7) || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
        goto LABEL_9;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v7);
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v20 + 872)
        || *(int *)(PsGetCurrentProcessWin32Process(v24, v23) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v6 = 1;
        goto LABEL_9;
      }
      goto LABEL_20;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v8 + 216);
    *(_QWORD *)(v8 + 216) = a3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v8 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v8 + 28);
    *(_DWORD *)(v8 + 28) = a3 | *(_DWORD *)(v8 + 28) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *(unsigned int *)(v8 + 252) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
    if ( v10 != PsGetCurrentProcessWin32Process(v4 + 2, v7) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
    {
      v25 = PsGetCurrentProcessWin32Process(v11, v7);
      if ( (unsigned __int8)CheckAccess(v25 + 872, v10 + 872)
        || *(int *)(PsGetCurrentProcessWin32Process(v27, v26) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v6 = 1;
        v36 = 1;
        goto LABEL_8;
      }
      goto LABEL_20;
    }
  }
LABEL_8:
  v9 = *((_QWORD *)a1 + 5);
  v8 = *(_WORD *)(v9 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v9 + 42) & 0x3FFF) == 0 )
  {
LABEL_9:
    v12 = (v4 & 0x80000000) != 0LL;
    goto LABEL_10;
  }
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_45:
    v28 = 1413LL;
    goto LABEL_46;
  }
  v7 = (*(_WORD *)(v9 + 42) & 0x3FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 320 )
    goto LABEL_9;
  v8 = (unsigned int)(v8 - 673);
  if ( !(_DWORD)v8 )
  {
    if ( !(_DWORD)v4 )
    {
      v29 = **(_QWORD **)(v9 + 296);
      if ( !v29 || v29 == -1 )
      {
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
      else
      {
        v30 = (int *)(v29 + 8);
        v31 = v30;
        if ( (unsigned __int64)v30 >= MmUserProbeAddress )
          v31 = (int *)MmUserProbeAddress;
        v32 = *v31;
        *v30 = a3;
        if ( v36 )
          KeDetachProcess();
        return (unsigned __int16)v32;
      }
    }
    goto LABEL_45;
  }
  if ( (_DWORD)v8 != 6 )
    goto LABEL_45;
  v12 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_45;
LABEL_10:
  if ( v12 )
    goto LABEL_45;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(unsigned int *)(v8 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v9 + *(_DWORD *)(v8 + 200)) )
    goto LABEL_45;
  v13 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v13[3] & 0x100) != 0 )
  {
    v33 = 0;
    v34 = &gDefaultServerClasses;
    while ( *v13 != *(_WORD *)(gpsi + 2LL * ((*v34 >> 3) & 0x1F) + 868) )
    {
      ++v33;
      v34 += 12;
      if ( v33 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v33 + 6) )
    {
      v7 = *v34 & 0xF8;
      if ( (*(_BYTE *)v34 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFEE0uLL )
      {
        v28 = 5LL;
LABEL_46:
        UserSetLastError(v28, v7, v8, v9);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_13:
  v14 = v4;
  if ( v4 + 2 <= v9 )
  {
    v35 = *((_QWORD *)a1 + 35);
    v17 = *(_WORD *)(v4 + v35);
    *(_WORD *)(v14 + v35) = a3;
  }
  else
  {
    v15 = v4 - v9;
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
      v16 = (unsigned __int16 *)(*(_QWORD *)(v8 + 296) + v15 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v16 = (unsigned __int16 *)(*(_QWORD *)(v8 + 296) + v15);
    v17 = *v16;
    *v16 = a3;
  }
  if ( v6 )
    KeDetachProcess();
  return v17;
}
