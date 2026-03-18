/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800A3964
 * Callers:
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800E6210 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x180247AD8 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( a3 )
  {
    *((_QWORD *)&v15 + 1) = a3;
    v5 = 0;
    v6 = *((_DWORD *)this + 10);
    v7 = v6;
    *(_QWORD *)&v15 = a2;
    if ( v6 )
    {
      while ( *(HMONITOR *)(*((_QWORD *)this + 2) + 16LL * v5) != a2 )
      {
        if ( ++v5 >= v6 )
          goto LABEL_3;
      }
      v7 = v5;
    }
LABEL_3:
    v8 = (char *)this + 16;
    if ( v7 >= v6 )
    {
      v9 = *((unsigned int *)this + 10);
      v10 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v10 < (unsigned int)v9 )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      else
      {
        if ( (unsigned int)v10 <= *((_DWORD *)v8 + 5) )
        {
          *(_OWORD *)(*(_QWORD *)v8 + 16 * v9) = v15;
          *((_DWORD *)v8 + 6) = v10;
LABEL_7:
          _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
          return v4;
        }
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 16, 1, &v15);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3u, 0LL);
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v4, 0x4Au, 0LL);
        return v4;
      }
      goto LABEL_7;
    }
    v14 = 2LL * v7;
    CDirtyRegion::Release(*(CDirtyRegion **)(*(_QWORD *)v8 + 16LL * v7 + 8));
    *(_OWORD *)(*(_QWORD *)v8 + 8 * v14) = v15;
    goto LABEL_7;
  }
  return v4;
}
