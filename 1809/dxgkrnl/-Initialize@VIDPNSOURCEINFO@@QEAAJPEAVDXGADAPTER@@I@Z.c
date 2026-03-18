/*
 * XREFs of ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C025F798
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C025ECC8 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001A414 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C003BEB4 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0122D40 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::Initialize(VIDPNSOURCEINFO *this, struct DXGADAPTER *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbp
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  int VidPnSourceOwnerType; // eax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  int v18; // ecx
  const char *ProcessImageFileName; // rax
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)a2 + 315);
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 11) = 0;
  v6 = a3;
  memset((char *)this + 12, 0, 0x20uLL);
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)v3, v6);
  v8 = VidPnSourceOwner;
  if ( VidPnSourceOwner )
  {
    _m_prefetchw((char *)VidPnSourceOwner + 64);
    v9 = *((_QWORD *)VidPnSourceOwner + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 8, v9 + 1, v9);
      if ( v10 == v9 )
      {
        *(_QWORD *)this = v8;
        break;
      }
    }
  }
  *((_DWORD *)this + 2) = v6;
  *(_QWORD *)((char *)this + 12) = *(_QWORD *)((char *)a2 + 276);
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 6) = 25;
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (2 * ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v3, v6))) & 2;
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (4 * ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                           (ADAPTER_DISPLAY *)v3,
                                                           v6))) & 4;
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (32 * ADAPTER_DISPLAY::IsPointerVisible((ADAPTER_DISPLAY *)v3, v6))) & 0x20;
  *((_DWORD *)this + 6) ^= ((unsigned __int8)*((_DWORD *)this + 6) ^ (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v3 + 112)
                                                                                                + 3760 * v6
                                                                                                + 1112) << 7)) & 0x80;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v3, v6);
  v12 = 0;
  if ( VidPnSourceOwnerType == 1 )
    v12 = 256;
  v13 = v12 | *((_DWORD *)this + 6) & 0xFFFFFEFF;
  *((_DWORD *)this + 6) = v13;
  if ( *((_QWORD *)a2 + 316) )
    v14 = *((_DWORD *)a2 + 64) > 1u ? 0x400 : 0;
  else
    v14 = 0;
  v15 = v14 | v13 & 0xFFFFFBFF;
  *((_DWORD *)this + 6) = v15;
  *((_DWORD *)this + 6) = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(2 * *((_DWORD *)a2 + 77))) & 0x200;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v3 + 400), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  for ( i = 0; i < 0xA; ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                  (DISPLAY_SOURCE *)(3760 * v6 + *(_QWORD *)(v3 + 112)),
                                  i);
    if ( LatestPlaneConfigInternal )
    {
      v18 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      if ( (v18 & 1) != 0 && i )
      {
        *((_DWORD *)this + 6) |= 0x800u;
        v18 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      }
      if ( (v18 & 8) != 0 )
        *((_DWORD *)this + 6) |= 0x1000u;
    }
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  if ( *(_QWORD *)this )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 56LL));
    RtlStringCchCopyA((char *)this + 28, 0xFuLL, ProcessImageFileName);
  }
  else
  {
    *((_BYTE *)this + 28) = 0;
  }
  if ( (*((_DWORD *)this + 6) & 0xC86) != 6 || !*(_QWORD *)this )
    *((_DWORD *)this + 11) = 1;
  return 0LL;
}
