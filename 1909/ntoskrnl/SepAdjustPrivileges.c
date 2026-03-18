/*
 * XREFs of SepAdjustPrivileges @ 0x140679C70
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406798B0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14000AF00 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1400E4838 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 */

__int64 __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
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
  __int64 result; // rax
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
  __int16 v43; // [rsp+40h] [rbp-C8h] BYREF
  char v44; // [rsp+42h] [rbp-C6h]
  unsigned int v45; // [rsp+44h] [rbp-C4h]
  __int64 v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  void *Buf1; // [rsp+78h] [rbp-90h]
  _BYTE *v52; // [rsp+88h] [rbp-80h]
  int *v53; // [rsp+90h] [rbp-78h]
  _QWORD v54[54]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v55[54]; // [rsp+248h] [rbp+140h] BYREF

  LOBYTE(v9) = 0;
  v11 = 0;
  v53 = a7;
  v12 = a2;
  v46 = 0LL;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v44 = a3;
  v47 = 0LL;
  Buf1 = 0LL;
  LODWORD(v48) = v9;
  LODWORD(v50) = a4;
  v52 = a9;
  memset(v54, 0, sizeof(v54));
  memset(v55, 0, sizeof(v55));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  result = RtlSidDominates(Buf1, SeHighMandatorySid, (bool *)&v43);
  LODWORD(v49) = result;
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v43 )
    {
      result = RtlSidDominates(Buf1, *(_DWORD **)&SeMediumMandatorySid, (bool *)&v43 + 1);
      LODWORD(v49) = result;
      v14 = result;
      if ( (int)result < 0 )
        return result;
      LODWORD(v48) = HIBYTE(v43) == 0;
    }
    if ( v44 )
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
            v49 = v33;
            v37 = 2 - v36;
            v47 = v33;
            v38 = v34++;
            v39 = 3 * v38;
            *(_QWORD *)((char *)v54 + 4 * v39) = v33;
            *((_DWORD *)&v54[1] + v39) = v37;
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
      v45 = v34;
      v11 = 0;
LABEL_16:
      if ( !v44 && ((unsigned int)v46 < (unsigned int)v50 || v11) )
        v14 = 262;
    }
    else if ( (_DWORD)v50 )
    {
      v16 = v48;
      Buf1 = (void *)(unsigned int)v50;
      while ( 1 )
      {
        v17 = *a5;
        v18 = *(_QWORD *)(a1 + 64);
        if ( _bittest64(&v18, v17) )
          break;
LABEL_14:
        a5 += 3;
        Buf1 = (char *)Buf1 - 1;
        if ( !Buf1 )
        {
          v14 = v49;
          v12 = a2;
          goto LABEL_16;
        }
      }
      LODWORD(v46) = v46 + 1;
      v19 = *(_QWORD *)(a1 + 72);
      v20 = a5[2];
      v47 = *(_QWORD *)a5;
      v21 = v47;
      v22 = ((v19 & (1LL << v21)) != 0 ? 2 : 0) | (((1LL << v21) & *(_QWORD *)(a1 + 80)) != 0);
      if ( (v20 & 4) != 0 )
      {
        v11 = v42;
        if ( a2 )
        {
          *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v47);
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
              *(_QWORD *)(a6 + 4 * v29 + 4) = v47;
              *(_DWORD *)(a6 + 4 * v29 + 12) = v22;
              v19 = *(_QWORD *)(a1 + 72);
            }
            v30 = v45;
            v31 = 3LL * v45;
            *(_QWORD *)((char *)v54 + 4 * v31) = v47;
            *((_DWORD *)&v54[1] + v31) = v22;
            v45 = v30 + 1;
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
        *(_QWORD *)(a6 + 4 * v27 + 4) = v47;
        *(_DWORD *)(a6 + 4 * v27 + 12) = v22;
      }
      v24 = HIDWORD(v46);
      v25 = 3LL * HIDWORD(v46);
      *(_QWORD *)((char *)v55 + 4 * v25) = v47;
      *((_DWORD *)&v55[1] + v25) = v22;
      HIDWORD(v46) = v24 + 1;
      if ( (_BYTE)v43 )
      {
        *(_QWORD *)(a1 + 72) |= 1LL << v21;
LABEL_10:
        v11 = v42;
LABEL_11:
        ++*a8;
        goto LABEL_14;
      }
      if ( HIBYTE(v43) )
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
      v26 = v45;
      *v52 = 1;
      SepAdtTokenRightAdjusted(a1, (char *)v54, v26, (char *)v55, HIDWORD(v46), v14 >= 0);
    }
    if ( a6 )
    {
      if ( *a8 > 1u )
        v23 = 12 * *a8 + 4;
      else
        v23 = 16;
      *v53 = v23;
    }
    return (unsigned int)v14;
  }
  return result;
}
