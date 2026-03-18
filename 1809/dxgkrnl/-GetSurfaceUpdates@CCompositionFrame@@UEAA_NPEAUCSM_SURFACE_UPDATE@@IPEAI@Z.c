/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C000D9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C000DD0C (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C0016D44 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00189E8 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionFrame::GetSurfaceUpdates(
        CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
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
  _QWORD *v19; // r13
  int SurfaceUpdate; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  CCompositionFrame *v23; // rcx
  CompositionSurfaceObject *v24; // rsi
  const struct CFlipToken *v25; // rax
  unsigned int v26; // edi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v28; // [rsp+50h] [rbp+8h]
  int v29; // [rsp+50h] [rbp+8h]

  v4 = 0;
  if ( *((_BYTE *)this + 138) )
    goto LABEL_6;
  v9 = (char *)*((_QWORD *)this + 15);
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)this + 18);
    if ( v10 != (CCompositionFrame *)((char *)this + 144) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)this + 136) = 1;
      *((_QWORD *)this + 15) = (char *)v10 - 8;
    }
  }
  result = *((_BYTE *)this + 136);
  if ( result )
  {
    while ( a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
      {
        v24 = *(CompositionSurfaceObject **)(*((_QWORD *)this + 15) + 32LL);
        if ( CompositionSurfaceObject::GetSurfaceUpdate(v24, *((_QWORD *)this + 10), a2) >= 0 )
        {
          v25 = CFlipToken::FromToken(*((const struct CToken **)this + 15));
          if ( v25 )
          {
            v26 = *((_DWORD *)v25 + 26);
            Global = DXGGLOBAL::GetGlobal();
            (*(void (__fastcall **)(CompositionSurfaceObject *, _QWORD))(*((_QWORD *)Global + 2541) + 56LL))(v24, v26);
          }
          a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
          --a3;
          ++v4;
        }
      }
      v23 = *(CCompositionFrame **)(*((_QWORD *)this + 15) + 8LL);
      if ( v23 == (CCompositionFrame *)((char *)this + 144) )
      {
        v9 = 0LL;
        *((_BYTE *)this + 136) = 0;
        result = 0;
      }
      else
      {
        result = *((_BYTE *)this + 136);
        v9 = (char *)v23 - 8;
      }
      *((_QWORD *)this + 15) = v9;
      if ( !result )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)this + 16);
    *((_BYTE *)this + 138) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)this + 20);
      if ( v13 != (CCompositionFrame *)((char *)this + 160) )
      {
        *((_QWORD *)this + 16) = v13;
        v12 = v13;
        *((_BYTE *)this + 137) = 1;
      }
    }
    v14 = *((_BYTE *)this + 137);
    if ( v14 )
    {
      while ( a3 )
      {
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
        {
          while ( a3 )
          {
            v19 = *(_QWORD **)(v16 + 8);
            v28 = *((_QWORD *)this + 10);
            if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v19 + 6)) >= 0 )
            {
              SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v19 + 5), v28, a2);
              v21 = v19 + 7;
              v29 = SurfaceUpdate;
              if ( KeGetCurrentThread() == (struct _KTHREAD *)v19[8] )
              {
                v19[8] = 0LL;
                ExReleasePushLockExclusiveEx(v21, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v21, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v29 >= 0 )
              {
                a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
                --a3;
                ++v4;
              }
            }
            ++*((_DWORD *)v12 + 20);
            v16 = 0LL;
            v22 = *((unsigned int *)v12 + 20);
            if ( (unsigned int)v22 < *((_DWORD *)v12 + 16) )
              v16 = *((_QWORD *)v12 + 7) + 32 * v22;
            if ( !v16 )
              goto LABEL_28;
          }
          break;
        }
LABEL_28:
        v12 = (CCompositionFrame *)**((_QWORD **)this + 16);
        if ( v12 == (CCompositionFrame *)((char *)this + 160) )
        {
          v12 = 0LL;
          *((_BYTE *)this + 137) = 0;
          v14 = 0;
        }
        else
        {
          v14 = *((_BYTE *)this + 137);
        }
        *((_QWORD *)this + 16) = v12;
        if ( !v14 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      *((_BYTE *)this + 138) = 0;
    }
    result = v14;
  }
  *a4 = v4;
  return result;
}
