/*
 * XREFs of MiSwitchToPfns @ 0x1409BB954
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     MiCreateFreePfns @ 0x1409BBBA8 (MiCreateFreePfns.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 *v3; // r13
  __int64 *i; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  int v7; // eax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 *v10; // r14
  unsigned __int128 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  char v16; // r9
  unsigned __int8 v17; // si
  __int64 v18; // rcx
  char v19; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v21; // r8
  int v22; // edx
  _QWORD *v23; // r8
  _BYTE v24[16]; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  unsigned __int64 v27; // [rsp+60h] [rbp-38h]
  __int64 *v28; // [rsp+A0h] [rbp+8h]

  v2 = MmPfnDatabase + 48 * qword_14043F5C0;
  if ( !qword_14043F5C0 && !*(_WORD *)(v2 + 32) )
  {
    v17 = MiLockPageInline(MmPfnDatabase + 48 * qword_14043F5C0);
    *(_QWORD *)(v2 + 40) &= 0xFFFFFFF000000000uLL;
    v18 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v2 + 32) = 0;
    v19 = *(_BYTE *)(v2 + 34) & 0xFD;
    *(_QWORD *)(v2 + 24) = v18 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v2 + 34) = v19 | 5;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v2 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0) << 58) | *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL;
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
  v28 = v3;
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
          goto LABEL_54;
        if ( (_DWORD)v5 != 22 )
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
                    v16 = 0x80;
                  MiInitializeUnusablePfns(v10, v14, 0, v16, 0LL, 0LL, 0);
                }
                else
                {
                  v25 = 2;
                  v26 = (__int64)(v10 + 0xB000000000LL) / 48;
                  v27 = v14;
                  MxCreateFreePfns(v24);
                }
                v6 -= v15;
                v12 = 48 * v15;
                goto LABEL_19;
              }
              if ( (_DWORD)v5 == 29 || (_DWORD)v5 == 36 )
              {
                v21 = v10[1];
                if ( (_DWORD)v5 == 29 )
                {
                  if ( !v21 )
                    goto LABEL_53;
                  if ( MiPteInShadowRange(v10[1]) && (unsigned int)MiPteHasShadow() )
                    v22 = 1;
                  *v23 = 0LL;
                  if ( v22 )
                    MiWritePteShadow((__int64)v23, 0LL);
                  v10[1] = 0LL;
                  v21 = 0LL;
                }
                if ( !v21 )
                {
LABEL_53:
                  MiInitializeUnusablePfns(v10, 1uLL, 0, 128, 0LL, 0LL, 0);
                  goto LABEL_18;
                }
                MiMarkPfnVerified((ULONG_PTR)v10, 0);
              }
LABEL_18:
              --v6;
              v12 = 48LL;
LABEL_19:
              v10 = (unsigned __int64 *)((char *)v10 + v12);
              if ( !v6 )
              {
                v3 = v28;
                break;
              }
            }
          }
        }
      }
      if ( (_DWORD)v5 == 3 )
      {
LABEL_54:
        if ( v8 <= qword_14043F5C8 && v6 + v8 > qword_14043F5C8 + 1 )
          i[4] = (unsigned int)(qword_14043F5C8 - v8 + 1);
      }
    }
  }
  result = KeFlushTb(3u, 2u);
  MiFlags |= 0x8000000u;
  return result;
}
