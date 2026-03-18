/*
 * XREFs of ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x1802004C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::CopyFrontToBackBuffer(CHwCompSwapChainTarget *this)
{
  unsigned int v1; // ebx
  const struct FastRegion::Internal::CRgnData **v2; // rsi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  LONG v10; // r8d
  struct CD3DSurface *v11; // r9
  __int64 v12; // rcx
  LONG v13; // edx
  FastRegion::Internal::CRgnData *v14; // rcx
  struct tagPOINT v16; // [rsp+38h] [rbp-59h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-51h] BYREF
  CD3DDeviceLevel1 *v18; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-31h]
  LONG *v21; // [rsp+68h] [rbp-29h]
  __int64 v22; // [rsp+70h] [rbp-21h]
  int v23; // [rsp+78h] [rbp-19h]
  FastRegion::Internal::CRgnData *v24; // [rsp+88h] [rbp-9h] BYREF
  int v25; // [rsp+90h] [rbp-1h] BYREF

  v1 = 0;
  v2 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 176);
  if ( **((_DWORD **)this + 13) || *(_DWORD *)*v2 )
  {
    v25 = 0;
    v24 = (FastRegion::Internal::CRgnData *)&v25;
    v4 = FastRegion::CRegion::Copy((void **)&v24, (void **)this + 13);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD7u);
    }
    else
    {
      v6 = FastRegion::CRegion::Union(&v24, v2);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD8u);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(char *, CD3DDeviceLevel1 **))(*((_QWORD *)this - 34) + 248LL))(
               (char *)this - 272,
               &v18);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDAu);
        }
        else
        {
          FastRegion::Internal::CRgnData::BeginIterator(v24, (struct FastRegion::CRegion::Iterator *)v19);
          while ( (unsigned __int64)v21 < v20 )
          {
            v10 = *v21;
            v11 = (struct CD3DSurface *)*((_QWORD *)this + 2);
            v17.bottom = v21[2];
            v17.top = v10;
            v12 = 2 * v23;
            v16.y = v10;
            v13 = *(_DWORD *)(v22 + 4 * v12);
            v17.right = *(_DWORD *)(v22 + 4 * v12 + 4);
            v17.left = v13;
            v16.x = v13;
            CD3DDeviceLevel1::CopySurfaceRect(v18, *((struct CD3DSurface **)this + 3), &v17, v11, &v16, 1);
            FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v19);
          }
        }
      }
    }
    FastRegion::CRegion::FreeMemory((void **)&v24);
  }
  return v1;
}
