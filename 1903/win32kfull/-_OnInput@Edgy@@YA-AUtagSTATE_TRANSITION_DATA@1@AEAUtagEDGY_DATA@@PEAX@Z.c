/*
 * XREFs of ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01F7CC8
 * Callers:
 *     ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1C01F6EC4 (-ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F713C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F7BE8 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F7C50 (-_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C01F7F0C (-_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F7FCC (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 */

__int64 __fastcall Edgy::_OnInput(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *ArcData; // rax
  const struct Edgy::tagARC_DATA *v6; // r8
  int v7; // edi
  unsigned int v8; // edx
  __int128 v9; // xmm1
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  __int128 v12; // xmm0
  __int64 v13; // rbp
  struct tagEDGY_DATA *v15[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-48h]
  _QWORD v19[7]; // [rsp+58h] [rbp-40h] BYREF

  ArcData = Edgy::_GetArcData(v19, a2, a3);
  v6 = (const struct Edgy::tagARC_DATA *)*(int *)(a2 + 16);
  v7 = 4;
  v8 = dword_1C02EBD80[(_QWORD)v6];
  v9 = *((_OWORD *)ArcData + 1);
  v10 = dword_1C02EBD84[(_QWORD)v6];
  *(_OWORD *)v15 = *(_OWORD *)ArcData;
  v11 = (unsigned int)v15[1];
  v12 = *((_OWORD *)ArcData + 2);
  v16 = v9;
  *(_QWORD *)&v9 = ArcData[6];
  v17 = v12;
  v18 = v9;
  while ( v8 < v10 )
  {
    if ( ((__int64)v15[1] & dword_1C02EBC08[4 * v8]) == dword_1C02EBC0C[4 * v8] )
    {
      v7 = dword_1C02EBC04[4 * v8];
      break;
    }
    ++v8;
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = v7;
  if ( (_DWORD)v6 != v7 )
  {
    v13 = *(_QWORD *)(a2 + 224);
    if ( (_DWORD)v6 == 1 )
    {
      EtwTraceEdgyDetectionStop(v11);
      if ( v7 != 2 )
        Edgy::_SqmEdgy((Edgy *)a2, (const struct tagEDGY_DATA *)v15, 0LL, v11);
    }
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        Edgy::_OnEnterDisambiguation((Edgy *)a2, (struct tagEDGY_DATA *)v15, v6);
      }
      else if ( v7 == 2 )
      {
        Edgy::_OnEnterActive((Edgy **)a2, (struct tagEDGY_DATA *)v15, v6, v11);
      }
    }
    else
    {
      Edgy::_StoreLastUpDataAndPost((Edgy *)a2, v15[0], v6);
      *(_QWORD *)(a2 + 176) = 0LL;
      *(_QWORD *)(a2 + 184) = 0LL;
      *(_QWORD *)(a2 + 208) = 0LL;
      *(_DWORD *)(a2 + 216) = 0;
      *(_DWORD *)(a2 + 192) = 0;
      *(_DWORD *)(a2 + 196) = 0;
      *(_DWORD *)(a2 + 200) = 0;
      *(_QWORD *)(a2 + 224) = 0LL;
    }
    *(_DWORD *)(a2 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v13;
  }
  return a1;
}
