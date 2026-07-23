/*
 * XREFs of KitLogFeatureUsage @ 0x14031E9F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     RtlPcToFileName @ 0x14018E9D0 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlPcToFilePath @ 0x14089A8C0 (RtlPcToFilePath.c)
 */

NTSTATUS __fastcall KitLogFeatureUsage(ULONGLONG a1, unsigned __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // eax
  __int16 v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v13; // [rsp+78h] [rbp-90h]
  __int64 v14; // [rsp+80h] [rbp-88h]
  __int16 *v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  wchar_t *Buffer; // [rsp+98h] [rbp-70h]
  int Length; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  _BYTE v20[512]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  v10 = a3;
  if ( KitEtwHandle && EtwEventEnabled(KitEtwHandle, &KitFeatureIdUsedEvent) )
  {
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 || (a2 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_13:
          v10 = 3;
          v11 = (UNICODE_STRING)NoCallerIdString;
LABEL_14:
          v13 = &v10;
          v9 = v11.Length >> 1;
          v15 = &v9;
          Buffer = v11.Buffer;
          Length = v11.Length;
          v14 = 4LL;
          UserData.Ptr = a1;
          *(_QWORD *)&UserData.Size = 16LL;
          v16 = 2LL;
          v19 = 0;
          return EtwWriteEx(KitEtwHandle, &KitFeatureIdUsedEvent, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( a2 )
    {
      memset(v20, 0, 0x1FEuLL);
      *(_DWORD *)&v11.Length = 33423360;
      v11.Buffer = (wchar_t *)v20;
      v7 = KeGetCurrentIrql() > 1u ? RtlPcToFileName(a2, &v11) : RtlPcToFilePath(a2, &v11);
      if ( v7 >= 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  return 0;
}
