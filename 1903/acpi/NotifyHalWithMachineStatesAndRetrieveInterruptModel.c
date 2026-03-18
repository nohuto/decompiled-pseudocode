/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0001C00 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  _BYTE *v2; // rsi
  int v3; // r14d
  __int64 v4; // r13
  unsigned __int8 v5; // di
  int v6; // ebx
  __int64 v7; // r15
  char *v8; // rdi
  __int64 *v9; // rdi
  int v10; // r12d
  char *v11; // rbx
  int *v12; // rsi
  int v13; // ecx
  volatile signed __int32 *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v23[5]; // [rsp+60h] [rbp-31h] BYREF
  int *v24; // [rsp+88h] [rbp-9h]
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v26[8]; // [rsp+B8h] [rbp+27h] BYREF

  v24 = a1;
  memset(v23, 0, sizeof(v23));
  strcpy(v26, "\\_PIC");
  Src[0] = "\\_S1";
  BugCheckParameter4 = 0LL;
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v21 = 0LL;
  InputBuffer = 0LL;
  v20 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v3 = 2;
  *PoolWithTag = 0LL;
  v4 = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  AcpiSupportedSystemStates = 98;
  do
  {
    v5 = byte_1C0071D08[v4 * 4];
    v6 = dword_1C0071CE8[v4];
    if ( v3 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v3 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v3 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xDu,
          (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
          (const char *)Src[v5]);
      v2[2 * v5 + v5] = 0;
      if ( v6 )
      {
        HIDWORD(v20) |= v6;
        LODWORD(v20) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v3 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xEu,
          (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
          (const char *)Src[v5]);
      v2[2 * v5 + v5] = 0;
      if ( v6 )
      {
        HIDWORD(v21) |= v6;
        LODWORD(v21) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v3 >= 5 )
    {
      v7 = v5;
      v10 = 1 << v3;
LABEL_10:
      if ( (v10 & AcpiSupportedSystemStates) != 0 )
        v2[2 * v7 + v7] = 1;
      goto LABEL_12;
    }
    v7 = v5;
    v8 = (char *)Src[v5];
    if ( (int)AMLIGetNameSpaceObject(v8, 0LL, &BugCheckParameter4, 0) >= 0 )
    {
      v9 = (__int64 *)BugCheckParameter4;
      v10 = 1 << v3;
      AcpiSupportedSystemStates |= 1 << v3;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, v23);
      v11 = &v2[2 * v7];
      v11[v7 + 1] = v23[2];
      dword_1C0082858 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIEvalPackageElement(v9, 1u, v23);
      v11[v7 + 2] = v23[2];
      dword_1C0082858 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
      BugCheckParameter4 = 0LL;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
        v8);
    v2[2 * v7 + v7] = 0;
    if ( v6 )
    {
      HIDWORD(InputBuffer) |= v6;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v3;
    ++v4;
  }
  while ( v3 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x10u,
        (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  if ( (_DWORD)v21 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v21, 8u, 0LL, 0);
  v18 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v2, &v18);
  ExFreePoolWithTag(v2, 0);
  v12 = v24;
  v13 = 4096;
  if ( (unsigned int)(v18 - 1) <= 3 )
    v13 = v18;
  *v24 = v13;
  if ( (int)AMLIGetNameSpaceObject(v26, 0LL, &BugCheckParameter4, 0) < 0 )
  {
    return 0;
  }
  else
  {
    memset(v23, 0, sizeof(v23));
    v14 = (volatile signed __int32 *)BugCheckParameter4;
    WORD1(v23[0]) = 1;
    v23[2] = v18;
    v15 = AMLIEvalNameSpaceObject((__int64 *)BugCheckParameter4, 0LL, 1, v23);
    v16 = v15;
    if ( v15 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v12, v15, (ULONG_PTR)v14);
    AMLIDereferenceHandleEx(v14);
  }
  return v16;
}
