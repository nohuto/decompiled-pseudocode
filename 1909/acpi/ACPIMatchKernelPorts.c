/*
 * XREFs of ACPIMatchKernelPorts @ 0x1C0031278
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000DAA0 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

char __fastcall ACPIMatchKernelPorts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v6; // r12
  char v7; // r14
  void *QuadPart; // rbp
  __int64 v9; // r13
  const char *v10; // rax
  unsigned __int16 v11; // r15
  unsigned __int64 v12; // rcx
  const char *v13; // r10
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r8
  _QWORD v18[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+18h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v20 = 0;
  v6 = 0LL;
  v7 = *(_BYTE *)v2;
  memset(v18, 0, 0x20uLL);
  v21 = 32LL;
  QuadPart = 0LL;
  v9 = 0LL;
  if ( (int)HeadlessDispatch(16LL, 0LL, 0LL, v18, &v21) >= 0 && LODWORD(v18[0]) == 1 && LOBYTE(v18[1]) )
    v6 = v18[2];
  LOBYTE(v10) = KdComPortInUse;
  if ( !KdComPortInUse && !KdHvComPortInUse && !v6 )
    return (char)v10;
  if ( KdComPortInUse )
    QuadPart = (void *)KdComPortInUse;
  LOBYTE(v10) = KdHvComPortInUse;
  if ( KdHvComPortInUse )
    v9 = KdHvComPortInUse;
  if ( !*(_DWORD *)(a2 + 24) )
    return (char)v10;
  while ( 1 )
  {
    if ( v7 < 0 )
    {
      v11 = *(_WORD *)(v2 + 1) + 3;
    }
    else
    {
      LOBYTE(v10) = v7 & 7;
      v11 = (v7 & 7) + 1;
      v7 &= 0x78u;
    }
    if ( v7 == 120 )
      return (char)v10;
    if ( v7 == 64 )
      break;
    if ( v7 == 72 )
    {
      v12 = *(_WORD *)(v2 + 1) & 0x3FF;
      goto LABEL_45;
    }
    switch ( (unsigned __int8)v7 )
    {
      case 0x87u:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_42:
          v12 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_42;
        break;
      case 0x88u:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_36:
          v12 = *(unsigned __int16 *)(v2 + 8) + (unsigned __int64)*(unsigned __int16 *)(v2 + 12);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_36;
        break;
      case 0x8Au:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_30:
          v12 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_30;
        break;
    }
LABEL_51:
    v2 += v11;
    v20 += v11;
    LOBYTE(v10) = a2;
    v7 = *(_BYTE *)v2;
    if ( v20 >= *(_DWORD *)(a2 + 24) )
      return (char)v10;
  }
  v12 = *(unsigned __int16 *)(v2 + 2);
LABEL_45:
  if ( (!KdComPortInUse || (void *)v12 != QuadPart) && (!KdHvComPortInUse || v12 != v9) && (!v6 || v12 != v6) )
    goto LABEL_51;
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x680003uLL);
  if ( KdComPortInUse && (void *)v12 == QuadPart || KdHvComPortInUse && v12 == v9 )
  {
    v10 = (const char *)&unk_1C006FE7D;
    v13 = (const char *)&unk_1C006FE7D;
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a1 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 13;
LABEL_69:
      LOBYTE(v10) = WPP_RECORDER_SF_qqss(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      4u,
                      6u,
                      v15,
                      (__int64)&WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids,
                      v12,
                      v3,
                      v10,
                      v13);
    }
  }
  else
  {
    v10 = (const char *)&unk_1C006FE7D;
    v13 = (const char *)&unk_1C006FE7D;
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a1 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 14;
      goto LABEL_69;
    }
  }
  return (char)v10;
}
