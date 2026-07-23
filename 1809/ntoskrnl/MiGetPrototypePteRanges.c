/*
 * XREFs of MiGetPrototypePteRanges @ 0x1401252E4
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140124E6C (MiReplacePageOfProtoPool.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     MiObtainProtoBaseFromNode @ 0x1400960E4 (MiObtainProtoBaseFromNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int64 v15; // rbx
  _QWORD *i; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 j; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 NumberToSet; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 + 4096;
  v5 = 1;
  v6 = ExAcquireSpinLockShared(&dword_140439E38);
  v7 = (_QWORD *)qword_140439E30;
  v8 = v6;
  if ( qword_140439E30 )
  {
    do
    {
      v9 = MiObtainProtoBaseFromNode(v7, &v30);
      if ( v10 < v9 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( a1 < v9 + 8 * v30 )
          break;
        v7 = (_QWORD *)v7[1];
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
      v17 = (__int64)(v14 - a1) >> 3;
      if ( v13 + (unsigned __int64)(unsigned int)v17 > 0x200 )
      {
        LODWORD(v13) = 512 - v17;
        NumberToSet = (unsigned int)(512 - v17);
      }
      RtlSetBits(a2, v17, v13);
      if ( (_DWORD)v17 )
      {
        v18 = *(_QWORD *)v11;
        v19 = v11;
        if ( *(_QWORD *)v11 )
        {
          do
          {
            v11 = v18;
            v18 = *(_QWORD *)(v18 + 8);
          }
          while ( v18 );
        }
        else
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v11 || *(_QWORD *)(v11 + 8) == v19 )
              break;
            v19 = v11;
          }
        }
        if ( v11 )
          continue;
      }
      break;
    }
    v15 = v7[1];
    if ( v15 )
    {
      for ( i = *(_QWORD **)v15; i; i = (_QWORD *)*i )
        v15 = (unsigned __int64)i;
    }
    else
    {
      for ( j = v7[2]; ; j = *(_QWORD *)(v15 + 16) )
      {
        v15 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v15 || *(_QWORD **)v15 == v7 )
          break;
        v7 = (_QWORD *)v15;
      }
    }
    while ( v15 )
    {
      v20 = MiObtainProtoBaseFromNode((_QWORD *)v15, &NumberToSet);
      if ( v20 >= v3 || v20 < a1 )
        break;
      if ( (*(_BYTE *)(v15 + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v22 = NumberToSet;
      v23 = (__int64)(v20 - a1) >> 3;
      v24 = (unsigned int)v23;
      if ( (unsigned __int64)(unsigned int)v23 + NumberToSet > 0x200 )
      {
        v22 = (unsigned int)(512 - v23);
        NumberToSet = v22;
      }
      RtlSetBits(a2, v23, v22);
      if ( v24 + v22 == 512 )
        break;
      v25 = *(_QWORD **)(v15 + 8);
      v26 = v15;
      if ( v25 )
      {
        do
        {
          v15 = (unsigned __int64)v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
      }
      else
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v15 || *(_QWORD *)v15 == v26 )
            break;
          v26 = v15;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v8);
  return v5;
}
