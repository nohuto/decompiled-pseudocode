/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCCF4
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180041E70 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180027C98 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18003F7F0 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18004202C (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CCE08 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180177E58 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  signed int AttachedChannel; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  CResourceTable **v7; // rdi
  struct CComposition *v8; // rdx
  __int64 *v9; // rdi
  char v10; // r8
  int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v16; // rcx
  CDirtyRegion *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v17);
  v6 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, AttachedChannel, 0x856u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 69) + 64LL))(*((_QWORD *)this + 69), (unsigned int)v2);
    v7 = (CResourceTable **)v17;
    if ( *((_BYTE *)v17 + 64) )
    {
      *((_BYTE *)v17 + 64) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 432, &v17) )
      CDirtyRegion::Release((CDirtyRegion *)v7);
    CResourceTable::ReleaseHandleTableEntries(v7[3], v8, (struct CChannelContext *)v7);
    CDirtyRegion::Release((CDirtyRegion *)v7);
    ReleaseInterface<CProcessAttribution>(&v17);
    v9 = (__int64 *)((char *)this + 328);
    v10 = 0;
    *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v2) = 0LL;
    v11 = *((_DWORD *)this + 88);
    if ( v11 )
    {
      do
      {
        v12 = *((_DWORD *)this + 88);
        v13 = *v9;
        v14 = v12 - 1;
        if ( *(_QWORD *)(*v9 + 8 * v14) )
          break;
        v16 = (unsigned int)(v11 - 1);
        if ( (unsigned int)v16 >= v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
        }
        else
        {
          if ( (unsigned int)v16 < (unsigned int)v14 )
          {
            do
            {
              *(_QWORD *)(v13 + 8 * v16) = *(_QWORD *)(v13 + 8LL * (unsigned int)(v16 + 1));
              v16 = (unsigned int)(v16 + 1);
              v12 = *((_DWORD *)this + 88);
            }
            while ( (unsigned int)v16 < v12 - 1 );
          }
          *((_DWORD *)this + 88) = v12 - 1;
        }
        v11 = *((_DWORD *)this + 88);
        v10 = 1;
      }
      while ( v11 );
      if ( v10 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 328, 8u);
    }
  }
  return v6;
}
