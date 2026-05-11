/*
 * XREFs of USBHwSetTransportResources @ 0x1C0029680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall USBHwSetTransportResources(int a1, _QWORD *a2, int *a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v9; // rdi
  PKSDEVICE Device; // rax
  _DWORD *Context; // r14
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  unsigned __int16 v14; // r9
  int v15; // eax

  v6 = 0;
  v7 = 0;
  v9 = *(_QWORD *)(a2[2] + 144LL);
  Device = KsGetDevice(a2);
  if ( !Device )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      9u,
      0x13u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v6 = -1073741437;
    goto LABEL_16;
  }
  Context = Device->Context;
  if ( a1 == 4 )
  {
    v12 = 20;
  }
  else
  {
    if ( a1 != 8 )
    {
      v6 = -1073741811;
      goto LABEL_16;
    }
    v7 = 1;
    v12 = 21;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
    9u,
    v12,
    (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
  if ( Context[213] != 2 )
  {
    v14 = 22;
LABEL_10:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      v14,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v6 = -1073741811;
    goto LABEL_16;
  }
  if ( a4 != 4 )
  {
    v14 = 23;
    goto LABEL_10;
  }
  v15 = *a3;
  if ( v7 )
    *(_DWORD *)(v9 + 228) = v15;
  else
    *(_DWORD *)(v9 + 224) = v15;
LABEL_16:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      9u,
      0x18u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v6);
  return v6;
}
