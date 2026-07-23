/*
 * XREFs of MiObtainDynamicVa @ 0x1400F6A0C
 * Callers:
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReclaimSystemVa @ 0x1400F72F8 (MiReclaimSystemVa.c)
 *     MiFindNextAlignedForwardRunClearEx @ 0x14018C520 (MiFindNextAlignedForwardRunClearEx.c)
 *     MiExtendDynamicBitMap @ 0x14018FBD0 (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiObtainDynamicVa(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  unsigned int v5; // r11d
  __int64 *v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r10
  unsigned __int64 i; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // r8
  signed __int64 v16; // r9
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
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 *v39; // r11
  bool v40; // zf
  __int64 v41; // rax
  unsigned int v42; // r10d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 *v47; // r11
  __int64 v48; // rax
  unsigned int v49; // r10d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  bool v55; // sf
  __int64 v56; // rcx
  unsigned int v57; // eax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  bool v60; // sf
  __int64 v61; // rcx
  unsigned int v62; // eax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r10
  __int64 v66; // rdx
  unsigned int v67; // ecx
  unsigned __int64 *v68; // r9
  unsigned int v69; // r9d
  __int64 v70; // rcx
  unsigned __int64 v71; // r10
  __int64 v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // rdx
  unsigned __int64 *v75; // r9
  unsigned int v76; // r9d
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // r10
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v83; // rcx
  unsigned __int64 v84; // [rsp+28h] [rbp-69h]
  __int64 *v85; // [rsp+38h] [rbp-59h]
  __int64 v86; // [rsp+40h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v88[10]; // [rsp+98h] [rbp+7h] BYREF

  v3 = 1LL;
  v4 = a3;
  v86 = 1LL;
  v5 = a2;
  v6 = a1;
  while ( 1 )
  {
    v7 = v6[3];
    v85 = v6;
    v8 = (unsigned __int64 *)v6;
    if ( v4 == 14 )
    {
      v8 = v88;
      v85 = v88;
      v35 = v6[1] + 8 * ((unsigned __int64)v6[2] >> 6);
      v7 = v6[6];
      v36 = -(__int64)((unsigned __int64)v6[5] >> 6);
      v88[0] = v6[5];
      if ( v5 >= 0x200 )
        v3 = 512LL;
      v86 = v3;
      v88[1] = v35 + 8 * v36;
    }
    if ( !*v8 )
      goto LABEL_113;
    v9 = v5;
    if ( v3 == 1 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v10 - 1;
      if ( v5 )
      {
        for ( i = v7 & -(__int64)(v7 < v10); ; i = 0LL )
        {
          if ( v12 - i + 1 < v9 )
            goto LABEL_71;
          v14 = v12 - v9 + 1;
          v15 = (unsigned __int64 *)(v11 + 8 * (i >> 6));
          v16 = ((1LL << (i & 0x3F)) - 1) | *v15;
          v17 = v11 + 8 * (v14 >> 6);
          if ( v9 > 0x7F )
            break;
          if ( v9 >= 0x40 )
          {
            do
            {
LABEL_90:
              v55 = v16 < 0;
              do
              {
                if ( v55 )
                {
                  if ( (unsigned __int64)++v15 > v17 )
                    goto LABEL_71;
                  v16 = *v15;
                  goto LABEL_90;
                }
                v40 = !_BitScanReverse64((unsigned __int64 *)&v56, v16);
                if ( v40 )
                  v57 = 64;
                else
                  v57 = 63 - v56;
                v19 = ((((__int64)((__int64)v15 - v11) >> 3) + 1) << 6) - v57;
                if ( v19 > v14 )
                  goto LABEL_71;
                v58 = v9 - v57;
                if ( v9 == v57 )
                  goto LABEL_16;
                v16 = *++v15;
                if ( v58 < 0x40 )
                  goto LABEL_96;
                v55 = v16 < 0;
              }
              while ( v16 );
              v58 -= 64LL;
              if ( !v58 )
                break;
              v16 = *++v15;
LABEL_96:
              v40 = !_BitScanForward64(&v59, v16);
              if ( v40 )
                v59 = 64LL;
            }
            while ( v59 < v58 );
          }
          else
          {
            if ( v9 > 1 )
            {
              v38 = 0LL;
              v39 = (unsigned __int64 *)(v11 + 8 * (v12 >> 6));
              while ( v16 != -1 )
              {
LABEL_49:
                v40 = !_BitScanForward64((unsigned __int64 *)&v41, v16);
                if ( v40 )
                  LODWORD(v41) = 64;
                if ( (unsigned int)(v38 + v41) >= v9 )
                {
                  v45 = -v38;
LABEL_56:
                  v19 = ((__int64)((__int64)v15 - v11) >> 3 << 6) + v45;
                  goto LABEL_15;
                }
                v42 = a2;
                v43 = ~v16;
                while ( 1 )
                {
                  v43 &= v43 >> (v42 >> 1);
                  if ( !v43 )
                    break;
                  v42 -= v42 >> 1;
                  if ( v42 <= 1 )
                  {
                    _BitScanForward64(&v44, v43);
                    v45 = (unsigned int)v44;
                    goto LABEL_56;
                  }
                }
                if ( v15 == v39 )
                  goto LABEL_71;
                v40 = !_BitScanReverse64((unsigned __int64 *)&v53, v16);
                if ( v40 )
                  v38 = 64LL;
                else
                  v38 = (unsigned int)(63 - v53);
                v16 = *++v15;
              }
              while ( (unsigned __int64)++v15 <= v17 )
              {
                v16 = *v15;
                if ( *v15 != -1LL )
                {
                  v38 = 0LL;
                  goto LABEL_49;
                }
              }
LABEL_71:
              v19 = -1LL;
              goto LABEL_174;
            }
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_71;
              v16 = *v15;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + ((__int64)((__int64)v15 - v11) >> 3 << 6);
LABEL_15:
            if ( v19 > v14 )
              goto LABEL_71;
          }
LABEL_16:
          if ( v19 != -1LL )
            goto LABEL_17;
LABEL_174:
          if ( !i )
          {
LABEL_17:
            v6 = a1;
            NextAlignedForwardRunClear = v19;
            v3 = v86;
            v84 = v19;
            goto LABEL_18;
          }
          LOBYTE(v5) = a2;
          v79 = v9 + v7;
          if ( v9 + v7 > v10 )
            v79 = v10;
          v12 = v79 - 1;
        }
        v65 = v17 + 8;
        if ( (v14 & 0x3F) == 0 )
          v65 = v11 + 8 * (v14 >> 6);
        if ( v16 )
        {
          if ( !*++v15 )
          {
            v40 = !_BitScanReverse64((unsigned __int64 *)&v78, v16);
            if ( v40 )
              v67 = 64;
            else
              v67 = 63 - v78;
            goto LABEL_125;
          }
          while ( 1 )
          {
            do
            {
LABEL_121:
              if ( (unsigned __int64)v15 > v65 )
                goto LABEL_71;
              ++v15;
            }
            while ( *v15 );
            v40 = !_BitScanReverse64((unsigned __int64 *)&v66, *(v15 - 1));
            if ( v40 )
              v67 = 64;
            else
              v67 = 63 - v66;
LABEL_125:
            v19 = ((__int64)((__int64)v15 - v11) >> 3 << 6) - v67;
            if ( v19 > v14 )
              goto LABEL_71;
            v68 = &v15[(v9 - v67) >> 6];
            while ( ++v15 != v68 )
            {
              if ( *v15 )
                goto LABEL_121;
            }
            v69 = ((_BYTE)v5 - (_BYTE)v67) & 0x3F;
            if ( (((_BYTE)v5 - (_BYTE)v67) & 0x3F) != 0 )
            {
              v40 = !_BitScanForward64((unsigned __int64 *)&v70, *v15);
              if ( v40 )
                LODWORD(v70) = 64;
              if ( (unsigned int)v70 < v69 )
                continue;
            }
            goto LABEL_16;
          }
        }
        v67 = 0;
        goto LABEL_125;
      }
      NextAlignedForwardRunClear = v7 & -(__int64)(v7 < v10) & 0xFFFFFFFFFFFFFFF8uLL;
      v84 = NextAlignedForwardRunClear;
LABEL_18:
      v8 = (unsigned __int64 *)v85;
      v4 = a3;
    }
    else
    {
      NextAlignedForwardRunClear = MiFindNextAlignedForwardRunClearEx(v8, v5, v3);
      v84 = NextAlignedForwardRunClear;
    }
    if ( NextAlignedForwardRunClear == -1LL )
    {
LABEL_113:
      if ( !(unsigned int)MiExtendDynamicBitMap(v6, v8, v4) )
        return 0LL;
      goto LABEL_114;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6 + 8, &LockHandle);
    if ( v3 == 1 )
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
LABEL_180:
          if ( !v23 )
          {
LABEL_32:
            v6 = a1;
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
          v71 = v28 + 8;
          if ( (v25 & 0x3F) == 0 )
            v71 = v22 + 8 * (v25 >> 6);
          if ( v27 )
          {
            if ( *++v26 )
              goto LABEL_141;
            v40 = !_BitScanReverse64((unsigned __int64 *)&v72, v27);
            if ( v40 )
              v73 = 64;
            else
              v73 = 63 - v72;
          }
          else
          {
            v73 = 0;
          }
          while ( 1 )
          {
            v30 = ((__int64)((__int64)v26 - v22) >> 3 << 6) - v73;
            if ( v30 > v25 )
              break;
            v75 = &v26[(v9 - v73) >> 6];
            while ( ++v26 != v75 )
            {
              if ( *v26 )
                goto LABEL_141;
            }
            v76 = ((_BYTE)a2 - (_BYTE)v73) & 0x3F;
            if ( (((_BYTE)a2 - (_BYTE)v73) & 0x3F) == 0 )
              goto LABEL_31;
            v40 = !_BitScanForward64((unsigned __int64 *)&v77, *v26);
            if ( v40 )
              LODWORD(v77) = 64;
            if ( (unsigned int)v77 >= v76 )
              goto LABEL_31;
            do
            {
LABEL_141:
              if ( (unsigned __int64)v26 > v71 )
              {
                v30 = -1LL;
                goto LABEL_77;
              }
              ++v26;
            }
            while ( *v26 );
            v40 = !_BitScanReverse64((unsigned __int64 *)&v74, *(v26 - 1));
            if ( v40 )
              v73 = 64;
            else
              v73 = 63 - v74;
          }
        }
        else
        {
          if ( v9 >= 0x40 )
          {
            do
            {
LABEL_103:
              v60 = v27 < 0;
              do
              {
                if ( v60 )
                {
                  if ( (unsigned __int64)++v26 > v28 )
                  {
LABEL_76:
                    v30 = -1LL;
                    goto LABEL_77;
                  }
                  v27 = *v26;
                  goto LABEL_103;
                }
                v40 = !_BitScanReverse64((unsigned __int64 *)&v61, v27);
                if ( v40 )
                  v62 = 64;
                else
                  v62 = 63 - v61;
                v30 = ((((__int64)((__int64)v26 - v22) >> 3) + 1) << 6) - v62;
                if ( v30 > v25 )
                  goto LABEL_76;
                v63 = v9 - v62;
                if ( v9 == v62 )
                  goto LABEL_31;
                v27 = *++v26;
                if ( v63 < 0x40 )
                  goto LABEL_109;
                v60 = v27 < 0;
              }
              while ( v27 );
              v63 -= 64LL;
              if ( !v63 )
                break;
              v27 = *++v26;
LABEL_109:
              v40 = !_BitScanForward64(&v64, v27);
              if ( v40 )
                v64 = 64LL;
            }
            while ( v64 < v63 );
LABEL_31:
            if ( v30 != -1LL )
              goto LABEL_32;
            goto LABEL_77;
          }
          if ( v9 > 1 )
          {
            v46 = 0LL;
            v47 = (unsigned __int64 *)(v22 + 8 * (v24 >> 6));
            while ( v27 != -1 )
            {
LABEL_59:
              v40 = !_BitScanForward64((unsigned __int64 *)&v48, v27);
              if ( v40 )
                LODWORD(v48) = 64;
              if ( (unsigned int)(v46 + v48) >= v9 )
              {
                v52 = -v46;
LABEL_66:
                v30 = ((__int64)((__int64)v26 - v22) >> 3 << 6) + v52;
                goto LABEL_30;
              }
              v49 = a2;
              v50 = ~v27;
              while ( 1 )
              {
                v50 &= v50 >> (v49 >> 1);
                if ( !v50 )
                  break;
                v49 -= v49 >> 1;
                if ( v49 <= 1 )
                {
                  _BitScanForward64(&v51, v50);
                  v52 = (unsigned int)v51;
                  goto LABEL_66;
                }
              }
              if ( v26 == v47 )
                goto LABEL_78;
              v40 = !_BitScanReverse64((unsigned __int64 *)&v54, v27);
              if ( v40 )
                v46 = 64LL;
              else
                v46 = (unsigned int)(63 - v54);
              v27 = *++v26;
            }
            while ( (unsigned __int64)++v26 <= v28 )
            {
              v27 = *v26;
              if ( *v26 != -1LL )
              {
                v46 = 0LL;
                goto LABEL_59;
              }
            }
          }
          else
          {
            while ( v27 == -1 )
            {
              if ( (unsigned __int64)++v26 > v28 )
                goto LABEL_76;
              v27 = *v26;
            }
            _BitScanForward64(&v29, ~v27);
            v30 = v29 + ((__int64)((__int64)v26 - v22) >> 3 << 6);
LABEL_30:
            if ( v30 <= v25 )
              goto LABEL_31;
          }
        }
LABEL_78:
        v30 = -1LL;
LABEL_77:
        NextAlignedForwardRunClear = v84;
        goto LABEL_180;
      }
      v31 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    else
    {
      v31 = MiFindNextAlignedForwardRunClearEx(v8, v9, v3);
    }
LABEL_33:
    if ( v31 != -1 )
      break;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v4 = a3;
    if ( !(unsigned int)MiExtendDynamicBitMap(v6, v8, a3) )
      return 0LL;
    v3 = v86;
LABEL_114:
    v5 = a2;
  }
  RtlSetBitsEx((__int64)v8, v31, v9);
  v32 = a3;
  if ( a3 == 14 )
  {
    v37 = 8 * (v8[1] - v6[1]);
    if ( a2 == 1 )
      v6[6] = v31 + 1;
    v31 += v37;
    v32 = 9;
  }
  else if ( a2 == 1 )
  {
    v6[3] = v31 + 1;
  }
  if ( v6 == &qword_14043B488 )
  {
    qword_14043B288 -= v9 << 21;
    MiReclaimSystemVa(0LL);
  }
  _InterlockedExchangeAdd64(&qword_14043C990[v32], v9);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v83 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v83);
  }
  __writecr8(v33);
  return v6[4] + (v31 << 21);
}
