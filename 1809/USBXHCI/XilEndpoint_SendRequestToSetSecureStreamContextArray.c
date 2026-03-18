/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0014B7C
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C001430C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        void *Src)
{
  __int64 v5; // rsi
  unsigned int v6; // ecx
  size_t v7; // r14
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbp
  int v13; // edi
  const void *v14; // rdx
  unsigned __int16 v15; // r9
  int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp+8h]
  int v20; // [rsp+90h] [rbp+18h] BYREF

  v20 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = -1;
  v7 = 16LL * a4;
  if ( v7 <= 0xFFFFFFFF )
    v6 = 16 * a4;
  v19 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 <= 0xFFFFFFFF )
  {
    if ( v6 + 48 < v6 )
      v10 = 0;
    else
      v10 = v6 + 48;
  }
  else
  {
    v10 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v10, 0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v14 = Src;
    v12[8] = 37;
    *((_QWORD *)v12 + 3) = a2;
    v12[10] = 0;
    v12[11] = a4;
    memmove(v12 + 12, v14, v7);
    v13 = SecureChannel_SendRequestSynchronously(v19, (_DWORD)v12, v10, (unsigned int)&v20, 4);
    if ( v13 >= 0 )
    {
      v13 = v20;
      if ( v20 >= 0 )
      {
        v13 = 0;
        goto LABEL_16;
      }
      v15 = 20;
      v18 = *(_DWORD *)(v5 + 144);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    else
    {
      v15 = 19;
      v18 = *(_DWORD *)(v5 + 144);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      v15,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v17,
      v18);
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v13;
  }
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    2u,
    0xDu,
    0x12u,
    (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v10);
  return (unsigned int)-1073741670;
}
