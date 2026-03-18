/*
 * XREFs of TtmiSetDisplayPowerRequest @ 0x1408BD8A0
 * Callers:
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408BF670 (TtmpDispatchSetDisplayPowerRequest.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmiGetTerminalById @ 0x1408BBE94 (TtmiGetTerminalById.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408BC1D0 (TtmiSetPendingOnOffRequest.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408BE064 (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogDisplayPowerRequestSet @ 0x1408C1380 (TtmiLogDisplayPowerRequestSet.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmiSetDisplayPowerRequest(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  char PowerRequestEntryById; // al
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 i; // r10
  __int64 *v12; // r10
  unsigned int v13; // ecx
  bool v14; // bp
  _QWORD *PoolWithTag; // rax
  __int64 *v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // r11
  __int64 j; // r10
  _QWORD *v20; // r10
  __int64 v22; // rdx
  _QWORD *v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // eax
  _QWORD v26[5]; // [rsp+30h] [rbp-28h] BYREF

  PowerRequestEntryById = TtmpFindPowerRequestEntryById(a1, a3, v26);
  v9 = 0;
  if ( a4 )
  {
    if ( PowerRequestEntryById )
    {
      v10 = v26[0] + 48LL;
      for ( i = *(_QWORD *)(v26[0] + 48LL); i != v10; i = *v12 )
      {
        if ( (int)TtmiGetTerminalById(v26, a1, *(_DWORD *)(i - 8)) >= 0 && *(_DWORD *)(v26[0] + 28LL) == a2[7] )
        {
          v9 = -1073741270;
          goto LABEL_26;
        }
      }
      if ( a2[8] == -1 )
      {
        v9 = -1073741675;
        goto LABEL_26;
      }
      v13 = a2[10];
      v14 = v13 - 2 <= 1;
      if ( v13 == 2 )
        TtmiSetPendingOnOffRequest(a1, a2, 1, 8u, 0x54416455u);
      if ( !v14 )
      {
        v9 = -1073741637;
        goto LABEL_27;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x52507454u);
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
LABEL_26:
        TtmiLogError("TtmiSetDisplayPowerRequest");
        goto LABEL_27;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_DWORD *)PoolWithTag = a2[7];
      v16 = PoolWithTag + 1;
      v17 = *(__int64 ***)(v10 + 8);
      if ( *v17 == (__int64 *)v10 )
      {
        *v16 = v10;
        v16[1] = (__int64)v17;
        *v17 = v16;
        *(_QWORD *)(v10 + 8) = v16;
        ++a2[8];
        goto LABEL_27;
      }
LABEL_34:
      __fastfail(3u);
    }
LABEL_25:
    v9 = -1073741275;
    goto LABEL_26;
  }
  if ( !PowerRequestEntryById )
    goto LABEL_25;
  v18 = v26[0] + 48LL;
  for ( j = *(_QWORD *)(v26[0] + 48LL); ; j = *v20 )
  {
    if ( j == v18 )
      goto LABEL_25;
    if ( (int)TtmiGetTerminalById(v26, a1, *(_DWORD *)(j - 8)) >= 0 && *(_DWORD *)(v26[0] + 28LL) == a2[7] )
      break;
  }
  v22 = *v20;
  if ( *(_QWORD **)(*v20 + 8LL) != v20 )
    goto LABEL_34;
  v23 = (_QWORD *)v20[1];
  if ( (_QWORD *)*v23 != v20 )
    goto LABEL_34;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  ExFreePoolWithTag(v20 - 1, 0x52507454u);
  v24 = a2[8];
  if ( !v24 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  v25 = v24 - 1;
  a2[8] = v25;
  if ( !v25 )
  {
    a2[9] |= 0x24u;
    TtmiScheduleSessionWorker(a1, 2);
  }
LABEL_27:
  TtmiLogDisplayPowerRequestSet(a2[7], a3, a4, v9);
  return v9;
}
