/*
 * XREFs of IoCreateDriver @ 0x14073B280
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x1409428F0 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
 *     WMIInitialize @ 0x1409B0D00 (WMIInitialize.c)
 *     CmInitSystem2 @ 0x1409C72F8 (CmInitSystem2.c)
 *     PiSwInit @ 0x1409C8524 (PiSwInit.c)
 *     PiDaInit @ 0x1409C85CC (PiDaInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x1401BA410 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
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
  size_t pcchLength[2]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  void **v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

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
    result = RtlStringCchLengthW(pszDest, 0x3CuLL, pcchLength);
    if ( result < 0 )
      return result;
    if ( pcchLength[0] > 0xFFFF )
      return -2147483643;
    LOWORD(Src[0]) = 2 * LOWORD(pcchLength[0]);
    WORD1(Src[0]) = 2 * LOWORD(pcchLength[0]) + 2;
    Src[1] = pszDest;
  }
  v26 = Src;
  v24 = 48;
  v25 = 0LL;
  v27 = 592;
  v28 = 0LL;
  result = ObCreateObjectEx(0, IoDriverObjectType, (int)&v24, 0, (__int64)Object, 416, 0, 0, &v20, 0LL);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, LOWORD(Src[0]) + 2LL);
    pcchLength[1] = (size_t)Pool_0;
    v9 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(pcchLength[0]) = Src[0];
      v10 = LOWORD(Src[0]);
      WORD1(pcchLength[0]) = LOWORD(Src[0]) + 2;
      memmove(Pool_0, Src[1], LOWORD(Src[0]));
      v11 = *(_OWORD *)pcchLength;
      v12 = v20;
      v9[v10 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v11;
      inserted = ObInsertObjectEx(v12, 0LL, 1LL, 0, 0, 0LL, (unsigned __int64 *)&Handle);
      if ( inserted < 0 )
        return inserted;
      v14 = Handle;
      v15 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v23, 0LL);
      v16 = v23;
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
        return inserted;
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
