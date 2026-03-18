/*
 * XREFs of XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00173F0
 * Callers:
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0016D20 (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToAllocateSecureStreamContextArray(
        __int64 *a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  int v14; // [rsp+28h] [rbp-41h]
  int v15; // [rsp+30h] [rbp-39h]
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h]
  __int64 v18; // [rsp+50h] [rbp-19h]
  _QWORD v19[7]; // [rsp+58h] [rbp-11h] BYREF

  memset(v19, 0, sizeof(v19));
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v8 = *a1;
  v9 = *(_QWORD *)(*(_QWORD *)a1[4] + 112LL);
  v19[3] = 0LL;
  LODWORD(v19[4]) = 35;
  v19[5] = v8;
  LODWORD(v19[6]) = a2;
  v10 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v19, 56, (unsigned int)&v16, 24);
  if ( v10 >= 0 )
  {
    v10 = v16;
    if ( (int)v16 >= 0 )
    {
      v10 = 0;
      *a3 = v17;
      *a4 = v18;
      return (unsigned int)v10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = a1[4];
      v12 = 13;
      v15 = *(_DWORD *)(v11 + 144);
      v14 = *(unsigned __int8 *)(*(_QWORD *)(v11 + 16) + 135LL);
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a1[4];
    v12 = 12;
    v15 = *(_DWORD *)(v11 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v11 + 16) + 135LL);
LABEL_4:
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v11 + 80),
      2u,
      0xDu,
      v12,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v14,
      v15);
  }
  return (unsigned int)v10;
}
