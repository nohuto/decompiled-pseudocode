/*
 * XREFs of HMAllocObject @ 0x1C002DDE0
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00495F8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0065EB8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C00F3C10 (UserAddBaseWindowHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     LockObjectAssignment @ 0x1C002E5D0 (LockObjectAssignment.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C002E62C (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002E75C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C002E7E4 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006C820 (-HMGrowHandleTable@@YAHXZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  size_t v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int16 v9; // si
  __int64 *v10; // r14
  size_t v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 *v13; // rbx
  __int64 v14; // r13
  _QWORD *v15; // r14
  char *v16; // rdi
  bool v17; // cc
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 result; // rax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  _BYTE *Heap; // rax
  void *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 *v27; // rax
  int v28; // [rsp+20h] [rbp-58h]
  __int64 *v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]

  v6 = a4;
  v28 = 0;
  v7 = 0LL;
  v8 = 3LL * a3;
  v9 = *((_WORD *)&gahti + 12 * a3 + 6);
  v30 = v8;
  if ( (v9 & 3) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 424);
    if ( *(_DWORD *)(v7 + 68) >= gUserProcessHandleQuota )
    {
      v26 = 1158LL;
      goto LABEL_63;
    }
  }
  while ( 1 )
  {
    if ( a3 != 1 && qword_1C01CCB30 )
    {
      v10 = &qword_1C01CCB30;
      goto LABEL_6;
    }
    if ( qword_1C01CCB28 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v10 = &qword_1C01CCB28;
LABEL_6:
  v29 = v10;
  if ( (v9 & 0x10) == 0 || !a2 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      if ( *((_DWORD *)&gahti + 2 * v8 + 4) )
      {
        v13 = (unsigned __int64 *)Win32AllocPoolZInit(v6);
        if ( !v13 )
          goto LABEL_62;
        Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *((unsigned int *)&gahti + 2 * v8 + 4));
        v13[5] = (unsigned __int64)Heap;
        if ( !Heap )
        {
          Win32FreePool((__int64)v13);
          goto LABEL_62;
        }
        v13[3] = 0LL;
        v13[4] = 0LL;
        v13[6] = Heap - (_BYTE *)gpvSharedAlloc;
      }
      else
      {
        v27 = (unsigned __int64 *)RtlAllocateHeap(gpvSharedAlloc, 0, v6);
        v13 = v27;
        if ( !v27 )
          goto LABEL_62;
        v27[3] = 0LL;
        v27[4] = 0LL;
        v27[6] = (char *)v27 - (_BYTE *)gpvSharedAlloc;
        v27[5] = 0LL;
      }
    }
    else
    {
      if ( a2 || (v28 = 1, (v9 & 0x20) == 0) )
        v28 = 0;
      v11 = v6;
      if ( (v9 & 0x200) != 0 )
      {
        v13 = (unsigned __int64 *)HMAllocateIsolatedType(a3);
      }
      else
      {
        v12 = *((_DWORD *)&gahti + 2 * v8 + 2);
        if ( (int)IsWin32AllocPoolImplSupported() < 0 )
          v13 = 0LL;
        else
          v13 = (unsigned __int64 *)Win32AllocPoolImpl(33LL, v11, v12);
        if ( v13 )
          memset(v13, 0, v11);
      }
      if ( !v13 )
        goto LABEL_62;
      if ( a3 == 1 )
      {
        v25 = Win32AllocPoolWithQuotaZInit(0x140uLL, 0x64777355u);
        v13[5] = (unsigned __int64)v25;
        if ( !v25 )
        {
          HMFreeUserOrIsolatedType(v9, 1u, v13);
          v13 = 0LL;
        }
      }
      if ( (v9 & 0x100) != 0 )
      {
        LockObjectAssignment(v13 + 3, a2);
        v13[4] = (unsigned __int64)v13;
      }
    }
LABEL_20:
    if ( v13 )
    {
      v14 = *v10;
      v15 = gpKernelHandleTable;
      v16 = (char *)qword_1C01CBA58 + 32 * v14;
      v17 = (unsigned int)v14 <= giheLast;
      *v29 = *((_QWORD *)gpKernelHandleTable + 3 * v14);
      if ( !v17 )
        giheLast = v14;
      v16[24] = a3;
      v15[3 * v14] = v13;
      if ( (v9 & 0x40) != 0 )
      {
        *(_QWORD *)v16 = v13[6];
      }
      else if ( (v9 & 0x10) != 0 && a2 )
      {
        *(_QWORD *)v16 = v13[6];
        *((_QWORD *)v16 + 2) = ***(_QWORD ***)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v16 = 0LL;
      }
      if ( v28 )
        v16[25] |= 0x40u;
      if ( (v9 & 2) != 0 )
      {
        *((_DWORD *)v13 + 4) = 0;
        v15[3 * v14 + 1] = *(_QWORD *)(a1 + 424);
        *((_QWORD *)v16 + 1) = PsGetProcessId(**(PEPROCESS **)(a1 + 424));
        if ( (v9 & 4) != 0 )
          v13[3] = *(_QWORD *)(a1 + 424);
      }
      else if ( (v9 & 1) != 0 )
      {
        v15[3 * v14 + 1] = a1;
        *((_QWORD *)v16 + 1) = PsGetThreadId(*(PETHREAD *)a1);
        v13[2] = v15[3 * v14 + 1];
      }
      v18 = (int)v14 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C01CBA58
                                                              + v14 * (unsigned int)dword_1C01CBA60
                                                              + 26) << 16);
      *v13 = v18;
      if ( *((_DWORD *)&gahti + 2 * v30 + 4) )
      {
        v21 = (unsigned __int64 *)v13[5];
        *v21 = v18;
        v21[1] = v13[6];
      }
      if ( v7 )
      {
        v19 = ++*(_DWORD *)(v7 + 68);
        if ( v19 > *(_DWORD *)(v7 + 72) )
          *(_DWORD *)(v7 + 72) = v19;
      }
      if ( ++giheCount > (unsigned int)giheCountPeak )
        giheCountPeak = giheCount;
      result = v15[3 * v14];
      v15[3 * v14 + 2] = 0LL;
      return result;
    }
    goto LABEL_62;
  }
  if ( (int)IsDesktopAllocSupported() < 0 )
  {
    v13 = 0LL;
    goto LABEL_20;
  }
  v13 = (unsigned __int64 *)HMAllocateUserOrIsolatedType(v6, v9, a3);
  if ( v13 )
  {
    v22 = DesktopAlloc(a2, *((unsigned int *)&gahti + 2 * v8 + 4), (a3 << 16) | 5u);
    v13[5] = v22;
    if ( v22 )
    {
      LockObjectAssignment(v13 + 3, a2);
      v23 = v13[5];
      v13[4] = (unsigned __int64)v13;
      v13[6] = v23 - *(_QWORD *)(a2 + 128);
      goto LABEL_20;
    }
    HMFreeUserOrIsolatedType(v9, a3, v13);
  }
LABEL_62:
  v26 = 8LL;
LABEL_63:
  UserSetLastError(v26);
  return 0LL;
}
