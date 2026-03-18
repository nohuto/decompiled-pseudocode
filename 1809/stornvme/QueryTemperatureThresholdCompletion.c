/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C0013B40
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000FC1C (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C0011934 (KelvinToCelsius.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int16 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // r12d
  unsigned __int8 v9; // si
  int v10; // r14d
  __int16 v11; // ax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dh
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // si
  char v20; // al
  unsigned int v22; // [rsp+58h] [rbp+10h]

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( *(_BYTE *)(v6 + 3) != 1 )
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  v8 = *(_DWORD *)(SrbExtension + 4232) >> 8;
  v9 = v8;
  v10 = HIWORD(*(_DWORD *)(SrbExtension + 4232));
  v22 = *(_DWORD *)(SrbExtension + 4232);
  v11 = KelvinToCelsius(*v5);
  if ( (_BYTE)v10 )
  {
    v17 = 16LL * v13;
    *(_WORD *)(v17 + v14 + 58) = v11;
    *(_BYTE *)(v17 + v14 + 61) = 1;
  }
  else
  {
    v15 = v8;
    v9 = v8;
    v18 = 16LL * v13;
    *(_WORD *)(v18 + v14 + 56) = v11;
    *(_BYTE *)(16 * (v13 + 2LL) + v14 + 28) = 1;
    *(_BYTE *)(v18 + v14 + 62) = 1;
  }
  if ( !(_BYTE)v10 )
  {
    if ( v13 || (v15 = v9, *(_WORD *)(*(_QWORD *)(a1 + 1528) + 266LL)) )
    {
      v19 = 1;
LABEL_11:
      BYTE2(v22) = v19;
      goto LABEL_13;
    }
  }
  if ( v15 < v12 )
  {
    ++BYTE1(v22);
    v19 = 0;
    goto LABEL_11;
  }
  v19 = BYTE2(v22);
  v16 = 0;
LABEL_13:
  v20 = *(_BYTE *)(v7 + 4253);
  if ( v16 )
  {
    *(_BYTE *)(v7 + 4253) = v20 & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v7 + 4096, BYTE1(v22), v19);
    *(_BYTE *)(v7 + 4253) &= ~4u;
    *(_QWORD *)(v7 + 4224) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v7 + 4232) = v22;
    LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
  }
  else
  {
    LOBYTE(SrbExtension) = v20 | 8;
    *(_BYTE *)(v7 + 4253) = SrbExtension;
  }
  return SrbExtension;
}
