/*
 * XREFs of ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00FCB7C
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C003BB98 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z @ 0x1C00FCC3C (--0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z.c)
 */

struct DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::CreateSharedResource(
        struct ADAPTER_RENDER *a1,
        struct DXGADAPTER *a2,
        char a3)
{
  __int64 v3; // rax
  DXGSHAREDRESOURCE **v4; // rdi
  DXGSHAREDRESOURCE *v9; // rax
  DXGSHAREDRESOURCE *v10; // rbx
  unsigned int v11; // eax
  _QWORD *v12; // rax
  DXGSHAREDRESOURCE *v13; // rax

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  if ( *(int *)(v3 + 2184) >= 0x2000 )
    v11 = *(_DWORD *)(v3 + 256);
  else
    v11 = 1;
  if ( v11 > 1 )
  {
    v12 = operator new(0x18uLL, 0x4B677844u, 1, (POOL_TYPE)512);
    v4 = (DXGSHAREDRESOURCE **)v12;
    if ( v12 )
    {
      *v12 = 0LL;
      v12[1] = 0LL;
      KeInitializeSpinLock(v12 + 2);
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v4 )
      return 0LL;
  }
  if ( a3 )
  {
    v13 = (DXGSHAREDRESOURCE *)operator new(0xE8uLL, 0x4B677844u, 1, PagedPool);
    v10 = v13;
    if ( v13 )
    {
      DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v13, a1, a2);
      *((_DWORD *)v10 + 50) = 0;
      *((_DWORD *)v10 + 51) = 0;
      *((_DWORD *)v10 + 52) = 0;
      *((_QWORD *)v10 + 27) = 0LL;
      *((_DWORD *)v10 + 3) |= 0x20u;
      *(_QWORD *)v10 = &DXGSHAREDRESOURCECA::`vftable';
      goto LABEL_10;
    }
    goto LABEL_13;
  }
  v9 = (DXGSHAREDRESOURCE *)operator new(0xC8uLL, 0x4B677844u, 1, PagedPool);
  if ( !v9 )
  {
LABEL_13:
    v10 = 0LL;
    goto LABEL_10;
  }
  v10 = DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(v9, a1, a2);
LABEL_10:
  if ( v4 )
  {
    if ( v10 )
    {
      *((_QWORD *)v10 + 21) = v4;
      *v4 = v10;
    }
    else
    {
      DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v4);
    }
  }
  return v10;
}
