/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1405ED380
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14000F1D0 (RtlAreBitsClear.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x140070D80 (MiIsVadLarge.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     MiBitmapRangeZero @ 0x1400973B0 (MiBitmapRangeZero.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     MiUpdateChargedWsles @ 0x1402CB87C (MiUpdateChargedWsles.c)
 *     MiGetAweVadPageSize @ 0x140851164 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *i,
        __int64 a6,
        _BYTE *a7)
{
  unsigned __int64 v8; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r11
  int v16; // eax
  unsigned int v17; // r9d
  _BYTE *v18; // rbp
  __int64 v19; // r10
  int v20; // r12d
  unsigned __int64 v21; // rdi
  int v22; // r13d
  unsigned __int64 v23; // rsi
  unsigned int v24; // r11d
  int v25; // r14d
  char v26; // al
  int v27; // ebx
  __int64 v28; // r15
  int v29; // edi
  int v30; // eax
  char v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  char v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD **v40; // rax
  unsigned __int64 v41; // rcx
  __int64 ProcessPartition; // rax
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  _QWORD *v47; // rcx
  unsigned int v48; // r8d
  unsigned int v49; // r9d
  unsigned int v50; // ebp
  int v51; // edx
  int v52; // ecx
  int v53; // [rsp+20h] [rbp-68h] BYREF
  int v54; // [rsp+24h] [rbp-64h]
  unsigned int v55; // [rsp+28h] [rbp-60h]
  unsigned int IsVadLarge; // [rsp+2Ch] [rbp-5Ch]
  int v57; // [rsp+30h] [rbp-58h]
  int v58; // [rsp+34h] [rbp-54h]
  __int64 v59; // [rsp+38h] [rbp-50h]
  __int64 v60; // [rsp+40h] [rbp-48h]
  unsigned __int64 v62; // [rsp+A8h] [rbp+20h]
  unsigned int v63; // [rsp+B8h] [rbp+30h]

  v62 = a4;
  v8 = a4;
  v11 = *(unsigned int *)(a6 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFDLL;
  if ( v12 >= 0x7FFFFFFFDLL && v12 != 0x7FFFFFFFELL )
    return result;
  IsVadLarge = MiIsVadLarge(a6);
  if ( !IsVadLarge && (*(_BYTE *)(v15 + 48) & 7) == 3 )
  {
    if ( (int)MiGetAweVadPageSize(v14, *(_DWORD *)(v15 + 48) & 7, 1LL, IsVadLarge) > 0 )
      v49 = v48;
    IsVadLarge = v49;
  }
  v16 = MiVadPureReserve(v15);
  v18 = a7;
  v19 = *(_QWORD *)(a3 + 1296) + 48LL;
  v20 = 0;
  v21 = a1 >> 21;
  v22 = 0;
  v23 = a2 >> 21;
  v24 = 0;
  v60 = v19;
  v25 = v16;
  v55 = 0;
  v26 = *a7;
  v54 = 1023;
  v63 = -1;
  v59 = 0LL;
  do
  {
    v57 = v21;
    v58 = v23;
    if ( v26 )
    {
      if ( v8 )
      {
        v31 = 9 * v24;
        while ( ((*(_DWORD *)(v8 + 28) >> 9) | (*(unsigned __int8 *)(v8 + 33) << 23)) >> v31 == (_DWORD)v21 )
        {
          v32 = *(unsigned int *)(v8 + 52);
          LODWORD(v32) = v32 & 0x7FFFFFFF;
          v33 = v32 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31);
          if ( (v33 < 0x7FFFFFFFDLL || v33 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v8) == 1 || !(unsigned int)MiVadPureReserve(v34)) )
          {
            *v18 = 0;
            goto LABEL_6;
          }
          v44 = *(_QWORD *)v8;
          v45 = v8;
          if ( *(_QWORD *)v8 )
          {
            v8 = *(_QWORD *)v8;
            v62 = v44;
            v46 = *(_QWORD *)(v44 + 8);
            if ( v46 )
            {
              do
              {
                v62 = v46;
                v46 = *(_QWORD *)(v46 + 8);
              }
              while ( v46 );
              v19 = v60;
              v8 = v62;
            }
          }
          else
          {
            v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v62 = v8;
            if ( v8 )
            {
              do
              {
                if ( *(_QWORD *)(v8 + 8) == v45 )
                  break;
                v45 = v8;
                v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v8 );
              v62 = v8;
            }
          }
          if ( !v8 )
            break;
        }
      }
    }
    else
    {
LABEL_6:
      LODWORD(v21) = v21 + 1;
    }
    if ( v18[1] )
    {
      v35 = (unsigned __int64)i;
      if ( i )
      {
        v36 = 9 * v24;
        while ( ((*(_DWORD *)(v35 + 24) >> 9) | (*(unsigned __int8 *)(v35 + 32) << 23)) >> v36 == (_DWORD)v23 )
        {
          v37 = *(unsigned int *)(v35 + 52);
          LODWORD(v37) = v37 & 0x7FFFFFFF;
          v38 = v37 | ((unsigned __int64)*(unsigned __int8 *)(v35 + 34) << 31);
          if ( (v38 < 0x7FFFFFFFDLL || v38 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v35) == 1 || !(unsigned int)MiVadPureReserve(v39)) )
          {
            v18[1] = 0;
            goto LABEL_8;
          }
          v40 = *(_QWORD ***)(v35 + 8);
          v41 = v35;
          if ( v40 )
          {
            v47 = *v40;
            v35 = *(_QWORD *)(v35 + 8);
            for ( i = v40; v47; v47 = (_QWORD *)*v47 )
            {
              v35 = (unsigned __int64)v47;
              i = v47;
            }
          }
          else
          {
            v35 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            i = (_QWORD *)v35;
            if ( v35 )
            {
              do
              {
                if ( *(_QWORD *)v35 == v41 )
                  break;
                v41 = v35;
                v35 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v35 );
              i = (_QWORD *)v35;
            }
          }
          if ( !v35 )
            break;
        }
      }
    }
    else
    {
LABEL_8:
      LODWORD(v23) = v23 - 1;
    }
    if ( (int)v21 > (int)v23 )
      break;
    if ( (!v17 || v24) && !v25 )
      v20 += v23 - v21 + 1;
    v53 = v21;
    v27 = v21;
    v28 = v19 + 16LL * (2 - v24);
    do
    {
      if ( v25 )
      {
        if ( v27 == (_DWORD)v21 )
        {
          v43 = MiBitmapRangeZero(v28 + 440, v27, &v53);
          LODWORD(v21) = v53;
          if ( v43 == 1 )
          {
            v27 = v53 - 1;
            goto LABEL_23;
          }
        }
        if ( !_bittest(*(const signed __int32 **)(v28 + 448), v27) )
          goto LABEL_23;
        ++v20;
      }
      _bittestandreset(*(signed __int32 **)(v28 + 448), v27);
      if ( !(unsigned int)MiCreateSystemWsles() && (v27 == (_DWORD)v23 || (v27 & 7) == 7 || v25) )
      {
        v50 = v27 & 0xFFFFFFF8;
        if ( RtlAreBitsClear((PRTL_BITMAP)(v28 + 440), v27 & 0xFFFFFFF8, 8u) == 1
          && ((*(_DWORD *)(a3 + 1740) & 1) != 0 || v50 != (v54 & 0xFFFFFFF8)) )
        {
          if ( v55 )
          {
            ++v22;
            goto LABEL_23;
          }
          if ( v63 != -1 )
          {
            if ( v63 + 8 * v59 == v50 )
            {
              ++v59;
              goto LABEL_23;
            }
            PsGetHostSilo();
            v22 += v51;
          }
          v63 = v27 & 0xFFFFFFF8;
          v59 = 1LL;
        }
      }
LABEL_23:
      ++v27;
    }
    while ( v27 <= (int)v23 );
    if ( v59 )
    {
      PsGetHostSilo();
      v22 += v52;
      v63 = -1;
      v59 = 0LL;
    }
    v18 = a7;
    v29 = v57;
    v24 = v55 + 1;
    v30 = v58;
    *a7 >>= 1;
    a7[1] >>= 1;
    v54 >>= 9;
    v17 = IsVadLarge;
    v19 = v60;
    v8 = v62;
    LODWORD(v21) = v29 >> 9;
    LODWORD(v23) = v30 >> 9;
    v26 = *a7;
    v55 = v24;
  }
  while ( v24 < 3 );
  if ( v22 )
    MiUpdateChargedWsles(a3 + 1280);
  if ( v20 )
    *(_DWORD *)(v19 + 180) -= v20;
  result = (unsigned int)(v20 + v22);
  if ( (_DWORD)result )
  {
    ProcessPartition = MiGetProcessPartition(a3);
    MiReturnCommit(ProcessPartition, (unsigned int)(v20 + v22));
    return MiReturnFullProcessCharges(a3, (unsigned int)(v20 + v22));
  }
  return result;
}
