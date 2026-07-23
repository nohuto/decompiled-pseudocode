/*
 * XREFs of sub_1800413B0 @ 0x1800413B0
 * Callers:
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004308C @ 0x18004308C (sub_18004308C.c)
 *     sub_180044584 @ 0x180044584 (sub_180044584.c)
 *     sub_18004F5D0 @ 0x18004F5D0 (sub_18004F5D0.c)
 *     sub_180071D04 @ 0x180071D04 (sub_180071D04.c)
 *     sub_18007BDBC @ 0x18007BDBC (sub_18007BDBC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_1800413B0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebp
  int v5; // r11d
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  signed __int64 v8; // r15
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  unsigned int v11; // eax
  char v12; // cl
  unsigned __int64 v13; // r10
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r8
  char v18; // cl
  unsigned int v19; // r11d
  __int64 v20; // r8
  __int64 v21; // r10
  char *v22; // r9
  __int64 v23; // rbx
  char *v24; // rcx
  int v25; // edx
  signed __int16 v26; // ax
  int v27; // r14d
  int v28; // esi
  unsigned __int16 v29; // dx
  int v31; // r13d
  int v32; // r12d
  __int16 *v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rsi
  signed __int64 v38; // rbx
  _RTL_SRWLOCK *v39; // r12
  int v40; // r10d
  char v41; // al
  signed __int64 v42; // rcx
  _QWORD *v43; // r8
  __int64 *v44; // rdx
  _QWORD *v45; // r9
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 *v48; // rax
  PVOID v49; // rbx
  unsigned int v50; // r14d
  unsigned int v51; // esi
  int v52; // ebx
  int v53; // eax
  char v54; // bp
  int v55; // eax
  unsigned int v56; // r14d
  char v57; // cl
  unsigned int v58; // esi
  unsigned int v59; // ebx
  __int64 v60; // rax
  bool v61; // zf
  signed __int64 v62; // rax
  int v63; // [rsp+30h] [rbp-58h]
  int v64[21]; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v66; // [rsp+98h] [rbp+10h]
  unsigned int v67; // [rsp+A0h] [rbp+18h] BYREF
  int v68; // [rsp+A8h] [rbp+20h]

  v68 = a4;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 0LL;
  v66 = qword_180163548 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  if ( !a3 )
    goto LABEL_16;
  v9 = a3 - HIWORD(v66) - a2;
  v10 = *(_DWORD **)(a1 + 8LL * byte_180120E60[(unsigned __int64)((unsigned int)(unsigned __int16)v66 + 15) >> 4] + 128);
  v11 = v10[18];
  v12 = *((_BYTE *)v10 + 76);
  if ( v11 )
  {
    v13 = (v9 * (unsigned __int64)v11) >> v12;
    v14 = v9 - v13 * (unsigned __int16)v66;
  }
  else
  {
    LODWORD(v13) = v9 >> v12;
    v14 = ((1 << v12) - 1) & v9;
  }
  if ( !v14 )
  {
    v15 = *(_WORD *)(v6 + 36);
    v16 = 2 * v13;
    if ( v15 >= (unsigned __int16)v13 )
      v15 = v13;
    *(_WORD *)(v6 + 36) = v15;
    v17 = v6 + 8 * ((unsigned __int64)v16 >> 6);
    _m_prefetchw((const void *)(v17 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v17 + 48), ~(3LL << (v16 & 0x3F))) >> (v16 & 0x3F)) & 1) == 0 )
    {
      sub_18010A694(17, *(_QWORD *)v7, v5, v6, (unsigned int)v13, 0LL);
      return v4;
    }
    if ( *(_BYTE *)(v6 + 45) > 1u )
    {
      v18 = *(_BYTE *)(v6 + 44);
      v19 = v5 - v6;
      v20 = v19 >> v18;
      v21 = 2 * v20;
      v22 = (char *)(2 * v20 + v6 + *(unsigned __int16 *)(v6 + 46));
      _m_prefetchw(v22);
      LODWORD(v23) = -1;
      v24 = &v22[2 * (((v19 + (unsigned __int16)v66 - 1) >> v18) - (unsigned int)v20) + 2];
      v25 = 0;
      if ( v22 < v24 )
      {
        do
        {
          v26 = _InterlockedDecrement16((volatile signed __int16 *)v22);
          if ( v26 )
          {
            if ( v26 == -1 )
              --v25;
          }
          else
          {
            ++v25;
            if ( (_DWORD)v23 == -1 )
              v23 = v21 >> 1;
          }
          v22 += 2;
          v21 += 2LL;
        }
        while ( v22 < v24 );
        if ( v25 && (dword_180163534 & 0x20) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(__int16 *)(v7 + 58) + v7 + 24),
            (v25 << *(_BYTE *)(v6 + 44)) / 4096);
        if ( (_DWORD)v23 != -1 )
        {
          v31 = 0;
          if ( (int)v23 < 0 )
          {
            LODWORD(v23) = 1;
            v32 = 1;
          }
          else
          {
            v32 = 0;
          }
          if ( (dword_180163534 & 0x20) != 0 && !v32 )
          {
            v33 = *(__int16 **)a1;
            if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
            {
              v34 = v33[11];
              v35 = *(_QWORD *)((char *)v33 + v34 + 8) >> *((_BYTE *)v33 + 11);
              if ( v35 <= 8 )
                v35 = 8LL;
              v36 = *(_QWORD *)((char *)v33 + v34 + 8) >> *((_BYTE *)v33 + 12);
              if ( v36 <= 8 )
                v36 = 8LL;
              v37 = *(_QWORD *)((char *)v33 + v34 + 16) + *(_QWORD *)((char *)v33 + v34 + 24);
              if ( (v37 <= v35 || (int)sub_180044584() >= 0) && v37 <= v36 )
                goto LABEL_40;
            }
          }
          if ( (unsigned int)v23 >= *(unsigned __int8 *)(v6 + 45) )
            goto LABEL_40;
          v54 = v68;
          do
          {
            v55 = sub_18004308C(v6, (unsigned int)v23, &v67);
            v63 = v55;
            if ( v55 == -1 )
              break;
            v56 = v67;
            if ( v67 < 2 )
            {
              if ( !v32 )
                break;
              LODWORD(v23) = v67 + v55;
            }
            else if ( v31 )
            {
              v57 = *(_BYTE *)(v6 + 44);
              v58 = v55 << v57;
              v59 = v67 << v57;
              ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 32)))(
                *(_QWORD *)a1,
                v6 + (unsigned int)(v55 << v57),
                v67 << v57);
              sub_18004F5D0(a1, v6, v58, v59);
              if ( !v32 )
                break;
              LODWORD(v23) = v56 + v63;
            }
            else
            {
              LODWORD(v23) = v55;
              if ( (v54 & 1) == 0 )
                RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
              v31 = 2;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
            }
          }
          while ( (unsigned int)v23 < *(unsigned __int8 *)(v6 + 45) );
          v4 = 0;
          v8 = 0LL;
          if ( v31 )
          {
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 24));
            v7 = a1;
            if ( (v68 & 1) == 0 )
              RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
          }
          else
          {
LABEL_40:
            v7 = a1;
          }
        }
      }
    }
LABEL_16:
    v27 = *(unsigned __int16 *)(v6 + 34);
    LOWORD(v28) = *(_WORD *)(v6 + 32);
    do
    {
      if ( !v8 && (!(_WORD)v28 || (unsigned __int16)v28 == v27 - 1) )
      {
        v38 = *(_QWORD *)(v6 + 16);
        do
        {
          while ( 1 )
          {
            while ( !v38 )
            {
              v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 3LL, 0LL);
              if ( !v38 )
              {
                v8 = 0LL;
                goto LABEL_23;
              }
            }
            if ( (v38 & 1) != 0 )
              break;
            v39 = (_RTL_SRWLOCK *)(v38 + 16);
            v8 = v38;
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v38 + 16));
            v38 = *(_QWORD *)(v6 + 16);
            if ( v8 == v38 )
              goto LABEL_48;
            RtlReleaseSRWLockExclusive(v39);
          }
          v62 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v6 + 16),
                  v38 & 1 | (v38 + 2) & 0xFFFFFFFFFFFFFFFEuLL,
                  v38);
          v61 = v38 == v62;
          v38 = v62;
        }
        while ( !v61 );
        v8 = 0LL;
LABEL_48:
        if ( !v8 )
          goto LABEL_23;
      }
      v29 = v28 + 1;
      v28 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 32), v28 + 1, v28);
    }
    while ( v29 != v28 + 1 );
    if ( (_WORD)v28 )
    {
      if ( (unsigned __int16)v28 != v27 - 1 )
      {
LABEL_23:
        v4 = 1;
        if ( v8 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
        return v4;
      }
      v40 = 2;
    }
    else
    {
      v40 = 0;
    }
    v41 = *(_BYTE *)(v6 + 38);
    switch ( v41 )
    {
      case 1:
        v42 = v8 + 40;
        break;
      case 0:
        v42 = v8 + 24;
        v43 = (_QWORD *)(v8 + 8);
LABEL_54:
        if ( v40 )
        {
          v44 = 0LL;
          v45 = 0LL;
        }
        else
        {
          v44 = (__int64 *)(v8 + 24);
          v45 = (_QWORD *)(v8 + 8);
        }
        if ( v42 )
        {
          v46 = *(_QWORD *)v6;
          if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
            goto LABEL_120;
          v47 = *(_QWORD **)(v6 + 8);
          if ( *v47 != v6 )
            goto LABEL_120;
          *v47 = v46;
          *(_QWORD *)(v46 + 8) = v47;
          if ( v43 )
            --*v43;
        }
        *(_BYTE *)(v6 + 38) = v40;
        if ( v44 )
        {
          v48 = (__int64 *)v44[1];
          if ( (__int64 *)*v48 != v44 )
            goto LABEL_120;
          *(_QWORD *)v6 = v44;
          *(_QWORD *)(v6 + 8) = v48;
          *v48 = v6;
          v44[1] = v6;
          if ( v45 )
            ++*v45;
          v6 = 0LL;
        }
        if ( (*(_BYTE *)v8 & 1) != 0 || *(_QWORD *)(v8 + 8) <= 8uLL )
        {
LABEL_68:
          if ( v6 && *(_BYTE *)(v6 + 38) == 2 )
            *(_QWORD *)(v6 + 16) = 0LL;
          goto LABEL_69;
        }
        v6 = *v44;
        if ( *(__int64 **)(*v44 + 8) == v44 )
        {
          v60 = *(_QWORD *)v6;
          if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
          {
            *v44 = v60;
            *(_QWORD *)(v60 + 8) = v44;
            --*v45;
            *(_BYTE *)(v6 + 38) = 2;
            goto LABEL_68;
          }
        }
LABEL_120:
        __fastfail(3u);
      case 2:
        v42 = 0LL;
        break;
      default:
LABEL_69:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 16));
        v8 = 0LL;
        if ( v6 )
        {
          v49 = *(PVOID *)(v7
                         + 8LL * byte_180120E60[(unsigned __int64)((unsigned int)(unsigned __int16)v66 + 15) >> 4]
                         + 128);
          if ( *(_WORD *)(v6 + 32) != *(_WORD *)(v6 + 34) )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v49 + 2);
            sub_18007BDBC(v6, v49);
            if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
              *(_QWORD *)(v6 + 16) = 0LL;
            else
              v6 = sub_180071D04(v49, v6, 0LL);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v49 + 2);
          }
          if ( v6 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)v49 + 8);
            v50 = v68 & 1;
            _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 7, -*(__int16 *)(v6 + 34));
            v51 = *(unsigned __int8 *)(v6 + 45);
            v52 = 0;
            if ( *(_BYTE *)(v6 + 45) )
            {
              do
              {
                v53 = sub_18004308C(v6, v4, v64);
                if ( v53 == -1 )
                  break;
                v52 += v64[0];
                v4 = v64[0] + v53;
              }
              while ( v64[0] + v53 < v51 );
              if ( v52 && (dword_180163534 & 0x20) != 0 )
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(*(__int16 *)(v7 + 58) + v7 + 24),
                  -(__int64)((unsigned __int64)(unsigned int)(v52 << *(_BYTE *)(v6 + 44)) >> 12));
            }
            ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(v7 ^ qword_180163540 ^ *(_QWORD *)(v7 + 16)))(
              *(_QWORD *)v7,
              v6,
              *(unsigned __int8 *)(v6 + 45) << *(_BYTE *)(v6 + 44),
              v50);
          }
        }
        goto LABEL_23;
    }
    v43 = 0LL;
    goto LABEL_54;
  }
  return v4;
}
