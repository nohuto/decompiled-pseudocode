/*
 * XREFs of MiSwitchToPfns @ 0x1409F25FC
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiPageToChannel @ 0x14002F75C (MiPageToChannel.c)
 *     MiMarkPfnVerified @ 0x14008D844 (MiMarkPfnVerified.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x140189354 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1401CCDF0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCreateFreePfns @ 0x1409F2870 (MiCreateFreePfns.c)
 *     MxCreateFreePfns @ 0x1409F29D8 (MxCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rsi
  __int64 *v3; // r13
  __int64 *i; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  int v7; // eax
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 *v10; // r14
  unsigned __int128 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // rbp
  unsigned int v16; // r9d
  unsigned __int8 v17; // bp
  __int64 v18; // rcx
  char v19; // al
  unsigned int v20; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v22; // r8
  int v23; // edx
  _QWORD *v24; // r8
  _QWORD v25[12]; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v26; // [rsp+D0h] [rbp+8h]

  memset(v25, 0, 0x28uLL);
  v2 = MmPfnDatabase + 48 * qword_14046A080;
  if ( !qword_14046A080 && !*(_WORD *)(v2 + 32) )
  {
    v17 = MiLockPageInline(MmPfnDatabase + 48 * qword_14046A080);
    *(_QWORD *)(v2 + 40) &= 0xFFFFFFF000000000uLL;
    v18 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v2 + 32) = 0;
    v19 = *(_BYTE *)(v2 + 34) & 0xFD;
    *(_QWORD *)(v2 + 24) = v18 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v2 + 34) = v19 | 5;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x3F | 0x40;
    v20 = MiPageToNode(0LL, 0);
    memset(&v25[5], 0, 0x30uLL);
    v25[10] = *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v20 << 58);
    *(_QWORD *)(v2 + 40) = v25[10];
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v17);
  }
  v3 = (__int64 *)(a1 + 32);
  v26 = v3;
  for ( i = (__int64 *)*v3; i != v3; i = (__int64 *)*i )
  {
    v5 = *((int *)i + 4);
    v6 = i[4];
    if ( (v5 & 0x80000000) != 0LL )
    {
      *((_DWORD *)i + 4) = v5 & 0x7FFFFFFF;
      continue;
    }
    if ( (v5 & 0x40000000) != 0
      || (unsigned int)v5 <= 0x18 && (v7 = 16777524, _bittest(&v7, v5))
      || (_DWORD)v5 == 29 && (MiFlags & 0x2000) == 0 )
    {
      MiCreateFreePfns(i);
    }
    else
    {
      v8 = i[3];
      if ( !v8 )
      {
        if ( !--v6 )
          continue;
        v8 = 1LL;
      }
      if ( (unsigned int)v5 > 0x22 || (v9 = 0x5C0800040LL, !_bittest64(&v9, v5)) )
      {
        if ( (_DWORD)v5 == 3 )
          goto LABEL_55;
        if ( (_DWORD)v5 != 22 && (unsigned int)(v5 - 38) > 2 )
        {
          v10 = (unsigned __int64 *)(48 * v8 - 0x58000000000LL);
          if ( v6 )
          {
            while ( 1 )
            {
              v11 = RtlCompareMemoryUlong(v10, 48 * v6, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
              if ( *((_QWORD *)&v11 + 1) >> 5 )
              {
                v8 = (__int64)(v10 + 0xB000000000LL) / 48;
                v14 = MiRestrictRangeToNode(v8, *((_QWORD *)&v11 + 1) >> 5);
                v15 = v14;
                if ( (((_DWORD)v5 - 9) & 0xFFFFFFFD) != 0 )
                {
                  if ( (_DWORD)v5 == 29 || (v16 = 64, (_DWORD)v5 == 36) )
                    v16 = 128;
                  MiInitializeUnusablePfns(v10, v14, 0, v16, 0LL, 0LL, 0);
                }
                else
                {
                  LODWORD(v25[2]) = 2;
                  v25[3] = (__int64)(v10 + 0xB000000000LL) / 48;
                  v25[4] = v14;
                  MxCreateFreePfns(v25);
                }
                v6 -= v15;
                v12 = 48 * v15;
                goto LABEL_20;
              }
              if ( (_DWORD)v5 == 29 || (_DWORD)v5 == 36 )
              {
                v22 = v10[1];
                if ( (_DWORD)v5 == 29 )
                {
                  if ( !v22 )
                    goto LABEL_54;
                  if ( MiPteInShadowRange(v10[1]) && (unsigned int)MiPteHasShadow() )
                    v23 = 1;
                  *v24 = 0LL;
                  if ( v23 )
                    MiWritePteShadow((__int64)v24);
                  v10[1] = 0LL;
                  v22 = 0LL;
                }
                if ( !v22 )
                {
LABEL_54:
                  MiInitializeUnusablePfns(v10, 1uLL, 0, 0x80u, 0LL, 0LL, 0);
                  goto LABEL_19;
                }
                MiMarkPfnVerified((ULONG_PTR)v10, 0);
              }
LABEL_19:
              --v6;
              v12 = 48LL;
LABEL_20:
              v10 = (unsigned __int64 *)((char *)v10 + v12);
              if ( !v6 )
              {
                v3 = v26;
                break;
              }
            }
          }
        }
      }
      if ( (_DWORD)v5 == 3 )
      {
LABEL_55:
        if ( v8 <= qword_14046A088 && v6 + v8 > qword_14046A088 + 1 )
          i[4] = (unsigned int)(qword_14046A088 - v8 + 1);
      }
    }
  }
  result = KeFlushTb(3LL, 2u);
  MiFlags |= 0x8000000u;
  return result;
}
