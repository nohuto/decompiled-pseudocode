/*
 * XREFs of ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00521D8
 * Callers:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C004FF08 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0003014 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  MonDescParser::EDID_PARSER *v4; // rbx
  unsigned __int16 v5; // r9
  unsigned __int16 v6; // r9
  _WORD *v7; // r10
  __int64 v8; // r11
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx

  if ( !a2 || !a3 && *a2 )
    return 3221225485LL;
  v4 = *this;
  v5 = 0;
  while ( !MonDescParser::EDID_PARSER::Is18ByteDispDesc(v4, v5) || *(_BYTE *)(*(_QWORD *)v4 + 18LL * v6 + 57) != 0xFD )
  {
    v5 = v6 + 1;
    if ( v5 >= 4u )
      return 3221226021LL;
  }
  if ( *v7 )
  {
    *(_BYTE *)v8 = *((_BYTE *)this + 8);
    *(_DWORD *)(v8 + 36) = 2;
    v10 = *(_QWORD *)*this;
    v11 = *(unsigned __int8 *)(v10 + 18LL * v6 + 59);
    v12 = -((*(_BYTE *)(v10 + 18LL * v6 + 58) & 1) != 0);
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 4) = v11 + (unsigned __int8)v12;
    v13 = *(_QWORD *)*this;
    v14 = *(unsigned __int8 *)(v13 + 18LL * v6 + 60);
    v15 = -((*(_BYTE *)(v13 + 18LL * v6 + 58) & 2) != 0);
    *(_DWORD *)(v8 + 16) = 1;
    *(_DWORD *)(v8 + 12) = v14 + (unsigned __int8)v15;
    v16 = *(_QWORD *)*this;
    v17 = *(unsigned __int8 *)(v16 + 18LL * v6 + 61);
    v18 = -((*(_BYTE *)(v16 + 18LL * v6 + 58) & 4) != 0);
    *(_DWORD *)(v8 + 24) = 1;
    *(_DWORD *)(v8 + 20) = 1000 * (v17 + (unsigned __int8)v18);
    v19 = *(_QWORD *)*this;
    v20 = *(unsigned __int8 *)(v19 + 18LL * v6 + 62);
    v21 = -((*(_BYTE *)(v19 + 18LL * v6 + 58) & 8) != 0);
    *(_DWORD *)(v8 + 32) = 1;
    *(_DWORD *)(v8 + 28) = 1000 * (v20 + (unsigned __int8)v21);
    v22 = 10000000 * *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v6 + 63);
    *(_QWORD *)(v8 + 40) = 0LL;
    result = 0LL;
    *(_DWORD *)(v8 + 48) = v22;
  }
  else
  {
    *v7 = 1;
    return 3221225507LL;
  }
  return result;
}
