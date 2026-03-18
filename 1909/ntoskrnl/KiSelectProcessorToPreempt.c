/*
 * XREFs of KiSelectProcessorToPreempt @ 0x14013E860
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiIsQosGroupingActive @ 0x1401BF2D4 (KiIsQosGroupingActive.c)
 *     KiIsQosGroupingClass @ 0x1401BF2F8 (KiIsQosGroupingClass.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  int v10; // ebx
  char *v11; // r14
  __int64 v12; // rcx
  char IsQosGroupingActive; // al
  int v14; // edx
  unsigned int v15; // r8d
  char v16; // r9
  __int64 v17; // r11
  __int64 v18; // rbx
  __int64 v19; // r11
  unsigned int v20; // ecx
  char *v21; // r10
  unsigned int v22; // ecx
  char *v23; // r10
  _BYTE v25[64]; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 24896) & a3;
  if ( ((v5 - 1) & v5) != 0 )
  {
    v8 = *(unsigned __int8 **)(a2 + 24904);
    v9 = v8[593];
    v10 = v8[592];
    v11 = &v25[v9];
    memmove(&v25[v9], v8 + 528, v8[592]);
    IsQosGroupingActive = KiIsQosGroupingActive(v12, 0xFFFFFFFFLL, (unsigned int)(v9 + v10));
    v18 = (unsigned int)(v14 + 2);
    if ( IsQosGroupingActive )
    {
      if ( (v17 & v5) != 0 )
      {
        if ( (unsigned __int8)KiIsQosGroupingClass(*(_DWORD *)(a1 + 120) & 3) )
        {
          v20 = v9;
          if ( (unsigned int)v9 < v15 )
          {
            v21 = &v25[v9];
            do
            {
              if ( (v19 & (v18 << v20) & v5) != 0 && *v21 < v16 )
              {
                v16 = *v21;
                v14 = v20;
              }
              v20 += v18;
              v21 += v18;
            }
            while ( v20 < v15 );
          }
        }
      }
    }
    if ( a4 )
    {
      if ( v14 >= 0 )
        return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v14]];
      v22 = v9;
      if ( (unsigned int)v9 < v15 )
      {
        v23 = &v25[v9];
        do
        {
          if ( ((v18 << v22) & a4) != 0 && *v23 < v16 )
          {
            v16 = *v23;
            v14 = v22;
          }
          v22 += v18;
          v23 += v18;
        }
        while ( v22 < v15 );
      }
    }
    if ( v14 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v14]];
    while ( (unsigned int)v9 < v15 )
    {
      if ( ((v18 << v9) & v5) != 0 && *v11 < v16 )
      {
        v16 = *v11;
        v14 = v9;
      }
      LODWORD(v9) = v18 + v9;
      v11 += v18;
    }
    if ( v14 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v14]];
  }
  return a2;
}
