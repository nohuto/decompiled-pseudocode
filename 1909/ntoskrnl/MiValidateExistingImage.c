/*
 * XREFs of MiValidateExistingImage @ 0x1406489B0
 * Callers:
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x140648C94 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406E10F4 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r15
  char v2; // r14
  char v3; // r12
  char v4; // r13
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rbp
  int v13; // edi
  __int64 v14; // rcx
  int v15; // esi
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // r8
  int v21; // eax
  char v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h]
  __int64 v24; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v23 = 0;
  v3 = 0;
  v4 = 0;
  v24 = *((_QWORD *)a1 + 7);
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x80000) != 0 )
  {
    dword_140464518 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v7 = 2LL;
  else
    v7 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v7);
  if ( (int)result < 0 )
  {
    dword_140464518 = 13;
    return result;
  }
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
    v15 = *(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7];
    LOBYTE(v10) = *((_BYTE *)a1 + 24);
    LOBYTE(v8) = *(_BYTE *)(v12 + 15) >> 4;
    result = SeGetImageRequiredSigningLevel(v24, v13, v10, v8, (__int64)&v22);
    if ( (int)result < 0 )
    {
      dword_140464518 = 14;
      return result;
    }
    v14 = *a1;
    if ( (v14 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) )
      {
        v16 = v23;
        v9 = 1LL;
        if ( (v15 & 0x800000) != 0 )
          v16 = 1;
        v23 = v16;
      }
      if ( (v15 & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else
      {
        v2 = 0;
        if ( (v15 & 0x2000000) != 0 )
          v2 = 6;
      }
    }
    *((_BYTE *)a1 + 24) = v22;
  }
  if ( (v14 & 0x80000) != 0 )
  {
    v13 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v17 = v13 | 0x20000000;
  if ( (v14 & 0x400000) == 0 )
    v17 = v13;
  if ( (v14 & 0x400) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
      goto LABEL_48;
    LOBYTE(v14) = *(_BYTE *)(v12 + 15);
    LOBYTE(v9) = *((_BYTE *)a1 + 24);
    if ( qword_1404364A0 )
    {
      LOBYTE(v10) = (unsigned __int8)v14 >> 4;
      v18 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1404364A0)(
              v17,
              v9,
              v10,
              ((unsigned __int8)v14 >> 1) & 7);
      LOBYTE(v9) = *((_BYTE *)a1 + 24);
      LOBYTE(v14) = *(_BYTE *)(v12 + 15);
      if ( v18 )
        goto LABEL_48;
    }
    if ( !qword_140436440
      || (LOBYTE(v14) = (unsigned __int8)v14 >> 4, v19 = qword_140436440(v14, v9), v20 = *(_BYTE *)(v12 + 15), !v19)
      || (v17 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v20 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v12 + 56) + 46LL) < 0 )
    {
LABEL_48:
      v20 = *(_BYTE *)(v12 + 15);
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    v21 = (int)qword_140436440;
    if ( qword_140436440 )
    {
      LOBYTE(v9) = v2;
      LOBYTE(v14) = v20 >> 4;
      v21 = qword_140436440(v14, v9);
    }
    v4 = v21 == 0;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             v24,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v17,
             v3,
             v4,
             v23,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140464518 = 15;
  return result;
}
