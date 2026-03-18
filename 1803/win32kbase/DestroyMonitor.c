/*
 * XREFs of DestroyMonitor @ 0x1C00BBE90
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00DF034 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0126D80 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     ApiSetEditionHandleMoveSizeDataOnDestroyMonitor @ 0x1C013E788 (ApiSetEditionHandleMoveSizeDataOnDestroyMonitor.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *a1)
{
  __int64 v2; // rax
  struct tagMONITOR *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  void **i; // rcx
  struct tagMONITOR *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  HBRUSH v14; // rcx
  unsigned int v15; // esi
  HBRUSH *v16; // rdi
  signed __int32 v17[10]; // [rsp+0h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle) >= 0 )
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
      for ( i = (void **)((char *)v3 + 56); ; i = (void **)((char *)v7 + 56) )
      {
        v7 = (struct tagMONITOR *)*i;
        if ( !*i )
          break;
        if ( v7 == a1 )
        {
          v8 = (_QWORD *)*((_QWORD *)a1 + 7);
          if ( v8 )
            v9 = v8[6];
          else
            v9 = 0LL;
          *((_QWORD *)*(i - 2) + 2) = v9;
          *i = v8;
          break;
        }
      }
    }
  }
  v10 = gpDispInfo;
  if ( a1 == *(struct tagMONITOR **)(gpDispInfo + 96) )
  {
    v11 = *(_QWORD *)(gpDispInfo + 104);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 48);
    else
      v12 = 0LL;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = v12;
    *(_QWORD *)(v10 + 96) = v11;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  if ( (int)IsUpdateCursorSizesSupported() >= 0 )
    UpdateCursorSizes();
  _InterlockedOr(v17, 0);
  ApiSetEditionHandleMoveSizeDataOnDestroyMonitor(a1);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v14 = (HBRUSH)*((_QWORD *)a1 + 9);
    if ( v14 )
    {
      GreDeleteObject(v14);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    v15 = 0;
    v16 = (HBRUSH *)((char *)a1 + 80);
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
    return HMFreeObject(a1);
  }
  return result;
}
