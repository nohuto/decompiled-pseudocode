/*
 * XREFs of ?ivChildLoop@CBaseInput@@IEAAJXZ @ 0x1C0156A3C
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     isChildPartition @ 0x1C010FE74 (isChildPartition.c)
 */

__int64 __fastcall CBaseInput::ivChildLoop(CBaseInput *this)
{
  int v2; // ebx
  void *v3; // rax
  unsigned __int16 v4; // r9
  struct _ETHREAD *CurrentThread; // r9
  __int64 v7; // [rsp+28h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xAu,
      (__int64)&WPP_05b4ed18ff5d35232c2efc1347507368_Traceguids);
  v2 = 0;
  if ( (unsigned int)isChildPartition() )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)this + 131),
      4u,
      0x11u,
      0xBu,
      (__int64)&WPP_05b4ed18ff5d35232c2efc1347507368_Traceguids);
    v3 = Win32AllocPoolZInit(0x10uLL, 0x63725649u);
    *((_QWORD *)this + 135) = v3;
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( gpfnIVRecv )
        v2 = gpfnIVRecv(
               v3,
               0x10u,
               (struct _ETHREAD *)gpIVThread,
               CurrentThread,
               this,
               (int (*)(void *, void *))CBaseInput::_ivCallback);
      else
        v2 = -1073741637;
      if ( v2 >= 0 )
        goto LABEL_12;
      Win32FreePool(*((_QWORD *)this + 135));
      *((_QWORD *)this + 135) = 0LL;
      v4 = 13;
    }
    else
    {
      v2 = -1073741801;
      v4 = 12;
    }
    LODWORD(v7) = v2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 131),
      2u,
      0x11u,
      v4,
      (__int64)&WPP_05b4ed18ff5d35232c2efc1347507368_Traceguids,
      v7);
  }
LABEL_12:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xEu,
      (__int64)&WPP_05b4ed18ff5d35232c2efc1347507368_Traceguids);
  return (unsigned int)v2;
}
