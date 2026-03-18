/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801BB540
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801BC290 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  void **v10; // r12
  int v11; // ebx
  LPVOID v12; // rax
  void **v13; // r12
  LPVOID v14; // rax
  int v15; // r9d
  void **v16; // r12
  LPVOID v17; // rax
  void **v18; // r15
  LPVOID v19; // rax
  unsigned int v20; // r8d
  unsigned int *v21; // rax
  unsigned int v22; // edx
  unsigned int v24; // [rsp+20h] [rbp-58h]
  __m128i v25; // [rsp+30h] [rbp-48h]
  __m128i v26; // [rsp+40h] [rbp-38h]
  SIZE_T dwBytes_4; // [rsp+50h] [rbp-28h]

  v25 = *a3;
  v26 = *a3;
  dwBytes_4 = a3[1].m128i_u64[0];
  CMeshGeometry2D::UnRegisterNotifiers(this);
  v8 = a5;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
  if ( v9 )
  {
    if ( v9 > a5 || (v7 = 12 * (v9 / 0xCuLL), v9 != v7) )
    {
      v24 = 1549;
LABEL_56:
      v15 = -2003303421;
      v11 = -2003303421;
      goto LABEL_57;
    }
    v10 = (void **)((char *)this + 120);
    v11 = 0;
    if ( this == (CMeshGeometry2D *)-120LL )
    {
      v11 = -2147024809;
    }
    else
    {
      v12 = HeapAlloc(WPF::g_processHeap, 0, v9);
      *v10 = v12;
      if ( !v12 )
        v11 = -2147024882;
    }
    if ( v11 < 0 )
    {
      v24 = 1555;
LABEL_17:
      v15 = v11;
LABEL_57:
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v15, v24);
      CMeshGeometry2D::UnRegisterNotifiers(this);
      goto LABEL_52;
    }
    memcpy_0(*v10, a4, v9);
    v8 = a5 - v9;
    *((_DWORD *)this + 28) = v9;
    a4 += v9;
  }
  if ( !v26.m128i_i32[3] )
    goto LABEL_22;
  if ( v26.m128i_i32[3] > v8 || (v26.m128i_i8[12] & 0xF) != 0 )
  {
    v24 = 1575;
    goto LABEL_56;
  }
  v13 = (void **)((char *)this + 136);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-136LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v14 = HeapAlloc(WPF::g_processHeap, 0, v26.m128i_u32[3]);
    *v13 = v14;
    if ( !v14 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v24 = 1581;
    goto LABEL_17;
  }
  memcpy_0(*v13, a4, v26.m128i_u32[3]);
  v8 -= v26.m128i_u32[3];
  *((_DWORD *)this + 32) = v26.m128i_i32[3];
  a4 += (unsigned int)v26.m128i_i32[3];
LABEL_22:
  if ( !(_DWORD)dwBytes_4 )
    goto LABEL_33;
  if ( (unsigned int)dwBytes_4 > v8 || (dwBytes_4 & 3) != 0 )
  {
    v24 = 1601;
    goto LABEL_56;
  }
  v16 = (void **)((char *)this + 152);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-152LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v17 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)dwBytes_4);
    *v16 = v17;
    if ( !v17 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v24 = 1607;
    goto LABEL_17;
  }
  memcpy_0(*v16, a4, (unsigned int)dwBytes_4);
  v8 -= dwBytes_4;
  *((_DWORD *)this + 36) = dwBytes_4;
  a4 += (unsigned int)dwBytes_4;
LABEL_33:
  if ( !HIDWORD(dwBytes_4) )
    goto LABEL_44;
  if ( HIDWORD(dwBytes_4) > v8 || (dwBytes_4 & 0x300000000LL) != 0 )
  {
    v24 = 1627;
    goto LABEL_56;
  }
  v18 = (void **)((char *)this + 168);
  v11 = 0;
  if ( this == (CMeshGeometry2D *)-168LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v19 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes_4));
    *v18 = v19;
    if ( !v19 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v24 = 1633;
    goto LABEL_17;
  }
  memcpy_0(*v18, a4, HIDWORD(dwBytes_4));
  *((_DWORD *)this + 40) = HIDWORD(dwBytes_4);
LABEL_44:
  v20 = *((_DWORD *)this + 32) >> 4;
  if ( v20 >= *((_DWORD *)this + 36) >> 2 )
    v20 = *((_DWORD *)this + 36) >> 2;
  v21 = (unsigned int *)*((_QWORD *)this + 21);
  if ( *((_DWORD *)this + 28) / 0xCu < v20 )
    v20 = *((_DWORD *)this + 28) / 0xCu;
  v22 = *((_DWORD *)this + 40) >> 2;
  v7 = 0LL;
  if ( v22 )
  {
    while ( *v21 < v20 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++v21;
      if ( (unsigned int)v7 >= v22 )
        goto LABEL_51;
    }
    v24 = 1665;
    goto LABEL_56;
  }
LABEL_51:
  v11 = 0;
LABEL_52:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v11;
}
