/*
 * XREFs of RtlpInheritAcl2 @ 0x1405DBDB0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFirstFreeAce @ 0x1405C8D30 (RtlFirstFreeAce.c)
 *     RtlpGenerateInheritAcl @ 0x1405CF9D0 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1405DC8E0 (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        UCHAR *a1,
        unsigned __int8 *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        PACL Acl,
        PACE a17,
        int *a18)
{
  _DWORD *v18; // r13
  PACL v19; // rdi
  unsigned __int8 v20; // r11
  int v21; // esi
  unsigned int v22; // ebx
  unsigned int v23; // r12d
  unsigned __int8 *v25; // r10
  int v26; // r8d
  int v27; // r14d
  unsigned __int8 v28; // bl
  int *v29; // rax
  int v30; // ecx
  char v31; // al
  __int64 result; // rax
  int v33; // ecx
  PACE v34; // r12
  int v35; // ebx
  UCHAR v36; // bp
  __int64 v37; // rax
  UCHAR v38; // cl
  char v39; // al
  int v40; // eax
  char v41; // [rsp+80h] [rbp-68h]
  char v42; // [rsp+81h] [rbp-67h]
  USHORT AceCount; // [rsp+82h] [rbp-66h]
  int v44; // [rsp+84h] [rbp-64h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-60h]
  _DWORD v46[23]; // [rsp+8Ch] [rbp-5Ch] BYREF
  char v49; // [rsp+100h] [rbp+18h]
  unsigned __int8 v50; // [rsp+108h] [rbp+20h]

  v50 = a4;
  v18 = a15;
  v19 = Acl;
  v20 = a4;
  LOBYTE(a4) = 0;
  v44 = 0;
  v46[0] = 0;
  v21 = 0;
  v22 = *a15;
  v23 = 2;
  *(_QWORD *)&v46[1] = 0LL;
  v25 = a2;
  AceCount = 0;
  v26 = 0;
  v49 = 0;
  v41 = 0;
  v42 = 1;
  v27 = 0;
  v45 = 2;
  if ( v22 - 8 <= 0xFFF4 )
  {
    memset(Acl, 0, v22);
    v26 = v44;
    v25 = a2;
    v20 = v50;
    LOBYTE(a4) = 0;
    v19->AclSize = v22 & 0xFFFC;
    *(_WORD *)&v19->AclRevision = 2;
    *(_DWORD *)&v19->AceCount = 0;
  }
  v28 = a5;
  a17->Header.AceType = 0;
  v29 = a18;
  v30 = v28 != 0 ? 0x400 : 0;
  *a18 = v30;
  if ( (a3 & 8) != 0 )
    goto LABEL_20;
  if ( (a3 & 0x1000) != 0 )
  {
    LOBYTE(a4) = 1;
    v41 = 1;
    *v29 = v30 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
    goto LABEL_20;
  if ( v25 )
  {
    if ( *v25 >= 2u )
      v45 = *v25;
    v42 = 0;
    if ( v28 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        LOBYTE(a4) = 16;
      }
      else
      {
        v23 = 1;
        LOBYTE(a4) = 0;
      }
      v31 = 1;
    }
    else
    {
      LOBYTE(a4) = 0;
      v31 = 0;
    }
    result = RtlpCopyAces(v25, a11, v23, a4, v31, a7, a8, a9, a10, v20, 0, a12, &v44, v19);
    v26 = v44;
    v21 = v44;
    if ( (_DWORD)result == -1073741789 )
    {
      v49 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    if ( a6 && v44 )
    {
      AceCount = v19->AceCount;
      if ( !RtlFirstFreeAce(v19, (PACE *)&v46[1]) )
        return 3221225597LL;
      v26 = v44;
    }
    v25 = a2;
    LOBYTE(a4) = v41;
  }
  else if ( v28 )
  {
    v33 = a12;
    if ( a12 == 1 )
    {
      if ( (a3 & 0x1004) == 4 )
        return 3221225591LL;
      goto LABEL_46;
    }
    goto LABEL_19;
  }
  v33 = a12;
  if ( a12 == 1 )
    goto LABEL_46;
LABEL_19:
  if ( v33 == 2 )
  {
    if ( !v26 && !(_BYTE)a4 )
    {
      if ( v25 && !*((_WORD *)v25 + 2) )
      {
        v34 = a17;
        a17->Header.AceType = 1;
        goto LABEL_21;
      }
      goto LABEL_20;
    }
LABEL_46:
    v34 = a17;
    a17->Header.AceType = 1;
    goto LABEL_21;
  }
LABEL_20:
  v34 = a17;
LABEL_21:
  if ( (v28 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v28 || (_BYTE)a4) || !a1 )
  {
    v35 = v44;
    v36 = v45;
LABEL_27:
    v37 = (unsigned int)(v27 + v21);
    if ( !(_DWORD)v37 )
    {
      if ( !v34->Header.AceType )
      {
        *v18 = 0;
        return 2147483659LL;
      }
      if ( v42 )
      {
        *v18 = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v37 + 8) <= 0xFFFF )
    {
      *v18 = v27 + v35 + 8;
      if ( v49 )
        return 3221225507LL;
      v19->AclRevision = v36;
      v19->AclSize = v27 + v21 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  v38 = *a1;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  v36 = v45;
  if ( v45 <= v38 )
  {
    v45 = v38;
    v36 = v38;
  }
  result = RtlpGenerateInheritAcl((__int64)a1, v50, v28, a7, a8, a9, a10, a11, a13, a14, a12, v49, v46, v19, &a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v39 = 1;
    v49 = 1;
LABEL_39:
    v35 = v44;
    if ( a6 && v44 && (_BYTE)a5 && !v39 )
    {
      if ( !RtlFirstFreeAce(v19, &a17) )
        return 3221225597LL;
      v40 = (int)a17;
      if ( !a17 )
        v40 = (_DWORD)v19 + v19->AclSize;
      memmove(&v19[1], *(const void **)&v46[1], (unsigned int)(v40 - v46[1]));
      v19->AceCount -= AceCount;
      v21 = 0;
    }
    v27 = v46[0];
    goto LABEL_27;
  }
  if ( (int)result >= 0 )
  {
    v39 = v49;
    goto LABEL_39;
  }
  return result;
}
