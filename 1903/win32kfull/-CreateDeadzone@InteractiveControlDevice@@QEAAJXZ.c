/*
 * XREFs of ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253394
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253BC4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0254164 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     GetUserHandedness @ 0x1C01EF790 (GetUserHandedness.c)
 */

__int64 __fastcall InteractiveControlDevice::CreateDeadzone(InteractiveControlDevice *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int UserHandedness; // ebp
  unsigned int v6; // ebx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  struct InteractiveControlManager *v14; // rax
  __int64 v15; // rcx
  __int64 i; // rsi

  v3 = *((_QWORD *)this + 30);
  UserHandedness = GetUserHandedness((__int64)this, a2, a3);
  if ( !v3 )
    return (unsigned int)-1073741811;
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 67) )
    return 0;
  v7 = (_DWORD *)Win32AllocPool(24LL, 1819440195LL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  *v7 = 2;
  v7[4] = 1;
  v9 = Win32AllocPool(24LL, 1819440195LL);
  *((_QWORD *)v8 + 1) = v9;
  if ( UserHandedness == 1 )
  {
    if ( v9 )
    {
      **((_DWORD **)v8 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 73);
      *(_DWORD *)(*((_QWORD *)v8 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 75);
      *(_DWORD *)(*((_QWORD *)v8 + 1) + 16LL) = 1;
      *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) = Win32AllocPool(
                                                 8LL * *(unsigned int *)(*((_QWORD *)v8 + 1) + 16LL),
                                                 1819440195LL);
      if ( *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) )
      {
        v10 = *((_DWORD *)InteractiveControlManager::Instance() + 77);
        **(_DWORD **)(*((_QWORD *)v8 + 1) + 8LL) = 0;
        v11 = v10 * v10;
        v12 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL);
        v13 = 1;
LABEL_15:
        *(_DWORD *)(v12 + 4) = v11;
        *((_DWORD *)this + 84) = v13;
        v6 = RIMCreatePointerDeviceDeadzone(v3 + 88, v8, (char *)this + 344);
        goto LABEL_16;
      }
    }
  }
  else if ( v9 )
  {
    **((_DWORD **)v8 + 1) = *((_DWORD *)InteractiveControlManager::Instance() + 69);
    *(_DWORD *)(*((_QWORD *)v8 + 1) + 4LL) = *((_DWORD *)InteractiveControlManager::Instance() + 71);
    *(_DWORD *)(*((_QWORD *)v8 + 1) + 16LL) = 1;
    *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) = Win32AllocPool(
                                               8LL * *(unsigned int *)(*((_QWORD *)v8 + 1) + 16LL),
                                               1819440195LL);
    if ( *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL) )
    {
      v14 = InteractiveControlManager::Instance();
      v11 = *((_DWORD *)v14 + 77) * *((_DWORD *)v14 + 77);
      **(_DWORD **)(*((_QWORD *)v8 + 1) + 8LL) = 0;
      v12 = *(_QWORD *)(*((_QWORD *)v8 + 1) + 8LL);
      v13 = 0;
      goto LABEL_15;
    }
  }
  v6 = -1073741670;
LABEL_16:
  v15 = *((_QWORD *)v8 + 1);
  if ( v15 )
  {
    for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
    {
      v15 = *((_QWORD *)v8 + 1);
      if ( *(_QWORD *)(v15 + 24 * i + 8) )
      {
        Win32FreePool(*(_QWORD *)(v15 + 24 * i + 8));
        *(_QWORD *)(*((_QWORD *)v8 + 1) + 24 * i + 8) = 0LL;
        v15 = *((_QWORD *)v8 + 1);
      }
    }
    Win32FreePool(v15);
    *((_QWORD *)v8 + 1) = 0LL;
  }
  Win32FreePool(v8);
  return v6;
}
