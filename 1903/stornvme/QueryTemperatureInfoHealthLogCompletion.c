/*
 * XREFs of QueryTemperatureInfoHealthLogCompletion @ 0x1C0012C00
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C000DE48 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     KelvinToCelsius @ 0x1C0010694 (KelvinToCelsius.c)
 */

__int64 __fastcall QueryTemperatureInfoHealthLogCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int16 *v8; // r14
  __int16 v9; // cx
  __int16 v10; // ax
  __int64 v11; // r8
  __int64 v12; // r11
  __int16 v13; // dx
  _WORD *v14; // rax
  unsigned __int16 v15; // dx
  __int16 *v16; // r14
  unsigned __int16 v17; // r10
  __int64 v18; // r9
  __int16 v19; // ax
  __int64 v20; // r9
  __int16 v21; // r10
  unsigned __int16 v22; // dx
  __int64 v23; // r8
  unsigned int v24; // [rsp+58h] [rbp+10h]

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_QWORD *)(v5 + 64);
  else
    v7 = *(_QWORD *)(v5 + 24);
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    v8 = *(__int16 **)(result + 4200);
    HIBYTE(v24) = 0;
    v9 = *(__int16 *)((char *)v8 + 1);
    *(_WORD *)(v7 + 52) = 0;
    v10 = KelvinToCelsius(v9);
    *(_WORD *)(v11 + 54) = v10;
    v13 = 8;
    v14 = v8 + 107;
    *(_DWORD *)(v11 + 56) = -2147450880;
    do
    {
      if ( *v14 )
        break;
      --v14;
      --v13;
    }
    while ( v13 );
    v15 = v13 + 1;
    v16 = v8 + 100;
    *(_WORD *)(v11 + 40) = v15;
    v17 = 1;
    if ( v15 > 1u )
    {
      do
      {
        v18 = 16LL * v17;
        if ( *(unsigned int *)(a2 + v12) < (unsigned __int64)(v18 + 40) )
          break;
        *(_WORD *)(v18 + v11 + 52) = v17;
        v19 = KelvinToCelsius(*v16++);
        *(_WORD *)(v20 + v11 + 54) = v19;
        v17 = v21 + 1;
        *(_DWORD *)(v20 + v11 + 56) = -2147450880;
      }
      while ( v17 < v22 );
    }
    LOBYTE(v24) = v17 - 1;
    *(_WORD *)((char *)&v24 + 1) = 0;
    *(_BYTE *)(v6 + 4253) = *(_BYTE *)(v6 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    BuildGetFeaturesTemperatureThresholdCommand(v6 + 4096, 0, 0);
    *(_BYTE *)(v6 + 4253) &= ~4u;
    *(_QWORD *)(v6 + 4224) = QueryTemperatureThresholdCompletion;
    *(_QWORD *)(v6 + 4232) = v24;
    result = ProcessCommand(a1, a2);
  }
  else
  {
    *(_BYTE *)(result + 4253) |= 8u;
  }
  v23 = *(_QWORD *)(v6 + 4200);
  if ( v23 )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v6 + 4240), v23);
  *(_QWORD *)(v6 + 4200) = 0LL;
  *(_DWORD *)(v6 + 4240) = 0;
  return result;
}
