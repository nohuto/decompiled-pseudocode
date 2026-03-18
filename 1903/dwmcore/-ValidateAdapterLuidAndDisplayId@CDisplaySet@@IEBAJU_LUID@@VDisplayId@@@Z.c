/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180042404
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180042568 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800425F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDisplaySet::ValidateAdapterLuidAndDisplayId(unsigned __int64 i, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  struct _LUID v4; // rdx
  int v5; // r8d
  __int64 v6; // r10
  unsigned int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp+14h]
  int v19; // [rsp+50h] [rbp+18h] BYREF

  v19 = a3;
  v18 = HIDWORD(a2);
  v3 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v3 = -2147024809;
    v17 = 589;
    goto LABEL_29;
  }
  LOBYTE(i) = DisplayId::IsSpecific((DisplayId *)&v19);
  if ( (_BYTE)i )
  {
    if ( v5 != DisplayId::Hmd )
    {
      v7 = *(_DWORD *)(v6 + 72);
      v8 = 0LL;
      v3 = -2147024809;
      if ( v7 )
      {
        while ( 1 )
        {
          i = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v8);
          if ( v5 == *(_DWORD *)(i + 244) )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= v7 )
            goto LABEL_11;
        }
        v3 = 0;
      }
      else
      {
LABEL_11:
        LODWORD(v8) = v19;
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        v17 = 596;
      }
      else
      {
        v9 = *(_QWORD *)(v6 + 48);
        v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)v8);
        if ( *(_DWORD *)(v10 + 232) == v4.LowPart && *(_DWORD *)(v10 + 236) == v18 )
          return v3;
        for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
        {
          if ( (_DWORD)i != (_DWORD)v8 )
          {
            v12 = *(_QWORD *)(v9 + 8 * i);
            if ( *(_QWORD *)(v12 + 152) == v10 && *(_DWORD *)(v12 + 232) == v4.LowPart && *(_DWORD *)(v12 + 236) == v18 )
              return v3;
          }
        }
        v3 = -2003304442;
        v17 = 621;
      }
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(i, 0LL, 0, v3, v17, 0LL);
      return v3;
    }
LABEL_30:
    v15 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)i, v4);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x275u, 0LL);
    return v3;
  }
  if ( v5 == DisplayId::Hmd )
    goto LABEL_30;
  v13 = *(_DWORD *)(v6 + 72);
  i = 0LL;
  if ( !v13 )
  {
LABEL_28:
    v3 = -2003304290;
    v17 = 653;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * i);
    if ( *(_DWORD *)(v14 + 232) == v4.LowPart && *(_DWORD *)(v14 + 236) == v18 )
      return v3;
    i = (unsigned int)(i + 1);
    if ( (unsigned int)i >= v13 )
      goto LABEL_28;
  }
}
