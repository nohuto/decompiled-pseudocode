/*
 * XREFs of rimProcessInput @ 0x1C0153D98
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C0154534 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     RIMFreeUserMem @ 0x1C013CCE0 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1C013CD84 (rimAllocUserMemInternal.c)
 *     RIMFixUpCompleteFrame @ 0x1C014F828 (RIMFixUpCompleteFrame.c)
 */

char __fastcall rimProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  __m128i v8; // xmm6
  int v9; // r12d
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  __m128i *v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  _QWORD *v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _OWORD *v19; // rcx
  char *v20; // rcx
  PVOID v22; // [rsp+38h] [rbp-50h] BYREF
  __m128i v23; // [rsp+40h] [rbp-48h]

  v23 = *a4;
  v8 = v23;
  v9 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = _mm_srli_si128(v23, 8).m128i_u64[0];
  if ( *(_DWORD *)(a1 + 656) )
  {
    v12 = (__m128i *)*(unsigned int *)(a1 + 696);
    if ( v10 > (unsigned __int64)v12 )
    {
      v22 = 0LL;
      rimAllocUserMemInternal(a1, v10, &v22);
      LOBYTE(v12) = (_BYTE)v22;
      if ( v22 )
      {
        v15 = *(_QWORD **)(a1 + 688);
        LOBYTE(v12) = MmUserProbeAddress;
        if ( (unsigned __int64)v15 >= MmUserProbeAddress )
          v15 = (_QWORD *)MmUserProbeAddress;
        *v15 = v22;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 4;
          LOBYTE(v12) = WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v14,
                          1,
                          14,
                          (__int64)&WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids);
        }
        v23.m128i_i32[0] = -1073741801;
        v8 = v23;
      }
    }
    if ( v23.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 584) = 1;
    }
    else
    {
      v16 = *(_DWORD **)(a1 + 664);
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v9;
      v17 = *(_QWORD *)(a2 + 344);
      if ( !v17 )
        v17 = *(_QWORD *)(a2 + 16);
      v18 = *(_QWORD **)(a1 + 672);
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *v18 = v17;
      v19 = *(_OWORD **)(a1 + 680);
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = v8;
      v20 = **(char ***)(a1 + 688);
      if ( (unsigned __int64)&v20[v10] > MmUserProbeAddress || &v20[v10] <= v20 )
        *(_BYTE *)MmUserProbeAddress = 0;
      LOBYTE(v12) = (unsigned __int8)memmove(v20, a3, v10);
      if ( a5 )
        LOBYTE(v12) = (unsigned __int8)RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  else
  {
    if ( v10 > *(unsigned int *)(a1 + 696) )
    {
      v11 = Win32AllocPool(v10, 0x656D4B52u);
      if ( v11 )
      {
        **(_QWORD **)(a1 + 688) = v11;
      }
      else
      {
        v23.m128i_i32[0] = -1073741801;
        v8 = v23;
      }
    }
    v12 = *(__m128i **)(a1 + 680);
    *v12 = v8;
    if ( v23.m128i_i32[0] >= 0 )
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
      memmove(**(void ***)(a1 + 688), a3, v10);
      LODWORD(v12) = *(_DWORD *)(a2 + 184);
      if ( ((unsigned __int16)v12 & 0x2000) != 0 )
      {
        LOBYTE(v12) = *(_BYTE *)(a2 + 48);
        if ( (_BYTE)v12 )
        {
          if ( (_BYTE)v12 == 1 )
            *(_DWORD *)(a2 + 696) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 896) = 0;
        }
      }
      if ( a5 )
        LOBYTE(v12) = (unsigned __int8)RIMFixUpCompleteFrame(a1, a2, **(_QWORD **)(a1 + 688), a3);
    }
  }
  return (char)v12;
}
