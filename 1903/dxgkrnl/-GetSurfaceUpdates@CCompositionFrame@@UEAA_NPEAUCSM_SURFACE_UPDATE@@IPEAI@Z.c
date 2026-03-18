/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0010FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00114F8 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

char __fastcall CCompositionFrame::GetSurfaceUpdates(
        char **this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int *v5; // r14
  CCompositionFrame *v8; // rbx
  char *v9; // rcx
  CCompositionFrame *v10; // rdx
  char result; // al
  CCompositionFrame *v12; // rdi
  CCompositionFrame *v13; // rcx
  char v14; // si
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  bool v18; // cf
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  CPushLock *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rbx
  bool v25; // zf
  __int128 v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rsi
  int SurfaceUpdate; // edi
  _QWORD *v32; // rcx
  _DWORD *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // edi
  struct DXGGLOBAL *Global; // rax
  CCompositionFrame *v38; // rcx
  int v39; // [rsp+20h] [rbp-68h]
  CPushLock *v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 v43[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  v5 = a4;
  v8 = (CCompositionFrame *)this;
  if ( *((_BYTE *)this + 138) )
    goto LABEL_6;
  v9 = this[15];
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)v8 + 18);
    if ( v10 != (CCompositionFrame *)((char *)v8 + 144) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)v8 + 136) = 1;
      *((_QWORD *)v8 + 15) = (char *)v10 - 8;
    }
  }
  result = *((_BYTE *)v8 + 136);
  if ( !result )
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)v8 + 16);
    *((_BYTE *)v8 + 138) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)v8 + 20);
      if ( v13 != (CCompositionFrame *)((char *)v8 + 160) )
      {
        *((_QWORD *)v8 + 16) = v13;
        v12 = v13;
        *((_BYTE *)v8 + 137) = 1;
      }
    }
    v14 = *((_BYTE *)v8 + 137);
    if ( !v14 )
    {
LABEL_10:
      *((_BYTE *)v8 + 138) = 0;
LABEL_11:
      result = v14;
      goto LABEL_12;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v15 = *((_DWORD *)v12 + 20);
      v16 = 0LL;
      v17 = *((_DWORD *)v12 + 16);
      v18 = v15 < v17;
      if ( v15 == v17 )
      {
        v15 = 0;
        *((_DWORD *)v12 + 20) = 0;
        v18 = v17 != 0;
      }
      if ( v18 )
        v16 = *((_QWORD *)v12 + 7) + 32LL * v15;
      if ( v16 )
        break;
LABEL_40:
      v12 = (CCompositionFrame *)**((_QWORD **)v8 + 16);
      if ( v12 == (CCompositionFrame *)((char *)v8 + 160) )
      {
        v12 = 0LL;
        *((_BYTE *)v8 + 137) = 0;
        v14 = 0;
      }
      else
      {
        v14 = *((_BYTE *)v8 + 137);
      }
      *((_QWORD *)v8 + 16) = v12;
      if ( !v14 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v19 = *(_QWORD *)(v16 + 8);
      v41 = *((_QWORD *)v8 + 10);
      v42 = v19;
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v19 + 48))(v19 + 48) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v19 + 56, 0LL);
        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v19 + 48))(v19 + 48) )
        {
          v39 = -1073741823;
          if ( (*(_QWORD *)(v19 + 96) != v41 || !v41) && *(int *)(v19 + 76) > 0 )
          {
            if ( !*(_DWORD *)(v19 + 120) )
              goto LABEL_64;
            v20 = *(_QWORD *)(v19 + 112);
            v21 = v19 + 104;
            if ( v20 == v19 + 104 )
              goto LABEL_64;
            v22 = 0LL;
            v23 = v20;
            v24 = v21;
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v23 - 24) + 16LL))(v23 - 24) )
                break;
              v22 = (CPushLock *)(v23 - 24);
              v23 = *(_QWORD *)(v23 + 8);
            }
            while ( v23 != v24 );
            v8 = (CCompositionFrame *)this;
            v25 = v22 == 0LL;
            v5 = a4;
            v40 = v22;
            v19 = v42;
            if ( v25 )
            {
LABEL_64:
              memset(a2, 0, 0xC8uLL);
              *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v19 + 24);
              v39 = 0;
