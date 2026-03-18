/*
 * XREFs of ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294EC0
 * Callers:
 *     ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0295C00 (-CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001F64 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C0049B60 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049CFC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0295B7C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02963CC (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::AddDisplayAdapter(DISPLAYSTATECHECKER *this, struct DXGADAPTER *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // esi
  unsigned int v8; // r14d
  VIDPNSOURCEINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[64]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v18[72]; // [rsp+68h] [rbp-80h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a2, 0LL);
  v5 = 0;
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v16, 0xFFFFFFFFLL, v4) >= 0 )
  {
    if ( (unsigned __int8)*((_DWORD *)this + 453) == 8 )
    {
      v6 = *((_QWORD *)a2 + 319);
      v7 = 0;
      v8 = *(_DWORD *)(v6 + 80);
      if ( v8 )
      {
        do
        {
          if ( ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v6, v7) )
          {
            v9 = CDynamicArray<VIDPNSOURCEINFO,8>::Ensure((__int64)this, *((_DWORD *)this + 452) + 1);
            if ( !v9 )
            {
              v13 = WdLogNewEntry5_WdError(v11, v10, v12);
              *(_QWORD *)(v13 + 24) = 185LL;
              WdLogEvent5_WdError(v13);
              v5 = -1073741801;
              break;
            }
            VIDPNSOURCEINFO::Initialize((VIDPNSOURCEINFO *)((char *)v9 + 224 * *((unsigned int *)this + 452)), a2, v7);
            ++*((_DWORD *)this + 452);
          }
          ++v7;
        }
        while ( v7 < v8 );
      }
    }
    else
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, *((unsigned int *)this + 1470));
      if ( DisplayAdapterDiagData )
      {
        *(_QWORD *)DisplayAdapterDiagData = a2;
        DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(DisplayAdapterDiagData, a2);
        ++*((_DWORD *)this + 1470);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  return v5;
}
