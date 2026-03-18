/*
 * XREFs of DestroyMonitor @ 0x1C0063C60
 * Callers:
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionUpdateCursorSizes @ 0x1C0045184 (ApiSetEditionUpdateCursorSizes.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0065CC0 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C010BCDC (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  __int64 v2; // rax
  struct tagMONITOR *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rax
  _DWORD *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  HRGN v14; // rcx
  unsigned int v15; // esi
  HRGN *v16; // rdi
  void **i; // rcx
  struct tagMONITOR *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &Handle) >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, a1);
    ZwClose(Handle);
  }
  if ( a1 == (struct tagMONITOR *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v2 = gpDispInfo;
  v3 = *(struct tagMONITOR **)(gpDispInfo + 104);
  if ( v3 )
  {
    if ( v3 == a1 )
    {
      v4 = *((_QWORD *)a1 + 7);
      if ( v4 )
        v5 = *(_QWORD *)(v4 + 48);
      else
        v5 = 0LL;
      *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = v5;
      *(_QWORD *)(v2 + 104) = v4;
    }
    else
    {
      for ( i = (void **)((char *)v3 + 56); ; i = (void **)((char *)v18 + 56) )
      {
        v18 = (struct tagMONITOR *)*i;
        if ( !*i )
          break;
        if ( v18 == a1 )
        {
          v19 = (_QWORD *)*((_QWORD *)a1 + 7);
          if ( v19 )
            v20 = v19[6];
          else
            v20 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v20;
          *i = v19;
          break;
        }
      }
    }
  }
  v6 = gpDispInfo;
  if ( a1 == *(struct tagMONITOR **)(gpDispInfo + 96) )
  {
    v7 = *(_QWORD *)(gpDispInfo + 104);
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 48);
    else
      v8 = 0LL;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = v8;
    *(_QWORD *)(v6 + 96) = v7;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  v9 = (_DWORD *)*((_QWORD *)a1 + 39);
  if ( v9 )
  {
    --*v9;
    v10 = (_DWORD *)*((_QWORD *)a1 + 39);
    if ( !*v10 )
      Win32FreePool((__int64)v10);
    *((_QWORD *)a1 + 39) = 0LL;
  }
  ApiSetEditionUpdateCursorSizes();
  _InterlockedOr(v21, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x16u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionHandleMoveSizeDataOnDestroyMonitorSupported() >= 0 )
    EditionHandleMoveSizeDataOnDestroyMonitor(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x17u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v14 = (HRGN)*((_QWORD *)a1 + 9);
    if ( v14 )
    {
      GreDeleteObject(v14);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    v15 = 0;
    v16 = (HRGN *)((char *)a1 + 80);
    do
    {
      if ( *v16 )
      {
        GreDeleteObject(*v16);
        *v16 = 0LL;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < 0x12 );
    return HMFreeObject(a1, v12, v13);
  }
  return result;
}
