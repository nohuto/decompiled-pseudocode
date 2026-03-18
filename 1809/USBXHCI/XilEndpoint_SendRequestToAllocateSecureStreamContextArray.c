/*
 * XREFs of XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C001479C
 * Callers:
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0014130 (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToAllocateSecureStreamContextArray(
        __int64 *a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  int v14; // [rsp+28h] [rbp-A0h]
  int v15; // [rsp+30h] [rbp-98h]
  int v16; // [rsp+40h] [rbp-88h] BYREF
  __int64 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+50h] [rbp-78h]
  _QWORD v19[7]; // [rsp+58h] [rbp-70h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)a1[4] + 112LL);
  memset(v19, 0, sizeof(v19));
  v9 = *a1;
  v19[3] = 0LL;
  v19[5] = v9;
  LODWORD(v19[4]) = 35;
  LODWORD(v19[6]) = a2;
  v10 = SecureChannel_SendRequestSynchronously(v8, (unsigned int)v19, 56, (unsigned int)&v16, 24);
  if ( v10 >= 0 )
  {
    v10 = v16;
    if ( v16 >= 0 )
    {
      v10 = 0;
      *a3 = v17;
      *a4 = v18;
      return (unsigned int)v10;
    }
    v11 = a1[4];
    v12 = 13;
    v15 = *(_DWORD *)(v11 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v11 + 16) + 135LL);
  }
  else
  {
    v11 = a1[4];
    v12 = 12;
    v15 = *(_DWORD *)(v11 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v11 + 16) + 135LL);
  }
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v11 + 80),
    2u,
    0xDu,
    v12,
    (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
    v14,
    v15);
  return (unsigned int)v10;
}
