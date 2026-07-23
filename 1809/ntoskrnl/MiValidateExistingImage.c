/*
 * XREFs of MiValidateExistingImage @ 0x140650344
 * Callers:
 *     MiShareExistingControlArea @ 0x1405DFC94 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiValidateSectionSigningPolicy @ 0x140650600 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406BFCE0 (SeGetImageRequiredSigningLevel.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r12
  char v2; // bl
  char v4; // r15
  char v5; // r13
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rcx
  unsigned int UserTime; // ebp
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+A0h] [rbp+8h] BYREF
  BOOL v21; // [rsp+A8h] [rbp+10h]
  PVOID Object; // [rsp+B0h] [rbp+18h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  Object = (PVOID)*((_QWORD *)a1 + 7);
  v4 = 0;
  v21 = 0;
  v5 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x20000) != 0 )
  {
    dword_140439EB0 = 81;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v7 = 2LL;
  else
    v7 = (*a1 & 0x20) != 0;
  result = MiRelocateImageAgain(v1, v7);
  if ( (int)result >= 0 )
  {
    v8 = *a1;
    v9 = 6LL;
    if ( (v8 & 0x100) != 0 )
    {
      v10 = 4;
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v8 & 0x10) != 0 )
    {
      v10 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v10 = 0;
    }
    v11 = *v1;
    v12 = v10 | 0x10;
    if ( (v8 & 0x800) == 0 )
      v12 = v10;
    v13 = (unsigned int)v8;
    if ( (v8 & 0x400) != 0 && (v8 & 0x10) == 0 )
    {
      UserTime = KeGetCurrentThread()->ApcState.Process[2].UserTime;
      result = SeGetImageRequiredSigningLevel(Object, (__int64)&v20);
      if ( (int)result < 0 )
        return result;
      v13 = *a1;
      if ( (v13 & 0x800) == 0 )
      {
        if ( *((_BYTE *)a1 + 24) )
        {
          v8 = 1LL;
          v21 = (UserTime & 0x800000) != 0;
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
      *((_BYTE *)a1 + 24) = v20;
    }
    if ( (v13 & 0x20000) != 0 )
    {
      v12 |= 0x40000000u;
      if ( !*((_BYTE *)a1 + 24) )
        *((_BYTE *)a1 + 24) = 4;
    }
    v15 = v12 | 0x20000000;
    if ( (v13 & 0x100000) == 0 )
      v15 = v12;
    if ( (v13 & 0x400) != 0 )
    {
      if ( (v13 & 0x10) != 0 )
        goto LABEL_44;
      LOBYTE(v13) = *(_BYTE *)(v11 + 15);
      LOBYTE(v8) = *((_BYTE *)a1 + 24);
      if ( qword_14040EE60 )
      {
        LOBYTE(v9) = (unsigned __int8)v13 >> 4;
        v16 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_14040EE60)(
                v15,
                v8,
                v9,
                ((unsigned __int8)v13 >> 1) & 7);
        LOBYTE(v8) = *((_BYTE *)a1 + 24);
        LOBYTE(v13) = *(_BYTE *)(v11 + 15);
        if ( v16 )
          goto LABEL_44;
      }
      if ( !qword_14040EE00
        || (LOBYTE(v13) = (unsigned __int8)v13 >> 4, v17 = qword_14040EE00(v13, v8), v18 = *(_BYTE *)(v11 + 15), !v17)
        || (v15 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0x180000) != 0x100000
        || (v18 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v11 + 56) + 46LL) < 0 )
      {
LABEL_44:
        v18 = *(_BYTE *)(v11 + 15);
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      if ( qword_14040EE00 )
      {
        LOBYTE(v8) = v4;
        LOBYTE(v13) = v18 >> 4;
        v19 = qword_14040EE00(v13, v8);
      }
      else
      {
        v19 = 0;
      }
      v2 = v19 == 0;
    }
    return MiValidateSectionSigningPolicy(
             1,
             (_DWORD)Object,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v15,
             v5,
             v2,
             v21,
             *((_BYTE *)a1 + 24),
             v4);
  }
  return result;
}
