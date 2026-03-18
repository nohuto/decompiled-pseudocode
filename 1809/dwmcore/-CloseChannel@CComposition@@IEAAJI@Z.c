/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18009CD38
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014B6A8 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x180065D48 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180099428 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18009CE50 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800CEA84 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014C0C0 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi
  __int64 v7; // r8
  CResourceTable **v8; // rdi
  struct CComposition *v9; // rdx
  __int64 *v10; // rdi
  char v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v17; // rcx
  CMILRefCountBase *v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v18);
  v6 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, AttachedChannel, 0x919u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 67) + 64LL))(*((_QWORD *)this + 67), (unsigned int)v2);
    v8 = (CResourceTable **)v18;
    if ( *((_BYTE *)v18 + 64) )
    {
      *((_BYTE *)v18 + 64) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 416, &v18, v7) )
      CMILRefCountBase::Release((CMILRefCountBase *)v8);
    CResourceTable::ReleaseHandleTableEntries(v8[3], v9, (struct CChannelContext *)v8);
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
    ReleaseInterface<CConnection>(&v18);
    v10 = (__int64 *)((char *)this + 312);
    v11 = 0;
    *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v2) = 0LL;
    v12 = *((_DWORD *)this + 84);
    if ( v12 )
    {
      do
      {
        v13 = *((_DWORD *)this + 84);
        v14 = *v10;
        v15 = v13 - 1;
        if ( *(_QWORD *)(*v10 + 8 * v15) )
          break;
        v17 = (unsigned int)(v12 - 1);
        if ( (unsigned int)v17 >= v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x19Cu);
        }
        else
        {
          if ( (unsigned int)v17 < (unsigned int)v15 )
          {
            do
            {
              *(_QWORD *)(v14 + 8 * v17) = *(_QWORD *)(v14 + 8LL * (unsigned int)(v17 + 1));
              v17 = (unsigned int)(v17 + 1);
              v13 = *((_DWORD *)this + 84);
            }
            while ( (unsigned int)v17 < v13 - 1 );
          }
          *((_DWORD *)this + 84) = v13 - 1;
        }
        v12 = *((_DWORD *)this + 84);
        v11 = 1;
      }
      while ( v12 );
      if ( v11 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 312, 8u);
    }
  }
  return v6;
}
