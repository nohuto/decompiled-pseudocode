/*
 * XREFs of QueryTemperatureThresholdCompletion @ 0x1C0012D10
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000DD78 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C00105C4 (KelvinToCelsius.c)
 */

char __fastcall QueryTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int16 *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int16 v9; // ax
  __int64 v10; // r8
  char v11; // r10
  unsigned __int8 v12; // si
  char v13; // r14
  char v14; // al
  unsigned int v16; // [rsp+48h] [rbp+10h]

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( *(_BYTE *)(v6 + 3) == 1 )
  {
    v8 = *(_DWORD *)(SrbExtension + 4232);
    v16 = v8;
    v9 = KelvinToCelsius(*v5);
    if ( BYTE2(v8) )
    {
      *(_WORD *)(v10 + 16LL * BYTE1(v8) + 58) = v9;
      *(_BYTE *)(v10 + 16LL * BYTE1(v8) + 61) = 1;
    }
    else
    {
      *(_WORD *)(v10 + 16LL * BYTE1(v8) + 56) = v9;
      *(_BYTE *)(16 * (BYTE1(v8) + 2LL) + v10 + 28) = 1;
      *(_BYTE *)(v10 + 16LL * BYTE1(v8) + 62) = 1;
    }
    if ( !BYTE2(v8) && (BYTE1(v8) || *(_WORD *)(*(_QWORD *)(a1 + 1536) + 266LL)) )
    {
      v12 = BYTE1(v8);
      v13 = 1;
      BYTE2(v16) = 1;
      v8 = v16;
    }
    else
    {
      v12 = BYTE1(v8);
      if ( BYTE1(v8) >= (unsigned __int8)v8 )
      {
        v13 = BYTE2(v8);
        v11 = 0;
      }
      else
      {
        v12 = BYTE1(v8) + 1;
        v13 = 0;
        *(_WORD *)((char *)&v16 + 1) = (unsigned __int8)(BYTE1(v8) + 1);
        v8 = v16;
      }
    }
    v14 = *(_BYTE *)(v7 + 4253);
    if ( v11 )
    {
      *(_BYTE *)(v7 + 4253) = v14 & 0xFC | 1;
      SrbAssignQueueId(a1, a2);
      BuildGetFeaturesTemperatureThresholdCommand(v7 + 4096, v12, v13);
      *(_BYTE *)(v7 + 4253) &= ~4u;
      *(_QWORD *)(v7 + 4224) = QueryTemperatureThresholdCompletion;
      *(_QWORD *)(v7 + 4232) = v8;
      LOBYTE(SrbExtension) = ProcessCommand(a1, a2);
    }
    else
    {
      LOBYTE(SrbExtension) = v14 | 8;
      *(_BYTE *)(v7 + 4253) = SrbExtension;
    }
  }
  else
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
  }
  return SrbExtension;
}