LABEL_32:
              *(_QWORD *)(v19 + 96) = v41;
            }
            else
            {
              v39 = (*(__int64 (__fastcall **)(CPushLock *, __int64 *))(*(_QWORD *)v40 + 216LL))(v40, v43);
              if ( v39 >= 0 )
              {
                *(_DWORD *)a2 = 200;
                *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v42 + 24);
                *((_QWORD *)a2 + 2) = *((_QWORD *)v40 + 2);
                *((_DWORD *)a2 + 6) = *(_DWORD *)(v43[0] + 28);
                *((_DWORD *)a2 + 7) = *((_DWORD *)v40 + 61);
                (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v40 + 31) + 56LL))(
                  *((_QWORD *)v40 + 31),
                  (char *)a2 + 32);
                *(_OWORD *)((char *)a2 + 40) = *((_OWORD *)v40 + 16);
                *((_QWORD *)a2 + 7) = *((_QWORD *)v40 + 34);
                *((_DWORD *)a2 + 16) = *((_DWORD *)v40 + 70);
                v26 = *((_OWORD *)v40 + 3);
                *((_DWORD *)v40 + 64) = 0;
                *((_BYTE *)v40 + 42) = 0;
                *(_OWORD *)((char *)a2 + 72) = v26;
                *(_OWORD *)((char *)a2 + 88) = *((_OWORD *)v40 + 4);
                *(_OWORD *)((char *)a2 + 104) = *((_OWORD *)v40 + 5);
                *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v40 + 6);
                *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v40 + 7);
                *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v40 + 8);
                *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v40 + 9);
                *((_QWORD *)a2 + 23) = *((_QWORD *)v40 + 20);
                *((_DWORD *)a2 + 48) = (*(__int64 (__fastcall **)(CPushLock *))(*(_QWORD *)v40 + 176LL))(v40);
                goto LABEL_32;
              }
            }
          }
          v27 = v19 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 64) )
          {
            *(_QWORD *)(v19 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v27, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v27, 0LL);
          }
          KeLeaveCriticalRegion();
          if ( v39 >= 0 )
          {
            a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
            --a3;
            ++v4;
          }
          goto LABEL_37;
        }
        CPushLock::ReleaseLock((CPushLock *)(v19 + 48));
      }
LABEL_37:
      ++*((_DWORD *)v12 + 20);
      v16 = 0LL;
      v28 = *((unsigned int *)v12 + 20);
      if ( (unsigned int)v28 < *((_DWORD *)v12 + 16) )
        v16 = *((_QWORD *)v12 + 7) + 32 * v28;
      if ( !v16 )
        goto LABEL_40;
    }
  }
  while ( a3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
    {
      v29 = *((_QWORD *)v8 + 10);
      v30 = *(_QWORD **)(*((_QWORD *)v8 + 15) + 32LL);
      if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v30 + 6)) >= 0 )
      {
        SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v30 + 5), v29, a2);
        v32 = v30 + 7;
        if ( KeGetCurrentThread() == (struct _KTHREAD *)v30[8] )
        {
          v30[8] = 0LL;
          ExReleasePushLockExclusiveEx(v32, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v32, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( SurfaceUpdate >= 0 )
        {
          v33 = (_DWORD *)*((_QWORD *)v8 + 15);
          if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 64LL))(v33) == 1 )
          {
            v36 = v33[26];
            Global = DXGGLOBAL::GetGlobal(v35, v34);
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)Global + 38000) + 64LL))(v30, v36);
          }
          a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
          --a3;
          ++v4;
        }
      }
    }
    v38 = *(CCompositionFrame **)(*((_QWORD *)v8 + 15) + 8LL);
    if ( v38 == (CCompositionFrame *)((char *)v8 + 144) )
    {
      v9 = 0LL;
      *((_BYTE *)v8 + 136) = 0;
      result = 0;
    }
    else
    {
      result = *((_BYTE *)v8 + 136);
      v9 = (char *)v38 - 8;
    }
    *((_QWORD *)v8 + 15) = v9;
    if ( !result )
      goto LABEL_6;
  }
LABEL_12:
  *v5 = v4;
  return result;
}
