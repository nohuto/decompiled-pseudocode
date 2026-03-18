/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18007E798
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077790 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007E678 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x18020E860 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  int v3; // edi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  char *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v12; // eax
  __int64 v13; // rbx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *((_QWORD *)&v14 + 1) = a3;
    v5 = 0;
    v6 = *((_DWORD *)this + 10);
    v7 = v6;
    *(_QWORD *)&v14 = a2;
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
    if ( v7 < v6 )
    {
      v13 = 2LL * v7;
      CMILRefCountBase::Release(*(CMILRefCountBase **)(*(_QWORD *)v8 + 16LL * v7 + 8));
      *(_OWORD *)(*(_QWORD *)v8 + 8 * v13) = v14;
    }
    else
    {
      v9 = *((unsigned int *)this + 10);
      v10 = v9 + 1;
      v3 = (int)v9 + 1 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( (int)v9 + 1 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)v8 + 5) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 16, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)v8 + 16 * v9) = v14;
        *((_DWORD *)v8 + 6) = v10;
      }
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x4Cu);
        return (unsigned int)v3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  return (unsigned int)v3;
}
