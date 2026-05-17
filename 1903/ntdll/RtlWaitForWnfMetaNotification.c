/*
 * XREFs of RtlWaitForWnfMetaNotification @ 0x180006140
 * Callers:
 *     <none>
 * Callees:
 *     RtlRegisterForWnfMetaNotification @ 0x1800060E0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     ZwQueryWnfStateNameInformation @ 0x18009F290 (ZwQueryWnfStateNameInformation.c)
 */

__int64 __fastcall RtlWaitForWnfMetaNotification(__int64 a1, int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v6; // r15
  int v7; // edi
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF

  v12 = 0LL;
  v6 = a3;
  v18 = a1;
  *a5 = 0;
  if ( a3 > 0x7FFFFFFF || (a2 & 0x11) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFFFFF1) == 0 )
  {
    v7 = 0;
    if ( (a2 & 8) != 0 )
    {
      v8 = ZwQueryWnfStateNameInformation(&v18, 2LL, 0LL, &v11, 4);
      if ( v8 )
        goto LABEL_16;
      if ( v11 )
        v7 = 8;
    }
    if ( (a2 & 6) == 0 )
    {
LABEL_9:
      if ( v7 )
      {
        *a5 = v7;
        return 0LL;
      }
      LOBYTE(v10) = 0;
      v8 = ZwCreateEvent(&v12, 2031619LL, 0LL, 0LL, v10);
      if ( v8 >= 0 )
      {
        v17 = 0;
        v15 = 0;
        v16 = v12;
        v8 = RtlRegisterForWnfMetaNotification(&v14, v18, a2, (int)sub_1800846F0, (__int64)&v15);
        if ( v8 >= 0 )
        {
          v13 = -10000 * v6;
          v8 = ZwWaitForSingleObject(v12, 0LL, &v13);
          if ( !v8 )
            *a5 = v15;
          RtlUnsubscribeWnfNotificationWaitForCompletion(v14);
        }
      }
      goto LABEL_16;
    }
    v8 = ZwQueryWnfStateNameInformation(&v18, 1LL, 0LL, &v11, 4);
    if ( !v8 )
    {
      if ( (a2 & 2) != 0 && v11 )
        v7 |= 2u;
      if ( (a2 & 4) != 0 && !v11 )
        v7 |= 4u;
      goto LABEL_9;
    }
LABEL_16:
    if ( v12 )
      ZwClose(v12);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741811;
}
