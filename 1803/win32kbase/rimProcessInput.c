/*
 * XREFs of rimProcessInput @ 0x1C00FF314
 * Callers:
 *     RIMCompleteSecondaryRimReads @ 0x1C00E0B30 (RIMCompleteSecondaryRimReads.c)
 *     rimProcessHidInput @ 0x1C00FF234 (rimProcessHidInput.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     RIMFreeUserMem @ 0x1C00E8510 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C00E8590 (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C00F9078 (RIMFixUpCompleteFrame.c)
 */

unsigned __int64 __fastcall rimProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  unsigned __int64 result; // rax
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _OWORD *v18; // rcx
  char *v19; // rcx
  PVOID v20; // [rsp+38h] [rbp-50h] BYREF
  __m128i v21; // [rsp+40h] [rbp-48h]

  v21 = *a4;
  v8 = v21;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  result = *(unsigned int *)(a1 + 680);
  v11 = _mm_srli_si128(v21, 8).m128i_u64[0];
  if ( *(_DWORD *)(a1 + 640) )
  {
    if ( v11 > result )
    {
      v20 = 0LL;
      rimAllocUserMemInternal((struct _RTL_AVL_TABLE *)a1, v11, &v20);
      if ( v20 )
      {
        v14 = *(_QWORD **)(a1 + 672);
        result = MmUserProbeAddress;
        if ( (unsigned __int64)v14 >= MmUserProbeAddress )
          v14 = (_QWORD *)MmUserProbeAddress;
        *v14 = v20;
      }
      else
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   3u,
                   0x14u,
                   0xFu,
                   (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids);
        v21.m128i_i32[0] = -1073741801;
        v8 = v21;
      }
    }
    if ( v21.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 568) = 1;
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 648);
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v9;
      v16 = *(_QWORD *)(a2 + 344);
      if ( !v16 )
        v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_QWORD **)(a1 + 656);
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = v16;
      v18 = *(_OWORD **)(a1 + 664);
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      *v18 = v8;
      v19 = **(char ***)(a1 + 672);
      if ( (unsigned __int64)&v19[v11] > MmUserProbeAddress || &v19[v11] <= v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
      result = (unsigned __int64)memmove(v19, a3, v11);
      if ( a5 )
        return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 672), a3);
    }
  }
  else
  {
    if ( v11 > result )
    {
      v12 = Win32AllocPool(v11, 0x656D4B52u);
      if ( v12 )
      {
        **(_QWORD **)(a1 + 672) = v12;
      }
      else
      {
        v21.m128i_i32[0] = -1073741801;
        v8 = v21;
      }
    }
    result = *(_QWORD *)(a1 + 664);
    *(__m128i *)result = v8;
    if ( v21.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 648) = v9;
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v13 = *(_QWORD *)(a2 + 344);
        if ( !v13 )
          v13 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 656) = v13;
      result = (unsigned __int64)memmove(**(void ***)(a1 + 672), a3, v11);
      if ( a5 )
        return RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 672), a3);
    }
  }
  return result;
}
