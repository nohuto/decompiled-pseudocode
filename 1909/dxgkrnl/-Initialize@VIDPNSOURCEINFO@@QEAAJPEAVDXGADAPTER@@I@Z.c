/*
 * XREFs of ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02963CC
 * Callers:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294EC0 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0295014 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001B614 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x1C0049D4C (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0049DFC (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0142F70 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::Initialize(VIDPNSOURCEINFO *this, struct DXGADAPTER *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v7; // rsi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // r14
  int VidPnSourceOwnerType; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  int v22; // ecx
  const char *ProcessImageFileName; // rax
  __int64 v24; // rdx
  _BYTE v25[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  if ( !a2 )
    return 3221225485LL;
  v7 = *((_QWORD *)a2 + 319);
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 12) = 0;
  memset((char *)this + 16, 0, 0x20uLL);
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)v7, v3);
  v9 = VidPnSourceOwner;
  if ( VidPnSourceOwner )
  {
    _m_prefetchw((char *)VidPnSourceOwner + 64);
    v10 = *((_QWORD *)VidPnSourceOwner + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 8, v10 + 1, v10);
      if ( v11 == v10 )
      {
        *(_QWORD *)this = v9;
        break;
      }
    }
  }
  *((_DWORD *)this + 2) = v3;
  *((_QWORD *)this + 2) = *(_QWORD *)((char *)a2 + 276);
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 7) = 25;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (2 * ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v7, v3))) & 2;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (4 * ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                           (ADAPTER_DISPLAY *)v7,
                                                           v3))) & 4;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (32
                                                   * ADAPTER_DISPLAY::IsPointerVisible(
                                                       (ADAPTER_DISPLAY *)v7,
                                                       (unsigned int)v3))) & 0x20;
  v12 = 3968 * v3;
  *((_DWORD *)this + 7) ^= ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(*(_BYTE *)(3968 * v3
                                                                                                + *(_QWORD *)(v7 + 112)
                                                                                                + 1112) << 7)) & 0x80;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v7, v3);
  v14 = 0;
  if ( VidPnSourceOwnerType == 1 )
    v14 = 256;
  v15 = v14 | *((_DWORD *)this + 7) & 0xFFFFFEFF;
  *((_DWORD *)this + 7) = v15;
  if ( *((_QWORD *)a2 + 320) )
    v16 = *((_DWORD *)a2 + 64) > 1u ? 0x400 : 0;
  else
    v16 = 0;
  v17 = v16 | v15 & 0xFFFFFBFF;
  *((_DWORD *)this + 7) = v17;
  v18 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(2 * *((_DWORD *)a2 + 77))) & 0x200;
  v19 = *(_QWORD *)this;
  *((_DWORD *)this + 7) = v18;
  if ( v19 )
    LOWORD(v19) = *(unsigned __int8 *)(v19 + 1786);
  *((_DWORD *)this + 7) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)((_WORD)v19 << 14)) & 0x4000;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(v7 + 504), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  for ( i = 0; i < 0xA; ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                  (DISPLAY_SOURCE *)(v12 + *(_QWORD *)(v7 + 112)),
                                  i);
    if ( LatestPlaneConfigInternal )
    {
      v22 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      if ( (v22 & 1) != 0 && i )
      {
        *((_DWORD *)this + 7) |= 0x800u;
        v22 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      }
      if ( (v22 & 8) != 0 )
        *((_DWORD *)this + 7) |= 0x1000u;
    }
  }
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  if ( *(_QWORD *)this )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 56LL));
    RtlStringCchCopyA((char *)this + 32, v24, ProcessImageFileName);
  }
  else
  {
    *((_BYTE *)this + 32) = 0;
  }
  if ( (*((_DWORD *)this + 7) & 0xC86) != 6 || !*(_QWORD *)this )
    *((_DWORD *)this + 12) = 1;
  DISPLAY_SOURCE::GetPresentDiagHistory(
    (DISPLAY_SOURCE *)(v12 + *(_QWORD *)(v7 + 112)),
    (VIDPNSOURCEINFO *)((char *)this + 64));
  result = 0LL;
  *((_DWORD *)this + 3) = *(_DWORD *)(v12 + *(_QWORD *)(v7 + 112) + 1068);
  return result;
}
