/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180020164
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001FA90 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180038464 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FACA (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  int v8; // r14d
  __int64 v10; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  int SystemMetricsForDpi; // eax
  double v15; // xmm0_8
  float v16; // xmm1_4
  int v17; // edi
  _DWORD *v18; // rsi
  _DWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  void *v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+54h] [rbp+Ch]

  v5 = a2;
  v6 = 0;
  v8 = a3;
  v10 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2 + 480) )
    return v6;
  v12 = *(unsigned int *)(*(_QWORD *)(a1 + 720) + 324LL);
  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 )
  {
    LOBYTE(v6) = 1;
    v13 = 53LL;
  }
  else
  {
    v13 = 31LL;
  }
  SystemMetricsForDpi = GetSystemMetricsForDpi(v13, v12, a3);
  v15 = floor_0((float)((float)SystemMetricsForDpi * 0.95454544) + 0.5);
  if ( (_BYTE)v6 )
  {
    v17 = (int)v15;
    v8 = (int)v15;
    goto LABEL_10;
  }
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 584) & 0xB00) == 0 )
    {
      v16 = FLOAT_1_6363636;
      goto LABEL_9;
    }
  }
  else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 480)) && (_DWORD)v5 )
  {
    v16 = FLOAT_2_1818182;
    goto LABEL_9;
  }
  v16 = FLOAT_2_2272727;
LABEL_9:
  v17 = (int)floor_0((float)((float)(int)v15 * v16) + 0.5);
LABEL_10:
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 8 * v5 + 480), a4);
  v18 = a5;
  v19 = *(_DWORD **)(a1 + 8 * v10 + 480);
  if ( v19[33] != *a5 )
  {
    v19[33] = *a5;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 2LL);
    v19 = *(_DWORD **)(a1 + 8 * v10 + 480);
  }
  v20 = *(_QWORD *)v19;
  v23 = v17;
  v24 = v8;
  v21 = (*(__int64 (__fastcall **)(_DWORD *, int *))(v20 + 96))(v19, &v23);
  v6 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xCA0u, v22);
  else
    *v18 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 480) + 120LL);
  return v6;
}
