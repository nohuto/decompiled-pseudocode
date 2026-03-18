/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002740 (WPP_RECORDER_SF_s.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  _BYTE *v2; // rsi
  __int64 v3; // r12
  signed int v4; // edi
  unsigned __int8 v5; // r13
  int v6; // r14d
  char *v7; // rbx
  __int64 *v8; // rbx
  char *v9; // r14
  int v10; // eax
  int *v11; // rsi
  int v12; // ecx
  ULONG_PTR v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h] BYREF
  int *v22; // [rsp+60h] [rbp-31h]
  _QWORD v23[5]; // [rsp+68h] [rbp-29h] BYREF
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v25[8]; // [rsp+B8h] [rbp+27h] BYREF

  strcpy(v25, "\\_PIC");
  Src[0] = "\\_S1";
  v22 = a1;
  Src[1] = "\\_S2";
  BugCheckParameter4 = 0LL;
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v20 = 0LL;
  InputBuffer = 0LL;
  v19 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v3 = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  v4 = 2;
  AcpiSupportedSystemStates = 98;
  do
  {
    v5 = byte_1C006FF30[v3];
    v6 = *(_DWORD *)((char *)&unk_1C006FF10 + v3);
    if ( v4 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v4 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v4 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
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
        HIDWORD(v19) |= v6;
        LODWORD(v19) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v4 < 5 )
    {
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
        HIDWORD(v20) |= v6;
        LODWORD(v20) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v4 >= 5 )
      goto LABEL_10;
    v7 = (char *)Src[v5];
    if ( (int)AMLIGetNameSpaceObject(v7, 0LL, &BugCheckParameter4, 0) >= 0 )
    {
      v8 = (__int64 *)BugCheckParameter4;
      AcpiSupportedSystemStates |= 1 << v4;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, v23);
      v9 = &v2[2 * v5];
      v9[v5 + 1] = v23[2];
      dword_1C0080868 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIEvalPackageElement(v8, 1u, v23);
      v9[v5 + 2] = v23[2];
      dword_1C0080868 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIDereferenceHandleEx((__int64)v8);
      BugCheckParameter4 = 0LL;
LABEL_10:
      v10 = AcpiSupportedSystemStates;
      if ( _bittest(&v10, v4) )
        v2[2 * v5 + v5] = 1;
      goto LABEL_12;
    }
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xFu,
      (__int64)&WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids,
      v7);
    v2[2 * v5 + v5] = 0;
    if ( v6 )
    {
      HIDWORD(InputBuffer) |= v6;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v4;
    v3 += 4LL;
  }
  while ( v4 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
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
  if ( (_DWORD)v19 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v19, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  v17 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v2, &v17);
  ExFreePoolWithTag(v2, 0);
  v11 = v22;
  v12 = 4096;
  if ( (unsigned int)(v17 - 1) <= 3 )
    v12 = v17;
  *v22 = v12;
  if ( (int)AMLIGetNameSpaceObject(v25, 0LL, &BugCheckParameter4, 0) < 0 )
  {
    return 0;
  }
  else
  {
    memset(v23, 0, sizeof(v23));
    v13 = BugCheckParameter4;
    v23[2] = v17;
    WORD1(v23[0]) = 1;
    v14 = AMLIEvalNameSpaceObject((unsigned __int64 *)BugCheckParameter4, 0LL, 1, v23);
    v15 = v14;
    if ( v14 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v11, v14, v13);
    AMLIDereferenceHandleEx(v13);
  }
  return v15;
}
