/*
 * XREFs of CalculateDisplayBlankTime @ 0x1801B6DA0
 * Callers:
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B74FC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___ @ 0x1801B67DC (std--vector_DISPLAYCONFIG_PATH_INFO_std--allocator_DISPLAYCONFIG_PATH_INFO___--_Resize__lambda_d.c)
 *     std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___ @ 0x1801B693C (std--vector_DISPLAYCONFIG_MODE_INFO_std--allocator_DISPLAYCONFIG_MODE_INFO___--_Resize__lambda_e.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B7D8C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CalculateDisplayBlankTime(__int64 a1, int a2, float *a3)
{
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // r9d
  DISPLAYCONFIG_MODE_INFO *v10; // r8
  unsigned __int64 v11; // r10
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  float v15; // xmm0_4
  unsigned int v16; // eax
  unsigned int modeInfoArray; // [rsp+20h] [rbp-50h]
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-40h] BYREF
  DISPLAYCONFIG_MODE_INFO *v20[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  UINT32 numModeInfoArrayElements; // [rsp+98h] [rbp+28h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  *(_OWORD *)pathArray = 0LL;
  *(_OWORD *)v20 = 0LL;
  do
  {
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
    if ( DisplayConfigBufferSizes )
    {
      v8 = 26LL;
      goto LABEL_17;
    }
    std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___(
      (__int64)pathArray,
      numPathArrayElements);
    std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Resize__lambda_ee323788c970fc7c9151a258c0e46d6f___(
      (__int64)v20,
      numModeInfoArrayElements);
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 v20[0],
                                 0LL);
  }
  while ( DisplayConfigBufferSizes == 122 );
  if ( DisplayConfigBufferSizes )
  {
    v8 = 39LL;
LABEL_17:
    v16 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v8,
            v7,
            (const char *)DisplayConfigBufferSizes,
            modeInfoArray);
    v10 = v20[0];
    v12 = v16;
    goto LABEL_18;
  }
  v9 = 0;
  v10 = v20[0];
  if ( numModeInfoArrayElements )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64)v9 << 6;
      if ( *(DISPLAYCONFIG_MODE_INFO_TYPE *)((char *)&v20[0]->infoType + v11) == DISPLAYCONFIG_MODE_INFO_TYPE_TARGET
        && (*(unsigned int *)((char *)&v20[0]->adapterId.LowPart + v11) | (unsigned __int64)((__int64)(int)HIDWORD(*(unsigned __int64 *)((char *)&v20[0]->adapterId + v11)) << 32)) == a1
        && *(UINT32 *)((char *)&v20[0]->id + v11) == a2 )
      {
        break;
      }
      if ( ++v9 >= numModeInfoArrayElements )
        goto LABEL_11;
    }
    v13 = (unsigned __int64)v9 << 6;
    v14 = *(UINT64 *)((char *)&v20[0]->targetMode.targetVideoSignalInfo.pixelRate + v13);
    v15 = (float)(int)v14;
    if ( v14 < 0 )
      v15 = v15 + 1.8446744e19;
    *a3 = (float)(*(UINT32 *)((char *)&v20[0]->targetMode.targetVideoSignalInfo.totalSize.cx + v13)
                * (*(UINT32 *)((char *)&v20[0]->targetMode.targetVideoSignalInfo.totalSize.cy + v13)
                 - *(UINT32 *)((char *)&v20[0]->targetMode.targetVideoSignalInfo.activeSize.cy + v13)))
        / v15;
  }
  else
  {
LABEL_11:
    *a3 = 0.001;
  }
  v12 = 0;
LABEL_18:
  if ( v10 )
  {
    std::_Deallocate<16,0>(v10, (v21 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFC0uLL);
    v21 = 0LL;
    *(_OWORD *)v20 = 0LL;
  }
  if ( pathArray[0] )
    std::_Deallocate<16,0>(pathArray[0], 72 * ((signed __int64)(v23 - (unsigned __int64)pathArray[0]) / 72));
  return v12;
}
