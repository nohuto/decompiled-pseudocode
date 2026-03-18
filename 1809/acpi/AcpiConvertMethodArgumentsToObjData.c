/*
 * XREFs of AcpiConvertMethodArgumentsToObjData @ 0x1C00589B8
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0058D80 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C0059260 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004AE34 (WPP_RECORDER_SF_DD.c)
 *     AcpiCleanupObjDataArguments @ 0x1C0058924 (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0058D80 (AcpiConvertPackageArgumentToPackageObj.c)
 *     WPP_RECORDER_SF_DDPP @ 0x1C0059BCC (WPP_RECORDER_SF_DDPP.c)
 */

__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  PVOID PoolWithTag; // rax
  size_t v15; // r8
  void *v16; // rcx
  __int64 v17; // rax

  v4 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( !a3 )
  {
LABEL_20:
    if ( v4 < 0 )
      goto LABEL_21;
    return (unsigned int)v4;
  }
  v11 = a4 + 2;
  while ( 1 )
  {
    v12 = a1[1];
    if ( v12 + v9 > a2 )
      break;
    v13 = *a1;
    if ( !*a1 )
    {
      if ( (unsigned int)v12 > 8 )
        goto LABEL_26;
      *(_WORD *)v11 = 1;
      v16 = (void *)(v11 + 14);
      *(_DWORD *)(v11 + 22) = a1[1];
      *(_QWORD *)(v11 + 14) = 0LL;
      v15 = a1[1];
      goto LABEL_16;
    }
    if ( v13 <= 2u || v13 > 4u )
    {
      if ( v13 == 1 )
        *(_WORD *)v11 = 2;
      else
        *(_WORD *)v11 = 3;
      *(_DWORD *)(v11 + 22) = a1[1];
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1[1], 0x4E706341u);
      *(_QWORD *)(v11 + 30) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x1Au,
          (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
          a1[1],
          -1073741670);
        goto LABEL_21;
      }
      v15 = *(unsigned int *)(v11 + 22);
      v16 = PoolWithTag;
LABEL_16:
      memmove(v16, a1 + 2, v15);
      goto LABEL_17;
    }
    *(_WORD *)v11 = 4;
    v4 = AcpiConvertPackageArgumentToPackageObj(a1, v11 + 22, v11 + 30, 1LL);
    if ( v4 < 0 )
    {
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x19u,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        a1,
        a1[1]);
      goto LABEL_20;
    }
    v4 = 0;
LABEL_17:
    v17 = a1[1];
    v9 += v17;
    if ( (unsigned __int16)v17 < 4u )
      v17 = 4LL;
    ++v10;
    a1 = (unsigned __int16 *)((char *)a1 + v17 + 4);
    v11 += 40LL;
    if ( v10 >= a3 )
      goto LABEL_20;
  }
  WPP_RECORDER_SF_DDPP(WPP_GLOBAL_Control->DeviceExtension, 2, 4, 1);
LABEL_26:
  v4 = -1073741788;
LABEL_21:
  AcpiCleanupObjDataArguments(a4, a3);
  return (unsigned int)v4;
}
