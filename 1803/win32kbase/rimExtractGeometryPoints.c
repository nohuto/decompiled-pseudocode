/*
 * XREFs of rimExtractGeometryPoints @ 0x1C0101688
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C0101B7C (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractGeometryPoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int16 v9; // r12
  unsigned int v10; // r14d
  unsigned __int8 v11; // bp
  __int64 v12; // rdx
  int v13; // r15d
  __int64 result; // rax
  unsigned int v15; // r11d
  _BYTE *v16; // r9
  int v17; // edx
  unsigned __int8 v18; // al
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ecx

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a1;
  v10 = a5;
  v11 = 0;
  v12 = 1LL;
  v13 = a5 & 7;
  if ( (a5 & 7) != 0 )
  {
    a1 = a5 & 7;
    v11 = (1 << v13) - 1;
  }
  if ( (unsigned __int16)(v9 - 48) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 1LL);
  if ( a5 > 0x20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v12);
  if ( a5 >= 8 )
  {
    do
    {
      if ( (unsigned int)v6 >= 4 )
        break;
      v10 -= 8;
      *(_BYTE *)(v6 + a3) = *(_BYTE *)(v7 + a4);
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v10 >= 8 );
  }
  if ( v10 && (unsigned int)v6 < 4 )
    *(_BYTE *)(v6 + a3) = v11 & *(_BYTE *)(v7 + a4);
  result = 16LL;
  if ( v9 != 49 )
    result = 12LL;
  v15 = 0;
  v16 = (_BYTE *)(result + a2);
  if ( v10 )
  {
    v17 = *(unsigned __int8 *)(v7 + a4);
    v7 = (unsigned int)(v7 + 1);
    result = ~v11;
    *v16 = (int)(result & v17) >> v13;
    v5 = v13 + a5 - 8;
  }
  for ( ; v5; v7 = (unsigned int)(v7 + 1) )
  {
    if ( v15 >= 4 || (unsigned int)v7 >= 8 )
      break;
    v18 = *(_BYTE *)(v7 + a4);
    v19 = v15 + 1;
    v20 = v15++;
    if ( (a5 & 7) != 0 )
    {
      v16[v20] |= (v11 & v18) << (8 - v13);
      if ( (unsigned int)v19 < 4 )
        v16[v19] = (*(unsigned __int8 *)(v7 + a4) & ~v11) >> v13;
    }
    else
    {
      v16[v20] = v18;
    }
    result = v5;
    v21 = v5 - 8;
    v5 = 0;
    if ( (unsigned int)result > 8 )
      v5 = v21;
  }
  return result;
}
