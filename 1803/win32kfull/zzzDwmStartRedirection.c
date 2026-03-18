/*
 * XREFs of zzzDwmStartRedirection @ 0x1C0008494
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0008110 (NtUserDwmKernelStartup.c)
 * Callees:
 *     DwmAsyncDesktopCreate @ 0x1C00083EC (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00094D0 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0009570 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     GreDwmStartup @ 0x1C00B4988 (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00B5278 (GreDwmShutdown.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // ebp
  __int64 i; // rsi
  __int64 v3; // rbx
  void *v4; // rax
  __int64 j; // rbx
  void *v6; // rbx
  __int64 k; // rsi
  void *v9; // rax
  __int64 v10; // rdx
  __int64 m; // rbx
  __int64 v12; // rdx
  _DWORD v13[12]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL),
                          1LL,
                          0LL,
                          &v14);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v14;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = ***(_QWORD ***)(i + 8);
          v4 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopCreate(v4, v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
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
                v9 = (void *)ReferenceDwmApiPort();
                DwmAsyncDesktopFree(v9);
              }
              v10 = *(_QWORD *)(ProcessWindowStation + 88);
              if ( v10 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v10, 1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
              break;
            }
          }
        }
        v6 = (void *)ReferenceDwmApiPort();
        if ( v6 )
        {
          memset(v13, 0, 0x2CuLL);
          v13[0] = 2883588;
          LOWORD(v13[1]) = 0x8000;
          v13[10] = 1073741895;
          LpcRequestPort(v6, v13);
          ObfDereferenceObject(v6);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v12 = *(_QWORD *)(ProcessWindowStation + 88);
        if ( v12 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v12, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
