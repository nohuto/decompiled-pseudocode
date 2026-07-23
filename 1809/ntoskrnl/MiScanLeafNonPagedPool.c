/*
 * XREFs of MiScanLeafNonPagedPool @ 0x1401638F0
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x1401636E0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindClearBitsAndSetEx @ 0x14008AB40 (RtlFindClearBitsAndSetEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x140163F48 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReplenishNonPagedSlists @ 0x140163FA4 (MiReplenishNonPagedSlists.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140164160 (MiAllocatingNonPagedPoolVa.c)
 *     MiCheckPoolForContiguousPages @ 0x140164514 (MiCheckPoolForContiguousPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiScanLeafNonPagedPool(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edi
  _SLIST_HEADER *v10; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r11
  signed __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 *v31; // r9
  unsigned int v32; // r9d
  __int64 v33; // rdx
  unsigned __int64 v34; // r10
  bool v35; // sf
  __int64 v36; // rdx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 *v41; // rbx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  _SLIST_HEADER *v51; // r12
  __int64 v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned int v54; // esi
  unsigned __int64 v55; // r13
  _DWORD *v56; // r15
  int v57; // ebx
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v61; // bl
  struct _KPRCB *v62; // rcx
  __int64 v63; // [rsp+30h] [rbp-51h] BYREF
  unsigned __int64 v64; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v65; // [rsp+40h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-39h] BYREF
  int v67; // [rsp+60h] [rbp-21h]
  unsigned int v68; // [rsp+64h] [rbp-1Dh]
  int v69; // [rsp+68h] [rbp-19h]
  unsigned int v70; // [rsp+6Ch] [rbp-15h]
  int v71; // [rsp+70h] [rbp-11h]
  int v72; // [rsp+74h] [rbp-Dh]
  int v73; // [rsp+78h] [rbp-9h]
  _SLIST_HEADER *v74; // [rsp+80h] [rbp-1h]
  unsigned int v76; // [rsp+E0h] [rbp+5Fh]
  unsigned __int64 v78; // [rsp+100h] [rbp+7Fh]

  v76 = a3;
  v7 = *(_QWORD *)(a4 + 32);
  v8 = a4;
  v9 = a3;
  v10 = &qword_14043B118[25 * a2];
  v64 = a6;
  v74 = v10;
  v65 = v10[23].Region + 8 * (a5 >> 6);
  v12 = a7 - a5;
  v78 = a7 - a5;
  if ( *(_DWORD *)a4 == 2 )
  {
    v63 = 0LL;
    for ( i = RtlFindNextForwardRunClearCappedEx((__int64)&v64, 0LL, a3, (unsigned __int64 *)&v63);
          i;
          i = RtlFindNextForwardRunClearCappedEx((__int64)&v64, i + v14, v15, (unsigned __int64 *)&v63) )
    {
      v14 = v63;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v7 + 8))(
        v7,
        v10[20].Alignment + ((v63 + a5) << 12),
        i,
        0LL);
      v63 = i + v14;
    }
    return -1LL;
  }
  v17 = v64;
  v18 = v12;
  v63 = v64;
  if ( v12 >= v64 )
    v18 = 0LL;
  v19 = v64 - 1;
  if ( a1 )
  {
    while ( 1 )
    {
      if ( v19 - v18 + 1 < a1 )
      {
        v21 = -1LL;
        goto LABEL_36;
      }
      v22 = (unsigned __int64 *)(v65 + 8 * (v18 >> 6));
      v23 = v19 - a1 + 1;
      v24 = v65 + 8 * (v23 >> 6);
      v25 = ((1LL << (v18 & 0x3F)) - 1) | *v22;
      if ( a1 <= 0x7F )
      {
        if ( a1 >= 0x40 )
        {
          while ( 2 )
          {
            v35 = v25 < 0;
            while ( 1 )
            {
              if ( v35 )
              {
                do
                {
                  if ( (unsigned __int64)++v22 > v24 )
                    goto LABEL_78;
                  v25 = *v22;
                }
                while ( (*v22 & 0x8000000000000000uLL) != 0LL );
              }
              v28 = !_BitScanReverse64((unsigned __int64 *)&v36, v25);
              if ( v28 )
                v37 = 64;
              else
                v37 = 63 - v36;
              v70 = v37;
              v21 = ((((__int64)((__int64)v22 - v65) >> 3) + 1) << 6) - v37;
              if ( v21 > v23 )
                goto LABEL_78;
              v38 = a1 - v37;
              if ( a1 == v37 )
                goto LABEL_34;
              v25 = v22[1];
              ++v22;
              if ( v38 < 0x40 )
                break;
              v35 = v25 < 0;
              if ( !v25 )
              {
                v38 -= 64LL;
                if ( !v38 )
                  goto LABEL_34;
                v25 = v22[1];
                ++v22;
                break;
              }
            }
            v28 = !_BitScanForward64(&v39, v25);
            if ( v28 )
              v39 = 64LL;
            v71 = v39;
            if ( v39 < v38 )
              continue;
            break;
          }
LABEL_34:
          if ( v21 != -1LL )
            goto LABEL_83;
          goto LABEL_35;
        }
        if ( a1 <= 1 )
        {
          if ( v25 == -1 )
          {
            while ( (unsigned __int64)++v22 <= v24 )
            {
              v25 = *v22;
              if ( *v22 != -1LL )
                goto LABEL_82;
            }
          }
          else
          {
LABEL_82:
            _BitScanForward64(&v49, ~v25);
            v50 = (__int64)((__int64)v22 - v65) >> 3;
            v48 = (unsigned int)v49;
            v46 = v50 << 6;
LABEL_77:
            v21 = v48 + v46;
            if ( v21 <= v23 )
              goto LABEL_34;
          }
        }
        else
        {
          v40 = 0LL;
          v41 = (unsigned __int64 *)(v65 + 8 * (v19 >> 6));
          while ( v25 != -1 )
          {
LABEL_64:
            v28 = !_BitScanForward64((unsigned __int64 *)&v42, v25);
            if ( v28 )
              LODWORD(v42) = 64;
            v72 = v42;
            if ( (unsigned int)(v40 + v42) >= a1 )
            {
              v46 = -v40;
LABEL_76:
              v48 = (__int64)((__int64)v22 - v65) >> 3 << 6;
              goto LABEL_77;
            }
            v43 = a1;
            v44 = ~v25;
            while ( 1 )
            {
              v44 &= v44 >> (v43 >> 1);
              if ( !v44 )
                break;
              v43 -= v43 >> 1;
              if ( v43 <= 1 )
              {
                _BitScanForward64(&v45, v44);
                v46 = (unsigned int)v45;
                goto LABEL_76;
              }
            }
            if ( v22 == v41 )
              goto LABEL_78;
            v28 = !_BitScanReverse64((unsigned __int64 *)&v47, v25);
            v25 = v22[1];
            if ( v28 )
            {
              ++v22;
              v40 = 64LL;
              v73 = 64;
            }
            else
            {
              v40 = (unsigned int)(63 - v47);
              ++v22;
              v73 = 63 - v47;
            }
          }
          while ( (unsigned __int64)++v22 <= v24 )
          {
            v25 = *v22;
            if ( *v22 != -1LL )
            {
              v40 = 0LL;
              goto LABEL_64;
            }
          }
        }
      }
      else
      {
        v26 = v24 + 8;
        if ( (v23 & 0x3F) == 0 )
          v26 = v65 + 8 * (v23 >> 6);
        if ( v25 )
        {
          if ( *++v22 )
            goto LABEL_20;
          v28 = !_BitScanReverse64((unsigned __int64 *)&v29, v25);
          if ( v28 )
          {
            v27 = 64;
            v67 = 64;
          }
          else
          {
            v27 = 63 - v29;
            v67 = 63 - v29;
          }
        }
        else
        {
          v27 = 0;
        }
LABEL_26:
        v21 = ((__int64)((__int64)v22 - v65) >> 3 << 6) - v27;
        if ( v21 <= v23 )
        {
          v31 = &v22[(a1 - v27) >> 6];
          for ( ++v22; v22 != v31; ++v22 )
          {
            if ( *v22 )
              goto LABEL_20;
          }
          v32 = ((_BYTE)a1 - (_BYTE)v27) & 0x3F;
          if ( (((_BYTE)a1 - (_BYTE)v27) & 0x3F) == 0 )
            goto LABEL_34;
          v28 = !_BitScanForward64((unsigned __int64 *)&v33, *v22);
          if ( v28 )
            LODWORD(v33) = 64;
          v69 = v33;
          if ( (unsigned int)v33 >= v32 )
            goto LABEL_34;
LABEL_20:
          while ( (unsigned __int64)v22 <= v26 )
          {
            if ( !*++v22 )
            {
              v28 = !_BitScanReverse64((unsigned __int64 *)&v30, *(v22 - 1));
              if ( v28 )
                v27 = 64;
              else
                v27 = 63 - v30;
              v68 = v27;
              goto LABEL_26;
            }
          }
        }
      }
LABEL_78:
      v21 = -1LL;
LABEL_35:
      v12 = v78;
      v17 = v63;
LABEL_36:
      if ( !v18 )
      {
LABEL_83:
        v12 = v78;
        v20 = v21;
        v8 = a4;
        v9 = v76;
        goto LABEL_84;
      }
      v34 = a1 + v12;
      v18 = 0LL;
      if ( a1 + v12 > v17 )
        v34 = v17;
      v19 = v34 - 1;
    }
  }
  v20 = v18 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_84:
  if ( v20 == -1LL || *(_BYTE *)(v8 + 48) == 1 && v20 < v12 )
    return -1LL;
  v51 = v74;
  KeAcquireInStackQueuedSpinLock(&v74[19].Alignment, &LockHandle);
  v52 = (__int64)v51 + 8 * v9;
  v53 = *(_QWORD *)(v52 + 384);
  if ( *(_BYTE *)(v8 + 48) == 1 || v53 < a5 || v53 >= a5 + a6 )
  {
    v53 = -1LL;
  }
  else if ( v20 + a5 < v53 )
  {
    v20 = v53 - a5;
  }
  if ( *(_DWORD *)v8 != 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v64, a1, v20);
    v63 = ClearBitsAndSet;
    v57 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1LL )
    {
      v56 = (_DWORD *)a4;
      if ( *(_BYTE *)(a4 + 48) != 1 || ClearBitsAndSet >= v78 )
      {
        v55 = ClearBitsAndSet + a5;
        if ( !*(_DWORD *)a4 && v53 != -1LL && a1 == 1 )
          *(_QWORD *)(v52 + 384) = v55 + 1;
        v54 = a2;
        goto LABEL_111;
      }
      RtlClearBitsEx((__int64)&v64, ClearBitsAndSet, a1);
    }
LABEL_100:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return -1LL;
  }
  v54 = a2;
  v63 = MiCheckPoolForContiguousPages((unsigned int)&v64, a1, v20, v8, a5, a2);
  v55 = v63;
  if ( v63 == -1 )
    goto LABEL_100;
  v56 = (_DWORD *)a4;
  v57 = -1;
  v63 = -1LL;
LABEL_111:
  MiAllocatingNonPagedPoolVa(v51, v76, v55, a1);
  if ( !*v56 && !v76 && a1 <= 3 )
    a1 += MiReplenishNonPagedSlists((unsigned int)&v64, v54, (int)v55 - v57, v57, a1);
  MiIncreaseNonPagedPoolUsage(v51, v76, v55, a1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v61 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v62 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v62);
  }
  __writecr8(v61);
  return v55;
}
