/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C000CC48 (PnpiBiosValidateMemoryMapAttribute.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005D684 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_i @ 0x1C005E3D8 (WPP_RECORDER_SF_i.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C00958D4 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0095AA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0096428 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AACC0 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  ULONGLONG v4; // rsi
  unsigned __int8 v5; // dl
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  const void **v11; // rdi
  int result; // eax
  __int64 v13; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  ULONGLONG v17; // r13
  ULONGLONG v18; // r12
  ULONG_PTR v19; // r8
  ULONGLONG v20; // rdx
  ULONGLONG v21; // r14
  unsigned __int8 v22; // cl
  ULONG_PTR v23; // r12
  ULONGLONG v24; // rax
  unsigned __int8 v25; // al
  int v26; // eax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-28h]
  ULONGLONG v28; // [rsp+40h] [rbp-10h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v29; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h]
  unsigned int v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v31 = a2;
  v4 = 0LL;
  v5 = BugCheckParameter2[4];
  v28 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v7,
      BugCheckParameter2[5],
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      v8);
    return 0;
  }
  if ( !v8 )
    return 0;
  v11 = (const void **)(v10 + 8LL * (unsigned int)v9);
  result = PnpiUpdateResourceList(v11, &v29, v9);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v14 = v29;
  }
  else
  {
    result = PnpiUpdateResourceList(v11, &v28, v13);
    if ( result < 0 )
      return result;
    v4 = v28;
    *(_BYTE *)(v28 + 1) = -127;
    v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
    *(_WORD *)(v4 + 4) = 24576;
  }
  v15 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v15 < 0x2Bu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x13u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v15);
      v15 = *(_WORD *)(BugCheckParameter2 + 1);
    }
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v15);
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 30);
  v17 = *(_QWORD *)(BugCheckParameter2 + 14);
  v18 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
  v19 = *(_QWORD *)(BugCheckParameter2 + 38);
  v20 = *(_QWORD *)(BugCheckParameter2 + 22);
  BugCheckParameter4 = v19;
  v29 = (struct _IO_RESOURCE_DESCRIPTOR *)v18;
  v21 = v16 + v17;
  v28 = v20;
  if ( v16 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v17, v20, v16);
    v19 = BugCheckParameter4;
    v20 = v28;
  }
  v22 = BugCheckParameter2[4];
  if ( (v22 & 4) != 0 && (v22 & 8) != 0 )
  {
    v23 = v20 - v17 + 1;
    if ( v23 != v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x14u,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
      v19 = v23;
      BugCheckParameter4 = v23;
    }
    if ( (v17 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x15u,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
        v19 = BugCheckParameter4;
      }
      v18 = 1LL;
    }
    else
    {
      v18 = (ULONGLONG)v29;
    }
  }
  if ( v19 > 0xFFFFFFFF && BugCheckParameter2[3] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_i(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        0xDu,
        0x16u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v19);
      v19 = BugCheckParameter4;
    }
    if ( (AcpiOverrideAttributes & 0x80u) == 0 || v17 < 0xFFFFFFFF )
      KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&BugCheckParameter4);
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v14->u.Port.Alignment = v18;
      v14->u.Port.Length = BugCheckParameter4;
      v24 = v28;
      v14->u.Port.MinimumAddress.QuadPart = v17;
      v14->u.Port.MaximumAddress.QuadPart = v24;
      v14->Type = 1;
      v25 = BugCheckParameter2[5];
      if ( (v25 & 0x20) != 0 )
      {
        *(_WORD *)(v4 + 4) |= 1u;
        v25 = BugCheckParameter2[5];
      }
      *(_DWORD *)(v4 + 8) = (v25 & 0x10 | 8u) >> 3;
      *(_QWORD *)(v4 + 12) = v21;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v14->Flags |= 0x20u;
      v14->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v14->Type = 6;
      v14->u.Port.Length = BugCheckParameter4;
      v14->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
      v14->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(MaximumAddress) = BugCheckParameter2[3];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x17u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        MaximumAddress);
    }
  }
  else
  {
    result = RtlIoEncodeMemIoResource(v14, 3u, v19, v18, v17, v28);
    if ( result < 0 )
      return result;
    v26 = (BugCheckParameter2[5] & 0x20) != 0 ? 1 : v14->Type;
    *(_DWORD *)(v4 + 8) = v26;
    *(_QWORD *)(v4 + 12) = v21;
    PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v31, v32, v14);
  if ( result >= 0 )
    return 0;
  return result;
}
