/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00B7110
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABB64 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppp @ 0x1C0026C5C (McTemplateK0ppp.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0027D98 (McTemplateK0ppxxxxxqxx.c)
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B6E38 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *v2; // rcx
  const GUID *v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 k; // rbx
  __int64 i; // rbp
  __int64 *j; // rsi
  _QWORD **v8; // rax
  _QWORD *m; // rax
  _QWORD **v10; // rax
  VIDMM_PAGE_DIRECTORY *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+50h] [rbp-48h]
  _BYTE v14[32]; // [rsp+70h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, (struct _KTHREAD **)this + 7);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0ppp(
      (__int64)v2,
      &ReportGpuVirtualAddressAllocator,
      *(const GUID **)(*((_QWORD *)this + 11) + 32LL),
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  k = 0LL;
  while ( v4 )
  {
    k = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v12,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 10) + 6992LL); i = (unsigned int)(i + 1) )
    {
      for ( j = *(__int64 **)(k + 24 * i + 96); j != (__int64 *)(k + 24 * (i + 4)); j = (__int64 *)*j )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v13) = *((_DWORD *)j + 14);
          McTemplateK0ppxxxxxqxx(
            (__int64)v2,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            j[6],
            j[8],
            j[11],
            j[12],
            j[10],
            j[9],
            v13,
            j[13],
            j[14]);
        }
      }
    }
    v8 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v8 )
    {
      v2 = *v8;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  for ( m = (_QWORD *)*((_QWORD *)this + 5); m; m = (_QWORD *)*m )
    k = (unsigned __int64)m;
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v12,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    v10 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v10 )
    {
      v2 = *v10;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  v11 = (VIDMM_PAGE_DIRECTORY *)**((_QWORD **)this + 14);
  if ( v11 )
    VIDMM_PAGE_DIRECTORY::ReportState(v11, this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
