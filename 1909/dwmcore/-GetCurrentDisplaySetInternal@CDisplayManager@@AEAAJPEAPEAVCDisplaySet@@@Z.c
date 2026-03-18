/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800279AC
 * Callers:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180027A50 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(CDisplayManager *this, struct CDisplaySet **a2)
{
  int v3; // eax
  CDisplayManager *v4; // rcx
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rax
  struct CDXGIEnumeration *v7; // rdi
  int v9; // eax
  unsigned int v10; // ecx
  struct CDXGIEnumeration *v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = CDisplayManager::EnsureDXGIEnumeration(this, &v11);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, 0LL, 0, v3, 0xD8u, 0LL);
    goto LABEL_4;
  }
  v6 = (volatile signed __int32 *)g_DisplayManager;
  if ( g_DisplayManager )
  {
LABEL_3:
    _InterlockedIncrement(v6);
    *a2 = g_DisplayManager;
LABEL_4:
    v7 = v11;
    goto LABEL_5;
  }
  v7 = v11;
  v9 = CDisplayManager::DeriveCurrentDisplaySet(v4, v11, 0LL);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v6 = (volatile signed __int32 *)g_DisplayManager;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xDFu, 0LL);
LABEL_5:
  if ( v7 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v7 + 8LL))(v7);
  return v5;
}
