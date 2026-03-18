/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18002FE28
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180030028 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x1800300C8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800991F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ValidateAdapterLuidAndDisplayId(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct _LUID v5; // rdx
  int v6; // r8d
  __int64 v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp+14h]
  unsigned int v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = a3;
  v17 = HIDWORD(a2);
  v3 = 0LL;
  v4 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v4 = -2147024809;
    v16 = 602;
    goto LABEL_29;
  }
  LOBYTE(a1) = DisplayId::IsSpecific((DisplayId *)&v18);
  if ( (_BYTE)a1 )
  {
    if ( v6 != DisplayId::Hmd )
    {
      v8 = *(_DWORD *)(v7 + 72);
      v4 = -2147024809;
      v9 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          a1 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8LL * v9);
          if ( v6 == *(_DWORD *)(a1 + 252) )
            break;
          if ( ++v9 >= v8 )
            goto LABEL_11;
        }
        v4 = 0;
      }
      else
      {
LABEL_11:
        v9 = v18;
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        v16 = 609;
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 48);
        v11 = *(_QWORD *)(v10 + 8LL * v9);
        if ( *(_DWORD *)(v11 + 240) == v5.LowPart && *(_DWORD *)(v11 + 244) == v17 )
          return v4;
        if ( v8 )
        {
          do
          {
            if ( (_DWORD)v3 != v9 )
            {
              a1 = *(_QWORD *)(v10 + 8 * v3);
              if ( *(_QWORD *)(a1 + 152) == v11 && *(_DWORD *)(a1 + 240) == v5.LowPart && *(_DWORD *)(a1 + 244) == v17 )
                return v4;
            }
            v3 = (unsigned int)(v3 + 1);
          }
          while ( (unsigned int)v3 < v8 );
        }
        v4 = -2003304442;
        v16 = 634;
      }
LABEL_29:
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v4, v16);
      return v4;
    }
LABEL_30:
    v14 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)a1, v5);
    v4 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x282u);
    return v4;
  }
  if ( v6 == DisplayId::Hmd )
    goto LABEL_30;
  v13 = *(_DWORD *)(v7 + 72);
  if ( !v13 )
  {
LABEL_28:
    v4 = -2003304290;
    v16 = 666;
    goto LABEL_29;
  }
  while ( 1 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v3);
    if ( *(_DWORD *)(a1 + 240) == v5.LowPart && *(_DWORD *)(a1 + 244) == v17 )
      return v4;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v13 )
      goto LABEL_28;
  }
}
