/*
 * XREFs of SepAdjustPrivileges @ 0x140609D70
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406099A0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x140091E20 (SepCopyTokenIntegrity.c)
 *     RtlSidDominates @ 0x1400A9230 (RtlSidDominates.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
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
  __int16 v46; // [rsp+40h] [rbp-C8h] BYREF
  char v47; // [rsp+42h] [rbp-C6h]
  unsigned int v48; // [rsp+44h] [rbp-C4h]
  __int64 v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  void *Buf1; // [rsp+78h] [rbp-90h]
  _BYTE *v55; // [rsp+88h] [rbp-80h]
  int *v56; // [rsp+90h] [rbp-78h]
  _QWORD v57[54]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[54]; // [rsp+248h] [rbp+140h] BYREF

  LOBYTE(v9) = 0;
  v11 = 0;
  v56 = a7;
  v12 = a2;
  v49 = 0LL;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v47 = a3;
  v50 = 0LL;
  LODWORD(v51) = v9;
  LODWORD(v53) = a4;
  v55 = a9;
  memset(v57, 0, sizeof(v57));
  memset(v58, 0, sizeof(v58));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity();
  result = RtlSidDominates(Buf1, SeHighMandatorySid, (bool *)&v46);
  LODWORD(v52) = result;
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v46 )
    {
      result = RtlSidDominates(Buf1, *(_DWORD **)&SeMediumMandatorySid, (bool *)&v46 + 1);
      LODWORD(v52) = result;
      v14 = result;
      if ( (int)result < 0 )
        return result;
      LODWORD(v51) = HIBYTE(v46) == 0;
    }
    if ( v47 )
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
            v52 = v36;
            v40 = 2 - v39;
            v50 = v36;
            v41 = v37++;
            v42 = 3 * v41;
            *(_QWORD *)((char *)v57 + 4 * v42) = v36;
            *((_DWORD *)&v57[1] + v42) = v40;
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
      v48 = v37;
      v11 = 0;
LABEL_16:
      if ( !v47 && ((unsigned int)v49 < (unsigned int)v53 || v11) )
        v14 = 262;
    }
    else if ( (_DWORD)v53 )
    {
      v16 = v51;
      Buf1 = (void *)(unsigned int)v53;
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
          v14 = v52;
          v12 = a2;
          goto LABEL_16;
        }
      }
      LODWORD(v49) = v49 + 1;
      v19 = *(_QWORD *)(a1 + 72);
      v20 = a5[2];
      v21 = 1LL << *(_QWORD *)a5;
      v22 = (v21 & *(_QWORD *)(a1 + 80)) == 0;
      v50 = *(_QWORD *)a5;
      v23 = v50;
      v24 = ((v21 & v19) != 0 ? 2 : 0) | !v22;
      if ( (v20 & 4) != 0 )
      {
        v11 = v45;
        if ( a2 )
        {
          v29 = v18 & ~(1LL << v50);
          *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v50);
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
              *(_QWORD *)(a6 + 4 * v32 + 4) = v50;
              *(_DWORD *)(a6 + 4 * v32 + 12) = v24;
              v19 = *(_QWORD *)(a1 + 72);
            }
            v33 = v48;
            v34 = 3LL * v48;
            *(_QWORD *)((char *)v57 + 4 * v34) = v50;
            *((_DWORD *)&v57[1] + v34) = v24;
            v48 = v33 + 1;
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
        *(_QWORD *)(a6 + 4 * v30 + 4) = v50;
        *(_DWORD *)(a6 + 4 * v30 + 12) = v24;
      }
      v26 = HIDWORD(v49);
      v27 = 3LL * HIDWORD(v49);
      *(_QWORD *)((char *)v58 + 4 * v27) = v50;
      *((_DWORD *)&v58[1] + v27) = v24;
      HIDWORD(v49) = v26 + 1;
      if ( (_BYTE)v46 )
      {
        *(_QWORD *)(a1 + 72) |= 1LL << v23;
LABEL_10:
        v11 = v45;
LABEL_11:
        ++*a8;
        goto LABEL_14;
      }
      if ( HIBYTE(v46) )
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
      v28 = v48;
      *v55 = 1;
      SepAdtTokenRightAdjusted(a1, (unsigned int)v57, v28, (unsigned int)v58, HIDWORD(v49), v14 >= 0);
    }
    if ( a6 )
    {
      if ( *a8 > 1u )
        v25 = 12 * *a8 + 4;
      else
        v25 = 16;
      *v56 = v25;
    }
    return (unsigned int)v14;
  }
  return result;
}
