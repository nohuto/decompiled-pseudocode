/*
 * XREFs of zzzDwmStartRedirection @ 0x1C00C8200
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0135D70 (NtUserDwmKernelStartup.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     DwmAsyncDesktopCreate @ 0x1C00C6BA8 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00C7968 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00C7A14 (DwmNotifyChildrenAddRemove.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     GreDwmStartup @ 0x1C00ECBBC (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00ED5A4 (GreDwmShutdown.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  int RedirectionBitmap; // ebp
  __int64 i; // rsi
  __int64 **v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 j; // rbx
  void *v10; // rbx
  __int64 k; // rsi
  __int64 **v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  void *v16; // rax
  HSURF v17; // rdx
  __int64 m; // rbx
  HSURF v19; // rdx
  _DWORD v20[12]; // [rsp+20h] [rbp-48h] BYREF
  HSURF v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 1, 0, &v21);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v21;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v4 = *(__int64 ***)(i + 8);
          v5 = **v4;
          v6 = (void *)ReferenceDwmApiPort(*v4, v1);
          DwmAsyncDesktopCreate(v6, v5);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1u, 0);
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
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v13 = *(__int64 ***)(k + 8);
                v14 = **v13;
                v16 = (void *)ReferenceDwmApiPort(*v13, v15);
                DwmAsyncDesktopFree(v16, v14);
              }
              v17 = *(HSURF *)(ProcessWindowStation + 88);
              if ( v17 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v17, 1);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
              break;
            }
          }
        }
        v10 = (void *)ReferenceDwmApiPort(v8, v7);
        if ( v10 )
        {
          memset(v20, 0, 0x2CuLL);
          v20[0] = 2883588;
          LOWORD(v20[1]) = 0x8000;
          v20[10] = 1073741895;
          LpcRequestPort(v10, v20);
          ObfDereferenceObject(v10);
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
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v19 = *(HSURF *)(ProcessWindowStation + 88);
        if ( v19 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v19, 1);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
