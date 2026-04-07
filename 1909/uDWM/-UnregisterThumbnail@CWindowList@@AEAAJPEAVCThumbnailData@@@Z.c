/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180032A1C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x18002F930 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180032B1C (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
  void *v19; // [rsp+28h] [rbp-10h]
  struct CThumbnailData *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = (struct CThumbnailData *)a2;
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
    v14 = *((_QWORD *)a2[2] + 50);
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
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x6A5u, v19);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x69Eu, v19);
          }
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1673u, v19);
          return (unsigned int)v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((char *)a2[2] + 488, &v20);
  v9 = a2[3];
  if ( v9 )
    DynArray<CThumbnailData *,0>::Remove((char *)v9 + 520, &v20);
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
  DynArray<CThumbnailData *,0>::Remove((char *)this + 352, &v20);
  return (unsigned int)v2;
}
