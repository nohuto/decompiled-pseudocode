/*
 * XREFs of CrmSrvActivityAllocate @ 0x180032E38
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x180032D20 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmLogSrvActivityAllocateStop @ 0x180032D48 (CrmLogSrvActivityAllocateStop.c)
 *     CrmRegistrationCreateActivity @ 0x180032FD4 (CrmRegistrationCreateActivity.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityAllocate(__int64 *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-70h] BYREF
  UUID *v16; // [rsp+58h] [rbp-50h]
  int v17; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+64h] [rbp-44h]

  v5 = -1LL;
  v7 = a3;
  if ( dword_18009B128 > 5u )
  {
    v18 = 0;
    v16 = &Uuid;
    v17 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C953, 0LL, 0LL, 3u, &pData);
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 >= 7 )
    goto LABEL_11;
  if ( (unsigned int)v7 > 0x1E )
  {
    v11 = -1073741811;
    goto LABEL_7;
  }
  if ( *((_DWORD *)&CrmActivityToPolicyTable + 3 * v7) != v10 )
  {
LABEL_11:
    v11 = -1073741811;
    goto LABEL_10;
  }
  v11 = 0;
LABEL_7:
  if ( v11 >= 0 )
  {
    v11 = CrmRegistrationCreateActivity(a2, (unsigned int)v7, &v14);
    if ( v11 >= 0 )
    {
      v12 = v14;
      v11 = 0;
      v5 = *(_QWORD *)(v14 + 40);
      *a1 = v5;
      *a5 = *(_QWORD *)(v12 + 104);
    }
  }
LABEL_10:
  CrmLogSrvActivityAllocateStop(a2, v7, v5, a4, v11);
  return (unsigned int)v11;
}
