/*
 * XREFs of rimProcessInput @ 0x1C0127258
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C0127974 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RIMFreeUserMem @ 0x1C0111CB0 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C0111D4C (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C012335C (RIMFixUpCompleteFrame.c)
 */

char __fastcall rimProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  __m128i *v10; // rax
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _OWORD *v18; // rcx
  char *v19; // rcx
  PVOID v21; // [rsp+38h] [rbp-50h] BYREF
  __m128i v22; // [rsp+40h] [rbp-48h]

  v22 = *a4;
  v8 = v22;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = (__m128i *)*(unsigned int *)(a1 + 696);
  v11 = _mm_srli_si128(v22, 8).m128i_u64[0];
  if ( *(_DWORD *)(a1 + 656) )
  {
    if ( v11 > (unsigned __int64)v10 )
    {
      v21 = 0LL;
      rimAllocUserMemInternal(a1, v11, &v21);
      if ( v21 )
      {
        v14 = *(_QWORD **)(a1 + 688);
        LOBYTE(v10) = MmUserProbeAddress;
        if ( (unsigned __int64)v14 >= MmUserProbeAddress )
          v14 = (_QWORD *)MmUserProbeAddress;
        *v14 = v21;
      }
      else
      {
        LOBYTE(v10) = WPP_RECORDER_SF_(
                        gRimLog,
                        3u,
                        0x15u,
                        0xFu,
                        (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids);
        v22.m128i_i32[0] = -1073741801;
        v8 = v22;
      }
    }
    if ( v22.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 584) = 1;
    }
    else
    {
      v15 = *(_DWORD **)(a1 + 664);
      if ( (unsigned __int64)v15 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = v9;
      v16 = *(_QWORD *)(a2 + 344);
      if ( !v16 )
        v16 = *(_QWORD *)(a2 + 16);
      v17 = *(_QWORD **)(a1 + 672);
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v17 = (_QWORD *)MmUserProbeAddress;
      *v17 = v16;
      v18 = *(_OWORD **)(a1 + 680);
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      *v18 = v8;
      v19 = **(char ***)(a1 + 688);
      if ( (unsigned __int64)&v19[v11] > MmUserProbeAddress || &v19[v11] <= v19 )
        *(_BYTE *)MmUserProbeAddress = 0;
      LOBYTE(v10) = (unsigned __int8)memmove(v19, a3, v11);
      if ( a5 )
        LOBYTE(v10) = RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  else
  {
    if ( v11 > (unsigned __int64)v10 )
    {
      v12 = Win32AllocPool(v11, 0x656D4B52u);
      if ( v12 )
      {
        **(_QWORD **)(a1 + 688) = v12;
      }
      else
      {
        v22.m128i_i32[0] = -1073741801;
        v8 = v22;
      }
    }
    v10 = *(__m128i **)(a1 + 680);
    *v10 = v8;
    if ( v22.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 664) = v9;
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      {
        v13 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v13 = *(_QWORD *)(a2 + 344);
        if ( !v13 )
          v13 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 672) = v13;
      memmove(**(void ***)(a1 + 688), a3, v11);
      LODWORD(v10) = *(_DWORD *)(a2 + 184);
      if ( ((unsigned __int16)v10 & 0x2000) != 0 )
      {
        LOBYTE(v10) = *(_BYTE *)(a2 + 48);
        if ( (_BYTE)v10 )
        {
          if ( (_BYTE)v10 == 1 )
            *(_DWORD *)(a2 + 620) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 772) = 0;
        }
      }
      if ( a5 )
        LOBYTE(v10) = RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  return (char)v10;
}
