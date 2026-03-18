/*
 * XREFs of MiMakeIoRangePermanent @ 0x1402C49B4
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x1402C4C60 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiRemoveUnmappedIoNode @ 0x1400F6EB0 (MiRemoveUnmappedIoNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 *v3; // rbx
  int v4; // r13d
  unsigned __int64 v5; // rdi
  int v6; // r15d
  KIRQL v7; // r12
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  bool i; // zf
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  bool v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdx
  bool v26; // r8
  _QWORD *v27; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v30; // [rsp+60h] [rbp+8h]
  unsigned __int64 *v31; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32) - v1;
  v31 = 0LL;
  v6 = 0;
  v30 = ExAcquireSpinLockExclusive(&dword_140466480);
  v7 = v30;
  v8 = v5 + 1;
  if ( !v8 )
    goto LABEL_34;
  do
  {
    v9 = (_QWORD *)qword_140466490;
    for ( i = qword_140466490 == 0; ; i = v12 == 0LL )
    {
      if ( i )
      {
        v17 = MiRemoveUnmappedIoNode((unsigned __int64 *)&qword_140466498, v1);
        v18 = (_QWORD *)v17;
        if ( !v17 )
        {
          v19 = v1 & 0x1FF;
          goto LABEL_29;
        }
        v20 = *(_QWORD *)(v17 + 40);
        v21 = 0;
        if ( !v3 )
          goto LABEL_28;
        while ( 1 )
        {
          if ( v20 < v3[5] )
          {
            v22 = *v3;
            if ( !*v3 )
            {
              v21 = 0;
LABEL_28:
              RtlAvlInsertNodeEx((unsigned __int64 *)&v31, (unsigned __int64)v3, v21, v18);
              v3 = v31;
              v19 = (v1 & 0xFFFFFFFFFLL) - v18[5];
LABEL_29:
              v23 = 512 - v19;
              v24 = v8;
              if ( v23 <= v8 )
                v24 = v23;
              v8 -= v24;
              v1 += v24;
              goto LABEL_32;
            }
          }
          else
          {
            v22 = v3[1];
            if ( !v22 )
            {
              v21 = 1;
              goto LABEL_28;
            }
          }
          v3 = (unsigned __int64 *)v22;
        }
      }
      v11 = v9[5];
      if ( v1 >= v11 )
        break;
      v12 = (_QWORD *)*v9;
LABEL_8:
      v9 = v12;
    }
    if ( v1 >= v11 + 512 )
    {
      v12 = (_QWORD *)v9[1];
      goto LABEL_8;
    }
    v13 = v9[6];
    v14 = (v1 & 0xFFFFFFFFFLL) - v11;
    v15 = (_WORD *)(v13 + 2 * v14);
    if ( v8 + v1 <= v11 + 512 )
      v16 = 2 * (v14 + v8);
    else
      v16 = 1024LL;
    if ( (unsigned __int64)v15 >= v13 + v16 )
      continue;
    while ( 2 )
    {
      if ( (*v15 & 0x3FFF) == 0 )
      {
        *v15 = 0x4000;
        goto LABEL_16;
      }
      if ( (unsigned __int16)*v15 >> 14 == v4 )
      {
LABEL_16:
        ++v15;
        ++v1;
        --v8;
        if ( (unsigned __int64)v15 >= v13 + v16 )
          goto LABEL_17;
        continue;
      }
      break;
    }
    ++dword_1404664D4;
    v6 = -1073741800;
    v8 = 0LL;
LABEL_17:
    v3 = v31;
LABEL_32:
    ;
  }
  while ( v8 );
  v7 = v30;
  if ( v6 < 0 )
    goto LABEL_44;
LABEL_34:
  v25 = (_QWORD *)qword_1404664E0;
  v26 = 0;
  if ( !qword_1404664E0 )
    goto LABEL_43;
  while ( 2 )
  {
    if ( *(_QWORD *)(a1 + 32) >= v25[3] )
    {
      if ( *(_QWORD *)(a1 + 24) <= v25[4] )
      {
        ++dword_1404664D8;
        v6 = -1073741800;
        goto LABEL_44;
      }
      v27 = (_QWORD *)v25[1];
      if ( !v27 )
      {
        v26 = 1;
        goto LABEL_43;
      }
      goto LABEL_40;
    }
    v27 = (_QWORD *)*v25;
    if ( *v25 )
    {
LABEL_40:
      v25 = v27;
      continue;
    }
    break;
  }
  v26 = 0;
LABEL_43:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1404664E0, (unsigned __int64)v25, v26, (_QWORD *)a1);
LABEL_44:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466480);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    v3 = v31;
  }
  __writecr8(v7);
  while ( v3 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v31, v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v31;
  }
  return (unsigned int)v6;
}
