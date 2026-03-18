/*
 * XREFs of zzzDwmStartRedirection @ 0x1C0010444
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C011B180 (NtUserDwmKernelStartup.c)
 * Callees:
 *     DwmAsyncDesktopCreate @ 0x1C000FBC0 (DwmAsyncDesktopCreate.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C000FC74 (DwmNotifyChildrenAddRemove.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0032864 (CreateOrGetRedirectionBitmap.c)
 *     GreDwmStartup @ 0x1C007AC84 (GreDwmStartup.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C015F160 (GreDwmShutdown.c)
 *     DwmAsyncDesktopFree @ 0x1C015F520 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  int RedirectionBitmap; // ebp
  __int64 v3; // r8
  __int64 i; // rsi
  __int64 **v5; // rax
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 j; // rbx
  void *v12; // rbx
  __int64 k; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rdx
  __int64 m; // rbx
  __int64 v20; // rdx
  _DWORD v21[12]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
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
                          &v22);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v22;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v5 = *(__int64 ***)(i + 8);
          v6 = **v5;
          v7 = (void *)ReferenceDwmApiPort(*v5, v1, v3);
          DwmAsyncDesktopCreate(v7, v6);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
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
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v17 = (void *)ReferenceDwmApiPort(**(_QWORD **)(k + 8), v15, v16);
                DwmAsyncDesktopFree(v17);
              }
              v18 = *(_QWORD *)(ProcessWindowStation + 88);
              if ( v18 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v18, 1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
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
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v20 = *(_QWORD *)(ProcessWindowStation + 88);
        if ( v20 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v20, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
