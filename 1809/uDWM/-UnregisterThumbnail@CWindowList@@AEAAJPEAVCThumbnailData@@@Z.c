/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18000A1BC
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18000A444 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18000A2BC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CVisual **a2)
{
  int v2; // edi
  struct CVisual *v5; // rcx
  struct CVisual *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rcx
  struct CVisual *v9; // rcx
  struct CVisual *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v13; // rcx
  __int64 v14; // rsi
  struct CVisual *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  struct CThumbnailData *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = (struct CThumbnailData *)a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 42) )
  {
    v5 = a2[13];
    if ( v5 )
    {
      v6 = a2[14];
      if ( v6 )
      {
        VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), v6);
        v13 = a2[14];
        if ( v13 )
        {
          CBaseObject::Release(v13);
          a2[14] = 0LL;
        }
      }
      v7 = a2[12];
      if ( v7 )
        VisualCollection::Remove((struct CVisual *)((char *)a2[13] + 32), v7);
      v8 = a2[13];
      if ( v8 )
      {
        CBaseObject::Release(v8);
        a2[13] = 0LL;
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)a2[2] + 49);
    if ( v14 )
    {
      v15 = a2[12];
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 528);
        if ( v16 )
        {
          v17 = VisualCollection::Remove((VisualCollection *)(v16 + 32), v15);
          v2 = v17;
          if ( v17 >= 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v14 + 528) + 72LL) == (*(_QWORD *)(v14 + 472) != 0LL) )
            {
              v18 = CWindowData::NotifyRepresentationChanged(*(CWindowData **)(v14 + 720));
              v2 = v18;
              if ( v18 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x6C0u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x6B9u);
          }
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1603u);
          return (unsigned int)v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((char *)a2[2] + 480, &v19);
  v9 = a2[3];
  if ( v9 )
    DynArray<CThumbnailData *,0>::Remove((char *)v9 + 512, &v19);
  v10 = a2[12];
  if ( v10 )
  {
    *((_QWORD *)v10 + 46) = 0LL;
    v11 = a2[12];
    if ( v11 )
    {
      CBaseObject::Release(v11);
      a2[12] = 0LL;
    }
  }
  (*(void (__fastcall **)(struct CVisual **, __int64))*a2)(a2, 1LL);
  DynArray<CThumbnailData *,0>::Remove((char *)this + 352, &v19);
  return (unsigned int)v2;
}
