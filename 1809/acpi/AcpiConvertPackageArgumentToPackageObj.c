/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C0058D80
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C00589B8 (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C002E1E0 (WPP_RECORDER_SF_DDD.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004AE34 (WPP_RECORDER_SF_DD.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C00589B8 (AcpiConvertMethodArgumentsToObjData.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0059FB0 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r10
  unsigned __int16 *v10; // rcx
  unsigned __int16 v11; // dx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  PVOID PoolWithTag; // rax
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d

  *a2 = 0;
  *a3 = 0LL;
  if ( a1 && (unsigned __int16)(a1[1] - 1) > 6u && (unsigned __int16)(*a1 - 3) <= 1u )
  {
    v5 = 0;
    *a3 = 0LL;
    v6 = a1 + 2;
    v7 = (unsigned __int16)a1[1];
    v8 = 0LL;
    v9 = (unsigned __int64)a1 + v7 + 4;
    v10 = v6;
    if ( (unsigned __int64)v6 >= v9 )
    {
LABEL_15:
      v15 = 40 * v5 + 8;
      *a2 = v15;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x4E706341u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, *a2);
        *(_DWORD *)*a3 = v5;
        v17 = AcpiConvertMethodArgumentsToObjData(v6, v8, v5, (__int64)*a3 + 8);
        if ( v17 >= 0 )
          return (unsigned int)v17;
        WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20);
      }
      else
      {
        v17 = -1073741670;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x1Cu,
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
          *a2,
          -1073741670);
        *a2 = 0;
      }
    }
    else
    {
      while ( *v10 <= 4u )
      {
        v11 = v10[1];
        if ( v11 > (unsigned __int16)v7 )
          break;
        v12 = v11;
        v13 = v11;
        if ( v11 < 4u )
          v13 = 4LL;
        if ( (unsigned __int64)v10 + v13 + 4 > v9 )
          break;
        ++v5;
        v14 = v11;
        if ( v11 < 4u )
          v14 = 4LL;
        v8 += v14 + 4;
        if ( v11 < 4u )
          v12 = 4LL;
        v10 = (unsigned __int16 *)((char *)v10 + v12 + 4);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_15;
      }
      WPP_RECORDER_SF_DDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Bu,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        *v10,
        v10[1],
        v7);
      v17 = -1073741788;
    }
  }
  else
  {
    v17 = -1073741811;
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x4E706341u);
    *a2 = 0;
    *a3 = 0LL;
  }
  return (unsigned int)v17;
}
