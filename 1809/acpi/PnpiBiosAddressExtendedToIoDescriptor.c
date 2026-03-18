/*
 * XREFs of PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0016D94 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005B8C4 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_i @ 0x1C005C62C (WPP_RECORDER_SF_i.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C00997F0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C009A060 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00A7818 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressExtendedToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  ULONGLONG v4; // rsi
  char v6; // dl
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  const void **v10; // rdi
  int result; // eax
  __int64 v12; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  ULONGLONG v16; // r15
  ULONGLONG v17; // r12
  ULONG_PTR v18; // r8
  ULONGLONG v19; // rdx
  ULONGLONG v20; // r14
  unsigned __int8 v21; // cl
  ULONG_PTR v22; // r12
  ULONGLONG v23; // rax
  unsigned __int8 v24; // al
  __int64 v25; // rax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-28h]
  ULONGLONG v27; // [rsp+40h] [rbp-10h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR Length; // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h]
  unsigned int v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v30 = a2;
  v28 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  if ( (BugCheckParameter2[4] & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v6,
      BugCheckParameter2[5],
      *((_QWORD *)BugCheckParameter2 + 1),
      *((_QWORD *)BugCheckParameter2 + 2),
      *((_QWORD *)BugCheckParameter2 + 3),
      *((_QWORD *)BugCheckParameter2 + 4),
      v7);
    return 0;
  }
  if ( !v7 )
    return 0;
  v10 = (const void **)(v9 + 8LL * (unsigned int)v8);
  result = PnpiUpdateResourceList(v10, &v28, v8);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v13 = v28;
  }
  else
  {
    result = PnpiUpdateResourceList(v10, &v27, v12);
    if ( result < 0 )
      return result;
    v4 = v27;
    *(_BYTE *)(v27 + 1) = -127;
    v13 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
    *(_WORD *)(v4 + 4) = 24576;
  }
  v14 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v14 < 0x35u )
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xDu,
      0x18u,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v14);
    KeBugCheckEx(
      0xA5u,
      0xFuLL,
      (ULONG_PTR)BugCheckParameter2,
      *BugCheckParameter2,
      *(unsigned __int16 *)(BugCheckParameter2 + 1));
  }
  v15 = *((_QWORD *)BugCheckParameter2 + 4);
  v16 = *((_QWORD *)BugCheckParameter2 + 2);
  v17 = *((_QWORD *)BugCheckParameter2 + 1) + 1LL;
  v18 = *((_QWORD *)BugCheckParameter2 + 5);
  v19 = *((_QWORD *)BugCheckParameter2 + 3);
  Length = v18;
  v28 = (struct _IO_RESOURCE_DESCRIPTOR *)v17;
  v20 = v16 + v15;
  v27 = v19;
  if ( v15 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v16, v19, v15);
    v18 = Length;
    v19 = v27;
  }
  v21 = BugCheckParameter2[4];
  if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
  {
    v22 = v19 - v16 + 1;
    if ( v22 != v18 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x19u,
        (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
      v18 = v22;
      Length = v22;
    }
    if ( (v16 & *((_QWORD *)BugCheckParameter2 + 1)) != 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x1Au,
        (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
      v18 = Length;
      v17 = 1LL;
    }
    else
    {
      v17 = (ULONGLONG)v28;
    }
  }
  if ( v18 > 0xFFFFFFFF && BugCheckParameter2[3] )
  {
    WPP_RECORDER_SF_i(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v19,
      0xDu,
      0x1Bu,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v18);
    if ( (AcpiOverrideAttributes & 0x80u) == 0 || v16 < 0xFFFFFFFF )
      KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
    v18 = Length;
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v13->u.Port.Alignment = v17;
      v13->u.Port.Length = Length;
      v23 = v27;
      v13->u.Port.MinimumAddress.QuadPart = v16;
      v13->u.Port.MaximumAddress.QuadPart = v23;
      v13->Type = 1;
      v24 = BugCheckParameter2[5];
      if ( (v24 & 0x20) != 0 )
      {
        *(_WORD *)(v4 + 4) |= 1u;
        v24 = BugCheckParameter2[5];
      }
      *(_DWORD *)(v4 + 8) = (v24 & 0x10 | 8u) >> 3;
      *(_QWORD *)(v4 + 12) = v20;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v13->Flags |= 0x20u;
      v13->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v13->Type = 6;
      v13->u.Port.Length = Length;
      v13->u.Port.Alignment = *((_DWORD *)BugCheckParameter2 + 4);
      v13->u.Port.MinimumAddress.LowPart = *((_DWORD *)BugCheckParameter2 + 6);
    }
    else
    {
      LODWORD(MaximumAddress) = BugCheckParameter2[3];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x1Cu,
        (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
        MaximumAddress);
    }
  }
  else
  {
    result = RtlIoEncodeMemIoResource(v13, 3u, v18, v17, v16, v27);
    if ( result < 0 )
      return result;
    if ( (BugCheckParameter2[5] & 0x20) != 0 )
      *(_DWORD *)(v4 + 8) = 1;
    else
      *(_DWORD *)(v4 + 8) = v13->Type;
    *(_QWORD *)(v4 + 12) = v20;
    v25 = *((_QWORD *)BugCheckParameter2 + 6);
    if ( (v25 & 0xC) != 0 )
    {
      v13->Flags |= 0x20u;
      v25 = *((_QWORD *)BugCheckParameter2 + 6);
    }
    if ( (v25 & 2) != 0 )
    {
      v13->Flags |= 8u;
      v25 = *((_QWORD *)BugCheckParameter2 + 6);
    }
    if ( (v25 & 6) != 0 )
      v13->Flags |= 4u;
    if ( (BugCheckParameter2[5] & 1) == 0 )
      v13->Flags |= 1u;
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v30, v31, v13);
  if ( result >= 0 )
    return 0;
  return result;
}
