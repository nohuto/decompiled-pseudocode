/*
 * XREFs of HMAllocObject @ 0x1C0028410
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636B4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00754BC (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C011D0F0 (UserAddBaseWindowHandle.c)
 * Callees:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0010A24 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0010A54 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0010AFC (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     LockObjectAssignment @ 0x1C00349A0 (LockObjectAssignment.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0061E30 (-HMGrowHandleTable@@YAHXZ.c)
 *     EtwTraceUserCreateHandle @ 0x1C0062580 (EtwTraceUserCreateHandle.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0pqqq @ 0x1C010DFB4 (McTemplateK0pqqq.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  size_t v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int16 v9; // di
  __int64 *v10; // r15
  size_t v11; // rbp
  unsigned int v12; // esi
  const void **v13; // rax
  const void **v14; // rsi
  __int64 v15; // r12
  char *v16; // r15
  bool v17; // cc
  __int64 *v18; // r14
  unsigned __int8 v19; // r8
  HANDLE ProcessId; // rax
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 result; // rax
  HANDLE ThreadId; // rax
  unsigned __int64 *v25; // rcx
  __int64 v26; // rax
  char *v27; // rcx
  unsigned int EtwUserHandleType; // eax
  _BYTE *Heap; // rax
  void *v30; // rax
  __int64 v31; // rcx
  const void **v32; // rax
  unsigned int Arg1; // eax
  PMCGEN_TRACE_CONTEXT v34; // rcx
  const GUID *Arg3; // r8
  unsigned int v36; // [rsp+28h] [rbp-70h]
  BOOL v37; // [rsp+44h] [rbp-54h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  __int64 *v39; // [rsp+50h] [rbp-48h]
  unsigned __int8 v42; // [rsp+B0h] [rbp+18h]

  v42 = a3;
  v4 = 0LL;
  v5 = a4;
  v6 = a1;
  v7 = (unsigned __int8)a3;
  v37 = 0;
  GetDomainLockRef(14LL, a2, a3);
  v38 = 24 * v7;
  v9 = *((_WORD *)&gahti + 12 * v7 + 6);
  if ( (v9 & 3) != 0 )
  {
    v4 = *(_QWORD *)(v6 + 416);
    if ( *(_DWORD *)(v4 + 68) >= gUserProcessHandleQuota )
    {
LABEL_65:
      v31 = 1158LL;
LABEL_68:
      UserSetLastError(v31);
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( (_BYTE)v7 != 1 && qword_1C0210700 )
    {
      v10 = &qword_1C0210700;
      goto LABEL_6;
    }
    if ( qword_1C02106F8 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_65;
  }
  v10 = &qword_1C02106F8;
LABEL_6:
  v39 = v10;
  if ( (v9 & 0x10) != 0 && a2 )
  {
    if ( (int)IsDesktopAllocSupported() < 0 )
      goto LABEL_67;
    v14 = (const void **)HMAllocateUserOrIsolatedType(v5, v9, v7);
    if ( !v14 )
      goto LABEL_67;
    v26 = DesktopAlloc(a2, *(unsigned int *)((char *)&gahti + v38 + 16), ((unsigned __int8)v7 << 16) | 5u);
    v14[5] = (const void *)v26;
    if ( !v26 )
    {
      HMFreeUserOrIsolatedType(v9, v7, v14);
      goto LABEL_67;
    }
    LockObjectAssignment(v14 + 3, a2);
    v27 = (char *)v14[5];
    v14[4] = v14;
    v14[6] = &v27[-*(_QWORD *)(a2 + 128)];
  }
  else if ( (v9 & 0x40) != 0 )
  {
    if ( *(_DWORD *)((char *)&gahti + v38 + 16) )
    {
      v14 = (const void **)Win32AllocPoolZInit(v5, *(unsigned int *)((char *)&gahti + v38 + 8));
      if ( !v14 )
        goto LABEL_67;
      Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *(unsigned int *)((char *)&gahti + v38 + 16));
      v14[5] = Heap;
      if ( !Heap )
      {
        Win32FreePool((__int64)v14);
        goto LABEL_67;
      }
      v14[3] = 0LL;
      v14[4] = 0LL;
      v14[6] = (const void *)(Heap - (_BYTE *)gpvSharedAlloc);
    }
    else
    {
      v32 = (const void **)RtlAllocateHeap(gpvSharedAlloc, 0, v5);
      v14 = v32;
      if ( !v32 )
        goto LABEL_67;
      v32[3] = 0LL;
      v32[4] = 0LL;
      v32[6] = (const void *)((char *)v32 - (_BYTE *)gpvSharedAlloc);
      v32[5] = 0LL;
    }
  }
  else
  {
    v37 = !a2 && (v9 & 0x20) != 0;
    v11 = v5;
    if ( (v9 & 0x200) != 0 )
    {
      v14 = (const void **)HMAllocateIsolatedType();
    }
    else
    {
      v12 = *(_DWORD *)((char *)&gahti + v38 + 8);
      if ( (int)IsWin32AllocPoolImplSupported() < 0 )
      {
        v14 = 0LL;
      }
      else
      {
        v13 = (const void **)Win32AllocPoolImpl(33LL, v11, v12);
        v14 = v13;
        if ( v13 )
          memset(v13, 0, v11);
      }
    }
    if ( !v14 )
      goto LABEL_67;
    if ( (_BYTE)v7 == 1 )
    {
      v30 = Win32AllocPoolWithQuotaZInit(0x140uLL, 0x64777355u);
      v14[5] = v30;
      if ( !v30 )
      {
        HMFreeUserOrIsolatedType(v9, 1u, v14);
        v14 = 0LL;
      }
    }
    if ( (v9 & 0x100) != 0 )
    {
      LockObjectAssignment(v14 + 3, a2);
      v14[4] = v14;
    }
    v6 = a1;
  }
  if ( !v14 )
  {
LABEL_67:
    v31 = 8LL;
    goto LABEL_68;
  }
  v15 = *v10;
  v16 = (char *)qword_1C0210758 + 32 * *v10;
  v17 = (unsigned int)v15 <= giheLast;
  v18 = (__int64 *)((char *)gpKernelHandleTable + 24 * v15);
  *v39 = *v18;
  if ( !v17 )
    giheLast = v15;
  v19 = v42;
  v16[24] = v42;
  *v18 = (__int64)v14;
  if ( (v9 & 0x40) != 0 )
  {
    *(_QWORD *)v16 = v14[6];
  }
  else if ( (v9 & 0x10) != 0 && a2 )
  {
    *(_QWORD *)v16 = v14[6];
    *((_QWORD *)v16 + 2) = ***(_QWORD ***)(a2 + 8);
  }
  else
  {
    *(_QWORD *)v16 = 0LL;
  }
  if ( v37 )
    v16[25] |= 0x40u;
  if ( (v9 & 2) != 0 )
  {
    *((_DWORD *)v14 + 4) = 0;
    v18[1] = *(_QWORD *)(v6 + 416);
    ProcessId = PsGetProcessId(**(PEPROCESS **)(v6 + 416));
    v19 = v42;
    *((_QWORD *)v16 + 1) = ProcessId;
    if ( (v9 & 4) != 0 )
      v14[3] = *(const void **)(v6 + 416);
  }
  else if ( (v9 & 1) != 0 )
  {
    v18[1] = v6;
    ThreadId = PsGetThreadId(*(PETHREAD *)v6);
    v19 = v42;
    *((_QWORD *)v16 + 1) = ThreadId;
    v14[2] = (const void *)v18[1];
  }
  v21 = (int)v15 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C0210758
                                                          + v15 * (unsigned int)dword_1C0210760
                                                          + 26) << 16);
  *v14 = (const void *)v21;
  if ( *(_DWORD *)((char *)&gahti + v38 + 16) )
  {
    v25 = (unsigned __int64 *)v14[5];
    *v25 = v21;
    v25[1] = (unsigned __int64)v14[6];
  }
  if ( v4 )
  {
    v22 = ++*(_DWORD *)(v4 + 68);
    if ( v22 > *(_DWORD *)(v4 + 72) )
      *(_DWORD *)(v4 + 72) = v22;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  if ( (v9 & 3) != 0 )
  {
    PsGetProcessId(**(PEPROCESS **)(v6 + 416));
    if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    {
      Arg1 = GetEtwUserHandleType(v42);
      McTemplateK0pqqq(v34, &UserCreateHandle, Arg3, *v14, Arg1, v36, (const unsigned int)Arg3);
    }
  }
  else
  {
    EtwUserHandleType = GetEtwUserHandleType(v19);
    EtwTraceUserCreateHandle((void *)*v14, EtwUserHandleType, 0);
  }
  result = *v18;
  v18[2] = 0LL;
  return result;
}
