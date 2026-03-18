/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017624
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C00172B4 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  unsigned int v10; // ebx
  int *PoolWithTag; // rsi
  int v12; // ebx
  unsigned __int16 v13; // r9
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+30h] [rbp-88h]
  _QWORD v17[6]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  memset(v17, 0, sizeof(v17));
  v8 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v8 > 0xFFFFFFFF || (v10 = v8 + 4, (int)v8 + 4 < (unsigned int)v8) )
    v10 = 0;
  PoolWithTag = (int *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v10, 0x49434858u);
  if ( PoolWithTag )
  {
    memset(v17, 0, 24);
    v17[4] = 36LL;
    v17[3] = a2;
    LODWORD(v17[5]) = 0;
    HIDWORD(v17[5]) = a4;
    v12 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v17, 48, (_DWORD)PoolWithTag, v10);
    if ( v12 >= 0 )
    {
      v12 = *PoolWithTag;
      if ( *PoolWithTag >= 0 )
      {
        memmove(a5, PoolWithTag + 1, 16LL * a4);
        v12 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 23;
        v16 = *(_DWORD *)(v5 + 144);
        v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 22;
      v16 = *(_DWORD *)(v5 + 144);
      v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
LABEL_11:
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        v13,
        (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
        v15,
        v16);
    }
LABEL_16:
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
    return (unsigned int)v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x15u,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v10);
  return (unsigned int)-1073741670;
}
