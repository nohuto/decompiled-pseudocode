/*
 * XREFs of ACPIDeviceDiscoverDependencies @ 0x1C0028A64
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C0028878 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 */

void __fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int16 v15; // r9
  int v16; // eax
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-40h]
  char v20; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1[5];
  if ( *(_QWORD *)(v2 + 736) )
  {
    v5 = (_QWORD *)*a2;
    while ( v5 != a2 )
    {
      v6 = v5[5];
      v7 = v5;
      v5 = (_QWORD *)*v5;
      if ( a1 == v7 )
        continue;
      if ( (v7[7] & 0x4000000) != 0 )
        continue;
      v8 = *(_QWORD *)(v6 + 736);
      if ( !v8 )
        continue;
      if ( (*(_BYTE *)(v2 + 952) & 0x40) != 0 )
      {
        v9 = IoTestDependency(*(_QWORD *)(v2 + 736), v8, &v21, &v20);
        if ( v9 < 0 )
        {
          LODWORD(v19) = v9;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x14u,
            (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
            v19);
        }
        else if ( (v20 & 1) != 0 )
        {
          v10 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !v10 )
          {
            v15 = 19;
LABEL_28:
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              v15,
              (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids);
            continue;
          }
          v11 = (_QWORD *)a1[9];
          v12 = v10 + 2;
          if ( (_QWORD *)*v11 != a1 + 8 )
            goto LABEL_26;
          *v12 = a1 + 8;
          v10[3] = v11;
          *v11 = v12;
          a1[9] = v12;
          v13 = v7 + 10;
          goto LABEL_18;
        }
      }
      if ( (*(_BYTE *)(v6 + 952) & 0x40) != 0 )
      {
        v16 = IoTestDependency(*(_QWORD *)(v6 + 736), *(_QWORD *)(v2 + 736), &v21, &v20);
        if ( v16 < 0 )
        {
          LODWORD(v19) = v16;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x16u,
            (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
            v19);
          continue;
        }
        if ( (v20 & 1) != 0 )
        {
          v10 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !v10 )
          {
            v15 = 21;
            goto LABEL_28;
          }
          v17 = (_QWORD *)v7[9];
          v18 = v10 + 2;
          if ( (_QWORD *)*v17 != v7 + 8 )
LABEL_26:
            __fastfail(3u);
          *v18 = v7 + 8;
          v10[3] = v17;
          *v17 = v18;
          v7[9] = v18;
          v13 = a1 + 10;
LABEL_18:
          v14 = (_QWORD *)v13[1];
          if ( (_QWORD *)*v14 != v13 )
            goto LABEL_26;
          *v10 = v13;
          v10[1] = v14;
          *v14 = v10;
          v13[1] = v10;
        }
      }
    }
  }
}
