/*
 * XREFs of ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C024649C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01F5474 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246EB0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::SetVirtualRenderAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  volatile int v2; // eax
  struct DXGADAPTER **v3; // r8
  struct DXGADAPTER *v4; // rbx
  struct _LUID *v5; // rdx
  struct DXGADAPTER *v6; // r9
  unsigned __int64 v7; // [rsp+20h] [rbp-98h] BYREF
  struct _DXGK_WIN32K_PARAM_DATA v8; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v9[10]; // [rsp+50h] [rbp-68h] BYREF

  v2 = g_VgpuReplaceWarp;
  *((_QWORD *)this + 76) = a2;
  if ( v2 )
  {
    v3 = (struct DXGADAPTER **)((char *)this + 616);
    if ( a2 )
    {
      v6 = *v3;
      if ( *v3 && (*((_DWORD *)v6 + 77) & 0x10) != 0 )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v6 + 320), a2, v3);
      else
        *((_QWORD *)this + 77) = a2;
    }
    else
    {
      v4 = *v3;
      *((_QWORD *)this + 77) = *((_QWORD *)this + 75);
      if ( *((_BYTE *)v4 + 185) )
      {
        memset(v9, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v9[1]);
        v9[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v9[3]) = 62;
        LOBYTE(v9[6]) = -1;
        memset(&v8, 0, sizeof(v8));
        v8.SDCFlags = 2447;
        DXGADAPTER::IsAddapterSessionized(v4, v5, 0LL, &v7);
        DxgkRequestAsyncDisplaySwitchCallout(&v8, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v9, v7);
      }
    }
  }
}
