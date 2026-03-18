/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C00012C0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalCommand @ 0x1C00014F8 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000176C (NVMeIssueAsyncEventCommand.c)
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, int *a3)
{
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r15
  unsigned __int8 v12; // r12
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ebp
  const wchar_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  int NamespaceId; // ebx
  int v21; // r8d
  char v22; // al
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+88h] [rbp-40h]
  __int64 v28; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+20h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v8 = SrbExtension;
  if ( !v9
    || (LOBYTE(SrbExtension) = *(_BYTE *)(v7 + 3), (_BYTE)SrbExtension == 14)
    || (*(_DWORD *)(a1 + 20) & 0xE) != 0
    || (_BYTE)SrbExtension != 1 )
  {
    *(_BYTE *)(v8 + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, a2);
  v11 = SrbExtension;
  v12 = *((_BYTE *)a3 + 2);
  v13 = *a3;
  v14 = *a3 & 7;
  if ( !v14 )
  {
    v15 = 64;
    StorPortExtendedFunction(
      86LL,
      a1,
      0LL,
      (unsigned int)v10,
      9,
      L"NVMe Async Event-Error Status",
      32LL,
      3,
      0,
      0LL,
      L"EventType",
      v13 & 7,
      L"EventInfo",
      BYTE1(v13),
      L"LogPageId",
      v12,
      L"LogPageSize",
      64LL);
    v22 = *((_BYTE *)a3 + 1);
    if ( v22 == 1 || v22 == 3 )
      NVMeControllerReset(a1);
    goto LABEL_9;
  }
  if ( v14 == (_DWORD)v10 )
  {
    v27 = 512LL;
    v15 = 512;
    v26 = v12;
    v25 = BYTE1(v13);
    v24 = v13 & 7;
    v16 = L"NVMe Async Event-Health Status";
LABEL_8:
    StorPortExtendedFunction(
      86LL,
      a1,
      0LL,
      (unsigned int)v10,
      9,
      v16,
      32LL,
      3,
      0,
      0LL,
      L"EventType",
      v24,
      L"EventInfo",
      v25,
      L"LogPageId",
      v26,
      L"LogPageSize",
      v27);
    goto LABEL_9;
  }
  switch ( v14 )
  {
    case 2:
      if ( !BYTE1(v13) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 3724), 2u);
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3724), 1u) )
          break;
        v27 = 4096LL;
        v15 = 4096;
        v26 = *((unsigned __int8 *)a3 + 2);
        v25 = *((unsigned __int8 *)a3 + 1);
        v24 = *a3 & 7;
        v16 = L"NVMe Async Event-Namespace Change";
        goto LABEL_8;
      }
      if ( BYTE1(v13) != (_BYTE)v10 )
      {
        if ( BYTE1(v13) != 2 )
          break;
        v27 = 512LL;
        v15 = 512;
        v26 = v12;
        v25 = 2LL;
        v24 = v13 & 7;
        v16 = L"NVMe Async Event-Telemetry Log Changed";
        goto LABEL_8;
      }
      v15 = 512;
      StorPortExtendedFunction(
        86LL,
        a1,
        0LL,
        0LL,
        9,
        L"NVMe Async Event-Firmware Activate Start",
        32LL,
        3,
        0,
        0LL,
        L"EventType",
        v13 & 7,
        L"EventInfo",
        v10,
        L"LogPageId",
        v12,
        L"LogPageSize",
        512LL);
LABEL_9:
      v28 = 0LL;
      v29 = 0LL;
      LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v15, &v28, &v29);
      if ( v28 )
      {
        if ( v11 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v19 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
          else
            v19 = *(_BYTE *)(a2 + 7);
          NamespaceId = GetNamespaceId(a1, v19, v17, v18);
          NVMeZeroMemory(v28, v15);
          LOBYTE(v21) = v12;
          BuildGetLogPageCommand(a1, v8, v21, v15, v29, NamespaceId, 0LL);
          *(_BYTE *)(v8 + 4253) |= 4u;
          *(_QWORD *)(v8 + 4224) = NVMeGetLogPageCompletion;
          *(_QWORD *)(v8 + 4200) = v28;
          *(_QWORD *)(v8 + 4208) = v29;
          *(_DWORD *)(v8 + 4240) = v15;
          LOBYTE(SrbExtension) = ProcessCommand(a1, v11 + 8);
        }
        return SrbExtension;
      }
      break;
    case 6:
      if ( BYTE1(v13) == (_BYTE)v10 )
        LOBYTE(SrbExtension) = StorPortExtendedFunction(
                                 86LL,
                                 a1,
                                 0LL,
                                 0LL,
                                 9,
                                 L"NVMe Async Event- Sanitize Completed",
                                 32LL,
                                 3,
                                 0,
                                 0LL,
                                 L"EventType",
                                 v13 & 7,
                                 L"EventInfo",
                                 v10,
                                 L"LogPageId",
                                 v12,
                                 L"LogPageSize",
                                 0LL);
      break;
    case 7:
      v27 = 512LL;
      v15 = 512;
      v26 = v12;
      v25 = BYTE1(v13);
      v24 = v13 & 7;
      v16 = L"NVMe Async Event-Vendor Specific";
      goto LABEL_8;
  }
  if ( v11 )
    LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v11);
  return SrbExtension;
}
