/*
 * XREFs of ACPIFanFSTCallback @ 0x1C0054FC0
 * Callers:
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0049B1C (AcpiDiagTraceFanStatusChange.c)
 */

void __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // r14d
  bool v8; // r15
  char v9; // r10
  const char *v10; // rax
  const char *v11; // r8
  __int64 v12; // rdx
  char v13; // r10
  const char *v14; // rax
  const char *v15; // r8
  __int64 v16; // rdx
  char v17; // r10
  const char *v18; // rax
  const char *v19; // r8
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  int v22; // edx
  char v23; // r11
  const char *v24; // rax
  const char *v25; // r10
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  _DWORD v29[12]; // [rsp+50h] [rbp-48h] BYREF

  v7 = 0x40000000;
  memset(v29, 0, 0x28uLL);
  v8 = 0;
  if ( a2 < 0 )
  {
    v9 = 0;
    v10 = (const char *)&unk_1C006FE7D;
    v11 = (const char *)&unk_1C006FE7D;
    if ( a4 )
    {
      v12 = *(_QWORD *)(a4 + 8);
      v9 = a4;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a4 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a4 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0xFu,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        a2,
        v9,
        v10,
        v11);
    goto LABEL_41;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v13 = 0;
    v14 = (const char *)&unk_1C006FE7D;
    v15 = (const char *)&unk_1C006FE7D;
    if ( a4 )
    {
      v16 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(a4 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(a4 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x10u,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        v13,
        v14,
        v15);
    goto LABEL_41;
  }
  if ( **(_DWORD **)(a3 + 32) >= 3u )
  {
    v22 = AMLIEvalPkgDataElement(a3, 1u, v29);
    v8 = v22 >= 0;
    if ( v22 >= 0 )
    {
      if ( HIWORD(v29[0]) == 1 )
      {
        v28 = v29[4];
        if ( v29[4] != *(_DWORD *)(a4 + 280) )
        {
          *(_DWORD *)(a4 + 280) = v29[4];
          *(_BYTE *)(a4 + 284) = v28 != 0;
          AcpiDiagTraceFanStatusChange(a4);
          v7 = 1073741826;
        }
      }
      else
      {
        v17 = 0;
        v18 = (const char *)&unk_1C006FE7D;
        v19 = (const char *)&unk_1C006FE7D;
        if ( a4 )
        {
          v27 = *(_QWORD *)(a4 + 8);
          v17 = a4;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v18 = *(const char **)(a4 + 560);
            if ( (v27 & 0x400000000000LL) != 0 )
              v19 = *(const char **)(a4 + 568);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 19;
          goto LABEL_24;
        }
      }
    }
    else
    {
      v23 = 0;
      v24 = (const char *)&unk_1C006FE7D;
      v25 = (const char *)&unk_1C006FE7D;
      if ( a4 )
      {
        v26 = *(_QWORD *)(a4 + 8);
        v23 = a4;
        if ( (v26 & 0x200000000000LL) != 0 )
        {
          v24 = *(const char **)(a4 + 560);
          if ( (v26 & 0x400000000000LL) != 0 )
            v25 = *(const char **)(a4 + 568);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x12u,
          (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
          v22,
          v23,
          v24,
          v25);
    }
  }
  else
  {
    v17 = 0;
    v18 = (const char *)&unk_1C006FE7D;
    v19 = (const char *)&unk_1C006FE7D;
    if ( a4 )
    {
      v20 = *(_QWORD *)(a4 + 8);
      v17 = a4;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(a4 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(a4 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 17;
LABEL_24:
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        v21,
        (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
        v17,
        v18,
        v19);
    }
  }
LABEL_41:
  if ( a2 >= 0 )
  {
    dword_1C0082858 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( v8 )
  {
    dword_1C0082858 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)v29, 1u);
  }
  ACPIFanLoop(a4, v7, 0);
}
