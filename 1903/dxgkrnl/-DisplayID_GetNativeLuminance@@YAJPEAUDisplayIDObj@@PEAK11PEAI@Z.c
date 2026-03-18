/*
 * XREFs of ?DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C0058014
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0170900 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02CFA9C (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C00571A8 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_.c)
 *     ?ConvertHalfToFloat@@YAMG@Z @ 0x1C0057DA0 (-ConvertHalfToFloat@@YAMG@Z.c)
 */

__int64 __fastcall DisplayID_GetNativeLuminance(
        struct DisplayIDObj *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v8; // rbx
  float v10; // xmm0_4
  __int64 v11; // r10
  __int16 v12; // r11
  __int16 v13; // cx
  float v14; // xmm0_4
  __int64 v15; // r10
  __int16 v16; // r11
  __int16 v17; // cx
  __int64 v18; // r10
  _BYTE *v19; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v8 = a5;
          if ( a5 )
          {
            if ( !*((_BYTE *)a1 + 16) )
              return 3223126019LL;
            if ( (int)DisplayID_GetBlock((__int64 *)a1, 33, &v19) < 0 )
              return 3221226021LL;
            if ( *v19 == 33 && v19[2] == 29 )
            {
              v10 = ConvertHalfToFloat((unsigned __int8)v19[24] + ((unsigned __int8)v19[25] << 8));
              v13 = v12 * *(unsigned __int8 *)(v11 + 27);
              *a2 = (int)(float)(v10 * 10000.0);
              v14 = ConvertHalfToFloat(*(unsigned __int8 *)(v11 + 26) + v13);
              v17 = v16 * *(unsigned __int8 *)(v15 + 29);
              *a3 = (int)(float)(v14 * 10000.0);
              *a4 = (int)(float)(ConvertHalfToFloat(*(unsigned __int8 *)(v15 + 28) + v17) * 10000.0);
              *v8 = *(unsigned __int8 *)(v18 + 31) + 100;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
