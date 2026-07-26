/*
 * XREFs of ndisSriovInterfaceQueryProbedBars @ 0x1C011AE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceQueryProbedBars(__int64 a1, __int64 a2)
{
  int v4; // edx
  unsigned int *PoolWithTag; // rax
  int v6; // edx
  unsigned int *v7; // rbx
  unsigned int SetMiniport; // edi
  __int64 v9; // rdx
  _QWORD v11[32]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v11, 0, 0xF8uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      97,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F69444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *PoolWithTag = 524672;
    PoolWithTag[1] = 8;
    memset(v11, 0, 0xF8uLL);
    LODWORD(v11[11]) |= 8u;
    LODWORD(v11[1]) = 0;
    v11[13] = &ndisIntReqGeneric;
    v11[0] = 15466902LL;
    LODWORD(v11[4]) = 66136;
    v11[5] = v7;
    LODWORD(v11[6]) = 32;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v11, 0, 0LL);
    if ( !SetMiniport )
    {
      v9 = v7[1];
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + v9);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)((char *)v7 + v9 + 16);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    SetMiniport = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      26,
      98,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      SetMiniport);
  }
  return SetMiniport;
}
