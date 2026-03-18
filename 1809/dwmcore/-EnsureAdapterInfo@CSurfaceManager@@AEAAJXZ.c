/*
 * XREFs of ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18008AAA0
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18008A894 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800686EC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18008AB80 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18008AC60 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::EnsureAdapterInfo(CSurfaceManager *this)
{
  int v1; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  CSurfaceManager::AdapterInfo *v5; // rdi
  __int64 v6; // rbp
  struct CDXGIAdapterLimited *v7; // r15
  int v8; // eax
  unsigned int v9; // ecx
  CSurfaceManager::AdapterInfo *v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( !*((_BYTE *)this + 504) )
  {
    v3 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v11);
    v5 = v11;
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1B2u);
    }
    else
    {
      v6 = 0LL;
      if ( *((_DWORD *)v11 + 22) )
      {
        while ( 1 )
        {
          v7 = *(struct CDXGIAdapterLimited **)(*((_QWORD *)v5 + 8) + 8 * v6);
          v8 = DynArrayImpl<0>::AddMultiple((__int64)this + 440, 16, 1, &v11);
          v1 = v8;
          if ( v8 < 0 )
            break;
          CSurfaceManager::AdapterInfo::Construct(v11, v7, (struct CD3DDeviceManager *)&g_D3DDeviceManager);
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *((_DWORD *)v5 + 22) )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1BBu);
      }
      else
      {
LABEL_6:
        *((_BYTE *)this + 504) = 1;
      }
    }
    if ( v1 < 0 )
      CSurfaceManager::ReleaseAdapterInfo(this);
    if ( v5 )
      (*(void (__fastcall **)(CSurfaceManager::AdapterInfo *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return (unsigned int)v1;
}
