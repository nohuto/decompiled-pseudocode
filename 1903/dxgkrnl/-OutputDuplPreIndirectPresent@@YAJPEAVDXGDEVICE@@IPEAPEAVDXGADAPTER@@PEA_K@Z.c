/*
 * XREFs of ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C027400C
 * Callers:
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C024844C (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     OutputDuplPresent @ 0x1C02761F0 (OutputDuplPresent.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001D54 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall OutputDuplPreIndirectPresent(
        struct DXGDEVICE *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v7; // rdi
  int v10; // eax
  __int64 v11; // rdx
  struct DXGDEVICE *VidPnSourceOwner; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v17[64]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v18[88]; // [rsp+78h] [rbp-90h] BYREF

  v4 = 0;
  v5 = a2;
  *a3 = 0LL;
  v7 = *((_QWORD *)a1 + 216);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v16, (__int64)a1, 2, (__int64)a4, 0);
  v10 = COREDEVICEACCESS::AcquireShared((__int64)v16, 0xFFFFFFFF, 0LL);
  if ( v10 < 0 )
    goto LABEL_6;
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(v7 + 2552), v5);
  if ( !VidPnSourceOwner || *((_QWORD *)VidPnSourceOwner + 5) != *((_QWORD *)a1 + 5) )
  {
    v14 = WdLogNewEntry5_WdWarning(VidPnSourceOwner, v11, v13);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = v5;
    WdLogEvent5_WdWarning(v14);
    v10 = -1071775744;
LABEL_6:
    v4 = v10;
    goto LABEL_7;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
  *a4 = -1LL;
  *a3 = (struct DXGADAPTER *)v7;
LABEL_7:
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  return v4;
}
