/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4
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

int __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // dl
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r10
  int result; // eax
  const void **v12; // rdi
  __int64 v13; // r8
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  int v19; // r12d
  unsigned int v20; // r14d
  unsigned __int8 v21; // al
  unsigned int v22; // r12d
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int8 v25; // al
  int v26; // r8d
  char v27; // al
  int v28; // ecx
  int v29; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v30; // [rsp+48h] [rbp-40h] BYREF
  __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]
  unsigned int v33; // [rsp+A0h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v4 = 0LL;
  v30 = 0LL;
  v6 = BugCheckParameter2[4];
  v31 = 0LL;
  if ( (v6 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v26 = *(_DWORD *)(BugCheckParameter2 + 14);
    v27 = v8;
    v28 = *(_DWORD *)(BugCheckParameter2 + 18);
    LOBYTE(v28) = BugCheckParameter2[3];
    LOBYTE(v26) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v28,
      v7,
      v26,
      *(_DWORD *)(BugCheckParameter2 + 6),
      *(_DWORD *)(BugCheckParameter2 + 10),
      *(_DWORD *)(BugCheckParameter2 + 14),
      *(_DWORD *)(BugCheckParameter2 + 18),
      v27);
    return 0;
  }
  if ( !v8 )
    return 0;
  v12 = (const void **)(v10 + 8LL * (unsigned int)v9);
  result = PnpiUpdateResourceList(v12, &v30, v9);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v14 = v30;
    }
    else
    {
      result = PnpiUpdateResourceList(v12, &v31, v13);
      if ( result < 0 )
        return result;
      v4 = v31;
      *(_BYTE *)(v31 + 1) = -127;
      v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
      *(_WORD *)(v4 + 4) = 24576;
      *(_DWORD *)(v4 + 16) = 0;
    }
    v15 = *(_WORD *)(BugCheckParameter2 + 1);
    if ( v15 < 0x17u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xFu,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
          v15);
        v15 = *(_WORD *)(BugCheckParameter2 + 1);
      }
      KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v15);
    }
    v16 = *(unsigned int *)(BugCheckParameter2 + 18);
    v17 = *(unsigned int *)(BugCheckParameter2 + 10);
    v18 = *(unsigned int *)(BugCheckParameter2 + 14);
    v19 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v20 = *(_DWORD *)(BugCheckParameter2 + 22);
    LODWORD(v30) = v19;
    v29 = v17 + v16;
    LODWORD(v31) = v18;
    if ( (_DWORD)v16 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v17, v18, v16);
      LODWORD(v18) = v31;
    }
    v21 = BugCheckParameter2[4];
    if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
    {
      v22 = v18 - v17 + 1;
      if ( v22 != v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x10u,
            (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
        v20 = v22;
      }
      if ( ((unsigned int)v17 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x11u,
            (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
        v19 = 1;
      }
      else
      {
        v19 = (int)v30;
      }
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v24 = v31;
        v14->u.Port.Alignment = v19;
        v14->u.Port.Length = v20;
        v14->u.Port.MinimumAddress.LowPart = v17;
        v14->u.Port.MaximumAddress.QuadPart = v24;
        v14->u.Port.MinimumAddress.HighPart = 0;
        v14->Type = 1;
        v25 = BugCheckParameter2[5];
        if ( (v25 & 0x20) != 0 )
        {
          *(_WORD *)(v4 + 4) |= 1u;
          v25 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v4 + 8) = (v25 & 0x10 | 8u) >> 3;
        *(_DWORD *)(v4 + 12) = v29;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v14->Flags |= 0x20u;
        v14->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v14->Type = 6;
        v14->u.Port.Length = v20;
        v14->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
        v14->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x12u,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v23 = v31;
      v14->u.Port.Alignment = v19;
      v14->u.Port.Length = v20;
      v14->u.Port.MinimumAddress.LowPart = v17;
      v14->u.Port.MaximumAddress.LowPart = v23;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 3;
      *(_DWORD *)(v4 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v4 + 12) = v29;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
      v14->u.Port.Alignment = 1;
    }
    result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v32, v33, v14);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
