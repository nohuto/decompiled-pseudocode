/*
 * XREFs of SepAdjustPrivileges @ 0x14060AD70
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x14060A9A0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x14060B2D8 (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        BOOLEAN a3,
        int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r14d
  int v11; // r12d
  char v12; // r15
  NTSTATUS result; // eax
  int v14; // esi
  char v16; // si
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // r12d
  __int64 v21; // rdx
  bool v22; // zf
  char v23; // r11
  int v24; // r10d
  int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rax
  signed int v36; // edx
  unsigned int v37; // r12d
  __int64 v38; // r8
  int v39; // r9d
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v45; // [rsp+3Ch] [rbp-CCh]
  BOOLEAN Dominates[4]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-C4h]
  __int64 v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  __int64 v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  PSID Sid1; // [rsp+78h] [rbp-90h]
  _BYTE *v54; // [rsp+88h] [rbp-80h]
  int *v55; // [rsp+90h] [rbp-78h]
  _QWORD v56[54]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v57[54]; // [rsp+248h] [rbp+140h] BYREF

  LOBYTE(v9) = 0;
  v11 = 0;
  v55 = a7;
  v12 = a2;
  v48 = 0LL;
  v45 = 0;
  Dominates[0] = 0;
  Dominates[1] = 0;
  v47 = 0;
  Dominates[2] = a3;
  v49 = 0LL;
  LODWORD(v50) = v9;
  LODWORD(v52) = a4;
  v54 = a9;
  memset(v56, 0, sizeof(v56));
  memset(v57, 0, sizeof(v57));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity();
  result = RtlSidDominates(Sid1, SeHighMandatorySid, Dominates);
  LODWORD(v51) = result;
  v14 = result;
  if ( result >= 0 )
  {
    if ( !Dominates[0] )
    {
      result = RtlSidDominates(Sid1, SeMediumMandatorySid, &Dominates[1]);
      LODWORD(v51) = result;
      v14 = result;
      if ( result < 0 )
        return result;
      LODWORD(v50) = Dominates[1] == 0;
    }
    if ( Dominates[2] )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = *(_QWORD *)(a1 + 72);
        if ( (v38 & (1LL << v36)) != 0 )
        {
          if ( v12 )
          {
            v39 = -(((1LL << v36) & *(_QWORD *)(a1 + 80)) != 0);
            v51 = v36;
            v40 = 2 - v39;
            v49 = v36;
            v41 = v37++;
            v42 = 3 * v41;
            *(_QWORD *)((char *)v56 + 4 * v42) = v36;
            *((_DWORD *)&v56[1] + v42) = v40;
            if ( a6 )
            {
              v43 = 3LL * (unsigned int)*a8;
              *(_QWORD *)(a6 + 4 * v43 + 4) = v36;
              *(_DWORD *)(a6 + 4 * v43 + 12) = v40;
              v38 = *(_QWORD *)(a1 + 72);
            }
            _bittestandreset64(&v38, (unsigned int)v36);
            *(_QWORD *)(a1 + 72) = v38;
          }
          ++*a8;
        }
        ++v36;
      }
      while ( (unsigned int)v36 <= 0x24 );
      v47 = v37;
      v11 = 0;
LABEL_16:
      if ( !Dominates[2] && ((unsigned int)v48 < (unsigned int)v52 || v11) )
        v14 = 262;
    }
    else if ( (_DWORD)v52 )
    {
      v16 = v50;
      Sid1 = (PSID)(unsigned int)v52;
      while ( 1 )
      {
        v17 = *a5;
        v18 = *(_QWORD *)(a1 + 64);
        if ( _bittest64(&v18, v17) )
          break;
LABEL_14:
        a5 += 3;
        Sid1 = (char *)Sid1 - 1;
        if ( !Sid1 )
        {
          v14 = v51;
          v12 = a2;
          goto LABEL_16;
        }
      }
      LODWORD(v48) = v48 + 1;
      v19 = *(_QWORD *)(a1 + 72);
      v20 = a5[2];
      v21 = 1LL << *(_QWORD *)a5;
      v22 = (v21 & *(_QWORD *)(a1 + 80)) == 0;
      v49 = *(_QWORD *)a5;
      v23 = v49;
      v24 = ((v21 & v19) != 0 ? 2 : 0) | !v22;
      if ( (v20 & 4) != 0 )
      {
        v11 = v45;
        if ( a2 )
        {
          v29 = v18 & ~(1LL << v49);
          *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v49);
          *(_DWORD *)(a1 + 200) |= 0x800u;
          *(_QWORD *)(a1 + 64) = v29;
        }
        goto LABEL_14;
      }
      if ( _bittest64(&v19, (unsigned int)v17) || (v20 & 2) == 0 )
      {
        if ( (_bittest64(&v19, (unsigned int)v17) & ((v20 & 2) == 0)) != 0 )
        {
          if ( a2 )
          {
            if ( a6 )
            {
              v32 = 3LL * (unsigned int)*a8;
              *(_QWORD *)(a6 + 4 * v32 + 4) = v49;
              *(_DWORD *)(a6 + 4 * v32 + 12) = v24;
              v19 = *(_QWORD *)(a1 + 72);
            }
            v33 = v47;
            v34 = 3LL * v47;
            *(_QWORD *)((char *)v56 + 4 * v34) = v49;
            *((_DWORD *)&v56[1] + v34) = v24;
            v47 = v33 + 1;
            *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v23);
          }
          ++*a8;
        }
        v11 = v45;
        goto LABEL_14;
      }
      if ( !a2 )
        goto LABEL_10;
      if ( a6 )
      {
        v30 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v30 + 4) = v49;
        *(_DWORD *)(a6 + 4 * v30 + 12) = v24;
      }
      v26 = HIDWORD(v48);
      v27 = 3LL * HIDWORD(v48);
      *(_QWORD *)((char *)v57 + 4 * v27) = v49;
      *((_DWORD *)&v57[1] + v27) = v24;
      HIDWORD(v48) = v26 + 1;
      if ( Dominates[0] )
      {
        *(_QWORD *)(a1 + 72) |= 1LL << v23;
LABEL_10:
        v11 = v45;
LABEL_11:
        ++*a8;
        goto LABEL_14;
      }
      if ( Dominates[1] )
      {
        v31 = 0x1120160684LL;
        v11 = v45;
        if ( !_bittest64(&v31, *a5) )
          goto LABEL_39;
      }
      else
      {
        if ( !v16 )
          goto LABEL_10;
        v11 = v45;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          v35 = 0x200800000LL;
        else
          v35 = 0x202800000LL;
        if ( ((1LL << *a5) & v35) != 0 )
        {
LABEL_39:
          *(_QWORD *)(a1 + 72) |= 1LL << v23;
          goto LABEL_11;
        }
      }
      v45 = ++v11;
      goto LABEL_11;
    }
    if ( *a8 && v12 )
    {
      v28 = v47;
      *v54 = 1;
      SepAdtTokenRightAdjusted(a1, (unsigned int)v56, v28, (unsigned int)v57, HIDWORD(v48), v14 >= 0);
    }
    if ( a6 )
    {
      if ( *a8 > 1u )
        v25 = 12 * *a8 + 4;
      else
        v25 = 16;
      *v55 = v25;
    }
    return v14;
  }
  return result;
}
