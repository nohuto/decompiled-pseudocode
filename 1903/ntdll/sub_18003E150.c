/*
 * XREFs of sub_18003E150 @ 0x18003E150
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180046108 @ 0x180046108 (sub_180046108.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180049F08 @ 0x180049F08 (sub_180049F08.c)
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 *     sub_18004F5D0 @ 0x18004F5D0 (sub_18004F5D0.c)
 *     sub_180050D98 @ 0x180050D98 (sub_180050D98.c)
 *     sub_180063920 @ 0x180063920 (sub_180063920.c)
 *     sub_180071D04 @ 0x180071D04 (sub_180071D04.c)
 *     sub_180079B64 @ 0x180079B64 (sub_180079B64.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18003E150(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // ebx
  int v8; // r15d
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r10
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  unsigned int v17; // r11d
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  volatile signed __int64 *v23; // r15
  unsigned int v24; // ebp
  unsigned __int64 v25; // r13
  __int64 v26; // rcx
  unsigned int v27; // ebx
  bool v28; // cf
  struct _TEB *v29; // r15
  unsigned __int16 HeapVirtualAffinity_high; // ax
  __int64 v31; // rcx
  unsigned __int16 v32; // bp
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  volatile signed __int64 *v37; // r14
  volatile signed __int64 *v38; // r12
  signed __int64 v39; // r11
  signed __int64 v40; // r10
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // ecx
  bool v44; // zf
  signed __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // ebx
  unsigned int v48; // r14d
  unsigned int v49; // ebp
  char v50; // cl
  __int64 v51; // r8
  __int64 v52; // r12
  signed __int16 *v53; // r15
  int v54; // edx
  int v55; // eax
  signed __int16 *v56; // r13
  signed __int16 v57; // ax
  signed __int16 v58; // tt
  int v59; // edx
  __int64 v60; // r10
  unsigned int v61; // ebx
  __int16 v62; // bx
  __int64 v63; // rsi
  signed __int64 v65; // rsi
  signed __int64 v66; // rax
  unsigned __int64 v67; // rsi
  __int64 v68; // rcx
  volatile signed __int64 *v69; // r13
  __int64 v70; // rax
  unsigned __int8 v71; // bp
  unsigned int v72; // r12d
  unsigned int v73; // ebx
  __int64 v74; // rcx
  struct _TEB *v75; // r13
  unsigned __int16 v76; // ax
  __int64 v77; // rcx
  unsigned __int16 v78; // r12
  __int16 v79; // ax
  __int64 v80; // rax
  unsigned __int64 v81; // rbx
  volatile signed __int64 *v82; // r14
  volatile signed __int64 *v83; // rcx
  signed __int64 v84; // r11
  signed __int64 v85; // r10
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  int v88; // ecx
  signed __int64 v89; // rax
  int v90; // eax
  unsigned int v91; // ebx
  __int64 v92; // r14
  int v93; // r13d
  unsigned int v94; // r13d
  char v95; // cl
  int v96; // r10d
  unsigned __int64 v97; // r12
  signed __int16 *v98; // r12
  signed __int16 *v99; // rbx
  signed __int16 v100; // ax
  signed __int16 v101; // tt
  __int64 v102; // r9
  int v103; // r11d
  unsigned int v104; // ebx
  __int16 v105; // bx
  unsigned __int64 v106; // rdx
  unsigned int v107; // ecx
  unsigned __int64 v108; // rdx
  volatile signed __int64 *v109; // rax
  unsigned int v110; // ecx
  __int64 *v111; // r11
  _QWORD *v112; // r8
  __int64 v113; // rax
  __int64 v114; // r9
  _QWORD *v115; // rcx
  _QWORD *v116; // rcx
  volatile signed __int64 *v117; // rax
  volatile signed __int64 *v118; // rcx
  _QWORD *v119; // rsi
  int v120; // ecx
  __int64 v121; // rcx
  __int64 *v122; // rax
  __int64 *v123; // rcx
  char v124; // cl
  __int64 v125; // rdx
  __int64 v126; // rax
  unsigned int v127; // r15d
  __int64 v128; // rcx
  char v129; // cl
  int v130; // r12d
  __int16 v131; // ax
  __int16 v132; // ax
  unsigned __int64 v133; // rax
  volatile signed __int64 *v134; // rax
  bool v135; // cc
  __int64 v136; // rcx
  unsigned __int64 *v137; // rcx
  unsigned __int64 v138; // rcx
  unsigned int v139; // [rsp+40h] [rbp-A8h]
  unsigned __int16 v140; // [rsp+40h] [rbp-A8h]
  int v141; // [rsp+40h] [rbp-A8h]
  int v142; // [rsp+40h] [rbp-A8h]
  int v143; // [rsp+40h] [rbp-A8h]
  int v144; // [rsp+44h] [rbp-A4h]
  unsigned int v145; // [rsp+44h] [rbp-A4h]
  unsigned int v146; // [rsp+44h] [rbp-A4h]
  char v147; // [rsp+48h] [rbp-A0h] BYREF
  char v148[3]; // [rsp+49h] [rbp-9Fh] BYREF
  unsigned int v149; // [rsp+4Ch] [rbp-9Ch]
  __int64 v150; // [rsp+50h] [rbp-98h]
  unsigned int v151; // [rsp+58h] [rbp-90h]
  unsigned int v152; // [rsp+5Ch] [rbp-8Ch]
  unsigned __int64 v153; // [rsp+60h] [rbp-88h]
  int v154; // [rsp+68h] [rbp-80h]
  __int64 v155; // [rsp+70h] [rbp-78h]
  __int64 v156; // [rsp+78h] [rbp-70h]
  int v157; // [rsp+80h] [rbp-68h] BYREF
  int v158; // [rsp+84h] [rbp-64h] BYREF
  __int64 v159; // [rsp+88h] [rbp-60h]
  int v160; // [rsp+90h] [rbp-58h]
  int v161; // [rsp+94h] [rbp-54h]
  _QWORD *v163; // [rsp+F8h] [rbp+10h]
  unsigned int v164; // [rsp+108h] [rbp+20h]

  v164 = a4;
  v163 = a2;
  v5 = 0LL;
  v6 = a3;
  v7 = ((unsigned int)dword_180163534 >> 2) & 1;
  v154 = 0;
  v8 = 0;
  v156 = 0LL;
  while ( !v7 )
  {
    if ( !v8 )
    {
      v8 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 16), (unsigned __int64)a2, a3, a4);
    }
LABEL_5:
    v10 = (_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 8) )
    {
      v11 = *(_QWORD *)(v6 + 24);
      v12 = v6 + 24;
      v13 = 4096;
      if ( !v7 )
        v13 = 1;
      if ( v11 != v12 )
      {
        while ( 2 )
        {
          LOWORD(v14) = *(_WORD *)(v11 + 32);
          v154 = 0;
          while ( 1 )
          {
            v15 = v13;
            if ( v13 >= (unsigned __int16)v14 )
              v15 = v14;
            if ( (unsigned __int16)v14 <= v15 && v8 == 1 )
              break;
            v16 = v14 - v15;
            v14 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v11 + 32), v14 - v15, v14);
            v17 = v15 + v16;
            if ( v14 == v17 )
            {
              if ( *(_WORD *)(v11 + 32) )
                goto LABEL_15;
              v111 = (__int64 *)v11;
              if ( *(_BYTE *)(v11 + 38) )
              {
                if ( *(_BYTE *)(v11 + 38) == 1 )
                {
                  v12 = v6 + 40;
                  v112 = 0LL;
                }
                else
                {
                  if ( *(_BYTE *)(v11 + 38) != 2 )
                    goto LABEL_15;
                  v12 = 0LL;
                  v112 = 0LL;
                }
              }
              else
              {
                v112 = (_QWORD *)(v6 + 8);
              }
              v113 = v6 + 40;
              if ( v12 )
              {
                v114 = *(_QWORD *)v11;
                if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) == v11 )
                {
                  v115 = *(_QWORD **)(v11 + 8);
                  if ( *v115 == v11 )
                  {
                    *v115 = v114;
                    *(_QWORD *)(v114 + 8) = v115;
                    if ( v112 )
                      --*v112;
                    goto LABEL_129;
                  }
                }
LABEL_229:
                __fastfail(3u);
              }
LABEL_129:
              *(_BYTE *)(v11 + 38) = 1;
              if ( v6 != -40 )
              {
                v116 = *(_QWORD **)(v6 + 48);
                if ( *v116 != v113 )
                  goto LABEL_229;
                *(_QWORD *)v11 = v113;
                v111 = 0LL;
                *(_QWORD *)(v11 + 8) = v116;
                *v116 = v11;
                *(_QWORD *)(v6 + 48) = v11;
              }
              if ( (*(_BYTE *)v6 & 1) == 0 && *v10 > 8uLL )
              {
                v111 = *(__int64 **)v113;
                if ( *(_QWORD *)(*(_QWORD *)v113 + 8LL) != v113 )
                  goto LABEL_229;
                v136 = *v111;
                if ( *(__int64 **)(*v111 + 8) != v111 )
                  goto LABEL_229;
                *(_QWORD *)v113 = v136;
                *(_QWORD *)(v136 + 8) = v113;
                --MEMORY[0];
                *((_BYTE *)v111 + 38) = 2;
              }
              if ( v111 && *((_BYTE *)v111 + 38) == 2 )
                v111[2] = 0LL;
LABEL_15:
              if ( v15 > 1u )
                *(_QWORD *)(v6 + 56) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v15 - 1)) & 0xFFF;
              goto LABEL_17;
            }
            if ( v14 < v17 )
              v154 = 1;
          }
          v11 = *(_QWORD *)v11;
          if ( v11 != v12 )
            continue;
          break;
        }
      }
      v11 = 0LL;
LABEL_17:
      v18 = (volatile signed __int64 *)(v6 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v18);
      else
        RtlReleaseSRWLockShared(v18);
      if ( v11 )
      {
        v21 = *(unsigned __int8 *)(v6 + 1);
        v22 = *(unsigned __int8 *)(v11 + 39);
        v23 = (volatile signed __int64 *)(v11 + 48);
        LOWORD(v151) = *(_WORD *)(v11 + 34);
        v24 = byte_180126A90[v21];
        v25 = 2 * (v22 + (unsigned __int16)v151);
        v159 = v22;
        v26 = 3LL;
        LODWORD(v155) = (unsigned int)v11 >> 12;
        v27 = qword_180163548 ^ *(_DWORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
        v28 = v164 < (unsigned __int16)(qword_180163548 ^ *(_WORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12));
        v152 = v24;
        if ( !v28 )
          v26 = 1LL;
        LODWORD(v150) = v27;
        v149 = v27;
        v153 = v26;
        if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
        {
          LODWORD(v35) = 0;
        }
        else
        {
          v29 = NtCurrentTeb();
          HeapVirtualAffinity_high = HIWORD(v29->HeapVirtualAffinity);
          v31 = HeapVirtualAffinity_high;
          v32 = (unsigned __int8)HeapVirtualAffinity_high;
          if ( (unsigned __int8)HeapVirtualAffinity_high == HIBYTE(HeapVirtualAffinity_high) )
          {
            LOWORD(v31) = HIBYTE(HeapVirtualAffinity_high);
            v131 = sub_18004A7A0(v31, v19, v20);
            v33 = (v131 << 8) | (unsigned __int8)(v131 + 1);
          }
          else
          {
            v33 = (unsigned __int8)(HeapVirtualAffinity_high ^ (HeapVirtualAffinity_high + 1)) ^ HeapVirtualAffinity_high;
          }
          HIWORD(v29->HeapVirtualAffinity) = v33;
          v23 = (volatile signed __int64 *)(v11 + 48);
          v34 = v32;
          v24 = v152;
          LODWORD(v35) = byte_180163580[v34];
        }
        v36 = 0x5555555555555555LL;
        v37 = &v23[(2 * (unsigned __int64)*(unsigned __int16 *)(v11 + 36)) >> 6];
        v38 = &v23[(v25 - 1) >> 6];
LABEL_27:
        if ( v25 < 0x40 )
        {
          v39 = *v37;
          v110 = 2 * ((unsigned __int16)v151 + (unsigned __int8)v159);
          if ( v110 >= v24 )
            v110 = v24;
          v24 = v110;
        }
        else
        {
          while ( 1 )
          {
            v39 = *v37;
            if ( (*v37 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v109 = v37++;
            if ( v109 == v38 )
              v37 = v23;
          }
          if ( v37 == v38 && (v25 & 0x3F) != 0 && (v25 & 0x3F) < v24 )
            v24 = (2 * ((_BYTE)v151 + (_BYTE)v159)) & 0x3F;
        }
        v35 = ((v24 * (unsigned int)v35) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v40 = ~v39;
          if ( v24 < 0x40 )
          {
            _BitScanForward64(&v108, v40 & 0x5555555555555555LL);
            v35 = (unsigned int)(v108 + v35);
            v41 = (((1LL << v24) - 1) << v108) & 0x5555555555555555LL;
          }
          else
          {
            v41 = 0x5555555555555555LL;
          }
          _BitScanForward64(&v42, __ROR8__(v40 & v41, v35));
          v43 = ((_BYTE)v35 + (_BYTE)v42) & 0x3F;
          v161 = v43;
          v45 = _InterlockedCompareExchange64(v37, v39 | (v153 << v43), v39);
          v44 = v39 == v45;
          v39 = v45;
          if ( v44 )
            break;
          if ( (v45 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            if ( ++v37 > v38 )
              v37 = v23;
            goto LABEL_27;
          }
        }
        v46 = HIWORD(v149);
        v5 = 0LL;
        v47 = (unsigned __int16)v150;
        v48 = (v43 + ((unsigned int)(v37 - v23) << 6)) >> 1;
        *(_WORD *)(v11 + 36) = v48;
        v49 = v46 + v47 * v48;
        if ( *(_BYTE *)(v11 + 45) <= 1u )
          goto LABEL_45;
        v50 = *(_BYTE *)(v11 + 44);
        v36 = 0LL;
        v51 = v49 >> v50;
        v52 = 2 * v51;
        v53 = (signed __int16 *)(2 * v51 + v11 + *(unsigned __int16 *)(v11 + 46));
        _m_prefetchw(v53);
        v144 = 0;
        v54 = *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int16)((unsigned int)v11 >> 12);
        v150 = 0LL;
        v151 = (unsigned __int16)qword_180163548 ^ v54;
        v55 = ((v151 + v49 - 1) >> v50) - v51;
        v35 = 0xFFFFFFFFLL;
        v139 = -1;
        v56 = &v53[v55 + 1];
        if ( v53 >= v56 )
        {
LABEL_45:
          v5 = v11 + v49;
          if ( v164 < v47 )
          {
            v61 = v47 - v164;
            if ( v61 == 1 )
              v62 = 0x8000;
            else
              v62 = v61 & 0x3FFF;
            *(_WORD *)(((unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v11 + 40) ^ (unsigned __int64)(unsigned __int16)v155)
                     + v5
                     - 2) = v62;
          }
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v57 = *v53;
              while ( v57 > 0 )
              {
                v58 = v57;
                v57 = _InterlockedCompareExchange16(v53, v57 + 1, v57);
                if ( v58 == v57 )
                {
                  v59 = v144;
                  v35 = v139;
                  LODWORD(v60) = v150;
                  goto LABEL_40;
                }
              }
              if ( (_DWORD)v36 )
                break;
              v152 = 1;
              RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v11 + 24));
              v36 = 1LL;
            }
            v35 = v139;
            if ( v57 )
            {
              v59 = v144 + 1;
              v60 = v52 >> 1;
              ++v144;
              v150 = v52 >> 1;
              if ( v139 == -1 )
              {
                v35 = (unsigned int)v60;
                v139 = v52 >> 1;
              }
              *v53 = v57 + 1;
            }
            else
            {
              LODWORD(v60) = v150;
              v59 = --v144;
              *v53 = 1;
            }
LABEL_40:
            ++v53;
            v52 += 2LL;
          }
          while ( v53 < v56 );
          if ( v59 && (dword_180163534 & 0x20) != 0 )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
              (v59 << *(_BYTE *)(v11 + 44)) / 4096);
          if ( (_DWORD)v35 == -1 )
          {
            if ( (_DWORD)v36 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 24));
            goto LABEL_45;
          }
          v124 = *(_BYTE *)(v11 + 44);
          v142 = (_DWORD)v35 << v124;
          v125 = v11 + (unsigned int)((_DWORD)v35 << v124);
          v126 = qword_180163540 ^ *(_QWORD *)(a1 + 24);
          v158 = v60 - v35 + 1;
          v127 = v158 << v124;
          v128 = *(_QWORD *)a1;
          v148[0] = -1;
          if ( ((int (__fastcall *)(__int64, __int64, _QWORD, __int64))(a1 ^ v126))(v128, v125, v127, v36) >= 0 )
          {
            sub_180063920(a1, v11, v142, v127, (__int64)&v158, 1, (__int64)v148);
            goto LABEL_45;
          }
          sub_18004F5D0(a1, v11, v49, v151);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 24));
          v35 = ~(3LL << ((2 * v48) & 0x3F));
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 8 * ((unsigned __int64)(2 * v48) >> 6) + 48), v35);
        }
        if ( !v5 )
          sub_1800413B0(a1, v11, 0LL, a5);
        goto LABEL_51;
      }
      v8 = 2;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 16));
    }
    else
    {
      v118 = (volatile signed __int64 *)(v6 + 16);
      if ( v8 == 2 )
        RtlReleaseSRWLockExclusive(v118);
      else
        RtlReleaseSRWLockShared(v118);
      v119 = v163 + 3;
      if ( (_QWORD *)*v119 == v119
        || ((RtlAcquireSRWLockExclusive(v163 + 2), (_QWORD *)*v119 == v119)
          ? (v63 = 0LL)
          : (v63 = sub_180071D04(v163, *v119, 2LL)),
            RtlReleaseSRWLockExclusive(v163 + 2),
            !v63) )
      {
        v63 = sub_180049F08(a1);
        if ( !v63 )
          goto LABEL_52;
      }
      v8 = 2;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 16));
      if ( *(_WORD *)(v63 + 32) == *(_WORD *)(v63 + 34) )
      {
        *(_QWORD *)(v63 + 16) = v6;
      }
      else
      {
        v133 = _InterlockedExchange64((volatile __int64 *)(v63 + 16), v6);
        if ( (v133 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v63 + 32), v133 >> 1);
      }
      if ( *v10 && *(_WORD *)(v63 + 32) == *(_WORD *)(v63 + 34) )
      {
LABEL_190:
        *(_QWORD *)(v63 + 16) = 0LL;
        goto LABEL_166;
      }
      v120 = *(unsigned __int8 *)(v63 + 38);
      if ( v120 == 2 )
      {
        v121 = 0LL;
LABEL_156:
        a2 = 0LL;
        goto LABEL_157;
      }
      if ( *(_BYTE *)(v63 + 38) )
      {
        if ( v120 != 1 )
          goto LABEL_166;
        v121 = v6 + 40;
        goto LABEL_156;
      }
      v121 = v6 + 24;
      a2 = (_QWORD *)(v6 + 8);
LABEL_157:
      v122 = (__int64 *)(v6 + 24);
      if ( v121 )
      {
        a3 = *(_QWORD *)v63;
        if ( *(_QWORD *)(*(_QWORD *)v63 + 8LL) != v63 )
          goto LABEL_229;
        v137 = *(unsigned __int64 **)(v63 + 8);
        if ( *v137 != v63 )
          goto LABEL_229;
        *v137 = a3;
        *(_QWORD *)(a3 + 8) = v137;
        if ( a2 )
          --*a2;
      }
      *(_BYTE *)(v63 + 38) = 0;
      if ( v6 != -24 )
      {
        v123 = *(__int64 **)(v6 + 32);
        if ( (__int64 *)*v123 != v122 )
          goto LABEL_229;
        *(_QWORD *)v63 = v122;
        *(_QWORD *)(v63 + 8) = v123;
        *v123 = v63;
        *(_QWORD *)(v6 + 32) = v63;
        if ( v6 != -8 )
          ++*v10;
        v63 = 0LL;
      }
      if ( (*(_BYTE *)v6 & 1) == 0 && *v10 > 8uLL )
      {
        v63 = *v122;
        if ( *(__int64 **)(*v122 + 8) != v122 )
          goto LABEL_229;
        v138 = *(_QWORD *)v63;
        if ( *(_QWORD *)(*(_QWORD *)v63 + 8LL) != v63 )
          goto LABEL_229;
        *v122 = v138;
        *(_QWORD *)(v138 + 8) = v122;
        --*v10;
        *(_BYTE *)(v63 + 38) = 2;
      }
      if ( v63 && *(_BYTE *)(v63 + 38) == 2 )
        goto LABEL_190;
LABEL_166:
      v156 = v63;
    }
  }
  while ( 1 )
  {
    _m_prefetchw((const void *)(v6 + 56));
    v65 = *(_QWORD *)(v6 + 56);
    if ( (v65 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 56), v65 - 1, v65);
        if ( v65 == v66 )
          break;
        v154 = 1;
        v65 = v66;
        if ( (v66 & 0xFFF) == 0 )
          goto LABEL_113;
      }
      v67 = v65 & 0xFFFFFFFFFFFFF000uLL;
      if ( v67 )
        break;
    }
LABEL_113:
    if ( v8 == 2 )
      goto LABEL_5;
    v8 = 2;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 16));
  }
  if ( v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 16));
  v68 = *(unsigned __int16 *)(v67 + 34);
  v69 = (volatile signed __int64 *)(v67 + 48);
  v153 = *(unsigned __int8 *)(v67 + 39);
  v70 = *(unsigned __int8 *)(v6 + 1);
  v71 = v153;
  v140 = v68;
  v72 = byte_180126A90[v70];
  v152 = (unsigned int)v67 >> 12;
  v73 = qword_180163548 ^ *(_DWORD *)(v67 + 40) ^ ((unsigned int)v67 >> 12);
  v153 = 2 * (v68 + v153);
  v74 = 3LL;
  v145 = v72;
  if ( v164 >= (unsigned __int16)v73 )
    v74 = 1LL;
  v149 = v73;
  LODWORD(v150) = v73;
  v155 = v74;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
  {
    LODWORD(v35) = 0;
  }
  else
  {
    v75 = NtCurrentTeb();
    v76 = HIWORD(v75->HeapVirtualAffinity);
    v77 = v76;
    v78 = (unsigned __int8)v76;
    if ( (unsigned __int8)v76 == HIBYTE(v76) )
    {
      LOWORD(v77) = HIBYTE(v76);
      v132 = sub_18004A7A0(v77, 0x180000000uLL, a3);
      v79 = (v132 << 8) | (unsigned __int8)(v132 + 1);
    }
    else
    {
      v79 = (unsigned __int8)(v76 ^ (v76 + 1)) ^ v76;
    }
    HIWORD(v75->HeapVirtualAffinity) = v79;
    v69 = (volatile signed __int64 *)(v67 + 48);
    v80 = v78;
    v72 = v145;
    LODWORD(v35) = byte_180163580[v80];
  }
  v81 = v153;
  v36 = 0x5555555555555555LL;
  v82 = &v69[(2 * (unsigned __int64)*(unsigned __int16 *)(v67 + 36)) >> 6];
  v83 = &v69[(v153 - 1) >> 6];
  v153 = (unsigned __int64)v83;
LABEL_69:
  if ( v81 < 0x40 )
  {
    v84 = *v82;
    v107 = 2 * (v71 + v140);
    if ( v107 >= v72 )
      v107 = v72;
    v72 = v107;
  }
  else
  {
    while ( 1 )
    {
      v84 = *v82;
      if ( (*v82 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v117 = v82++;
      if ( v117 == v83 )
        v82 = v69;
    }
    if ( v82 == v83 && (v81 & 0x3F) != 0 && (v81 & 0x3F) < v72 )
      v72 = (2 * ((_BYTE)v140 + v71)) & 0x3F;
  }
  v35 = ((v72 * (unsigned int)v35) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v85 = ~v84;
    if ( v72 < 0x40 )
    {
      _BitScanForward64(&v106, v85 & 0x5555555555555555LL);
      v35 = (unsigned int)(v106 + v35);
      v86 = (((1LL << v72) - 1) << v106) & 0x5555555555555555LL;
    }
    else
    {
      v86 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v87, __ROR8__(v86 & v85, v35));
    v88 = ((_BYTE)v35 + (_BYTE)v87) & 0x3F;
    v160 = v88;
    v89 = _InterlockedCompareExchange64(v82, v84 | (v155 << v88), v84);
    v44 = v84 == v89;
    v84 = v89;
    if ( v44 )
      break;
    if ( (v89 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v83 = (volatile signed __int64 *)v153;
      v134 = v82 + 1;
      v135 = (unsigned __int64)(v82 + 1) <= v153;
      v82 = v69;
      if ( v135 )
        v82 = v134;
      goto LABEL_69;
    }
  }
  v90 = WORD1(v150);
  v5 = 0LL;
  v91 = (unsigned __int16)v149;
  v92 = (v88 + ((unsigned int)(v82 - v69) << 6)) >> 1;
  v93 = v92 * (unsigned __int16)v149;
  v159 = v92;
  *(_WORD *)(v67 + 36) = v92;
  v149 = v91;
  v94 = v90 + v93;
  if ( *(_BYTE *)(v67 + 45) <= 1u )
    goto LABEL_88;
  v95 = *(_BYTE *)(v67 + 44);
  v96 = 0;
  v35 = v94 >> v95;
  v97 = v67 + *(unsigned __int16 *)(v67 + 46);
  v36 = 2 * v35;
  v155 = 2 * v35;
  v98 = (signed __int16 *)(2 * v35 + v97);
  _m_prefetchw(v98);
  v146 = 0;
  v141 = -1;
  v151 = (unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v67 + 40) ^ (unsigned __int16)((unsigned int)v67 >> 12);
  v153 = 0LL;
  if ( v98 >= &v98[((v94 + v151 - 1) >> v95) - (unsigned int)v35 + 1] )
  {
LABEL_88:
    v5 = v67 + v94;
    if ( v164 < v91 )
    {
      v104 = v91 - v164;
      if ( v104 == 1 )
        v105 = 0x8000;
      else
        v105 = v104 & 0x3FFF;
      *(_WORD *)(((unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v67 + 40) ^ (unsigned __int64)(unsigned __int16)v152)
               + v5
               - 2) = v105;
    }
  }
  else
  {
    v99 = &v98[((v94 + v151 - 1) >> v95) - (unsigned int)v35 + 1];
    do
    {
      while ( 1 )
      {
        v100 = *v98;
        while ( v100 > 0 )
        {
          v101 = v100;
          v100 = _InterlockedCompareExchange16(v98, v100 + 1, v100);
          if ( v101 == v100 )
          {
            v102 = v155;
            v35 = v146;
            v103 = v141;
            goto LABEL_83;
          }
        }
        if ( v96 )
          break;
        LODWORD(v150) = 1;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v67 + 24));
        v96 = 1;
      }
      v102 = v155;
      v103 = v141;
      if ( v100 )
      {
        v35 = ++v146;
        v153 = v155 >> 1;
        if ( v141 == -1 )
        {
          v103 = v155 >> 1;
          v141 = v103;
        }
      }
      else
      {
        v35 = --v146;
      }
      *v98 = v100 + 1;
LABEL_83:
      v36 = v102 + 2;
      ++v98;
      v155 = v36;
    }
    while ( v98 < v99 );
    v91 = v149;
    if ( (_DWORD)v35 && (dword_180163534 & 0x20) != 0 )
    {
      v35 = (unsigned int)((_DWORD)v35 << *(_BYTE *)(v67 + 44));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v35 / 4096);
    }
    if ( v103 == -1 )
    {
      if ( v96 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v67 + 24));
      goto LABEL_88;
    }
    v129 = *(_BYTE *)(v67 + 44);
    v147 = -1;
    v157 = v153 - v103 + 1;
    v130 = v157 << v129;
    v143 = v103 << v129;
    if ( ((int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v67 + (unsigned int)(v103 << v129),
           (unsigned int)(v157 << v129)) >= 0 )
    {
      sub_180063920(a1, v67, v143, v130, (__int64)&v157, 1, (__int64)&v147);
      goto LABEL_88;
    }
    sub_18004F5D0(a1, v67, v94, v151);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v67 + 24));
    v35 = ~(3LL << ((2 * v159) & 0x3F));
    _InterlockedAnd64(
      (volatile signed __int64 *)(v67 + 8 * ((unsigned __int64)(unsigned int)(2 * v159) >> 6) + 48),
      v35);
  }
  if ( !v5 )
    sub_1800413B0(a1, v67, 0LL, a5);
LABEL_51:
  v63 = v156;
LABEL_52:
  if ( v154 )
    sub_180079B64(a1, v163, v35, v36);
  if ( v63 )
    sub_180050D98(a1, v163, v63, a5);
  return v5;
}
