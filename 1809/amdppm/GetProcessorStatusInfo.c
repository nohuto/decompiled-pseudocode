/*
 * XREFs of GetProcessorStatusInfo @ 0x1C00053D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall GetProcessorStatusInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // r9
  _DWORD *v15; // r10
  __int64 v16; // r11
  __int64 v17; // rcx
  unsigned int v18; // edx

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v8 = 0;
  v9 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     v7,
                     off_1C0011018)
                 + 216);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    v11 = *(unsigned int *)(v10 + 56);
    v12 = 12 * v11 + 40;
    if ( a4 )
      *a4 = v12;
    if ( a2 >= v12 )
    {
      memset(a3, 0, v12);
      v13 = 0;
      a3[1] = *(_DWORD *)(*(_QWORD *)(v10 + 48) + 16LL);
      a3[9] = v11;
      if ( (_DWORD)v11 )
      {
        v14 = 0LL;
        v15 = a3 + 12;
        v16 = v11;
        do
        {
          v17 = *(_QWORD *)(v10 + 48);
          v14 += 32LL;
          v18 = v13;
          *(v15 - 2) = *(_DWORD *)(v14 + v17 - 16);
          *(v15 - 1) = *(unsigned __int8 *)(v14 + v17 - 7);
          *v15 = *(unsigned __int8 *)(v14 + v17 - 8);
          v15 += 3;
          v13 = *(unsigned __int16 *)(v14 + v17 - 6);
          if ( v18 > v13 )
            v13 = v18;
          --v16;
        }
        while ( v16 );
      }
      a3[7] = v13;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xDu,
      (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids);
    return (unsigned int)-1073741163;
  }
  return v8;
}
