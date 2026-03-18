/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C0008730
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEnumChildren @ 0x1C000819C (ACPIIoctlEnumChildren.c)
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C00093B8 (WPP_RECORDER_SF_qqssdddd.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x1C000A018 (WPP_RECORDER_SF_qDDqssdddd.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x1C000A1B4 (WPP_RECORDER_SF_qDqssdddd.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  union _LARGE_INTEGER v4; // r12
  __int64 DeviceExtension; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // esi
  int v17; // r9d
  unsigned int v18; // r13d
  KIRQL v19; // dl
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v33; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER v34; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v35; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v36; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v37; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v39; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS v40; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v41; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v42; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v43; // [rsp+E8h] [rbp-18h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v16 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_13;
  }
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(_DWORD **)(DeviceExtension + 200);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C018 )
  {
    v27 = v9 - 3325980;
    if ( !v27 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    v28 = v27 - 4;
    if ( !v28 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v29 = v28 - 28;
    if ( !v29 )
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    v30 = v29 - 4;
    if ( !v30 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    v31 = v30 - 4;
    if ( v31 )
    {
      if ( v31 != 4 )
        goto LABEL_11;
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    }
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  }
  if ( v9 == 3325976 )
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703488;
  if ( v10 )
  {
    v11 = v10 - 24;
    if ( v11 )
    {
      v12 = v11 - 16364;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( v13 )
        {
          v14 = v13 - 4;
          if ( v14 )
          {
            v15 = v14 - 606068;
            if ( v15 )
            {
              if ( v15 != 4 )
              {
LABEL_11:
                v16 = -1073741637;
LABEL_12:
                *(_QWORD *)(a2 + 56) = 0LL;
                *(_DWORD *)(a2 + 48) = v16;
LABEL_13:
                IofCompleteRequest((PIRP)a2, 0);
                return v16;
              }
              return (unsigned int)ACPIIoctlEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
            }
            return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
          }
          v26 = *(unsigned __int8 **)(a2 + 24);
          v34 = v4;
          v8[24] = *v26;
          *(_QWORD *)&v40.Year = 0LL;
          *(_QWORD *)&v40.Minute = 0LL;
          RtlTimeToTimeFields(&v34, &v40);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v40.Minute, v40.Hour, 15);
          v18 = 536871168;
        }
        else
        {
          v24 = *(unsigned __int8 **)(a2 + 24);
          v35 = v4;
          v8[23] = *v24;
          *(_QWORD *)&v41.Year = 0LL;
          *(_QWORD *)&v41.Minute = 0LL;
          RtlTimeToTimeFields(&v35, &v41);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v41.Minute, v41.Hour, 14);
          v18 = 536870913;
        }
      }
      else
      {
        v25 = *(unsigned __int8 **)(a2 + 24);
        v36 = v4;
        v8[25] = *v25;
        *(_QWORD *)&v42.Year = 0LL;
        *(_QWORD *)&v42.Minute = 0LL;
        RtlTimeToTimeFields(&v36, &v42);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v42.Minute, v42.Hour, 13);
        v18 = 536870924;
      }
    }
    else
    {
      v37 = v4;
      *(_QWORD *)&v43.Year = 0LL;
      *(_QWORD *)&v43.Minute = 0LL;
      v18 = 0x20000000;
      RtlTimeToTimeFields(&v37, &v43);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v43.Minute, v43.Hour, 16);
    }
  }
  else
  {
    v39 = *(_DWORD **)(a2 + 24);
    Time = v4;
    v33 = *v8 != *v39 ? 0x20000002 : 0;
    *(_QWORD *)&TimeFields.Year = 0LL;
    *(_QWORD *)&TimeFields.Minute = 0LL;
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, v17);
    v18 = v33;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *(char *)(v7 + 8) < 0 || (*(_DWORD *)(v7 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v19);
    *(_QWORD *)(a2 + 56) = 0LL;
    v16 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v6 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v19);
        v16 = -1073741536;
        goto LABEL_12;
      }
    }
  }
  v20 = *(_QWORD *)(a2 + 184);
  v21 = (_QWORD *)(a2 + 168);
  v16 = 259;
  *(_BYTE *)(v20 + 3) |= 1u;
  v22 = (_QWORD *)qword_1C00819E8;
  if ( *(__int64 **)qword_1C00819E8 != &AcpiThermalList )
    __fastfail(3u);
  *v21 = &AcpiThermalList;
  v21[1] = v22;
  *v22 = v21;
  qword_1C00819E8 = (__int64)v21;
  KeReleaseSpinLock(&AcpiThermalLock, v19);
  ACPIThermalLoopEx(v7, v18, 0LL);
  return v16;
}
