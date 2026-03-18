/*
 * XREFs of zzzDwmStartRedirection @ 0x1C00D92C4
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C00D6B40 (NtUserDwmKernelStartup.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00D94B4 (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncDesktopCreate @ 0x1C00D9C84 (DwmAsyncDesktopCreate.c)
 *     GreDwmStartup @ 0x1C00DAF94 (GreDwmStartup.c)
 *     _GetProcessWindowStation @ 0x1C00DD4C0 (_GetProcessWindowStation.c)
 *     DwmAsyncDesktopFree @ 0x1C015E400 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C015EE2C (GreDwmShutdown.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  int RedirectionBitmap; // ebp
  __int64 v3; // r8
  __int64 i; // rsi
  void *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 j; // rbx
  void *v12; // rbx
  __int64 k; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  HSURF v18; // rdx
  __int64 m; // rbx
  HSURF v20; // rdx
  _DWORD v21[12]; // [rsp+20h] [rbp-48h] BYREF
  HSURF v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 1, 0, &v22);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v22;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v5 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8), v1, v3);
          DwmAsyncDesktopCreate(v5);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1u, 0LL, v6, v7);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              for ( k = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k);
                v17 = (void *)ReferenceDwmApiPort(**(_QWORD **)(k + 8), v15, v16);
                DwmAsyncDesktopFree(v17);
              }
              v18 = *(HSURF *)(ProcessWindowStation + 88);
              if ( v18 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v18, 1);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v12 = (void *)ReferenceDwmApiPort(v9, v8, v10);
        if ( v12 )
        {
          memset(v21, 0, 0x2CuLL);
          v21[0] = 2883588;
          LOWORD(v21[1]) = 0x8000;
          v21[10] = 1073741895;
          LpcRequestPort(v12, v21);
          ObfDereferenceObject(v12);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v20 = *(HSURF *)(ProcessWindowStation + 88);
        if ( v20 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v20, 1);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
