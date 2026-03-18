/*
 * XREFs of IoCreateDriver @ 0x140754B70
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x1409811A0 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     PiSwInit @ 0x1409F819C (PiSwInit.c)
 *     PiDaInit @ 0x1409F8248 (PiDaInit.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     CmInitSystem2 @ 0x1409FC974 (CmInitSystem2.c)
 *     WMIInitialize @ 0x140A02DB0 (WMIInitialize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     RtlStringCchLengthW @ 0x140099EFC (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1401C2210 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObMakeTemporaryObject @ 0x1406EA0A0 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407090A8 (EtwTiLogDriverObjectLoad.c)
 */

int __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(PVOID, _QWORD))
{
  int result; // eax
  _QWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  unsigned __int64 v7; // rdx
  _WORD *Pool_0; // rax
  _WORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm0
  _QWORD *v12; // rcx
  int inserted; // ebx
  HANDLE v14; // rsi
  NTSTATUS v15; // eax
  PVOID v16; // rdi
  PVOID v17; // rax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h]
  size_t pcchLength; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PVOID v24; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v25[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  void **v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v25[1] = 0;
  v29 = 0;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v21 = 0uLL;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
  }
  else
  {
    RtlStringCchPrintfW(
      pszDest,
      0x3CuLL,
      L"\\Driver\\%08u",
      (unsigned int)_InterlockedIncrement(&IopUniqueDriverObjectNumber));
    result = RtlStringCchLengthW(pszDest, 0x3CuLL, &pcchLength);
    if ( result < 0 )
      return result;
    if ( pcchLength > 0xFFFF )
      return -2147483643;
    LOWORD(Src[0]) = 2 * pcchLength;
    WORD1(Src[0]) = 2 * pcchLength + 2;
    Src[1] = pszDest;
  }
  v27 = Src;
  v25[0] = 48;
  v26 = 0LL;
  v28 = 592;
  v30 = 0LL;
  result = ObCreateObjectEx(0, IoDriverObjectType, (int)v25, 0, (__int64)Object, 416, 0, 0, &v20, 0LL);
  if ( result >= 0 )
  {
    v4 = v20;
    memset(v20, 0, 0x1A0uLL);
    v4[6] = v4 + 42;
    v4[42] = v4;
    *(_DWORD *)v4 = 22020100;
    *((_DWORD *)v4 + 4) = 4;
    memset64(v4 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v4[11] = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v7 = (unsigned __int64)i[6];
      if ( (unsigned __int64)a2 >= v7 && (unsigned __int64)a2 < v7 + *((unsigned int *)i + 16) )
      {
        *((_QWORD *)v20 + 3) = v7;
        break;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, LOWORD(Src[0]) + 2LL);
    *((_QWORD *)&v21 + 1) = Pool_0;
    v9 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(v21) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(v21) = LOWORD(Src[0]) + 2;
      memmove(Pool_0, Src[1], LOWORD(Src[0]));
      v11 = v21;
      v12 = v20;
      v9[v10 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v11;
      inserted = ObInsertObjectEx(v12, 0LL, 1u, 0, 0, 0LL, &Handle);
      if ( inserted < 0 )
        return inserted;
      v14 = Handle;
      v15 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v24, 0LL);
      v16 = v24;
      inserted = v15;
      if ( v15 < 0 )
      {
        ZwMakeTemporaryObject(v14);
        ZwClose(v14);
        return inserted;
      }
      ZwClose(v14);
      v17 = IopVerifierExAllocatePool_0(NonPagedPoolNx, WORD1(Src[0]));
      *((_QWORD *)v16 + 8) = v17;
      if ( v17 )
      {
        *((_DWORD *)v16 + 14) = Src[0];
        memmove(*((void **)v16 + 8), Src[1], WORD1(Src[0]));
      }
      inserted = a2(v16, 0LL);
      if ( inserted >= 0 )
      {
        EtwTiLogDriverObjectLoad((__int16 *)Src);
        return inserted;
      }
    }
    else
    {
      v16 = v20;
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v16);
    ObfDereferenceObject(v16);
    return inserted;
  }
  return result;
}
