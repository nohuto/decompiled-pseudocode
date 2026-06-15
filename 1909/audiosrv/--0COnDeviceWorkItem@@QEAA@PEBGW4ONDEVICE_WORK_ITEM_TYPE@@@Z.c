/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180028EC0
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180029070 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800C0034 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800C0378 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_s @ 0x180048EA4 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180049334 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, _WORD *a2, int a3)
{
  int v3; // r13d
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  char *v11; // rcx
  bool v12; // cc
  __int64 v13; // r14
  __int64 v14; // rax
  ATL::CAtlException *v16; // [rsp+28h] [rbp-30h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  v6 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  try
  {
    v5[1] = v6 + 24;
    if ( !a2 )
      goto LABEL_19;
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( (_DWORD)v7 )
    {
      v8 = v5[1];
      v9 = *(unsigned int *)(v8 - 16);
      v10 = ((__int64)a2 - v8) >> 1;
      if ( ((1 - *(_DWORD *)(v8 - 8)) | (*(_DWORD *)(v8 - 12) - (int)v7)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v5 + 1, v7);
      v11 = (char *)v5[1];
      v12 = v10 <= v9;
      v13 = 2LL * (int)v7;
      if ( v12 )
      {
        memmove_s(v11, 2LL * (int)v7, &v11[2 * v10], 2LL * (int)v7);
      }
      else if ( v13 )
      {
        if ( v11 )
        {
          memcpy_0(v11, a2, 2LL * (int)v7);
        }
        else
        {
          *(_DWORD *)_o__errno(0LL) = 22;
          invalid_parameter_noinfo();
        }
      }
      if ( (int)v7 < 0 || (v14 = v5[1], (int)v7 > *(_DWORD *)(v14 - 12)) )
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)(v14 - 16) = v7;
      *(_WORD *)(v13 + v5[1]) = 0;
    }
    else
    {
LABEL_19:
      ATL::CSimpleStringT<unsigned short,0>::Empty(v5 + 1);
    }
  }
  catch ( ATL::CAtlException *v16 )
  {
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
