/*
 * XREFs of MiGetPrototypePteRanges @ 0x1401280EC
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140127B6C (MiReplacePageOfProtoPool.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x1400E02B4 (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, _RTL_BITMAP *a2)
{
  unsigned __int64 v3; // r12
  unsigned int v5; // r14d
  KIRQL v6; // al
  _QWORD *v7; // rdi
  KIRQL v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 j; // rbx
  _QWORD *i; // rax
  unsigned __int64 v21; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  unsigned __int64 v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 NumberToSet; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 + 4096;
  v5 = 1;
  v6 = ExAcquireSpinLockShared(&dword_140464740);
  v7 = (_QWORD *)qword_140464738;
  v8 = v6;
  if ( qword_140464738 )
  {
    do
    {
      v9 = MiObtainProtoBaseFromNode(v7, &v30);
      if ( v10 >= v9 )
      {
        if ( a1 < v9 + 8 * v30 )
          break;
        v7 = (_QWORD *)v7[1];
      }
      else
      {
        v7 = (_QWORD *)*v7;
      }
    }
    while ( v7 );
  }
  v11 = (unsigned __int64)v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v12 = MiObtainProtoBaseFromNode((_QWORD *)v11, &NumberToSet);
      v13 = NumberToSet;
      v14 = v12;
      if ( v12 < a1 )
      {
        if ( v12 + 8 * NumberToSet > a1 )
        {
          v14 = a1;
          v13 = NumberToSet - ((__int64)(a1 - v12) >> 3);
          NumberToSet = v13;
        }
        if ( v14 < a1 )
          break;
      }
      if ( v14 >= v3 )
        break;
      if ( (*(_BYTE *)(v11 + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v15 = (__int64)(v14 - a1) >> 3;
      if ( v13 + (unsigned __int64)(unsigned int)v15 > 0x200 )
      {
        LODWORD(v13) = 512 - v15;
        NumberToSet = (unsigned int)(512 - v15);
      }
      RtlSetBits(a2, v15, v13);
      if ( (_DWORD)v15 )
      {
        v16 = *(_QWORD *)v11;
        v17 = v11;
        if ( *(_QWORD *)v11 )
        {
          while ( 1 )
          {
            v11 = v16;
            if ( !*(_QWORD *)(v16 + 8) )
              break;
            v16 = *(_QWORD *)(v16 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v11 || *(_QWORD *)(v11 + 8) == v17 )
              break;
            v17 = v11;
          }
        }
        if ( v11 )
          continue;
      }
      break;
    }
    v18 = v7[1];
    if ( v18 )
    {
      for ( i = *(_QWORD **)v18; i; i = (_QWORD *)*i )
        v18 = (unsigned __int64)i;
    }
    else
    {
      for ( j = v7[2]; ; j = *(_QWORD *)(v18 + 16) )
      {
        v18 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v18 || *(_QWORD **)v18 == v7 )
          break;
        v7 = (_QWORD *)v18;
      }
    }
    while ( v18 )
    {
      v21 = MiObtainProtoBaseFromNode((_QWORD *)v18, &NumberToSet);
      if ( v21 >= v3 || v21 < a1 )
        break;
      if ( (*(_BYTE *)(v18 + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v23 = NumberToSet;
      v24 = (__int64)(v21 - a1) >> 3;
      v25 = (unsigned int)v24;
      if ( (unsigned __int64)(unsigned int)v24 + NumberToSet > 0x200 )
      {
        v23 = (unsigned int)(512 - v24);
        NumberToSet = v23;
      }
      RtlSetBits(a2, v24, v23);
      if ( v25 + v23 == 512 )
        break;
      v26 = *(_QWORD **)(v18 + 8);
      v27 = v18;
      if ( v26 )
      {
        do
        {
          v18 = (unsigned __int64)v26;
          v26 = (_QWORD *)*v26;
        }
        while ( v26 );
      }
      else
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v18 || *(_QWORD *)v18 == v27 )
            break;
          v27 = v18;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140464740);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v8);
  return v5;
}
