/*
 * XREFs of RtlpWalkHeap @ 0x1800F15A0
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180050FEC (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800F07F4 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlpLogHeapWalkEvent @ 0x180103CBC (RtlpLogHeapWalkEvent.c)
 *     RtlDebugWalkHeap @ 0x180106118 (RtlDebugWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x180107CFC (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180108340 (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // r14
  _QWORD *v7; // rcx
  __int16 v8; // bp
  __int64 v9; // rdx
  __int16 v10; // ax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int16 v25; // cx
  unsigned __int8 v26; // al
  __int64 v27; // rax
  int v28; // eax
  unsigned __int16 v29; // ax
  int v30; // eax
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // cl
  int v40; // edx
  int v41; // eax
  unsigned __int16 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int16 v45; // ax
  int v46; // eax
  char v47; // cl
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int16 v50; // ax
  int v51; // eax
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 v54; // rcx
  __int16 v55; // ax
  int v56; // eax
  unsigned __int16 v57; // cx
  unsigned int v58; // eax
  unsigned int v59; // eax
  __int64 ExtraStuffPointerUnsafe; // rax
  __int16 v61; // ax
  unsigned int v62; // eax
  unsigned int v63; // eax
  int v64; // eax
  unsigned __int16 v65; // ax
  __int64 v66; // rcx
  int v67; // [rsp+28h] [rbp-40h]
  int v68; // [rsp+38h] [rbp-30h]
  int v69; // [rsp+48h] [rbp-20h]
  int v70; // [rsp+48h] [rbp-20h]
  int v71; // [rsp+48h] [rbp-20h]
  int v72; // [rsp+48h] [rbp-20h]
  int v73; // [rsp+48h] [rbp-20h]
  int v74; // [rsp+48h] [rbp-20h]
  int v75; // [rsp+48h] [rbp-20h]
  unsigned int v76; // [rsp+70h] [rbp+8h] BYREF

  v3 = (char)a3;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18015FA08)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v76 = -1073741811;
    goto LABEL_192;
  }
  v7 = *(_QWORD **)a2;
  v8 = 4096;
  v76 = 0;
  if ( !v7 )
  {
    v9 = a1;
    goto LABEL_65;
  }
  if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
    goto LABEL_29;
  v10 = *(_WORD *)(a2 + 18) & 2;
  if ( !v10 || (*(_BYTE *)(a1 + 418) != 2 ? (v11 = 0LL) : (v11 = *(_QWORD **)(a1 + 408)), v7 != v11) )
  {
    if ( v3 && v10 )
    {
      v12 = v7[8];
      goto LABEL_84;
    }
    v12 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
    if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
    {
      v13 = *(_QWORD **)(a1 + 288);
      a3 = v7 - 6;
      while ( v13 != (_QWORD *)(a1 + 288) )
      {
        v7 = v13 - 3;
        if ( v13[3] <= (unsigned __int64)a3 && (unsigned __int64)a3 <= v7[9] )
          goto LABEL_24;
        v13 = (_QWORD *)*v13;
      }
      v7 = 0LL;
    }
LABEL_24:
    if ( v3 && v12 < v7[9] )
      goto LABEL_84;
    v14 = v7[3];
    if ( v14 != a1 + 288 )
      goto LABEL_63;
    if ( *(_BYTE *)(a1 + 418) == 2 )
    {
      v9 = *(_QWORD *)(a1 + 408);
      goto LABEL_65;
    }
  }
LABEL_64:
  v9 = 0LL;
LABEL_65:
  v12 = 0LL;
  if ( v9 )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v27 = *(_QWORD *)(a1 + 408);
    else
      v27 = 0LL;
    if ( v9 == v27 )
    {
      RtlpWalkLowFragHeapSegment(a1, a2, &v76, 2LL);
      goto LABEL_192;
    }
    *(_QWORD *)a2 = v9;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v28 = *(_DWORD *)(v9 + 8);
      LOWORD(v69) = v28;
      if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
        v69 = *(_DWORD *)(a1 + 136) ^ v28;
      v29 = v69;
    }
    else
    {
      v29 = *(_WORD *)(v9 + 8);
    }
    *(_QWORD *)(a2 + 8) = 16LL * v29;
    *(_DWORD *)(a2 + 16) = 0x20000;
    *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
    v30 = *(_DWORD *)(v9 + 80) << 12;
    *(_DWORD *)(a2 + 28) = v30;
    if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
      *(_DWORD *)(a2 + 28) = v30 + 4096;
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(v9 + 64) + 16 * (((*(_BYTE *)(*(_QWORD *)(v9 + 64) + 10LL) & 1) == 0) + 1LL);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v9 + 72);
    while ( 1 )
    {
LABEL_84:
      if ( !v12 )
        goto LABEL_192;
      v32 = *(_BYTE *)(v12 + 15);
      if ( (v32 & 0x40) != 0 )
        break;
      if ( v32 == 4 )
      {
        v33 = *(unsigned __int8 *)(v12 + 14);
        goto LABEL_87;
      }
      v34 = v12;
LABEL_91:
      *(_WORD *)(a2 + 18) = 1;
      *(_QWORD *)a2 = v34 + 16;
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v35 = *(_QWORD *)(a1 + 408);
      else
        v35 = 0LL;
      if ( !v35 || !(unsigned __int8)RtlpWalkLFHBlock(a1, a2, a3, 2LL) )
      {
        if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
        {
          *(_QWORD *)a2 = v12 + 32;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v64 = *(_DWORD *)(v12 + 8);
            LOWORD(v75) = v64;
            if ( (v64 & *(_DWORD *)(a1 + 124)) != 0 )
              v75 = *(_DWORD *)(a1 + 136) ^ v64;
            v65 = v75;
          }
          else
          {
            v65 = *(_WORD *)(v12 + 8);
          }
          *(_QWORD *)(a2 + 8) = 16LL * v65 - 32;
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
          *(_WORD *)(a2 + 18) = 0;
          *(_BYTE *)(a2 + 16) = 32;
          *(_QWORD *)(a2 + 36) = 32LL;
          goto LABEL_192;
        }
        v36 = *(_BYTE *)(v12 + 15);
        if ( (v36 & 0x40) != 0 )
        {
          v37 = *(_BYTE *)(v12 + 15) & 0x3F;
          goto LABEL_101;
        }
        if ( v36 == 4 )
        {
          v37 = *(unsigned __int8 *)(v12 + 14);
LABEL_101:
          v38 = v12 + 16 * v37;
        }
        else
        {
          v38 = v12;
        }
        *(_QWORD *)a2 = v38 + 16;
        v39 = *(_BYTE *)(v12 + 15);
        if ( v39 == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v52 = *(_DWORD *)(v12 + 8);
            LOWORD(v73) = v52;
            if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
              v73 = *(_DWORD *)(a1 + 136) ^ v52;
            v53 = v73;
          }
          else
          {
            v53 = *(_WORD *)(v12 + 8);
          }
          v54 = *(_QWORD *)(v12 - 16) - v53;
          *(_BYTE *)(a2 + 17) = 64;
          v55 = 16385;
          *(_QWORD *)(a2 + 8) = v54;
          *(_WORD *)(a2 + 18) = 16385;
          if ( *(_DWORD *)(a1 + 124) )
          {
            v56 = *(_DWORD *)(v12 + 8);
            LOWORD(v74) = v56;
            if ( (v56 & *(_DWORD *)(a1 + 124)) != 0 )
              v74 = *(_DWORD *)(a1 + 136) ^ v56;
            v57 = v74;
            v55 = *(_WORD *)(a2 + 18);
          }
          else
          {
            v57 = *(_WORD *)(v12 + 8);
          }
          *(_BYTE *)(a2 + 16) = v57;
          if ( (v55 & 2) == 0 )
            *(_QWORD *)(a2 + 36) = v57;
          v8 = v55;
          goto LABEL_166;
        }
        if ( v39 == 3 )
        {
          *(_QWORD *)a2 = *(_QWORD *)(v12 + 48);
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(v12 + 56);
          *(_DWORD *)(a2 + 16) = 0x10000000;
          *(_QWORD *)(a2 + 36) = 0LL;
LABEL_166:
          if ( *(_DWORD *)(a1 + 124) )
          {
            v58 = *(_DWORD *)(v12 + 8);
            if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
              v58 ^= *(_DWORD *)(a1 + 136);
            v8 = *(_WORD *)(a2 + 18);
            v59 = HIWORD(v58);
          }
          else
          {
            LOBYTE(v59) = *(_BYTE *)(v12 + 10);
          }
          if ( (v59 & 2) != 0 )
          {
            ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v12);
            *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
              v61 = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
            else
              v61 = 0;
            *(_WORD *)(a2 + 32) = v61;
            *(_WORD *)(a2 + 18) |= 0x10u;
            v8 = *(_WORD *)(a2 + 18);
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v12 + 11);
          }
          else
          {
            *(_WORD *)(a2 + 32) = 0;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            v62 = *(_DWORD *)(v12 + 8);
            if ( (v62 & *(_DWORD *)(a1 + 124)) != 0 )
              v62 ^= *(_DWORD *)(a1 + 136);
            v8 = *(_WORD *)(a2 + 18);
            v63 = HIWORD(v62);
          }
          else
          {
            LOBYTE(v63) = *(_BYTE *)(v12 + 10);
          }
          *(_WORD *)(a2 + 18) = v8 | v63 & 0xE0;
          goto LABEL_192;
        }
        if ( v39 != 1 )
        {
          v40 = *(_DWORD *)(a1 + 124);
          if ( v40 )
          {
            v41 = *(_DWORD *)(v12 + 8);
            v40 = *(_DWORD *)(a1 + 124);
            LOWORD(v70) = v41;
            if ( (v40 & v41) != 0 )
              v70 = *(_DWORD *)(a1 + 136) ^ v41;
            v42 = v70;
            v39 = *(_BYTE *)(v12 + 15);
          }
          else
          {
            v42 = *(_WORD *)(v12 + 8);
          }
          if ( v39 == 5 )
          {
            v43 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v39 & 0x40) != 0 )
          {
            v43 = *(unsigned __int16 *)(v12 + 16LL * (v39 & 0x3F) + 12);
          }
          else if ( (v39 & 0x3F) == 0x3F )
          {
            if ( v39 >= 0 )
            {
              if ( v40 )
              {
                v46 = *(_DWORD *)(v12 + 8);
                LOWORD(v71) = v46;
                if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
                  v71 = *(_DWORD *)(a1 + 136) ^ v46;
                v45 = v71;
              }
              else
              {
                v45 = *(_WORD *)(v12 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                v44 = 0LL;
              else
                v44 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
              v45 = *(_WORD *)(v44 + 36);
            }
            v43 = *(_QWORD *)(v12 + 16LL * v45);
          }
          else
          {
            v43 = v39 & 0x3F;
          }
          *(_QWORD *)(a2 + 8) = 16LL * v42 - v43;
          *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
          *(_WORD *)(a2 + 18) = 1;
          v47 = *(_BYTE *)(v12 + 15);
          if ( v47 == 5 )
          {
            v48 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v47 & 0x40) != 0 )
          {
            v48 = *(unsigned __int16 *)(16LL * (v47 & 0x3F) + v12 + 12);
          }
          else if ( (v47 & 0x3F) == 0x3F )
          {
            if ( v47 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v51 = *(_DWORD *)(v12 + 8);
                LOWORD(v72) = v51;
                if ( (v51 & *(_DWORD *)(a1 + 124)) != 0 )
                  v72 = *(_DWORD *)(a1 + 136) ^ v51;
                v50 = v72;
              }
              else
              {
                v50 = *(_WORD *)(v12 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                v49 = 0LL;
              else
                v49 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
              v50 = *(_WORD *)(v49 + 36);
            }
            v48 = *(_QWORD *)(16LL * v50 + v12);
          }
          else
          {
            v48 = *(_BYTE *)(v12 + 15) & 0x3F;
          }
          v8 = *(_WORD *)(a2 + 18);
          *(_BYTE *)(a2 + 16) = v48;
          if ( (v8 & 2) == 0 )
            *(_QWORD *)(a2 + 36) = v48;
          goto LABEL_166;
        }
        *(_WORD *)(a2 + 18) = 1;
        goto LABEL_29;
      }
      if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_192;
LABEL_29:
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v15 = *(_QWORD *)(a1 + 408);
      else
        v15 = 0LL;
      if ( v15 && (unsigned __int8)RtlpWalkLFHBlock(a1, a2, a3, 2LL) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_192;
      v16 = *(_QWORD **)a2;
      if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
      {
        v17 = (unsigned __int64)(v16 - 2);
        _m_prefetchw((const void *)v17);
        if ( *(_BYTE *)(v17 + 15) == 5 )
          v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
        if ( *(_BYTE *)(v17 + 15) == 4 )
        {
          v18 = *(_QWORD *)(v17 - 48);
          v19 = a1 + 272;
          goto LABEL_67;
        }
        v20 = *(_BYTE *)(v17 + 14);
        if ( v20 )
          v21 = (v17 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v20 << 16) + 0x10000;
        else
          v21 = a1;
        if ( !v21 )
        {
LABEL_191:
          v76 = -1073741503;
          goto LABEL_192;
        }
        if ( *(_BYTE *)(v17 + 15) == 3 )
          goto LABEL_61;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v17 + 8);
          LOWORD(v67) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v67 = *(_DWORD *)(a1 + 136) ^ v22;
          LOWORD(v23) = v67;
        }
        else
        {
          LOWORD(v23) = *(_WORD *)(v17 + 8);
        }
        v23 = (unsigned __int16)v23;
LABEL_83:
        v12 = 16 * v23 + v17;
      }
      else
      {
        v17 = (unsigned __int64)(v16 - 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v24 = *(_DWORD *)(v17 + 8);
          LOWORD(v68) = v24;
          if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
            v68 = *(_DWORD *)(a1 + 136) ^ v24;
          v25 = v68;
        }
        else
        {
          v25 = *(_WORD *)(v17 + 8);
        }
        v26 = *(_BYTE *)(v17 + 14);
        if ( v26 )
          v21 = (v17 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v26 << 16) + 0x10000;
        else
          v21 = a1;
        if ( !v21 )
          goto LABEL_191;
        if ( *(_BYTE *)(v17 + 15) != 3 )
        {
          v23 = v25;
          goto LABEL_83;
        }
LABEL_61:
        if ( v17 + *(_QWORD *)(v17 + 56) + 64LL >= *(_QWORD *)(v21 + 72) )
        {
          v14 = *(_QWORD *)(v21 + 24);
          if ( v14 == a1 + 288 )
            goto LABEL_64;
LABEL_63:
          v9 = v14 - 24;
          goto LABEL_65;
        }
        *(_QWORD *)a2 = *(_QWORD *)(v17 + 48);
        v31 = *(_QWORD *)(v17 + 56);
        v12 = 0LL;
        *(_QWORD *)(a2 + 8) = v31;
        *(_DWORD *)(a2 + 16) = 0x10000000;
        *(_QWORD *)(a2 + 36) = 0LL;
      }
    }
    v33 = *(_BYTE *)(v12 + 15) & 0x3F;
LABEL_87:
    v34 = v12 + 16 * v33;
    goto LABEL_91;
  }
  v19 = a1 + 272;
  v18 = *(_QWORD *)(a1 + 272);
LABEL_67:
  if ( v18 != v19 )
  {
    v12 = v18 + 48;
    goto LABEL_84;
  }
  v76 = -2147483622;
LABEL_192:
  if ( RtlGetCurrentServiceSessionId() )
    v66 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v66 = 2147353472LL;
  if ( *(_BYTE *)v66 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v76 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v76;
}
