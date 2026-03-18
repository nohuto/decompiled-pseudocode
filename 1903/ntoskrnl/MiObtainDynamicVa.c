/*
 * XREFs of MiObtainDynamicVa @ 0x1400AAFA4
 * Callers:
 *     MmAllocatePoolMemory @ 0x14002270C (MmAllocatePoolMemory.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     MiReclaimSystemVa @ 0x140139874 (MiReclaimSystemVa.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x140196190 (MiFindNextAlignedForwardRunClearEx.c)
 *     MiExtendDynamicBitMap @ 0x140199A70 (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // r11d
  __int64 *v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r10
  unsigned __int64 i; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 NextAlignedForwardRunClear; // rdi
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r14
  unsigned __int64 *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rbx
  int v32; // edi
  unsigned __int8 v33; // di
  __int64 v35; // rdx
  unsigned __int64 *v36; // r11
  bool v37; // zf
  __int64 v38; // rax
  unsigned int v39; // r10d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 *v44; // r11
  __int64 v45; // rax
  unsigned int v46; // r10d
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r10
  unsigned __int64 v56; // r10
  __int64 v57; // rax
  unsigned int v58; // ecx
  unsigned __int64 v59; // r10
  __int64 v60; // rax
  unsigned int v61; // ecx
  unsigned int v62; // r9d
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 *v65; // r9
  unsigned int v66; // r9d
  __int64 v67; // rcx
  __int64 v68; // rdx
  unsigned __int64 *v69; // r9
  bool v70; // sf
  __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rax
  bool v75; // sf
  __int64 v76; // rcx
  unsigned int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r10
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v83; // rcx
  unsigned __int64 v84; // [rsp+28h] [rbp-69h]
  __int64 *v85; // [rsp+38h] [rbp-59h]
  __int64 v86; // [rsp+40h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-49h] BYREF
  __int64 v88; // [rsp+60h] [rbp-31h] BYREF
  __int64 v89; // [rsp+68h] [rbp-29h]
  unsigned int v90; // [rsp+70h] [rbp-21h]
  unsigned int v91; // [rsp+74h] [rbp-1Dh]
  int v92; // [rsp+78h] [rbp-19h]
  unsigned int v93; // [rsp+7Ch] [rbp-15h]
  int v94; // [rsp+80h] [rbp-11h]
  int v95; // [rsp+84h] [rbp-Dh]
  int v96; // [rsp+88h] [rbp-9h]
  unsigned int v97; // [rsp+8Ch] [rbp-5h]
  unsigned int v98; // [rsp+90h] [rbp-1h]
  int v99; // [rsp+94h] [rbp+3h]
  unsigned int v100; // [rsp+98h] [rbp+7h]
  int v101; // [rsp+9Ch] [rbp+Bh]
  int v102; // [rsp+A0h] [rbp+Fh]
  int v103; // [rsp+A4h] [rbp+13h]

  v3 = a3;
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a1;
  v6 = 1LL;
  v88 = 0LL;
  v86 = 1LL;
  v89 = 0LL;
  while ( 1 )
  {
    v7 = v5[3];
    v85 = v5;
    v8 = (unsigned __int64 *)v5;
    if ( v3 == 13 )
    {
      v8 = (unsigned __int64 *)&v88;
      v85 = &v88;
      v50 = v5[1] + 8 * ((unsigned __int64)v5[2] >> 6);
      v7 = v5[6];
      v51 = -(__int64)((unsigned __int64)v5[5] >> 6);
      v88 = v5[5];
      if ( v4 >= 0x200 )
        v6 = 512LL;
      v86 = v6;
      v89 = v50 + 8 * v51;
    }
    if ( !*v8 )
      goto LABEL_105;
    v9 = v4;
    if ( v6 == 1 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v10 - 1;
      if ( v4 )
      {
        for ( i = v7 & -(__int64)(v7 < v10); ; i = 0LL )
        {
          if ( v12 - i + 1 < v9 )
            goto LABEL_75;
          v14 = v12 - v9 + 1;
          v15 = (unsigned __int64 *)(v11 + 8 * (i >> 6));
          v16 = ((1LL << (i & 0x3F)) - 1) | *v15;
          v17 = v11 + 8 * (v14 >> 6);
          if ( v9 > 0x7F )
          {
            v56 = v17 + 8;
            if ( (v14 & 0x3F) == 0 )
              v56 = v11 + 8 * (v14 >> 6);
            if ( v16 )
            {
              if ( *++v15 )
                goto LABEL_111;
              v37 = !_BitScanReverse64((unsigned __int64 *)&v57, v16);
              if ( v37 )
                v58 = 64;
              else
                v58 = 63 - v57;
              v90 = v58;
            }
            else
            {
              v58 = 0;
            }
LABEL_116:
            v19 = ((__int64)((__int64)v15 - v11) >> 3 << 6) - v58;
            if ( v19 > v14 )
              goto LABEL_75;
            v65 = &v15[(v9 - v58) >> 6];
            while ( ++v15 != v65 )
            {
              if ( *v15 )
                goto LABEL_111;
            }
            v62 = ((_BYTE)v4 - (_BYTE)v58) & 0x3F;
            if ( (((_BYTE)v4 - (_BYTE)v58) & 0x3F) != 0 )
            {
              v37 = !_BitScanForward64((unsigned __int64 *)&v63, *v15);
              if ( v37 )
                LODWORD(v63) = 64;
              v92 = v63;
              if ( (unsigned int)v63 < v62 )
              {
LABEL_111:
                while ( (unsigned __int64)v15 <= v56 )
                {
                  if ( !*++v15 )
                  {
                    v37 = !_BitScanReverse64((unsigned __int64 *)&v64, *(v15 - 1));
                    if ( v37 )
                      v58 = 64;
                    else
                      v58 = 63 - v64;
                    v91 = v58;
                    goto LABEL_116;
                  }
                }
                goto LABEL_75;
              }
            }
          }
          else if ( v9 >= 0x40 )
          {
            do
            {
LABEL_140:
              v70 = v16 < 0;
              do
              {
                if ( v70 )
                {
                  if ( (unsigned __int64)++v15 > v17 )
                    goto LABEL_75;
                  v16 = *v15;
                  goto LABEL_140;
                }
                v37 = !_BitScanReverse64((unsigned __int64 *)&v71, v16);
                if ( v37 )
                  v72 = 64;
                else
                  v72 = 63 - v71;
                v93 = v72;
                v19 = ((((__int64)((__int64)v15 - v11) >> 3) + 1) << 6) - v72;
                if ( v19 > v14 )
                  goto LABEL_75;
                v73 = v9 - v72;
                if ( v9 == v72 )
                  goto LABEL_16;
                v16 = *++v15;
                if ( v73 < 0x40 )
                  goto LABEL_146;
                v70 = v16 < 0;
              }
              while ( v16 );
              v73 -= 64LL;
              if ( !v73 )
                break;
              v16 = *++v15;
LABEL_146:
              v37 = !_BitScanForward64(&v74, v16);
              if ( v37 )
                v74 = 64LL;
              v94 = v74;
            }
            while ( v74 < v73 );
          }
          else
          {
            if ( v9 > 1 )
            {
              v35 = 0LL;
              v36 = (unsigned __int64 *)(v11 + 8 * (v12 >> 6));
              while ( v16 != -1 )
              {
LABEL_43:
                v37 = !_BitScanForward64((unsigned __int64 *)&v38, v16);
                if ( v37 )
                  LODWORD(v38) = 64;
                v95 = v38;
                if ( (unsigned int)(v35 + v38) >= v9 )
                {
                  v42 = -v35;
LABEL_50:
                  v19 = ((__int64)((__int64)v15 - v11) >> 3 << 6) + v42;
                  goto LABEL_15;
                }
                v39 = a2;
                v40 = ~v16;
                while ( 1 )
                {
                  v40 &= v40 >> (v39 >> 1);
                  if ( !v40 )
                    break;
                  v39 -= v39 >> 1;
                  if ( v39 <= 1 )
                  {
                    _BitScanForward64(&v41, v40);
                    v42 = (unsigned int)v41;
                    goto LABEL_50;
                  }
                }
                if ( v15 == v36 )
                  goto LABEL_75;
                v37 = !_BitScanReverse64((unsigned __int64 *)&v53, v16);
                if ( v37 )
                  v35 = 64LL;
                else
                  v35 = (unsigned int)(63 - v53);
                ++v15;
                v96 = v35;
                v16 = *v15;
              }
              while ( (unsigned __int64)++v15 <= v17 )
              {
                v16 = *v15;
                if ( *v15 != -1LL )
                {
                  v35 = 0LL;
                  goto LABEL_43;
                }
              }
LABEL_75:
              v19 = -1LL;
              goto LABEL_76;
            }
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_75;
              v16 = *v15;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + ((__int64)((__int64)v15 - v11) >> 3 << 6);
LABEL_15:
            if ( v19 > v14 )
              goto LABEL_75;
          }
LABEL_16:
          if ( v19 != -1LL )
            goto LABEL_17;
LABEL_76:
          if ( !i )
          {
LABEL_17:
            v5 = a1;
            NextAlignedForwardRunClear = v19;
            v6 = v86;
            v84 = v19;
            goto LABEL_18;
          }
          LOBYTE(v4) = a2;
          v55 = v9 + v7;
          if ( v9 + v7 > v10 )
            v55 = v10;
          v12 = v55 - 1;
        }
      }
      NextAlignedForwardRunClear = v7 & -(__int64)(v7 < v10) & 0xFFFFFFFFFFFFFFF8uLL;
      v84 = NextAlignedForwardRunClear;
LABEL_18:
      v8 = (unsigned __int64 *)v85;
      v3 = a3;
    }
    else
    {
      NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v8, v4, v6);
      v84 = NextAlignedForwardRunClear;
    }
    if ( NextAlignedForwardRunClear == -1LL )
    {
LABEL_105:
      if ( !(unsigned int)MiExtendDynamicBitMap(v5, v8, v3) )
        return 0LL;
      goto LABEL_106;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 8, &LockHandle);
    if ( v6 == 1 )
    {
      v21 = *v8;
      v22 = v8[1];
      v23 = NextAlignedForwardRunClear & -(__int64)(NextAlignedForwardRunClear < *v8);
      v24 = *v8 - 1;
      if ( v9 )
      {
        while ( v24 - v23 + 1 < v9 )
        {
          v30 = -1LL;
LABEL_182:
          if ( !v23 )
          {
LABEL_32:
            v5 = a1;
            v31 = v30;
            v8 = (unsigned __int64 *)v85;
            goto LABEL_33;
          }
          v80 = v9 + NextAlignedForwardRunClear;
          if ( v9 + NextAlignedForwardRunClear > v21 )
            v80 = v21;
          v24 = v80 - 1;
          v23 = 0LL;
        }
        v25 = v24 - v9 + 1;
        v26 = (unsigned __int64 *)(v22 + 8 * (v23 >> 6));
        v27 = ((1LL << (v23 & 0x3F)) - 1) | *v26;
        v28 = v22 + 8 * (v25 >> 6);
        if ( v9 > 0x7F )
        {
          v59 = v28 + 8;
          if ( (v25 & 0x3F) == 0 )
            v59 = v22 + 8 * (v25 >> 6);
          if ( v27 )
          {
            if ( *++v26 )
              goto LABEL_125;
            v37 = !_BitScanReverse64((unsigned __int64 *)&v60, v27);
            if ( v37 )
              v61 = 64;
            else
              v61 = 63 - v60;
            v97 = v61;
          }
          else
          {
            v61 = 0;
          }
          while ( 1 )
          {
            v30 = ((__int64)((__int64)v26 - v22) >> 3 << 6) - v61;
            if ( v30 > v25 )
              break;
            v69 = &v26[(v9 - v61) >> 6];
            while ( ++v26 != v69 )
            {
              if ( *v26 )
                goto LABEL_125;
            }
            v66 = ((_BYTE)a2 - (_BYTE)v61) & 0x3F;
            if ( (((_BYTE)a2 - (_BYTE)v61) & 0x3F) == 0 )
              goto LABEL_31;
            v37 = !_BitScanForward64((unsigned __int64 *)&v67, *v26);
            if ( v37 )
              LODWORD(v67) = 64;
            v99 = v67;
            if ( (unsigned int)v67 >= v66 )
              goto LABEL_31;
            do
            {
LABEL_125:
              if ( (unsigned __int64)v26 > v59 )
              {
                v30 = -1LL;
                goto LABEL_81;
              }
              ++v26;
            }
            while ( *v26 );
            v37 = !_BitScanReverse64((unsigned __int64 *)&v68, *(v26 - 1));
            if ( v37 )
              v61 = 64;
            else
              v61 = 63 - v68;
            v98 = v61;
          }
        }
        else
        {
          if ( v9 >= 0x40 )
          {
            do
            {
LABEL_153:
              v75 = v27 < 0;
              do
              {
                if ( v75 )
                {
                  if ( (unsigned __int64)++v26 > v28 )
                  {
LABEL_82:
                    v30 = -1LL;
                    goto LABEL_81;
                  }
                  v27 = *v26;
                  goto LABEL_153;
                }
                v37 = !_BitScanReverse64((unsigned __int64 *)&v76, v27);
                if ( v37 )
                  v77 = 64;
                else
                  v77 = 63 - v76;
                v100 = v77;
                v30 = ((((__int64)((__int64)v26 - v22) >> 3) + 1) << 6) - v77;
                if ( v30 > v25 )
                  goto LABEL_82;
                v78 = v9 - v77;
                if ( v9 == v77 )
                  goto LABEL_31;
                v27 = *++v26;
                if ( v78 < 0x40 )
                  goto LABEL_159;
                v75 = v27 < 0;
              }
              while ( v27 );
              v78 -= 64LL;
              if ( !v78 )
                break;
              v27 = *++v26;
LABEL_159:
              v37 = !_BitScanForward64(&v79, v27);
              if ( v37 )
                v79 = 64LL;
              v101 = v79;
            }
            while ( v79 < v78 );
LABEL_31:
            if ( v30 != -1LL )
              goto LABEL_32;
            goto LABEL_81;
          }
          if ( v9 > 1 )
          {
            v43 = 0LL;
            v44 = (unsigned __int64 *)(v22 + 8 * (v24 >> 6));
            while ( v27 != -1 )
            {
LABEL_53:
              v37 = !_BitScanForward64((unsigned __int64 *)&v45, v27);
              if ( v37 )
                LODWORD(v45) = 64;
              v102 = v45;
              if ( (unsigned int)(v43 + v45) >= v9 )
              {
                v49 = -v43;
LABEL_60:
                v30 = ((__int64)((__int64)v26 - v22) >> 3 << 6) + v49;
                goto LABEL_30;
              }
              v46 = a2;
              v47 = ~v27;
              while ( 1 )
              {
                v47 &= v47 >> (v46 >> 1);
                if ( !v47 )
                  break;
                v46 -= v46 >> 1;
                if ( v46 <= 1 )
                {
                  _BitScanForward64(&v48, v47);
                  v49 = (unsigned int)v48;
                  goto LABEL_60;
                }
              }
              if ( v26 == v44 )
                goto LABEL_80;
              v37 = !_BitScanReverse64((unsigned __int64 *)&v54, v27);
              if ( v37 )
                v43 = 64LL;
              else
                v43 = (unsigned int)(63 - v54);
              ++v26;
              v103 = v43;
              v27 = *v26;
            }
            while ( (unsigned __int64)++v26 <= v28 )
            {
              v27 = *v26;
              if ( *v26 != -1LL )
              {
                v43 = 0LL;
                goto LABEL_53;
              }
            }
          }
          else
          {
            while ( v27 == -1 )
            {
              if ( (unsigned __int64)++v26 > v28 )
                goto LABEL_82;
              v27 = *v26;
            }
            _BitScanForward64(&v29, ~v27);
            v30 = v29 + ((__int64)((__int64)v26 - v22) >> 3 << 6);
LABEL_30:
            if ( v30 <= v25 )
              goto LABEL_31;
          }
        }
LABEL_80:
        v30 = -1LL;
LABEL_81:
        NextAlignedForwardRunClear = v84;
        goto LABEL_182;
      }
      v31 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    else
    {
      v31 = MiFindNextAlignedForwardRunClearEx(v8, v9, v6);
    }
LABEL_33:
    if ( v31 != -1 )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v3 = a3;
    if ( !(unsigned int)MiExtendDynamicBitMap(v5, v8, a3) )
      return 0LL;
    v6 = v86;
LABEL_106:
    v4 = a2;
  }
  RtlSetBitsEx((__int64)v8, v31, v9);
  v32 = a3;
  if ( a3 == 13 )
  {
    v52 = 8 * (v8[1] - v5[1]);
    if ( a2 == 1 )
      v5[6] = v31 + 1;
    v31 += v52;
    v32 = 9;
  }
  else if ( a2 == 1 )
  {
    v5[3] = v31 + 1;
  }
  if ( v5 == &qword_140465D78 )
  {
    qword_140465C08 -= v9 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_1404673C8[v32], v9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v83 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v83);
  }
  __writecr8(v33);
  return v5[4] + (v31 << 21);
}
