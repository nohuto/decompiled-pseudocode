/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01EFE38
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  void **v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  SIZE_T v9; // rax
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int i; // ebx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (ADAPTER_DISPLAY *)((char *)this + 240), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v6 = (void **)*((_QWORD *)this + 35);
  v7 = 0;
  if ( a2 )
  {
    if ( v6 )
    {
      v8 = WdLogNewEntry5_WdError(v6, v4, v5);
      *(_QWORD *)(v8 + 24) = 8366LL;
      WdLogEvent5_WdError(v8);
      v7 = -1073740008;
    }
    else
    {
      v9 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
        v9 = -1LL;
      v10 = operator new[](v9, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 35) = v10;
      if ( v10 )
      {
        memset(v10, 0, 24LL * *((unsigned int *)this + 20));
      }
      else
      {
        v14 = WdLogNewEntry5_WdLowResource(0LL, v11, v12, v13);
        *(_QWORD *)(v14 + 24) = this;
        WdLogEvent5_WdLowResource(v14);
        v7 = -1073741801;
      }
    }
  }
  else if ( v6 )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v6 = (void **)*((_QWORD *)this + 35);
      if ( v6[3 * i + 1] )
      {
        operator delete[](v6[3 * i + 1]);
        *(_QWORD *)(*((_QWORD *)this + 35) + 24LL * i + 8) = 0LL;
        v6 = (void **)*((_QWORD *)this + 35);
      }
    }
    operator delete[](v6);
    *((_QWORD *)this + 35) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return v7;
}
