/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1C00BC890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v1; // r15
  char *v3; // r14
  struct _VIDMM_GLOBAL_ALLOC *v4; // r13
  int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // rsi
  BOOL v8; // ebx
  struct _MDL *FullMDL; // rax
  VIDMM_APERTURE_SEGMENT *v10; // r14
  char *v11; // r13
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  BOOL v15; // ebx
  struct _MDL *v16; // rax

  v1 = (char *)this + 160;
  v3 = (char *)*((_QWORD *)this + 20);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_GLOBAL_ALLOC *)(v3 - 384);
    v3 = *(char **)v3;
    v5 = **((_DWORD **)v4 + 63);
    if ( (v5 & 0x10000000) == 0 )
    {
      v6 = *(_QWORD *)this;
      v7 = *((_QWORD *)v4 + 18) / 4096LL;
      v8 = (v5 & 0x800004) == 4;
      FullMDL = VidMmGetFullMDL(v4, 0LL);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v6 + 216))(
        this,
        v4,
        *((_QWORD *)v4 + 1) >> 12,
        v7,
        v7,
        FullMDL,
        0,
        v8);
    }
  }
  v10 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 22);
  while ( v10 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 176) )
  {
    v11 = (char *)v10 - 384;
    v10 = *(VIDMM_APERTURE_SEGMENT **)v10;
    v12 = **((_DWORD **)v11 + 63);
    if ( (v12 & 0x10000000) == 0 )
    {
      v13 = *(_QWORD *)this;
      v14 = *((_QWORD *)v11 + 18) / 4096LL;
      v15 = (v12 & 0x800004) == 4;
      v16 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v11, 0LL);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v13 + 216))(
        this,
        v11,
        *((_QWORD *)v11 + 1) >> 12,
        v14,
        v14,
        v16,
        0,
        v15);
    }
  }
}
