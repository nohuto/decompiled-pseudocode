/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00155A0
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D1F0 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     DwmSyncCaptureSurfaceBits @ 0x1C0015B88 (DwmSyncCaptureSurfaceBits.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0032148 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008C9BC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  __int64 v11; // r14
  PVOID v12; // r13
  __int64 v13; // rdi
  void *v14; // rbx
  int v15; // eax
  int v16; // esi
  HANDLE v17; // rbx
  int v18; // eax
  _BYTE *v19; // r14
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcess; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  struct _SURFOBJ *v29; // rdx
  __int64 v30; // rdi
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v32; // rdx
  __int64 v33; // rax
  BOOL v34; // esi
  DYNAMICMODECHANGESHARELOCK *v35; // rcx
  int v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  void *v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  char v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  struct ERECTL *v48; // [rsp+A8h] [rbp-58h]
  PVOID v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h] BYREF
  int v51; // [rsp+BCh] [rbp-44h]
  int v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C4h] [rbp-3Ch]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  _QWORD v56[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[32]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v58[2]; // [rsp+110h] [rbp+10h] BYREF
  __int16 v59; // [rsp+120h] [rbp+20h]
  _BYTE v60[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v61[52]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+190h] [rbp+90h]
  int v64; // [rsp+198h] [rbp+98h]
  int v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+D0h]

  Object = a1;
  Handle = a4;
  v11 = 0LL;
  v48 = a8;
  v12 = 0LL;
  v51 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v52 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v38 = 0LL;
  v43 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v45 = 0;
  v46 = 0;
  v50 = 0;
  v53 = 0;
  v55 = 1LL;
  v54 = 0LL;
  UserEnterUserCritSecShared();
  v13 = UserReferenceDwmProcess();
  v14 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  LODWORD(v40) = 88;
  if ( v13 && v14 )
  {
    v15 = DwmSyncCaptureSurfaceBits(v14, a7, v51, v52, a2, (__int64)&v40, (__int64)&v38);
    v11 = v38;
    v16 = v15;
  }
  else
  {
    v16 = -1073741823;
    UserDereferenceDwmApiPort(v14);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v39);
  v59 = 256;
  v58[0] = 0LL;
  v58[1] = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a3, 0);
  v17 = Handle;
  if ( (v57[24] & 1) == 0 || **(HANDLE **)(*(_QWORD *)a3 + 496LL) != Handle )
    v16 = -1073741823;
  if ( v16 < 0 )
  {
    v19 = 0LL;
  }
  else
  {
    LOBYTE(v37) = 0;
    v18 = ObDuplicateObject(v13, v11, 0LL, &Handle, 4, 512, 1, v37);
    v19 = 0LL;
    v16 = v18;
    if ( v18 >= 0 )
    {
      v20 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v12 = Object;
      v16 = v20;
      v49 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v13);
  if ( v16 >= 0 )
  {
    v40 = 0LL;
    v38 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
    v16 = MmMapViewOfSection(v12, CurrentProcess, &v43, 0LL, 0LL, &v40, &v38, 2, 0, 2);
    if ( v16 >= 0 )
    {
      v50 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v44, (struct _DEVBITMAPINFO *)&v50, v43, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v16 = -1073741823;
      if ( v16 >= 0 )
      {
        v41 = 0;
        v40 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v40, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v26 = v44;
          v41 = 1;
          v38 = *(_QWORD *)(v44 + 128);
          if ( v38 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v38);
            v26 = v44;
          }
          *(_QWORD *)(v26 + 128) = v40;
          if ( v40 )
            INC_SHARE_REF_CNT(v40);
        }
        else
        {
          v16 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v40);
        if ( v16 >= 0 )
        {
          LOBYTE(v21) = 5;
          v27 = HmgShareLockCheck(v17, v21);
          v28 = v27;
          if ( v27 )
          {
            if ( *(_DWORD *)(v27 + 96) == 6 )
            {
              v29 = 0LL;
              v30 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
              v38 = v30;
              if ( v44 )
                v29 = (struct _SURFOBJ *)(v44 + 24);
              v56[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v56, v29);
              v40 = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)&v40, (struct _SURFOBJ *)(v28 + 24));
              if ( v56[0] && v40 )
              {
                v63 = 0LL;
                v64 = 0;
                v65 = 1;
                v66 = 0LL;
                v62 = 0LL;
                if ( a9 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v60, a9, v48, 0);
                  v19 = v60;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v38) )
                {
                  v31 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v30 + 2840);
                }
                else
                {
                  v31 = EngCopyBits;
                }
                if ( !v19 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v61) )
                {
                  if ( v44 )
                    v32 = v44 + 24;
                  else
                    v32 = 0LL;
                  ((void (__fastcall *)(__int64, __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v31)(
                    v28 + 24,
                    v32,
                    v19,
                    0LL,
                    v48,
                    &gptlZero);
                }
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v40);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v56);
              v12 = v49;
            }
            DEC_SHARE_REF_CNT(v28);
          }
        }
      }
    }
  }
  if ( a9 )
    REGION::vDeleteREGION(a9);
  if ( v43 )
  {
    v33 = PsGetCurrentProcess(v22, v21, v23, v24);
    MmUnmapViewOfSection(v33, v43);
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  v34 = v16 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
  if ( v58[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v58);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v35);
  SURFMEM::~SURFMEM((SURFMEM *)&v44);
  return v34;
}
