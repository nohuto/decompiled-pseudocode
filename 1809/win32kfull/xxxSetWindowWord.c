/*
 * XREFs of xxxSetWindowWord @ 0x1C0154D1C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C0154C60 (NtUserSetWindowWord.c)
 * Callees:
 *     FCallerOk @ 0x1C0067C30 (FCallerOk.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetWindowWord(_QWORD *a1, int a2, unsigned __int16 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  _WORD *v9; // r9
  __int64 v10; // r15
  __int64 v11; // rcx
  bool v12; // sf
  unsigned __int64 v13; // r10
  _WORD *v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // rdx
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // si
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int *v30; // rdx
  int *v31; // rax
  int v32; // ebx
  unsigned int v33; // ecx
  __int64 v34; // rcx
  char v35; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  v35 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
  {
LABEL_78:
    v21 = 5LL;
    goto LABEL_79;
  }
  v9 = (_WORD *)a1[5];
  if ( (v9[9] & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v21 = 1413LL;
LABEL_79:
      UserSetLastError(v21, v7, v8, (__int64)v9);
      return 0LL;
    }
    if ( (v9[21] & 0x2FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *((unsigned int *)v9 + 63) )
        goto LABEL_9;
      v22 = *(_QWORD *)(a1[2] + 424LL);
      if ( v22 == PsGetCurrentProcessWin32Process(v4 + 2) || (*(_DWORD *)(a1[5] + 232LL) & 0x800) != 0 )
        goto LABEL_9;
      v24 = *(_QWORD *)(v22 + 880);
      v25 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v23) + 880);
      if ( !gbEnforceUIPI
        || (unsigned int)v25 > (unsigned int)v24
        || (_DWORD)v25 == (_DWORD)v24 && (HIDWORD(v25) == HIDWORD(v24) || HIDWORD(v25) == -1 || HIDWORD(v24) == -1)
        || *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v25)) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(a1[2] + 424LL));
        v6 = 1;
        goto LABEL_9;
      }
      goto LABEL_78;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = (unsigned __int16)v9[108];
    *((_QWORD *)v9 + 27) = a3 | ((unsigned __int16)HIWORD(*((_DWORD *)v9 + 54)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = (unsigned __int16)v9[14];
    *((_DWORD *)v9 + 7) = a3 | *((_DWORD *)v9 + 7) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *((unsigned int *)v9 + 63) )
  {
    v10 = *(_QWORD *)(a1[2] + 424LL);
    if ( v10 != PsGetCurrentProcessWin32Process(v4 + 2) && (*(_DWORD *)(a1[5] + 232LL) & 0x800) == 0 )
    {
      v26 = *(_QWORD *)(v10 + 880);
      v27 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 880);
      if ( !gbEnforceUIPI
        || (unsigned int)v27 > (unsigned int)v26
        || (_DWORD)v27 == (_DWORD)v26 && (HIDWORD(v27) == HIDWORD(v26) || HIDWORD(v27) == -1 || HIDWORD(v26) == -1)
        || *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v27)) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(a1[2] + 424LL));
        v6 = 1;
        v35 = 1;
        goto LABEL_8;
      }
      goto LABEL_78;
    }
  }
LABEL_8:
  v9 = (_WORD *)a1[5];
  v8 = v9[21] & 0x2FFF;
  if ( (v9[21] & 0x2FFF) == 0 )
  {
LABEL_9:
    v12 = (v4 & 0x80000000) != 0LL;
    goto LABEL_10;
  }
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_53:
    v28 = 1413LL;
    goto LABEL_54;
  }
  v7 = (v9[21] & 0x2FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 320 )
    goto LABEL_9;
  v8 = (unsigned int)(v8 - 673);
  if ( !(_DWORD)v8 )
  {
    if ( !(_DWORD)v4 )
    {
      v29 = **((_QWORD **)v9 + 37);
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
        if ( v35 )
          KeDetachProcess();
        return (unsigned __int16)v32;
      }
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v8 != 6 )
    goto LABEL_53;
  v12 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_53;
LABEL_10:
  if ( v12 )
    goto LABEL_53;
  v8 = a1[5];
  v13 = *(unsigned int *)(v8 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v13 + *(_DWORD *)(v8 + 200)) )
    goto LABEL_53;
  v14 = *(_WORD **)(a1[14] + 8LL);
  if ( (v14[3] & 0x100) != 0 )
  {
    v33 = 0;
    v9 = &gDefaultServerClasses;
    while ( *v14 != *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)v9 >> 3) & 0x1F) + 868) )
    {
      ++v33;
      v9 += 24;
      if ( v33 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v33 + 6) )
    {
      v7 = *(_DWORD *)v9 & 0xF8;
      if ( (*(_BYTE *)v9 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFEF8uLL )
      {
        v28 = 5LL;
LABEL_54:
        UserSetLastError(v28, v7, v8, (__int64)v9);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_13:
  v15 = v4;
  if ( v4 + 2 <= v13 )
  {
    v34 = a1[33];
    v19 = *(_WORD *)(v4 + v34);
    *(_WORD *)(v15 + v34) = a3;
  }
  else
  {
    v16 = v4 - v13;
    v17 = *(_QWORD *)(v8 + 296);
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
      v18 = (unsigned __int16 *)(v16 + v17 + *(_QWORD *)(a1[3] + 128LL));
    else
      v18 = (unsigned __int16 *)(v17 + v16);
    v19 = *v18;
    *v18 = a3;
  }
  if ( v6 )
    KeDetachProcess();
  return v19;
}
