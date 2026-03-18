/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007D1FC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00B9D4C (DwmSyncCaptureSurfaceBits.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        int a2,
        __int64 a3,
        struct XDCOBJ *a4,
        HSURF a5,
        float a6,
        int a7,
        int a8,
        struct ERECTL *a9,
        struct REGION *a10)
{
  HANDLE v13; // r13
  PVOID v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rcx
  void *v17; // rbx
  NTSTATUS v18; // eax
  NTSTATUS v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _SURFOBJ *v27; // rdx
  HSURF v28; // rbx
  struct _SURFOBJ *v29; // rdx
  _BYTE *v30; // rsi
  struct ERECTL *v31; // r13
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  DYNAMICMODECHANGESHARELOCK *v36; // rcx
  int v38; // [rsp+38h] [rbp-C8h]
  _BYTE v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v44; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  char v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A4h] [rbp-5Ch]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  HSURF v49; // [rsp+B0h] [rbp-50h] BYREF
  struct ERECTL *v50; // [rsp+B8h] [rbp-48h]
  _QWORD v51[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v52[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h]
  _BYTE v54[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v55[80]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v56[4]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v57[52]; // [rsp+184h] [rbp+84h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  __int64 v59; // [rsp+1D0h] [rbp+D0h]
  int v60; // [rsp+1D8h] [rbp+D8h]
  int v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+210h] [rbp+110h]

  LODWORD(v43[0]) = a2;
  v13 = 0LL;
  Object = a1;
  v49 = a5;
  v50 = a9;
  Handle = 0LL;
  v14 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  memset(v51, 0, sizeof(v51));
  HIDWORD(v51[0]) = *((_DWORD *)a9 + 2) - *(_DWORD *)a9;
  LODWORD(v51[1]) = *((_DWORD *)a9 + 3) - *((_DWORD *)a9 + 1);
  v51[2] = 0LL;
  LODWORD(v51[3]) = 1;
  UserEnterUserCritSecShared();
  v15 = UserReferenceDwmProcess();
  v17 = (void *)UserReferenceDwmApiPort(v16);
  UserLeaveUserCritSec();
  LODWORD(v40) = 88;
  if ( v15 && v17 )
  {
    v18 = DwmSyncCaptureSurfaceBits(v17, a7, a8, SHIDWORD(v51[0]), v51[1], a3, (__int64)&v40, (__int64)&Handle);
    v13 = Handle;
    v19 = v18;
  }
  else
  {
    v19 = -1073741823;
    UserDereferenceDwmApiPort(v17);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v39);
  DCOBJ::DCOBJ((DCOBJ *)v55);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v54, a4, 0);
  if ( (v54[24] & 1) == 0 )
    v19 = -1073741823;
  if ( v19 >= 0 )
  {
    LOBYTE(v38) = 0;
    v19 = ObDuplicateObject(v15, v13, 0LL, &Handle, 4, 512, 1, v38);
    if ( v19 >= 0 )
    {
      v19 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v14 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v15);
  if ( v19 >= 0 )
  {
    v43[0] = 0LL;
    v40 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v21, v20, v22, v23);
    v19 = MmMapViewOfSection(v14, CurrentProcess, &v44, 0LL, 0LL, &v40, v43, 2, 0, 2);
    if ( v19 >= 0 )
    {
      LODWORD(v51[0]) = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v45, (struct _DEVBITMAPINFO *)v51, v44, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v19 = -1073741823;
      if ( v19 >= 0 )
      {
        v41 = 0;
        v40 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v40, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v25 = v45;
          v41 = 1;
          v43[0] = *(_QWORD *)(v45 + 128);
          if ( v43[0] )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)v43);
            v25 = v45;
          }
          *(_QWORD *)(v25 + 128) = v40;
          if ( v40 )
            INC_SHARE_REF_CNT(v40);
        }
        else
        {
          v19 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v40);
        if ( v19 >= 0 )
        {
          SURFREF::SURFREF((SURFREF *)v52, v49);
          v26 = v53;
          if ( v53 )
          {
            if ( *(_DWORD *)(v53 + 96) == 6 )
            {
              v27 = 0LL;
              v28 = *(HSURF *)(*(_QWORD *)a4 + 48LL);
              v49 = v28;
              if ( v45 )
                v27 = (struct _SURFOBJ *)(v45 + 24);
              v40 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v40, v27);
              if ( v53 )
                v29 = (struct _SURFOBJ *)(v53 + 24);
              else
                v29 = 0LL;
              v43[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v43, v29);
              if ( v40 && v43[0] && **(_QWORD **)(*(_QWORD *)a4 + 496LL) == *(_QWORD *)v53 )
              {
                v59 = 0LL;
                v30 = 0LL;
                v60 = 0;
                v62 = 0LL;
                v58 = 0LL;
                v31 = v50;
                v61 = 1;
                if ( a10 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v56, a10, v50, 0);
                  v30 = v56;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v49) )
                {
                  v32 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v28 + 355);
                }
                else
                {
                  v32 = EngCopyBits;
                }
                if ( !v30 || !ERECTL::bEmpty((ERECTL *)v57) )
                {
                  if ( v45 )
                    v33 = v45 + 24;
                  else
                    v33 = 0LL;
                  if ( v53 )
                    v34 = v53 + 24;
                  else
                    v34 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v32)(
                    v34,
                    v33,
                    v30,
                    0LL,
                    v31,
                    &gptlZero);
                }
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v40);
              v26 = v53;
            }
            if ( v26 )
              DEC_SHARE_REF_CNT(v26);
          }
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v52);
        }
      }
    }
  }
  if ( a10 )
    REGION::vDeleteREGION(a10);
  if ( v44 )
  {
    v35 = PsGetCurrentProcess(v21, v20, v22, v23);
    MmUnmapViewOfSection(v35, v44);
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v54);
  DCOBJ::~DCOBJ((DCOBJ *)v55);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v36);
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  return v19 >= 0;
}
