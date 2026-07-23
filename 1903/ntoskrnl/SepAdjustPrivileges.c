/*
 * XREFs of SepAdjustPrivileges @ 0x140674560
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406741A0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14000AE70 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1400AE2E8 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
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
  char v21; // r10
  int v22; // r11d
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  signed int v33; // edx
  unsigned int v34; // r12d
  __int64 v35; // r8
  int v36; // r9d
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // [rsp+3Ch] [rbp-CCh]
  BOOLEAN Dominates[4]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-C4h]
  __int64 v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  PSID Sid1; // [rsp+78h] [rbp-90h]
  _BYTE *v51; // [rsp+88h] [rbp-80h]
  int *v52; // [rsp+90h] [rbp-78h]
  _QWORD v53[54]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v54[54]; // [rsp+248h] [rbp+140h] BYREF

  LOBYTE(v9) = 0;
  v11 = 0;
  v52 = a7;
  v12 = a2;
  v45 = 0LL;
  v42 = 0;
  Dominates[0] = 0;
  Dominates[1] = 0;
  v44 = 0;
  Dominates[2] = a3;
  v46 = 0LL;
  Sid1 = 0LL;
  LODWORD(v47) = v9;
  LODWORD(v49) = a4;
  v51 = a9;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  result = RtlSidDominates(Sid1, SeHighMandatorySid, Dominates);
  LODWORD(v48) = result;
  v14 = result;
  if ( result >= 0 )
  {
    if ( !Dominates[0] )
    {
      result = RtlSidDominates(Sid1, SeMediumMandatorySid, &Dominates[1]);
      LODWORD(v48) = result;
      v14 = result;
      if ( result < 0 )
        return result;
      LODWORD(v47) = Dominates[1] == 0;
    }
    if ( Dominates[2] )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = *(_QWORD *)(a1 + 72);
        if ( (v35 & (1LL << v33)) != 0 )
        {
          if ( v12 )
          {
            v36 = -(((1LL << v33) & *(_QWORD *)(a1 + 80)) != 0);
            v48 = v33;
            v37 = 2 - v36;
            v46 = v33;
            v38 = v34++;
            v39 = 3 * v38;
            *(_QWORD *)((char *)v53 + 4 * v39) = v33;
            *((_DWORD *)&v53[1] + v39) = v37;
            if ( a6 )
            {
              v40 = 3LL * (unsigned int)*a8;
              *(_QWORD *)(a6 + 4 * v40 + 4) = v33;
              *(_DWORD *)(a6 + 4 * v40 + 12) = v37;
              v35 = *(_QWORD *)(a1 + 72);
            }
            _bittestandreset64(&v35, (unsigned int)v33);
            *(_QWORD *)(a1 + 72) = v35;
          }
          ++*a8;
        }
        ++v33;
      }
      while ( (unsigned int)v33 <= 0x24 );
      v44 = v34;
      v11 = 0;
LABEL_16:
      if ( !Dominates[2] && ((unsigned int)v45 < (unsigned int)v49 || v11) )
        v14 = 262;
    }
    else if ( (_DWORD)v49 )
    {
      v16 = v47;
      Sid1 = (PSID)(unsigned int)v49;
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
          v14 = v48;
          v12 = a2;
          goto LABEL_16;
        }
      }
      LODWORD(v45) = v45 + 1;
      v19 = *(_QWORD *)(a1 + 72);
      v20 = a5[2];
      v46 = *(_QWORD *)a5;
      v21 = v46;
      v22 = ((v19 & (1LL << v21)) != 0 ? 2 : 0) | (((1LL << v21) & *(_QWORD *)(a1 + 80)) != 0);
      if ( (v20 & 4) != 0 )
      {
        v11 = v42;
        if ( a2 )
        {
          *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v46);
          *(_DWORD *)(a1 + 200) |= 0x800u;
          *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v21);
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
              v29 = 3LL * (unsigned int)*a8;
              *(_QWORD *)(a6 + 4 * v29 + 4) = v46;
              *(_DWORD *)(a6 + 4 * v29 + 12) = v22;
              v19 = *(_QWORD *)(a1 + 72);
            }
            v30 = v44;
            v31 = 3LL * v44;
            *(_QWORD *)((char *)v53 + 4 * v31) = v46;
            *((_DWORD *)&v53[1] + v31) = v22;
            v44 = v30 + 1;
            *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v21);
          }
          ++*a8;
        }
        v11 = v42;
        goto LABEL_14;
      }
      if ( !a2 )
        goto LABEL_10;
      if ( a6 )
      {
        v27 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v27 + 4) = v46;
        *(_DWORD *)(a6 + 4 * v27 + 12) = v22;
      }
      v24 = HIDWORD(v45);
      v25 = 3LL * HIDWORD(v45);
      *(_QWORD *)((char *)v54 + 4 * v25) = v46;
      *((_DWORD *)&v54[1] + v25) = v22;
      HIDWORD(v45) = v24 + 1;
      if ( Dominates[0] )
      {
        *(_QWORD *)(a1 + 72) |= 1LL << v21;
LABEL_10:
        v11 = v42;
LABEL_11:
        ++*a8;
        goto LABEL_14;
      }
      if ( Dominates[1] )
      {
        v28 = 0x1120160684LL;
        v11 = v42;
        if ( !_bittest64(&v28, *a5) )
          goto LABEL_39;
      }
      else
      {
        if ( !v16 )
          goto LABEL_10;
        v11 = v42;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          v32 = 0x200800000LL;
        else
          v32 = 0x202800000LL;
        if ( ((1LL << *a5) & v32) != 0 )
        {
LABEL_39:
          *(_QWORD *)(a1 + 72) |= 1LL << v21;
          goto LABEL_11;
        }
      }
      v42 = ++v11;
      goto LABEL_11;
    }
    if ( *a8 && v12 )
    {
      v26 = v44;
      *v51 = 1;
      SepAdtTokenRightAdjusted(a1, (char *)v53, v26, (char *)v54, HIDWORD(v45), v14 >= 0);
    }
    if ( a6 )
    {
      if ( *a8 > 1u )
        v23 = 12 * *a8 + 4;
      else
        v23 = 16;
      *v52 = v23;
    }
    return v14;
  }
  return result;
}
