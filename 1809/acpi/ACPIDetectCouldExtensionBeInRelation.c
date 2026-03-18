/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoMatch @ 0x1C009A6BC (ACPIDetectPdoMatch.c)
 *     ACPIDetectFilterMatch @ 0x1C009A720 (ACPIDetectFilterMatch.c)
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001422C (ACPIDeviceHasFirmwareDependencies.c)
 *     WPP_RECORDER_SF_IqL @ 0x1C0019554 (WPP_RECORDER_SF_IqL.c)
 *     WPP_RECORDER_SF_IqLL @ 0x1C00196D4 (WPP_RECORDER_SF_IqLL.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002C530 (ACPIInternalQueryExtendedAddress.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009AADC (ACPIInternalSendSynchronousIrp.c)
 *     ACPIMatchHardwareId @ 0x1C009E30C (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 *a1, _DWORD *a2, char a3, char a4, _QWORD *a5)
{
  char v5; // di
  char v7; // dl
  __int64 result; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // r14
  struct _DEVICE_OBJECT *v14; // r15
  bool v15; // di
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r12d
  __int64 *v20; // rcx
  int v21; // [rsp+20h] [rbp-E0h]
  char v22; // [rsp+51h] [rbp-AFh]
  char v23; // [rsp+52h] [rbp-AEh]
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v27; // [rsp+78h] [rbp-88h]
  _QWORD v28[9]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[8]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  v27 = a5;
  v22 = 0;
  v7 = 0;
  v26 = 0LL;
  *a5 = 0LL;
  v23 = 0;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( a3 && (a1[1] & 0x100000000000LL) == 0 || a4 && (a1[1] & 0x200000000000LL) == 0 )
    return 3221225524LL;
  if ( !a2 || !*a2 )
    return 0LL;
  v10 = a1[1];
  if ( (v10 & 0x2000100000000000LL) != 0 )
  {
    v5 = 1;
    v22 = 1;
    ACPIGet(a1, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v26, 0LL);
    v10 = a1[1];
    v7 = 0;
  }
  if ( (v10 & 0xA00000000000LL) == 0 || ACPIDeviceHasFirmwareDependencies((__int64)a1) )
  {
LABEL_10:
    v11 = 0;
    if ( !*a2 )
      return 0LL;
    while ( 1 )
    {
      if ( v7 )
      {
        if ( (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * v11 + 2], &String2) < 0 )
          goto LABEL_18;
        v12 = v11;
      }
      else
      {
        v12 = v11;
      }
      if ( v5 )
      {
        v13 = v26;
        v14 = *(struct _DEVICE_OBJECT **)&a2[2 * v12 + 2];
        v24 = 0LL;
        memset(v28, 0, sizeof(v28));
        LOWORD(v28[0]) = 2331;
        v15 = 0;
        v28[1] = v29;
        memset(v29, 0, sizeof(v29));
        LODWORD(v29[0]) = 65600;
        v29[1] = -1LL;
        v19 = ACPIInternalSendSynchronousIrp(v14);
        if ( v19 >= 0 )
        {
          WPP_RECORDER_SF_IqL((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v21);
          v24 = LODWORD(v29[1]);
          if ( (_DWORD)v13 == LODWORD(v29[1]) )
          {
            v15 = 1;
            if ( (int)ACPIInternalQueryExtendedAddress(v14, (__int64)&v24) >= 0 )
              v15 = v13 == v24;
          }
        }
        WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18, v21);
        if ( v19 >= 0 && v15 )
        {
          *v27 = *(_QWORD *)&a2[2 * v11 + 2];
          return 0LL;
        }
      }
LABEL_18:
      if ( ++v11 >= *a2 )
        return 0LL;
      v5 = v22;
      v7 = v23;
    }
  }
  result = ACPIGet(v20, 1145653343, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
  if ( (int)result >= 0 )
  {
    v7 = 1;
    String2.MaximumLength = String2.Length;
    v23 = 1;
    goto LABEL_10;
  }
  return result;
}
