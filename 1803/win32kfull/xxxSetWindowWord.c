/*
 * XREFs of xxxSetWindowWord @ 0x1C0131ED4
 * Callers:
 *     NtUserSetWindowWord @ 0x1C0131E30 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     FCallerOk @ 0x1C0132038 (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(_QWORD *a1, int a2, unsigned __int16 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r9
  bool v12; // sf
  __int64 v13; // r8
  unsigned __int64 v14; // r10
  _WORD *v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rdx
  unsigned __int16 *v19; // rax
  unsigned __int16 v20; // si
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rdx
  int *v32; // rax
  int v33; // ebx
  unsigned int v34; // ecx
  _DWORD *v35; // r9
  __int64 v36; // rcx
  char v37; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  v37 = 0;
  if ( !(unsigned int)FCallerOk() )
  {
LABEL_20:
    v22 = 5LL;
LABEL_22:
    UserSetLastError(v22, v7);
    return 0LL;
  }
  v8 = a1[5];
  if ( (*(_BYTE *)(v8 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v22 = 1413LL;
      goto LABEL_22;
    }
    if ( (*(_WORD *)(v8 + 42) & 0x3FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *(unsigned int *)(v8 + 252) )
        goto LABEL_9;
      v23 = *(_QWORD *)(a1[2] + 416LL);
      if ( v23 == PsGetCurrentProcessWin32Process(v4 + 2) || (*(_DWORD *)(a1[5] + 232LL) & 0x800) != 0 )
        goto LABEL_9;
      v25 = *(_QWORD *)(v23 + 872);
      v26 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v24) + 872);
      if ( !gbEnforceUIPI
        || (unsigned int)v26 > (unsigned int)v25
        || (_DWORD)v26 == (_DWORD)v25 && (HIDWORD(v26) == HIDWORD(v25) || HIDWORD(v26) == -1 || HIDWORD(v25) == -1)
        || *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v26)) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(a1[2] + 416LL));
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
    *(_DWORD *)(v8 + 28) = a3 | (*(unsigned __int16 *)(v8 + 30) << 16);
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *(unsigned int *)(v8 + 252) )
  {
    v9 = *(_QWORD *)(a1[2] + 416LL);
    if ( v9 != PsGetCurrentProcessWin32Process(v4 + 2) && (*(_DWORD *)(a1[5] + 232LL) & 0x800) == 0 )
    {
      v27 = *(_QWORD *)(v9 + 872);
      v28 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v10) + 872);
      if ( !gbEnforceUIPI
        || (unsigned int)v28 > (unsigned int)v27
        || (_DWORD)v28 == (_DWORD)v27 && (HIDWORD(v28) == HIDWORD(v27) || HIDWORD(v28) == -1 || HIDWORD(v27) == -1)
        || *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v28)) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(a1[2] + 416LL));
        v6 = 1;
        v37 = 1;
        goto LABEL_8;
      }
      goto LABEL_20;
    }
  }
LABEL_8:
  v11 = a1[5];
  if ( (*(_WORD *)(v11 + 42) & 0x3FFF) == 0 )
  {
LABEL_9:
    v12 = (v4 & 0x80000000) != 0LL;
    goto LABEL_10;
  }
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_55:
    v29 = 1413LL;
    goto LABEL_56;
  }
  v7 = (*(_WORD *)(v11 + 42) & 0x3FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 312 )
    goto LABEL_9;
  if ( (*(_WORD *)(v11 + 42) & 0x3FFF) == 0x2A1 )
  {
    if ( !(_DWORD)v4 )
    {
      v30 = **(_QWORD **)(v11 + 296);
      if ( !v30 || v30 == -1 )
      {
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
      else
      {
        v31 = (int *)(v30 + 8);
        v32 = v31;
        if ( (unsigned __int64)v31 >= MmUserProbeAddress )
          v32 = (int *)MmUserProbeAddress;
        v33 = *v32;
        *v31 = a3;
        if ( v37 )
          KeDetachProcess();
        return (unsigned __int16)v33;
      }
    }
    goto LABEL_55;
  }
  if ( (*(_WORD *)(v11 + 42) & 0x3FFF) != 0x2A7 )
    goto LABEL_55;
  v12 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_55;
LABEL_10:
  if ( v12 )
    goto LABEL_55;
  v13 = a1[5];
  v14 = *(unsigned int *)(v13 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v14 + *(_DWORD *)(v13 + 200)) )
    goto LABEL_55;
  v15 = *(_WORD **)(a1[14] + 8LL);
  if ( (v15[3] & 0x100) != 0 )
  {
    v34 = 0;
    v35 = &gDefaultServerClasses;
    while ( *v15 != *(_WORD *)(gpsi + 2LL * ((*v35 >> 3) & 0x1F) + 868) )
    {
      ++v34;
      v35 += 12;
      if ( v34 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v34 + 6) )
    {
      v7 = *v35 & 0xF8;
      if ( (*(_BYTE *)v35 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFF08uLL )
      {
        v29 = 5LL;
LABEL_56:
        UserSetLastError(v29, v7);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_13:
  v16 = v4;
  if ( v4 + 2 <= v14 )
  {
    v36 = a1[34];
    v20 = *(_WORD *)(v4 + v36);
    *(_WORD *)(v16 + v36) = a3;
  }
  else
  {
    v17 = v4 - v14;
    v18 = *(_QWORD *)(v13 + 296);
    if ( (*(_DWORD *)(v13 + 232) & 0x800) != 0 )
      v19 = (unsigned __int16 *)(v17 + v18 + *(_QWORD *)(a1[3] + 128LL));
    else
      v19 = (unsigned __int16 *)(v18 + v17);
    v20 = *v19;
    *v19 = a3;
  }
  if ( v6 )
    KeDetachProcess();
  return v20;
}
