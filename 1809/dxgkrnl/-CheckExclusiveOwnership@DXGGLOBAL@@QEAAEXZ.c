/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C020E1A8
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C02128F0 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C01C3594 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rdi
  char v3; // si
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _BYTE v8[16]; // [rsp+28h] [rbp-29h] BYREF
  char v9[8]; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp-11h]
  char v11; // [rsp+48h] [rbp-9h]
  char v12[8]; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v13[32]; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v14[40]; // [rsp+80h] [rbp+2Fh] BYREF

  v1 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v2 = *v1;
  v3 = 1;
  while ( 1 )
  {
    do
    {
      if ( v2 == v1 || !v2 )
      {
        v3 = 0;
        goto LABEL_20;
      }
      v4 = v2;
      v2 = (_QWORD *)*v2;
      _m_prefetchw(v4 + 3);
      v5 = v4[3];
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64(v4 + 3, v5 + 1, v5);
        if ( v6 == v5 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v5 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)v4, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
    if ( v4[315] )
      break;
LABEL_14:
    COREACCESS::~COREACCESS((COREACCESS *)v14);
    COREACCESS::~COREACCESS((COREACCESS *)v13);
  }
  v10 = v4;
  v11 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *((_DWORD *)v4 + 44) != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((DXGADAPTER **)v4[315], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((DXGADAPTER **)v4[315], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    goto LABEL_14;
  }
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
LABEL_20:
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v3;
}
