/*
 * XREFs of HMFreeObject @ 0x1C005F1D0
 * Callers:
 *     HMDestroyObject @ 0x1C005F1A0 (HMDestroyObject.c)
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0128538 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyKF @ 0x1C012A5BC (DestroyKF.c)
 *     DestroyKL @ 0x1C012A5F4 (DestroyKL.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0005D80 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C001CBF4 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UnlockObjectAssignment @ 0x1C0035960 (UnlockObjectAssignment.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     SharedFree @ 0x1C00A1710 (SharedFree.c)
 *     HMCleanupGrantedHandle @ 0x1C00B0F78 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *a1)
{
  int v1; // r8d
  __int64 v2; // r15
  _QWORD **v4; // r14
  char *v5; // rdi
  __int64 v6; // rsi
  unsigned __int16 v7; // bp
  __int64 v8; // rax
  PVOID *v9; // rcx
  bool v10; // zf
  _QWORD *v11; // r8
  void *v12; // rcx
  char v13; // dl
  CompositionObject *v14; // rcx
  __int16 v15; // bx
  __int16 v16; // ax
  __int64 v17; // rdi
  PVOID *v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)a1;
  v2 = 0LL;
  v4 = (_QWORD **)gpKernelHandleTable;
  v5 = (char *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = *((_WORD *)&unk_1C0172BBC + 12 * (unsigned __int8)v5[24]);
  if ( (v7 & 2) != 0 )
  {
    v8 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v1 + 1);
  }
  else if ( (v7 & 1) != 0 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v1 + 1) + 416LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
    --*(_DWORD *)(v8 + 68);
  --giheCount;
  if ( (v5[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*v4[3 * (unsigned __int16)v1]);
    v5[25] &= ~0x20u;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v9 = (PVOID *)a1[3];
    a1[3] = 0LL;
    v10 = (v5[25] & 0x40) == 0;
    v19 = v9;
    if ( v10 )
    {
      v11 = (_QWORD *)a1[5];
      if ( !v11 || v11 == a1 )
      {
        RtlFreeHeap(v9[16], 0, a1);
        goto LABEL_18;
      }
      RtlFreeHeap(v9[16], 0, v11);
    }
    else
    {
      Win32FreePool(a1[5]);
    }
    HMFreeUserOrIsolatedType(v7, v5[24], a1);
LABEL_18:
    UnlockObjectAssignment((void **)&v19);
    goto LABEL_32;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v12 = (void *)a1[5];
    if ( !v12 )
    {
      SharedFree(a1);
      goto LABEL_32;
    }
    SharedFree(v12);
    goto LABEL_27;
  }
  v13 = v5[24];
  if ( v13 == 19 )
  {
    v14 = (CompositionObject *)v4[v6][4];
  }
  else
  {
    if ( v13 != 22 )
    {
      if ( (v7 & 0x100) == 0 )
      {
LABEL_28:
        HMFreeUserOrIsolatedType(v7, v13, a1);
        goto LABEL_32;
      }
      v19 = (PVOID *)a1[3];
      UnlockObjectAssignment((void **)&v19);
LABEL_27:
      v13 = v5[24];
      goto LABEL_28;
    }
    v2 = v4[v6][2];
    v14 = *(CompositionObject **)(v2 + 32);
  }
  CompositionObject::Release(v14);
LABEL_32:
  v15 = *((_WORD *)v5 + 13);
  memset(v5, 0, 0x20uLL);
  v4[v6] = 0LL;
  v4[v6 + 1] = 0LL;
  v4[v6 + 2] = 0LL;
  v16 = 1;
  if ( v15 != -2 )
    v16 = v15 + 1;
  *((_WORD *)v5 + 13) = v16;
  v17 = (v5 - (_BYTE *)qword_1C01A0E28) >> 5;
  if ( (v17 & 1) != 0 )
  {
    v4[v6] = (_QWORD *)qword_1C01A0AF8;
    qword_1C01A0AF8 = v17;
  }
  else
  {
    v4[v6] = (_QWORD *)qword_1C01A0AF0;
    qword_1C01A0AF0 = v17;
  }
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObject(v2);
  return 1LL;
}
