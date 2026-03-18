/*
 * XREFs of MiValidateExistingImage @ 0x14064F1A4
 * Callers:
 *     MiShareExistingControlArea @ 0x1405DEC94 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x14064F460 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x14064F5C0 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406BEA60 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r12
  char v2; // bl
  char v4; // r15
  char v5; // r13
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // rcx
  unsigned int UserTime; // ebp
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // r8
  int v20; // eax
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v22; // [rsp+A8h] [rbp+10h]
  __int64 v23; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v23 = *((_QWORD *)a1 + 7);
  v4 = 0;
  v22 = 0;
  v5 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x20000) != 0 )
  {
    dword_140438DF0 = 81;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v7 = 2LL;
  else
    v7 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v7);
  if ( (int)result >= 0 )
  {
    v9 = *a1;
    v10 = 6LL;
    if ( (v9 & 0x100) != 0 )
    {
      v11 = 4;
    }
    else if ( (v9 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v11 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v11 = 0;
    }
    v12 = *v1;
    v13 = v11 | 0x10;
    if ( (v9 & 0x800) == 0 )
      v13 = v11;
    v14 = (unsigned int)v9;
    if ( (v9 & 0x400) != 0 && (v9 & 0x10) == 0 )
    {
      UserTime = KeGetCurrentThread()->ApcState.Process[2].UserTime;
      LOBYTE(v10) = *((_BYTE *)a1 + 24);
      LOBYTE(v8) = *(_BYTE *)(v12 + 15) >> 4;
      result = SeGetImageRequiredSigningLevel(v23, v13, v10, v8, (__int64)&v21);
      if ( (int)result < 0 )
        return result;
      v14 = *a1;
      if ( (v14 & 0x800) == 0 )
      {
        if ( *((_BYTE *)a1 + 24) )
        {
          v9 = 1LL;
          v22 = (UserTime & 0x800000) != 0;
        }
        if ( (UserTime & 0x1000000) != 0 )
        {
          v4 = 8;
        }
        else
        {
          v4 = 0;
          if ( (UserTime & 0x2000000) != 0 )
            v4 = 6;
        }
      }
      *((_BYTE *)a1 + 24) = v21;
    }
    if ( (v14 & 0x20000) != 0 )
    {
      v13 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v16 = v13 | 0x20000000;
    if ( (v14 & 0x100000) == 0 )
      v16 = v13;
    if ( (v14 & 0x400) != 0 )
    {
      if ( (v14 & 0x10) != 0 )
        goto LABEL_44;
      LOBYTE(v14) = *(_BYTE *)(v12 + 15);
      LOBYTE(v9) = *((_BYTE *)a1 + 24);
      if ( qword_14040DE20 )
      {
        LOBYTE(v10) = (unsigned __int8)v14 >> 4;
        v17 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_14040DE20)(
                v16,
                v9,
                v10,
                ((unsigned __int8)v14 >> 1) & 7);
        LOBYTE(v9) = *((_BYTE *)a1 + 24);
        LOBYTE(v14) = *(_BYTE *)(v12 + 15);
        if ( v17 )
          goto LABEL_44;
      }
      if ( !qword_14040DDC0
        || (LOBYTE(v14) = (unsigned __int8)v14 >> 4, v18 = qword_14040DDC0(v14, v9), v19 = *(_BYTE *)(v12 + 15), !v18)
        || (v16 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0x180000) != 0x100000
        || (v19 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
      {
LABEL_44:
        v19 = *(_BYTE *)(v12 + 15);
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      if ( qword_14040DDC0 )
      {
        LOBYTE(v9) = v4;
        LOBYTE(v14) = v19 >> 4;
        v20 = qword_14040DDC0(v14, v9);
      }
      else
      {
        v20 = 0;
      }
      v2 = v20 == 0;
    }
    return MiValidateSectionSigningPolicy(
             1,
             v23,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v16,
             v5,
             v2,
             v22,
             *((_BYTE *)a1 + 24),
             v4);
  }
  return result;
}
