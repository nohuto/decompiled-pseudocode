/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C001782C
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0016F3C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src)
{
  __int64 v6; // rdi
  size_t v7; // rsi
  __int64 v9; // r13
  unsigned int v10; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbp
  int v13; // ebx
  const void *v14; // rdx
  unsigned __int16 v15; // r9
  int v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 48, (int)v7 + 48 < (unsigned int)v7) )
    v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v10, 0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v14 = Src;
    v12[10] = 0;
    v12[8] = 37;
    *((_QWORD *)v12 + 3) = a2;
    v12[11] = a4;
    memmove(v12 + 12, v14, v7);
    v13 = SecureChannel_SendRequestSynchronously(v9, (_DWORD)v12, v10, (unsigned int)&v19, 4);
    if ( v13 >= 0 )
    {
      v13 = v19;
      if ( v19 >= 0 )
      {
        v13 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 20;
        v18 = *(_DWORD *)(v6 + 144);
        v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 19;
      v18 = *(_DWORD *)(v6 + 144);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
LABEL_11:
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        v15,
        (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
        v17,
        v18);
    }
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x12u,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v10);
  return (unsigned int)-1073741670;
}
