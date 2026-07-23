/*
 * XREFs of TtmiSetDisplayPowerRequest @ 0x140881584
 * Callers:
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140883298 (TtmpDispatchSetDisplayPowerRequest.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiGetTerminalById @ 0x14087FD00 (TtmiGetTerminalById.c)
 *     TtmiSetPendingOnOffRequest @ 0x14087FFE4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x140881BDC (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x140884F60 (TtmiLogDisplayPowerRequestSet.c)
 */

__int64 __fastcall TtmiSetDisplayPowerRequest(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  char PowerRequestEntryById; // al
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v11; // rsi
  __int64 i; // r10
  __int64 *v13; // r10
  unsigned int v14; // ecx
  bool v15; // bp
  _QWORD *PoolWithTag; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // rax
  __int64 **v20; // rcx
  __int64 v21; // r11
  __int64 j; // r10
  _QWORD *v23; // r10
  __int64 v25; // rdx
  _QWORD *v26; // r8
  unsigned int v27; // eax
  unsigned int v28; // eax
  _QWORD v29[5]; // [rsp+30h] [rbp-28h] BYREF

  PowerRequestEntryById = TtmpFindPowerRequestEntryById(a1, a3, v29);
  v9 = 0;
  if ( a4 )
  {
    if ( !PowerRequestEntryById )
    {
      v10 = 838;
LABEL_28:
      v9 = -1073741275;
      goto LABEL_29;
    }
    v11 = v29[0] + 48LL;
    for ( i = *(_QWORD *)(v29[0] + 48LL); i != v11; i = *v13 )
    {
      if ( (int)TtmiGetTerminalById(v29, a1, *(_DWORD *)(i - 8)) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      {
        v9 = -1073741270;
        v10 = 881;
        goto LABEL_29;
      }
    }
    if ( a2[8] == -1 )
    {
      v9 = -1073741675;
      v10 = 894;
      goto LABEL_29;
    }
    v14 = a2[10];
    v15 = v14 - 2 <= 1;
    if ( v14 == 2 )
      TtmiSetPendingOnOffRequest(a1, a2, 1, 8u, 0x54416455u);
    if ( !v15 )
    {
      v9 = -1073741637;
      goto LABEL_31;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x52507454u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      v17 = -1;
      v18 = -1073741670;
      v10 = 912;
      goto LABEL_30;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_DWORD *)PoolWithTag = a2[7];
    v19 = PoolWithTag + 1;
    v20 = *(__int64 ***)(v11 + 8);
    if ( *v20 == (__int64 *)v11 )
    {
      *v19 = v11;
      v19[1] = (__int64)v20;
      *v20 = v19;
      *(_QWORD *)(v11 + 8) = v19;
      ++a2[8];
      goto LABEL_31;
    }
    goto LABEL_38;
  }
  if ( !PowerRequestEntryById )
  {
    v10 = 957;
    goto LABEL_28;
  }
  v21 = v29[0] + 48LL;
  for ( j = *(_QWORD *)(v29[0] + 48LL); ; j = *v23 )
  {
    if ( j == v21 )
    {
      v10 = 1001;
      goto LABEL_28;
    }
    if ( (int)TtmiGetTerminalById(v29, a1, *(_DWORD *)(j - 8)) >= 0 && *(_DWORD *)(v29[0] + 28LL) == a2[7] )
      break;
  }
  v25 = *v23;
  if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v26 = (_QWORD *)v23[1], (_QWORD *)*v26 != v23) )
LABEL_38:
    __fastfail(3u);
  *v26 = v25;
  *(_QWORD *)(v25 + 8) = v26;
  ExFreePoolWithTag(v23 - 1, 0x52507454u);
  v27 = a2[8];
  if ( v27 )
  {
    v28 = v27 - 1;
    a2[8] = v28;
    if ( !v28 )
    {
      a2[9] |= 0x24u;
      TtmiScheduleSessionWorker(a1, 2);
    }
  }
  else
  {
    v9 = -1073741811;
    v10 = 1028;
LABEL_29:
    v18 = -1;
    v17 = v9;
LABEL_30:
    TtmiLogError("TtmiSetDisplayPowerRequest", v10, v17, v18);
  }
LABEL_31:
  TtmiLogDisplayPowerRequestSet(a2[7], a3, a4, v9);
  return v9;
}
