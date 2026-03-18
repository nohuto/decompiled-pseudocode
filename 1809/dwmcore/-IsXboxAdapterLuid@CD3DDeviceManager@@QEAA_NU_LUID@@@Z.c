/*
 * XREFs of ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180098F80
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009809C (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x18009AEDC (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD3DDeviceManager::IsXboxAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  bool IsXboxAdapter; // di
  struct CDXGIEnumeration *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r8
  struct CDXGIEnumeration *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  LowPart = a2.LowPart;
  IsXboxAdapter = 0;
  v8 = 0LL;
  if ( (int)CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v8) >= 0 )
  {
    v4 = v8;
    v5 = 0;
    if ( *((_DWORD *)v8 + 22) )
    {
      v6 = *((_QWORD *)v8 + 8);
      while ( __PAIR64__(v9.HighPart, LowPart) != *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 336LL) )
      {
        if ( ++v5 >= *((_DWORD *)v8 + 22) )
          goto LABEL_6;
      }
      IsXboxAdapter = CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(v6 + 8LL * v5));
    }
LABEL_6:
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return IsXboxAdapter;
}
