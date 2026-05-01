/*
 * XREFs of ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x1803B67A4
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180316EF4 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x1803B6734 (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(
        int a1,
        __int64 a2,
        __int64 a3,
        POINT *a4,
        _QWORD *a5,
        __int64 a6,
        char a7,
        _QWORD *a8)
{
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  signed int v14; // edi
  struct tagPOINT *v15; // rdx
  void *v16; // rcx
  __int64 v17; // rax
  int DpiForMonitorFromPoint; // eax
  int v19; // eax
  int v20; // ecx
  bool v21; // zf
  int v22; // eax

  *a8 = 0LL;
  v12 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 181;
    v12[4] = 0LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    *((_DWORD *)v12 + 14) = 0;
    v12[10] = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = v13 == 0LL ? 0x8007000E : 0;
  if ( v13 )
  {
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (LPVOID *)v13,
            a3,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( v14 < 0 )
    {
      ContextMenuRenderingData::`scalar deleting destructor'((ContextMenuRenderingData *)v13);
    }
    else
    {
      if ( a1 == 1 )
      {
        v16 = *(void **)(a2 + 72);
        *((_DWORD *)v13 + 7) = v16 != 0LL ? 77 : -1;
        DeleteObject(v16);
      }
      else
      {
        v17 = *(_QWORD *)(a2 + 72);
        *((_DWORD *)v13 + 7) = -1;
        v13[4] = v17;
      }
      v13[5] = *(_QWORD *)(a2 + 32);
      v13[6] = *(_QWORD *)(a2 + 40);
      if ( a6 )
      {
        DpiForMonitorFromPoint = *(_DWORD *)(a6 + 64);
      }
      else if ( a5[1] )
      {
        DpiForMonitorFromPoint = *(_DWORD *)(*(_QWORD *)*a5 + 64LL);
      }
      else
      {
        DpiForMonitorFromPoint = ImmersiveContextMenuHelper::_GetDpiForMonitorFromPoint(a4, v15);
      }
      *((_DWORD *)v13 + 16) = DpiForMonitorFromPoint;
      v19 = *(_DWORD *)(a2 + 8);
      if ( (v19 & 0x800) != 0 )
      {
        *((_DWORD *)v13 + 6) = 2048;
        v20 = 2560;
      }
      else if ( *(_QWORD *)(a2 + 24) )
      {
        *((_DWORD *)v13 + 6) = 16;
        v20 = 528;
      }
      else
      {
        *((_DWORD *)v13 + 6) = 0;
        v20 = 512;
      }
      v21 = (v19 & 0x200) == 0;
      *((_DWORD *)v13 + 14) = 0;
      v22 = *((_DWORD *)v13 + 6);
      if ( !v21 )
        v22 = v20;
      *((_DWORD *)v13 + 15) = a1;
      *((_DWORD *)v13 + 6) = v22;
      *a8 = v13;
      *((_BYTE *)v13 + 68) = (a7 & 8) != 0;
    }
  }
  return (unsigned int)v14;
}
