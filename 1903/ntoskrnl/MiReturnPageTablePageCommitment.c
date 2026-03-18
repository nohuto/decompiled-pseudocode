/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1406058B0
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     MiVadPureReserve @ 0x140052A40 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x140052AF0 (MiVadPageTableChargeLevel.c)
 *     MiVadDeleted @ 0x140053930 (MiVadDeleted.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     RtlAreBitsClearEx @ 0x1401159D0 (RtlAreBitsClearEx.c)
 *     MiBitmapRangeZeroEx @ 0x14011A320 (MiBitmapRangeZeroEx.c)
 *     MiUpdateChargedWsles @ 0x1402E5BF4 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int8 *a7)
{
  unsigned __int64 v7; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // r11
  int v14; // eax
  __int64 v15; // r9
  unsigned __int8 *v16; // r14
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // r13
  int v21; // ecx
  __int64 v22; // rdi
  int v23; // ebp
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // r15
  signed __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v32; // r8
  unsigned __int64 v33; // r9
  char v34; // r8
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  __int64 *v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r14
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  unsigned __int64 v50; // [rsp+30h] [rbp-78h]
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h]
  __int64 v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+58h] [rbp-50h]
  __int64 v56; // [rsp+60h] [rbp-48h]
  unsigned __int64 v58; // [rsp+C8h] [rbp+20h]
  int v59; // [rsp+D8h] [rbp+30h]

  v58 = a4;
  v7 = a4;
  v10 = *(unsigned int *)(a6 + 52);
  LODWORD(v10) = v10 & 0x7FFFFFFF;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFDLL;
  if ( v11 >= 0x7FFFFFFFDLL && v11 != 0x7FFFFFFFELL )
    return result;
  MiVadPageTableChargeLevel(a6);
  v14 = MiVadPureReserve(v13);
  v16 = a7;
  v17 = *(_QWORD *)(v15 + 1296) + 48LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v55 = v17;
  LOBYTE(v21) = 0;
  v22 = (unsigned int)(a1 >> 21);
  v23 = v14;
  v59 = 0;
  result = *a7;
  v25 = v24;
  v26 = (unsigned int)(a2 >> 21);
  v52 = 1023LL;
  v50 = -1LL;
  v49 = 0LL;
  v56 = v24;
  v48 = 0LL;
  do
  {
    v53 = v22;
    v54 = v26;
    if ( (_BYTE)result )
    {
      if ( v7 )
      {
        v32 = v21;
        do
        {
          result = (unsigned __int64)*(unsigned int *)(v7 + 28) >> 9;
          if ( (__int64)(result | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 23)) >> v32 != v22 )
            break;
          v36 = *(unsigned int *)(v7 + 52);
          LODWORD(v36) = v36 & 0x7FFFFFFF;
          v37 = v36 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) << 31);
          if ( v37 < 0x7FFFFFFFDLL || v37 == 0x7FFFFFFFELL )
          {
            result = MiVadDeleted(v7);
            if ( (_DWORD)result == 1 || (result = MiVadPureReserve(v38), !(_DWORD)result) )
            {
              ++v22;
              *v16 = 0;
              break;
            }
          }
          result = *(_QWORD *)v7;
          v44 = v7;
          if ( *(_QWORD *)v7 )
          {
            v7 = *(_QWORD *)v7;
            v58 = result;
            if ( *(_QWORD *)(result + 8) )
            {
              do
              {
                result = *(_QWORD *)(v7 + 8);
                v7 = result;
              }
              while ( *(_QWORD *)(result + 8) );
              v58 = result;
            }
          }
          else
          {
            v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v58 = v7;
            if ( v7 )
            {
              do
              {
                if ( *(_QWORD *)(v7 + 8) == v44 )
                  break;
                v44 = v7;
                v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v7 );
              v58 = v7;
            }
          }
        }
        while ( v7 );
        LOBYTE(v21) = v59;
      }
    }
    else
    {
      ++v22;
    }
    if ( v16[1] )
    {
      v33 = a5;
      if ( a5 )
      {
        v34 = v21;
        do
        {
          result = (unsigned __int64)*(unsigned int *)(v33 + 24) >> 9;
          if ( (__int64)(result | ((unsigned __int64)*(unsigned __int8 *)(v33 + 32) << 23)) >> v34 != v26 )
            break;
          v39 = *(unsigned int *)(v33 + 52);
          LODWORD(v39) = v39 & 0x7FFFFFFF;
          v40 = v39 | ((unsigned __int64)*(unsigned __int8 *)(v33 + 34) << 31);
          if ( v40 < 0x7FFFFFFFDLL || v40 == 0x7FFFFFFFELL )
          {
            result = MiVadDeleted(v33);
            if ( (_DWORD)result == 1 || (result = MiVadPureReserve(v41), !(_DWORD)result) )
            {
              --v26;
              v16[1] = 0;
              break;
            }
          }
          result = *(_QWORD *)(v33 + 8);
          v42 = v33;
          if ( result )
          {
            v43 = *(__int64 **)result;
            v33 = *(_QWORD *)(v33 + 8);
            a5 = result;
            if ( *(_QWORD *)result )
            {
              do
              {
                result = *v43;
                v33 = (unsigned __int64)v43;
                a5 = (unsigned __int64)v43;
                v43 = (__int64 *)result;
              }
              while ( result );
            }
          }
          else
          {
            v33 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            a5 = v33;
            if ( v33 )
            {
              do
              {
                if ( *(_QWORD *)v33 == v42 )
                  break;
                v42 = v33;
                v33 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v33 );
              a5 = v33;
            }
          }
        }
        while ( v33 );
      }
      v18 = v48;
    }
    else
    {
      --v26;
    }
    if ( v22 > v26 )
      break;
    if ( v18 >= v25 && !v23 )
      v19 += v26 - v22 + 1;
    v51 = v22;
    v28 = v17 - 16 * v18;
    v29 = v22;
    do
    {
      if ( v23 )
      {
        if ( v29 == v22 )
        {
          v35 = MiBitmapRangeZeroEx(v28 + 520, v29, &v51);
          v22 = v51;
          if ( v35 == 1 )
          {
            v29 = v51 - 1;
            goto LABEL_21;
          }
        }
        if ( !_bittest64(*(const signed __int64 **)(v28 + 528), v29) )
          goto LABEL_21;
        ++v19;
      }
      _bittestandreset64(*(signed __int64 **)(v28 + 528), v29);
      if ( !(unsigned int)MiCreateSystemWsles() && (v29 == v26 || (v29 & 7) == 7 || v23) )
      {
        v45 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( RtlAreBitsClearEx(v28 + 520, v29 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL) == 1
          && ((*(_DWORD *)(a3 + 1788) & 1) != 0 || v45 != (v52 & 0xFFFFFFFFFFFFFFF8uLL)) )
        {
          if ( v48 )
          {
            ++v20;
            goto LABEL_21;
          }
          if ( v50 != -1LL )
          {
            if ( v50 + 8 * v49 == v45 )
            {
              ++v49;
              goto LABEL_21;
            }
            PsGetHostSilo();
            v20 += v46;
          }
          v50 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = 1LL;
        }
      }
LABEL_21:
      ++v29;
    }
    while ( v29 <= v26 );
    if ( v49 )
    {
      PsGetHostSilo();
      v20 += v47;
      v50 = -1LL;
      v49 = 0LL;
    }
    v16 = a7;
    v21 = v59 + 9;
    v30 = v53;
    v18 = v48 + 1;
    *a7 >>= 1;
    v31 = v54;
    a7[1] >>= 1;
    v52 >>= 9;
    result = *a7;
    v7 = v58;
    v17 = v55;
    v25 = v56;
    v22 = v30 >> 9;
    v26 = v31 >> 9;
    v59 = v21;
    ++v48;
  }
  while ( v21 < 27 );
  v27 = a3;
  if ( v20 )
    result = (__int64)MiUpdateChargedWsles(a3 + 1280);
  if ( v19 )
    *(_QWORD *)(v17 + 240) -= v19;
  if ( v19 + v20 )
    return MiReturnFullProcessCommitment(v27, v19 + v20);
  return result;
}
