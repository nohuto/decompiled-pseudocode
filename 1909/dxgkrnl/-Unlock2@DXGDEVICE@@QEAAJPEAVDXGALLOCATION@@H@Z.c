/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024F260
 * Callers:
 *     DxgkUnlock2 @ 0x1C0108FF0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C0109B90 (DxgkLock2.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015280 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C024F3D4 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rax
  _BYTE v16[64]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((DXGDEVICE **)a2 + 1) == this )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v7 & 4) != 0 )
      {
        if ( (_DWORD)a3 )
        {
          v8 = *((_QWORD *)this + 216);
          v9 = (v7 >> 6) & 0xF;
          if ( v8 )
          {
            COREACCESS::COREACCESS((COREACCESS *)v16, *((struct DXGADAPTER *const *)this + 216));
            COREACCESS::AcquireShared((__int64)v16, 0xFFFFFFFF, 0LL);
            if ( *((_DWORD *)this + 116) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v8 + 2552), this, v9)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v9) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer(this, a2);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v16);
          }
        }
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                    + 816LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
            *((_QWORD *)a2 + 3));
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v15[3] = this;
      v15[4] = a2;
      v15[5] = v14;
      WdLogEvent5_WdWarning(v15);
    }
    return (unsigned int)v14;
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v5[4] = this;
    v5[3] = a2;
    v5[5] = *((_QWORD *)a2 + 1);
    v5[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
