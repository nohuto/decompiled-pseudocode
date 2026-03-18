/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C00A172C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0095CE4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C000CC48 (PnpiBiosValidateMemoryMapAttribute.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005D684 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C00958D4 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0095AA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0096428 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AACC0 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressToIoDescriptor(unsigned __int8 *BugCheckParameter2, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int8 v4; // dl
  __int64 v6; // rsi
  int v7; // edx
  __int16 v8; // cx
  __int64 v9; // r8
  __int64 v10; // r10
  const void **v11; // rdi
  int result; // eax
  __int64 v13; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r13
  unsigned int v18; // r12d
  int v19; // r15d
  unsigned __int16 v20; // cx
  unsigned __int8 v21; // al
  int v22; // r15d
  int v23; // r8d
  char v24; // al
  int v25; // ecx
  unsigned __int8 v26; // al
  unsigned __int16 v27; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = BugCheckParameter2[4];
  v6 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v23 = *((unsigned __int16 *)BugCheckParameter2 + 5);
    v24 = v8;
    v25 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    LOBYTE(v25) = BugCheckParameter2[3];
    LOBYTE(v23) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v25,
      v7,
      v23,
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((_WORD *)BugCheckParameter2 + 4),
      *((_WORD *)BugCheckParameter2 + 5),
      *((_WORD *)BugCheckParameter2 + 6),
      v24);
    return 0;
  }
  if ( !v8 )
    return 0;
  v11 = (const void **)(v10 + 8LL * (unsigned int)v9);
  result = PnpiUpdateResourceList(v11, &v28, v9);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] <= 1u )
  {
    result = PnpiUpdateResourceList(v11, &v29, v13);
    if ( result < 0 )
      return result;
    v6 = v29;
    *(_BYTE *)(v29 + 1) = -127;
    v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v6 - 32);
    *(_WORD *)(v6 + 4) = 24576;
    *(_DWORD *)(v6 + 16) = 0;
  }
  else
  {
    v14 = v28;
  }
  v15 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v15 < 0xDu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0xBu,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v15);
      v15 = *(_WORD *)(BugCheckParameter2 + 1);
    }
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v15);
  }
  v16 = *((_WORD *)BugCheckParameter2 + 6);
  v17 = *((_WORD *)BugCheckParameter2 + 4);
  v18 = *((unsigned __int16 *)BugCheckParameter2 + 7);
  v19 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
  LODWORD(v28) = v19;
  v27 = v16 + v17;
  v20 = *((_WORD *)BugCheckParameter2 + 5);
  LOWORD(v29) = v20;
  if ( v16 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v17, v20, v16);
    v20 = v29;
  }
  v21 = BugCheckParameter2[4];
  if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
  {
    v22 = v20 - v17 + 1;
    if ( v22 != v18 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xCu,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
      v18 = v22;
    }
    if ( (v17 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xDu,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
      v19 = 1;
    }
    else
    {
      v19 = (int)v28;
    }
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v14->u.Port.Alignment = v19;
      v14->u.Port.Length = v18;
      v14->u.Port.MinimumAddress.LowPart = v17;
      v14->u.Port.MaximumAddress.LowPart = (unsigned __int16)v29;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 1;
      v26 = BugCheckParameter2[5];
      if ( (v26 & 0x20) != 0 )
      {
        *(_WORD *)(v6 + 4) |= 1u;
        v26 = BugCheckParameter2[5];
      }
      *(_DWORD *)(v6 + 8) = (v26 & 0x10 | 8u) >> 3;
      *(_DWORD *)(v6 + 12) = v27;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v14->Flags |= 0x20u;
      v14->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v14->Type = 6;
      v14->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
      v14->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
      v14->u.Port.Length = v18;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0xEu,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    v14->u.Port.Alignment = v19;
    v14->u.Port.Length = v18;
    v14->u.Port.MinimumAddress.LowPart = v17;
    v14->u.Port.MaximumAddress.LowPart = (unsigned __int16)v29;
    v14->u.Port.MaximumAddress.HighPart = 0;
    v14->u.Port.MinimumAddress.HighPart = 0;
    v14->Type = 3;
    *(_DWORD *)(v6 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v6 + 12) = v27;
    PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
    v14->u.Port.Alignment = 1;
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v30, v31, v14);
  if ( result >= 0 )
    return 0;
  return result;
}
